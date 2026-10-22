/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7cb5f00 (ELF vaddr 0x7bb5f00)
 * Label: caller-of-callee
 * Body:  [[07cb5f00, 07cbc510] [07cbc520, 07cbd220] [07cbd230, 07cc0154]]
 * Ghidra: FUN_07cb5f00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07cb5f00(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined5 uStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 auStack_298 [4];
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined1 uStack_1f4;
  undefined1 uStack_1cd;
  undefined1 uStack_1cc;
  undefined1 uStack_1cb;
  undefined1 uStack_1ca;
  undefined1 uStack_1c9;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  char cStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined *puStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x07cb2d80();
  func_0x0d91f630(param_1);
  if ((DAT_0f5bac40 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac40), iVar10 != 0)) {
    func_0x07d24730();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
    FUN_0410844d(&DAT_0f5bac40);
  }
  lStack_188 = param_1 + 0x18;
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5babc0 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cb5f90;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cb5f90:
    puVar12 = &DAT_0f5babc0;
    if (iRam000000000f5bac20 != -0x2b3da790) goto LAB_07cb5fe8;
LAB_07cb5fbb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cb5fe8;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar17 + 9);
    if (bVar27) {
      puVar12 = *(undefined **)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cb5fbb;
LAB_07cb5fe8:
    puVar12 = &UNK_0149a736;
    uVar13 = 0x16;
  }
  func_0x07d24b70(&uStack_318,param_1,puVar12,uVar13);
  uVar20 = uStack_2e8;
  uStack_2e8._0_5_ = (uint5)(uint)uStack_2e8;
  uVar7 = uStack_2e8;
  puStack_2e0 = (undefined *)((ulong)puStack_2e0 & 0xffffffffffffff00);
  uStack_2e8._0_1_ = (char)uVar20;
  bVar27 = (char)uStack_2e8 == '\0';
  uStack_2e8 = (undefined1 *)uVar7;
  lStack_190 = param_1;
  if (bVar27) {
    func_0x07d283f0(&plStack_2a8,&UNK_012dce97,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar5 = (undefined1 *)((long)&uStack_280 + 1);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    uVar6 = (int)uStack_2f0;
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') &&
       (uStack_2f0._0_4_ = uVar6, iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28ac0;
    puStack_390 = &UNK_07d28ad0;
    uStack_388 = (long *)((ulong)uStack_388._4_4_ << 0x20);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb62ca:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb62ca;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    lVar17 = (long)&uStack_2f0 + 4;
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb6360;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb6360:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_011bda3e,0xb);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28ce0;
    puStack_390 = &UNK_07d28cf0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb668a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb668a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb6710;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb6710:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_0125cee5,3);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28d40;
    puStack_390 = &UNK_07d28d50;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb6a3a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb6a3a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb6ac0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb6ac0:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_01396b28,4);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28da0;
    puStack_390 = &UNK_07d28db0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb6dea:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb6dea;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb6e70;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb6e70:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_0137b4c3,2);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28e00;
    puStack_390 = &UNK_07d28e10;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb719a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb719a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb7220;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb7220:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_011f26da,3);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28e60;
    puStack_390 = &UNK_07d28e70;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb754a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb754a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb75d0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb75d0:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_013458a0,3);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28ec0;
    puStack_390 = &UNK_07d28ed0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb78fa:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb78fa;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb7980;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb7980:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d283f0(&plStack_2a8,&UNK_0149a74d,4);
    puVar22 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    if (((ulong)uStack_280 & 1) != 0) {
      puVar22 = uStack_278;
      puVar5 = uStack_270;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar26 + 3] ^
                   ((int)(char)puVar5[uVar26 + 2] ^
                   ((int)(char)puVar5[uVar26 + 1] ^ ((int)(char)puVar5[uVar26] ^ uVar21) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar25 + uVar26] ^ uVar21) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0 = (undefined *)CONCAT44(uVar21,2);
    if ((DAT_0f5bac60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bac60), iVar10 != 0)) {
      func_0x07d24840();
      FUN_0410844d(&DAT_0f5bac60);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d28f20;
    puStack_390 = &UNK_07d28f30;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    param_1 = lStack_190;
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d28790(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(uStack_3c8[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb7caa:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(uStack_3c8[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb7caa;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 3) = *(uint *)(uStack_3c8 + 3) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d28b20(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bac40 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bac40), iVar11 != 0)) {
      func_0x07d24730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5babc0,0xf53dab8);
      FUN_0410844d(&DAT_0f5bac40);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5babc0 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb7d30;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5babc0 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb7d30:
      puVar12 = &DAT_0f5babc0;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce4b2),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
  }
  if ((DAT_0f5bacf8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bacf8), iVar10 != 0)) {
    func_0x07d29040();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bac78,0xf53dab8);
    FUN_0410844d(&DAT_0f5bacf8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bac78 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cb7e30;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bac78 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cb7e30:
    puVar12 = &DAT_0f5bac78;
    if (iRam000000000f5bacd8 != -0x2b3da790) goto LAB_07cb7e9e;
LAB_07cb7e5b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cb7e9e;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d29460(&uStack_318,param_1,lVar23,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cb7e5b;
LAB_07cb7e9e:
    func_0x07d29460(&uStack_318,param_1,&UNK_01417caa,0x11);
  }
  if ((char)uStack_2e8 == '\0') {
    func_0x07d29fb0(&plStack_2a8,&uStack_318,&UNK_0138e8dd,5,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef46ef8;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_04906f70;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_04906c50;
    puStack_398 = &UNK_07d2a570;
    puStack_390 = &UNK_07d2a6d0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d2a270(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d29a50(&plStack_2a8,uStack_318 + 3);
    if (uStack_290._4_4_ == 2) {
      piVar15 = *(int **)(_auStack_298[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_290) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      plVar14 = *(long **)(piVar15 + 0xc);
      while (plVar14 != plStack_2a0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar14 = *(long **)(piVar15 + 0xc);
      }
LAB_07cb80ca:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_290._4_4_ == 1) {
        piVar15 = *(int **)(_auStack_298[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_290) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb80ca;
      }
      if (uStack_290._4_4_ == 0) {
        *(uint *)(_auStack_298 + 3) = *(uint *)(_auStack_298 + 3) | 0x40000;
      }
    }
    func_0x07d29fb0(&plStack_2a8,&uStack_318,&UNK_0147bf3d,9,0x10);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f56c8;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d28a00;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d24670;
    puStack_398 = &UNK_07d2a8a0;
    puStack_390 = &UNK_07d2aa00;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d2a270(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
  }
  func_0x0d91a8f0(param_1);
  if ((DAT_0f5badb0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5badb0), iVar10 != 0)) {
    func_0x07d2af30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
    FUN_0410844d(&DAT_0f5badb0);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bad30 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cb8270;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cb8270:
    puVar12 = &DAT_0f5bad30;
    if (iRam000000000f5bad90 != -0x2b3da790) goto LAB_07cb82c8;
LAB_07cb829b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cb82c8;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar17 + 9);
    if (bVar27) {
      puVar12 = *(undefined **)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cb829b;
LAB_07cb82c8:
    puVar12 = &UNK_0125cee9;
    uVar13 = 0x17;
  }
  func_0x07d2b370(&uStack_318,param_1,puVar12,uVar13);
  uVar20 = uStack_2e8;
  uStack_2e8._0_5_ = (uint5)(uint)uStack_2e8;
  uVar7 = uStack_2e8;
  puStack_2e0 = (undefined *)((ulong)puStack_2e0 & 0xffffffffffffff00);
  uStack_2e8._0_1_ = (char)uVar20;
  bVar27 = (char)uStack_2e8 == '\0';
  uStack_2e8 = (undefined1 *)uVar7;
  if (bVar27) {
    func_0x07d2ebf0(&plStack_2a8,&UNK_012dce97,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar5 = (undefined1 *)((long)&uStack_280 + 1);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    uVar6 = (int)uStack_2f0;
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5badd0 == '\0') &&
       (uStack_2f0._0_4_ = uVar6, iVar10 = func_0x04108328(&DAT_0f5badd0), iVar10 != 0)) {
      func_0x07d2b040();
      FUN_0410844d(&DAT_0f5badd0);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d2f2c0;
    puStack_390 = &UNK_07d2f2d0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d2ef90(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb85aa:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb85aa;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d2f320(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5badb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5badb0), iVar11 != 0)) {
      func_0x07d2af30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
      FUN_0410844d(&DAT_0f5badb0);
    }
    lVar17 = (long)&uStack_2f0 + 4;
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bad30 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb8640;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb8640:
      puVar12 = &DAT_0f5bad30;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01277a35),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d2ebf0(&plStack_2a8,&UNK_011bda3e,0xb);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5badd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5badd0), iVar10 != 0)) {
      func_0x07d2b040();
      FUN_0410844d(&DAT_0f5badd0);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d2f4e0;
    puStack_390 = &UNK_07d2f4f0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d2ef90(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb896a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb896a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d2f320(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5badb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5badb0), iVar11 != 0)) {
      func_0x07d2af30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
      FUN_0410844d(&DAT_0f5badb0);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bad30 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb89f0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb89f0:
      puVar12 = &DAT_0f5bad30;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01277a35),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d2ebf0(&plStack_2a8,&UNK_012a8d4e,3);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5badd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5badd0), iVar10 != 0)) {
      func_0x07d2b040();
      FUN_0410844d(&DAT_0f5badd0);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d2f540;
    puStack_390 = &UNK_07d2f550;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d2ef90(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb8d1a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb8d1a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d2f320(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5badb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5badb0), iVar11 != 0)) {
      func_0x07d2af30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
      FUN_0410844d(&DAT_0f5badb0);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bad30 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb8da0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb8da0:
      puVar12 = &DAT_0f5bad30;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01277a35),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d2ebf0(&plStack_2a8,&UNK_01464ad0,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5badd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5badd0), iVar10 != 0)) {
      func_0x07d2b040();
      FUN_0410844d(&DAT_0f5badd0);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d2f5a0;
    puStack_390 = &UNK_07d2f5b0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d2ef90(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb90ca:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb90ca;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d2f320(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5badb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5badb0), iVar11 != 0)) {
      func_0x07d2af30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
      FUN_0410844d(&DAT_0f5badb0);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bad30 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb9150;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb9150:
      puVar12 = &DAT_0f5bad30;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01277a35),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d2ebf0(&plStack_2a8,&UNK_011d8ccb,8);
    puVar22 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    if (((ulong)uStack_280 & 1) != 0) {
      puVar22 = uStack_278;
      puVar5 = uStack_270;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar26 + 3] ^
                   ((int)(char)puVar5[uVar26 + 2] ^
                   ((int)(char)puVar5[uVar26 + 1] ^ ((int)(char)puVar5[uVar26] ^ uVar21) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar25 + uVar26] ^ uVar21) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0 = (undefined *)CONCAT44(uVar21,2);
    if ((DAT_0f5badd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5badd0), iVar10 != 0)) {
      func_0x07d2b040();
      FUN_0410844d(&DAT_0f5badd0);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d2f600;
    puStack_390 = &UNK_07d2f610;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    param_1 = lStack_190;
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d2ef90(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(uStack_3c8[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb947a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(uStack_3c8[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb947a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 3) = *(uint *)(uStack_3c8 + 3) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d2f320(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5badb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5badb0), iVar11 != 0)) {
      func_0x07d2af30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bad30,0xf53dab8);
      FUN_0410844d(&DAT_0f5badb0);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bad30 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb9500;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5bad30 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb9500:
      puVar12 = &DAT_0f5bad30;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01277a35),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
  }
  if ((DAT_0f5bae68 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bae68), iVar10 != 0)) {
    func_0x07d2f720();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bade8,0xf53dab8);
    FUN_0410844d(&DAT_0f5bae68);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bade8 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cb9600;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bade8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cb9600:
    puVar12 = &DAT_0f5bade8;
    if (iRam000000000f5bae48 != -0x2b3da790) goto LAB_07cb966e;
LAB_07cb962b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cb966e;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d2fc60(&uStack_318,param_1,lVar23,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cb962b;
LAB_07cb966e:
    func_0x07d2fc60(&uStack_318,param_1,&UNK_012a8d52,0x12);
  }
  if ((char)uStack_2e8 == '\0') {
    func_0x07d30800(&plStack_2a8,&uStack_318,&UNK_0138e8dd,5,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f58e0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d31460;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_07d31180;
    puStack_398 = &UNK_07d31470;
    puStack_390 = &UNK_07d315d0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d30ac0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d30250(&plStack_2a8,uStack_318 + 3);
    if (uStack_290._4_4_ == 2) {
      piVar15 = *(int **)(_auStack_298[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_290) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      plVar14 = *(long **)(piVar15 + 0xc);
      while (plVar14 != plStack_2a0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar14 = *(long **)(piVar15 + 0xc);
      }
LAB_07cb989a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_290._4_4_ == 1) {
        piVar15 = *(int **)(_auStack_298[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_290) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb989a;
      }
      if (uStack_290._4_4_ == 0) {
        *(uint *)(_auStack_298 + 3) = *(uint *)(_auStack_298 + 3) | 0x40000;
      }
    }
    func_0x07d30800(&plStack_2a8,&uStack_318,&UNK_0147bf3d,9,0x10);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f5818;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d2f200;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d2ae70;
    puStack_398 = &UNK_07d31a30;
    puStack_390 = &UNK_07d31b90;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d30ac0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
  }
  if ((DAT_0f5bafd8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bafd8), iVar10 != 0)) {
    func_0x07d320c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
    FUN_0410844d(&DAT_0f5bafd8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5baf58 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cb9a30;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cb9a30:
    puVar12 = &DAT_0f5baf58;
    if (iRam000000000f5bafb8 != -0x2b3da790) goto LAB_07cb9a88;
LAB_07cb9a5b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cb9a88;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar17 + 9);
    if (bVar27) {
      puVar12 = *(undefined **)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cb9a5b;
LAB_07cb9a88:
    puVar12 = &UNK_0130f939;
    uVar13 = 0x17;
  }
  func_0x07d32500(&uStack_318,param_1,puVar12,uVar13);
  uVar20 = uStack_2e8;
  uStack_2e8._0_5_ = (uint5)(uint)uStack_2e8;
  uVar7 = uStack_2e8;
  puStack_2e0 = (undefined *)((ulong)puStack_2e0 & 0xffffffffffffff00);
  uStack_2e8._0_1_ = (char)uVar20;
  bVar27 = (char)uStack_2e8 == '\0';
  uStack_2e8 = (undefined1 *)uVar7;
  if (bVar27) {
    func_0x07d35d80(&plStack_2a8,&UNK_012dce97,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar5 = (undefined1 *)((long)&uStack_280 + 1);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    uVar6 = (int)uStack_2f0;
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') &&
       (uStack_2f0._0_4_ = uVar6, iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d36450;
    puStack_390 = &UNK_07d36460;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_07cb9d6a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cb9d6a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    lVar17 = (long)&uStack_2f0 + 4;
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cb9e00;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cb9e00:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_011bda3e,0xb);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d36670;
    puStack_390 = &UNK_07d36680;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cba12a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cba12a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cba1b0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cba1b0:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_012a8d4e,3);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d366d0;
    puStack_390 = &UNK_07d366e0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cba4da:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cba4da;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cba560;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cba560:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_01464ad0,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d36730;
    puStack_390 = &UNK_07d36740;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cba88a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cba88a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cba910;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cba910:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_011d8ccb,8);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d36790;
    puStack_390 = &UNK_07d367a0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cbac3a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cbac3a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cbacc0;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbacc0:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_01464ad9,7);
    puVar24 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    puVar22 = puVar5;
    if (((ulong)uStack_280 & 1) != 0) {
      puVar24 = uStack_278;
      puVar22 = uStack_270;
    }
    if (puVar24 == (undefined1 *)0x0) {
      uStack_2f0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar24 & 3);
      if (puVar24 < (undefined1 *)0x4) {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uStack_2f0._4_4_ = 0x811c9dc5;
        uVar26 = 0;
        do {
          uStack_2f0._4_4_ =
               ((int)(char)puVar22[uVar26 + 3] ^
               ((int)(char)puVar22[uVar26 + 2] ^
               ((int)(char)puVar22[uVar26 + 1] ^
               ((int)(char)puVar22[uVar26] ^ uStack_2f0._4_4_) * 0x1000193) * 0x1000193) * 0x1000193
               ) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar24 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uStack_2f0._4_4_ = ((int)(char)puVar22[uVar25 + uVar26] ^ uStack_2f0._4_4_) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0._0_4_ = 2;
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d367f0;
    puStack_390 = &UNK_07d36800;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cbafea:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cbafea;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)uStack_3c8 + 0x18) = *(uint *)((long)uStack_3c8 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cbb070;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbb070:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
    func_0x07d35d80(&plStack_2a8,&UNK_013e4383,7);
    puVar22 = (undefined1 *)((ulong)uStack_280 >> 1 & 0x7f);
    if (((ulong)uStack_280 & 1) != 0) {
      puVar22 = uStack_278;
      puVar5 = uStack_270;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < (undefined1 *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar26 + 3] ^
                   ((int)(char)puVar5[uVar26 + 2] ^
                   ((int)(char)puVar5[uVar26 + 1] ^ ((int)(char)puVar5[uVar26] ^ uVar21) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uVar21 = ((int)(char)puVar5[uVar25 + uVar26] ^ uVar21) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0 = (undefined *)CONCAT44(uVar21,2);
    if ((DAT_0f5baff8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5baff8), iVar10 != 0)) {
      func_0x07d321d0();
      FUN_0410844d(&DAT_0f5baff8);
    }
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2f0._4_4_);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)CONCAT44(uStack_3c8._4_4_,3);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d36850;
    puStack_390 = &UNK_07d36860;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_3d8);
    param_1 = lStack_190;
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar23 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    func_0x07d36120(&plStack_3d8,&uStack_1c8,&plStack_2a8);
    if (uStack_3c0._4_4_ == 2) {
      piVar15 = *(int **)(uStack_3c8[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_3c0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar23 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar23 != uStack_3d0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar23 = *(long *)(piVar15 + 0xc);
      }
LAB_07cbb39a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar15 = *(int **)(uStack_3c8[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_3c0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cbb39a;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 3) = *(uint *)(uStack_3c8 + 3) | 0x90000;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      func_0x07d364b0(&plStack_3d8,&uStack_318);
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bafd8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bafd8), iVar11 != 0)) {
      func_0x07d320c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5baf58,0xf53dab8);
      FUN_0410844d(&DAT_0f5bafd8);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5baf58 + 4)) * 8);
    do {
      lVar23 = *plVar18;
      if (lVar23 == -1) goto LAB_07cbb420;
      plVar18 = (long *)(plVar14[6] + lVar23 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5baf58 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbb420:
      puVar12 = &DAT_0f5baf58;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01362043),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,lVar17,lVar17,&plStack_3d8);
    func_0x048b0bc0(&plStack_2a8);
  }
  if ((DAT_0f5bb090 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bb090), iVar10 != 0)) {
    func_0x07d36970();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb010,0xf53dab8);
    FUN_0410844d(&DAT_0f5bb090);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bb010 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cbb520;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb010 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cbb520:
    puVar12 = &DAT_0f5bb010;
    if (iRam000000000f5bb070 != -0x2b3da790) goto LAB_07cbb58e;
LAB_07cbb54b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cbb58e;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d36e90(&uStack_318,param_1,lVar23,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cbb54b;
LAB_07cbb58e:
    func_0x07d36e90(&uStack_318,param_1,&UNK_0144cb2b,0x12);
  }
  if ((char)uStack_2e8 == '\0') {
    func_0x07d37a30(&plStack_2a8,&uStack_318,&UNK_0138e8dd,5,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05daeda0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05daea90;
    puStack_398 = &UNK_07d37ff0;
    puStack_390 = &UNK_07d38150;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d37cf0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d37480(&plStack_2a8,uStack_318 + 3);
    if (uStack_290._4_4_ == 2) {
      piVar15 = *(int **)(_auStack_298[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_290) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      plVar14 = *(long **)(piVar15 + 0xc);
      while (plVar14 != plStack_2a0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar14 = *(long **)(piVar15 + 0xc);
      }
LAB_07cbb7ba:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_290._4_4_ == 1) {
        piVar15 = *(int **)(_auStack_298[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_290) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cbb7ba;
      }
      if (uStack_290._4_4_ == 0) {
        *(uint *)(_auStack_298 + 3) = *(uint *)(_auStack_298 + 3) | 0x40000;
      }
    }
    func_0x07d37a30(&plStack_2a8,&uStack_318,&UNK_0147bf3d,9,0x10);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f59e0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d36390;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d32000;
    puStack_398 = &UNK_07d38320;
    puStack_390 = &UNK_07d38480;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d37cf0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d37a30(&plStack_2a8,&uStack_318,&UNK_014b3020,0xd,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0122d0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05de9430;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05de9110;
    puStack_398 = &UNK_07d388f0;
    puStack_390 = &UNK_07d38a60;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d37cf0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d37a30(&plStack_2a8,&uStack_318,&UNK_0149a752,0xd,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0122d0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05de9430;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05de9110;
    puStack_398 = &UNK_07d38c40;
    puStack_390 = &UNK_07d38db0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d37cf0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
  }
  if ((DAT_0f5bb148 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bb148), iVar10 != 0)) {
    func_0x07d39050();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb0c8,0xf53dab8);
    FUN_0410844d(&DAT_0f5bb148);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bb0c8 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cbbbb0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb0c8 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cbbbb0:
    puVar12 = &DAT_0f5bb0c8;
    if (iRam000000000f5bb128 != -0x2b3da790) goto LAB_07cbbc08;
LAB_07cbbbdb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cbbc08;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar17 + 9);
    if (bVar27) {
      puVar12 = *(undefined **)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cbbbdb;
LAB_07cbbc08:
    puVar12 = &UNK_01464ae1;
    uVar13 = 0x12;
  }
  func_0x07d39490(&uStack_318,param_1,puVar12,uVar13);
  uVar20 = uStack_2e8;
  uStack_2e8._0_5_ = (uint5)(uint)uStack_2e8;
  puVar5 = uStack_2e8;
  puStack_2e0 = (undefined *)((ulong)puStack_2e0 & 0xffffffffffffff00);
  uStack_2e8._0_1_ = (char)uVar20;
  bVar27 = (char)uStack_2e8 == '\0';
  uStack_2e8 = puVar5;
  if (bVar27) {
    plVar14 = (long *)func_0x0eee3290();
    lVar17 = *plVar14;
    uStack_150 = (ulong)*(uint *)(lVar17 + 0x1b4);
    uVar21 = *(uint *)(lVar17 + 0x1a4);
    uVar4 = *(uint *)(lVar17 + 0x1b8);
    uStack_158 = (ulong)*(byte *)(lVar17 + 0x130);
    uStack_180 = (ulong)*(uint *)(lVar17 + 0x1bc);
    bVar1 = *(byte *)(lVar17 + 0x18c);
    uStack_178 = (ulong)*(uint *)(lVar17 + 0x184);
    uStack_1c9 = *(undefined1 *)(lVar17 + 0x1b0);
    uStack_1ca = *(undefined1 *)(lVar17 + 0x150);
    uStack_1cb = *(undefined1 *)(lVar17 + 0x1c8);
    uVar2 = *(undefined1 *)(lVar17 + 0x1cc);
    uVar3 = *(undefined1 *)(lVar17 + 0x1d0);
    iVar10 = *(int *)(lVar17 + 0x114);
    uStack_160 = (ulong)*(byte *)(lVar17 + 400);
    uStack_248 = (long *)0x0;
    uStack_240 = 0;
    uStack_258 = (long *)0x0;
    lStack_250 = 0;
    uStack_268 = (undefined *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_278 = (undefined1 *)0x0;
    uStack_270 = (undefined1 *)0x0;
    puStack_288 = (undefined8 *)0x0;
    uStack_280 = (undefined *)0x0;
    _auStack_298 = (long *)0x0;
    uStack_290 = (long *)0x0;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)0x0;
    uStack_238 = CONCAT44(uStack_238._4_4_,0x3f600000);
    FUN_048afb10(&uStack_268,8);
    uStack_210 = 0;
    lStack_208 = 0;
    lStack_220 = 0;
    uStack_218 = 0;
    lStack_230 = 0;
    lStack_228 = 0;
    uStack_200 = CONCAT22(uStack_200._2_2_,0xff00);
    uStack_1fc = uStack_1fc & 0xffffff00;
    uStack_1f8 = uStack_1f8 & 0xffffff00;
    uStack_1f4 = 0;
    uStack_1cd = uVar2;
    uStack_1cc = uVar3;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    uVar13 = uStack_178;
    uVar9 = (uint)uStack_180;
    uVar26 = uStack_160 << 0x28;
    *plVar14 = (long)&UNK_0f0f5b30;
    uStack_170 = (ulong)uVar4;
    uStack_168 = (ulong)uVar21;
    if (plStack_2a8 != (long *)0x0) {
      lVar17 = *plStack_2a8;
      plStack_2a8 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = plStack_2a8;
    }
    plStack_2a8 = plVar14;
    if (((ulong)uStack_280 & 1) != 0) {
      func_0x0412a280(uStack_270,(ulong)uStack_280 & 0xfffffffffffffffe);
    }
    param_1 = lStack_190;
    uStack_3d0 = plStack_2a0;
    plStack_3d8 = plStack_2a8;
    uStack_280 = (undefined *)
                 ((ulong)(((uint)uStack_150 & 0xff) << 8) |
                  (ulong)((uVar21 & 0xff) << 0x10) |
                  (ulong)(uint)((int)uStack_170 << 0x18) |
                  uStack_158 << 0x20 |
                  (uStack_180 & 0xff) << 0x28 | (ulong)bVar1 << 0x30 | uVar13 << 0x38 | 0x2a);
    uStack_278 = (undefined1 *)
                 CONCAT17(uStack_1cc,
                          CONCAT16((char)uStack_168,
                                   CONCAT15(uStack_1cd,
                                            CONCAT14((char)uStack_170,
                                                     CONCAT13((char)uStack_178,
                                                              CONCAT12(uStack_1cb,
                                                                       CONCAT11(uStack_1ca,
                                                                                uStack_1c9)))))));
    if (((ulong)_auStack_298 & 1) == 0) {
      _auStack_298 = (long *)CONCAT71(stack0xfffffffffffffd69,0x2a);
      puVar19 = (undefined8 *)(auStack_298 + 1);
    }
    else {
      uStack_290 = (long *)0x15;
      puVar19 = puStack_288;
    }
    uStack_270 = (undefined1 *)
                 (CONCAT14((char)uVar4,
                           iVar10 << 0x18 | (uVar4 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 |
                           uVar21 & 0xff) | uVar26);
    *puVar19 = _DAT_012a8d65;
    puVar19[1] = _UNK_012a8d6d;
    *(undefined8 *)((long)puVar19 + 0xd) = 0x646e456e6f697469;
    *(undefined1 *)((long)puVar19 + 0x15) = 0;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)0x0;
    puStack_3b8 = puStack_288;
    uStack_3c8 = _auStack_298;
    uStack_3c0 = (long)uStack_290;
    _auStack_298 = (long *)0x0;
    uStack_290 = (long *)0x0;
    puStack_288 = (undefined8 *)0x0;
    puStack_3a0 = uStack_270;
    uStack_3b0 = uStack_280;
    puStack_3a8 = uStack_278;
    uStack_280 = (undefined *)0x0;
    uStack_278 = (undefined1 *)0x0;
    uStack_270 = (undefined1 *)0x0;
    puStack_398 = uStack_268;
    puStack_390 = uStack_260;
    uStack_388 = uStack_258;
    uStack_268 = (undefined *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_258 = (long *)0x0;
    lStack_380 = lStack_250;
    uStack_378 = uStack_248;
    uStack_370 = uStack_240;
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    uStack_240 = 0;
    uStack_368 = CONCAT44(uStack_368._4_4_,(undefined4)uStack_238);
    lStack_360 = lStack_230;
    lStack_358 = lStack_228;
    lStack_350 = lStack_220;
    lStack_230 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_338 = lStack_208;
    uStack_330 = uStack_200;
    uStack_348 = uStack_218;
    uStack_340 = uStack_210;
    uStack_218 = 0;
    uStack_210 = 0;
    lStack_208 = 0;
    uStack_328 = CONCAT14(uStack_1f4,uStack_1f8);
    uStack_32c = uStack_1fc;
    func_0x048b0bc0();
    puVar22 = (undefined1 *)((ulong)uStack_3b0 >> 1 & 0x7f);
    puVar5 = (undefined1 *)((long)&uStack_3b0 + 1);
    if (((ulong)uStack_3b0 & 1) != 0) {
      puVar22 = puStack_3a8;
      puVar5 = puStack_3a0;
    }
    if (puVar22 == (undefined1 *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar22 & 3);
      if (puVar22 < 4) {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar26 = 0;
        do {
          uVar21 = ((int)*(char *)((long)puVar5 + 3U + uVar26) ^
                   ((int)*(char *)((long)puVar5 + 2U + uVar26) ^
                   ((int)*(char *)((long)puVar5 + 1U + uVar26) ^
                   ((int)*(char *)((long)puVar5 + uVar26) ^ uVar21) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while (((ulong)puVar22 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar13 != 0) {
        uVar25 = 0;
        do {
          uVar21 = ((int)*(char *)((long)puVar5 + uVar26 + uVar25) ^ uVar21) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar13 != uVar25);
      }
    }
    uStack_2f0 = (undefined *)CONCAT44(uVar21,2);
    if ((DAT_0f5bb168 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bb168), iVar10 != 0)) {
      func_0x07d39160();
      FUN_0410844d(&DAT_0f5bb168);
    }
    plStack_2a8 = (long *)CONCAT44(plStack_2a8._4_4_,uStack_2f0._4_4_);
    plStack_2a0 = (long *)0x0;
    _auStack_298 = (long *)CONCAT44(uStack_294,3);
    uStack_290 = (long *)0x1;
    puStack_288 = (undefined8 *)0x0;
    uStack_280 = &UNK_07d3cd10;
    uStack_278 = &SUB_048b06d0;
    uStack_270 = &UNK_07d38f90;
    uStack_268 = &UNK_07d3cdd0;
    uStack_260 = &UNK_07d3cde0;
    uStack_258 = (long *)((ulong)uStack_258 & 0xffffffff00000000);
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    func_0x048b05a0(&uStack_310,&plStack_2a8);
    plVar14 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_248 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_1b8 = (undefined4)uStack_300;
    uStack_1b4 = uStack_300._4_4_;
    iStack_1b0 = (int)uStack_2f8;
    iStack_1ac = uStack_2f8._4_4_;
    uStack_1c8 = (undefined4)uStack_310;
    uStack_1c4 = uStack_310._4_4_;
    uStack_1c0 = uStack_308;
    uStack_1bc = uStack_304;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    plStack_2a8 = (long *)CONCAT44(plStack_2a8._4_4_,_DAT_0f550a0c);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar17 = (long)uStack_3d0;
    plVar18 = plStack_3d8;
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&UNK_0ef439d0;
    plStack_2a0 = plVar14 + 3;
    plStack_3d8 = (long *)0x0;
    uStack_3d0 = (long *)0x0;
    plVar14[3] = (long)plVar18;
    plVar14[4] = lVar17;
    plVar14[7] = (long)puStack_3b8;
    plVar14[5] = (long)uStack_3c8;
    plVar14[6] = uStack_3c0;
    uStack_3c8 = (long *)0x0;
    uStack_3c0 = 0;
    puStack_3b8 = (undefined8 *)0x0;
    plVar14[10] = (long)puStack_3a0;
    plVar14[8] = (long)uStack_3b0;
    plVar14[9] = (long)puStack_3a8;
    uStack_3b0 = (undefined *)0x0;
    puStack_3a8 = (undefined1 *)0x0;
    puStack_3a0 = (undefined1 *)0x0;
    plVar14[0xb] = (long)puStack_398;
    plVar14[0xc] = (long)puStack_390;
    plVar14[0xd] = (long)uStack_388;
    puStack_398 = (undefined *)0x0;
    puStack_390 = (undefined *)0x0;
    uStack_388 = (long *)0x0;
    plVar14[0xe] = lStack_380;
    plVar14[0xf] = (long)uStack_378;
    plVar14[0x10] = uStack_370;
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    uStack_370 = 0;
    *(undefined4 *)(plVar14 + 0x11) = (undefined4)uStack_368;
    plVar14[0x12] = lStack_360;
    plVar14[0x13] = lStack_358;
    plVar14[0x14] = lStack_350;
    lStack_360 = 0;
    lStack_358 = 0;
    lStack_350 = 0;
    plVar14[0x17] = lStack_338;
    *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_348;
    *(undefined4 *)((long)plVar14 + 0xac) = uStack_348._4_4_;
    *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_340;
    *(undefined4 *)((long)plVar14 + 0xb4) = uStack_340._4_4_;
    uStack_348 = 0;
    uStack_340 = 0;
    lStack_338 = 0;
    *(ulong *)((long)plVar14 + 0xc5) = CONCAT53(uStack_328,uStack_32c._1_3_);
    plVar14[0x18] = CONCAT44(uStack_32c,uStack_330);
    uStack_148 = 0;
    plStack_140 = (long *)0x0;
    _auStack_298 = plVar14;
    func_0x048afd20(&uStack_1c8,&plStack_2a8);
    plVar14 = _auStack_298;
    if (_auStack_298 != (long *)0x0) {
      LOCK();
      plVar18 = _auStack_298 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*_auStack_298 + 0x10))(_auStack_298);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = plStack_140;
    if (plStack_140 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_140 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_140 + 0x10))(plStack_140);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = uStack_318;
    lVar17 = CONCAT44(uStack_1b4,uStack_1b8);
    if (iStack_1ac == 2) {
      piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != iStack_1b0) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != CONCAT44(uStack_1bc,uStack_1c0);
          piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_07cbc52a:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (iStack_1ac == 1) {
        piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != iStack_1b0) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_07cbc52a;
      }
      if (iStack_1ac == 0) {
        *(byte *)(lVar17 + 0x1a) = *(byte *)(lVar17 + 0x1a) | 9;
      }
    }
    if ((char)puStack_2e0 == '\0') {
      uStack_2e8 = (undefined1 *)CONCAT44(0xbb8863ad,(uint)uStack_2e8);
      puStack_2e0 = (undefined *)CONCAT71(puStack_2e0._1_7_,1);
      plStack_2a8 = (long *)CONCAT44(plStack_2a8._4_4_,0xbb8863ad);
      if ((DAT_0f5bb148 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bb148), iVar10 != 0)) {
        func_0x07d39050();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb0c8,0xf53dab8);
        FUN_0410844d(&DAT_0f5bb148);
      }
      plVar18 = (long *)(plVar14[3] +
                        (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f5bb0c8 + 4)) * 8);
      do {
        lVar17 = *plVar18;
        if (lVar17 == -1) goto LAB_07cbc5c0;
        plVar18 = (long *)(plVar14[6] + lVar17 * 0x18);
      } while (*(uint *)(plVar14[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb0c8 + 4));
      if (plVar18 == (long *)plVar14[7]) {
LAB_07cbc5c0:
        puVar12 = &DAT_0f5bb0c8;
      }
      else {
        puVar12 = (undefined *)plVar18[2];
      }
      lVar17 = *(long *)(puVar12 + 0x68);
      piVar16 = *(int **)(lVar17 + 0x28);
      for (piVar15 = *(int **)(lVar17 + 0x20); (piVar15 != piVar16 && (*piVar15 != -0x44779c53));
          piVar15 = piVar15 + 0xe) {
      }
      if (piVar15 == piVar16) {
        if (piVar16 < *(int **)(lVar17 + 0x30)) {
          *piVar16 = -0x44779c53;
          piVar16[2] = 0;
          piVar16[3] = 0;
          piVar16[4] = 0;
          piVar16[5] = 0;
          piVar16[6] = 0;
          piVar16[7] = 0;
          piVar16[8] = 0;
          piVar16[9] = 0;
          piVar16[10] = 0x3f800000;
          *(undefined1 *)(piVar16 + 0xc) = 0;
          *(undefined1 *)(piVar16 + 0xd) = 0;
          piVar16 = piVar16 + 0xe;
        }
        else {
          piVar16 = (int *)func_0x05d9c2b0(lVar17 + 0x20,&plStack_2a8);
        }
        *(int **)(lVar17 + 0x28) = piVar16;
      }
      else if ((*(long *)(piVar15 + 8) != 0) &&
              (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01417dfb
                                      ), cVar8 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    plVar14 = uStack_318;
    iVar10 = uStack_2e8._4_4_;
    if ((DAT_0f5bb148 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bb148), iVar11 != 0)) {
      func_0x07d39050();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb0c8,0xf53dab8);
      FUN_0410844d(&DAT_0f5bb148);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bb0c8 + 4)) * 8);
    do {
      lVar17 = *plVar18;
      if (lVar17 == -1) goto LAB_07cbc700;
      plVar18 = (long *)(plVar14[6] + lVar17 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb0c8 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbc700:
      puVar12 = &DAT_0f5bb0c8;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar16 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar16 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar16) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014ce557),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_2a8 = (long *)((ulong)plStack_2a8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,(long)&uStack_2f0 + 4,(long)&uStack_2f0 + 4,&plStack_2a8);
    func_0x048b0bc0(&plStack_3d8);
  }
  if ((DAT_0f5bb200 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5bb200), iVar10 != 0)) {
    func_0x07d3cef0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb180,0xf53dab8);
    FUN_0410844d(&DAT_0f5bb200);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5bb180 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07cbc800;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb180 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07cbc800:
    puVar12 = &DAT_0f5bb180;
    if (iRam000000000f5bb1e0 != -0x2b3da790) goto LAB_07cbca43;
LAB_07cbc832:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_07cbca43;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d3d310(&uStack_318,param_1,lVar23,uVar13);
    if ((char)uStack_2e8 == '\0') goto LAB_07cbc877;
LAB_07cbca6d:
    lVar17 = func_0x07d3eca0(lStack_188);
    if (*(int *)(lVar17 + 0x60) != -0x2b3da790) goto LAB_07cbd097;
LAB_07cbcd82:
    lVar17 = *(long *)(lVar17 + 0x68);
    if (lVar17 == 0) goto LAB_07cbd097;
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d3f630(&uStack_1c8,param_1,lVar23,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_07cbc832;
LAB_07cbca43:
    func_0x07d3d310(&uStack_318,param_1,&UNK_011d8cd4,0xe);
    if ((char)uStack_2e8 != '\0') goto LAB_07cbca6d;
LAB_07cbc877:
    func_0x07d3de20(&plStack_2a8,&uStack_318,&UNK_0142a5c6,4);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f5b30;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d3cd10;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d38f90;
    puStack_398 = &UNK_07d3e3a0;
    puStack_390 = &UNK_07d3e500;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d3e0a0(&plStack_2a8);
    plVar14 = uStack_318;
    iVar10 = (int)uStack_2f0;
    uVar6 = uStack_2f0._4_4_;
    func_0x048b0bc0(&uStack_290);
    if ((DAT_0f5bb200 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bb200), iVar11 != 0)) {
      func_0x07d3cef0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb180,0xf53dab8);
      FUN_0410844d(&DAT_0f5bb200);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bb180 + 4)) * 8);
    do {
      lVar17 = *plVar18;
      if (lVar17 == -1) goto LAB_07cbca30;
      plVar18 = (long *)(plVar14[6] + lVar17 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb180 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbca30:
      puVar12 = &DAT_0f5bb180;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    if ((1 < iVar10 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120cf25),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar14 = (long *)func_0x048b0c90(plVar14 + 3,puVar12,uVar6,1);
    if (plVar14 == (long *)0x0) {
      plStack_2a8 = (long *)0x0;
      plStack_2a0 = (long *)0x0;
      func_0x048b0d20(&plStack_2a8);
      plVar14 = plStack_2a8;
    }
    *(undefined1 *)(plVar14[0xb] + 0xa8) = 4;
    func_0x07d3de20(&plStack_2a8,&uStack_318,&UNK_0138e8dd,5);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f012080;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05dd3ca0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05dd3990;
    puStack_398 = &UNK_07d3e960;
    puStack_390 = &UNK_07d3eac0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d3e0a0(&plStack_2a8);
    plVar14 = uStack_318;
    iVar10 = (int)uStack_2f0;
    uVar6 = uStack_2f0._4_4_;
    func_0x048b0bc0(&uStack_290);
    if ((DAT_0f5bb200 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5bb200), iVar11 != 0)) {
      func_0x07d3cef0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5bb180,0xf53dab8);
      FUN_0410844d(&DAT_0f5bb200);
    }
    plVar18 = (long *)(plVar14[3] +
                      (ulong)((int)((ulong)(plVar14[4] - plVar14[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5bb180 + 4)) * 8);
    do {
      lVar17 = *plVar18;
      if (lVar17 == -1) goto LAB_07cbccc0;
      plVar18 = (long *)(plVar14[6] + lVar17 * 0x18);
    } while (*(uint *)(plVar14[6] + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5bb180 + 4));
    if (plVar18 == (long *)plVar14[7]) {
LAB_07cbccc0:
      puVar12 = &DAT_0f5bb180;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    if ((1 < iVar10 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120cf25),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar14 = (long *)func_0x048b0c90(plVar14 + 3,puVar12,uVar6,1);
    if (plVar14 == (long *)0x0) {
      plStack_2a8 = (long *)0x0;
      plStack_2a0 = (long *)0x0;
      func_0x048b0d20(&plStack_2a8);
      plVar14 = plStack_2a8;
    }
    param_1 = lStack_190;
    *(undefined1 *)(plVar14[0xb] + 0xa8) = 1;
    lVar17 = func_0x07d3eca0(lStack_188);
    if (*(int *)(lVar17 + 0x60) == -0x2b3da790) goto LAB_07cbcd82;
LAB_07cbd097:
    func_0x07d3f630(&uStack_1c8,param_1,&UNK_014ce287,0x18);
  }
  if (cStack_198 != '\0') {
    lVar17 = func_0x07d48cb0(lStack_188);
    iVar10 = *(int *)(lVar17 + 0x60);
    goto joined_r0x07cbe031;
  }
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_012c2b8e,0xd,1);
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0ef44b00;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = puVar19;
    (**(code **)(lVar17 + 8))();
    puVar19 = uStack_290;
  }
  uStack_290 = puVar19;
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
  uStack_3d0 = (long *)0x0;
  uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
  uStack_3c0 = 1;
  puStack_3b8 = (undefined8 *)0x0;
  uStack_3b0 = &UNK_048b3f30;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &SUB_048b2190;
  puStack_398 = &UNK_07d40400;
  puStack_390 = &UNK_07d405c0;
  uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
  lStack_380 = 0;
  uStack_378 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&plStack_3d8);
  plVar14 = uStack_378;
  if (uStack_378 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_378 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_378 + 0x10))(uStack_378);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  lVar17 = CONCAT44(uStack_1c4,uStack_1c8);
  func_0x048b0bc0(&uStack_290);
  puStack_288 = (undefined8 *)0x0;
  uStack_240 = 0;
  uStack_238 = 0;
  lStack_250 = 0;
  uStack_248 = (long *)0x0;
  uStack_260 = (undefined *)0x0;
  uStack_258 = (long *)0x0;
  uStack_270 = (undefined1 *)0x0;
  uStack_268 = (undefined *)0x0;
  uStack_280 = (undefined *)0x0;
  uStack_278 = (undefined1 *)0x0;
  lStack_230 = 0;
  plStack_2a0 = (long *)0xffffffffffffffff;
  _auStack_298 = (long *)0x0;
  uStack_290 = (long *)0xff;
  plStack_2a8 = (long *)&UNK_0f4e3c70;
  func_0x041679a0(&puStack_288);
  uStack_280 = (undefined *)func_0x041681f0(&puStack_288,0xf547a30);
  uStack_278 = (undefined1 *)func_0x041681f0(&puStack_288,0xf547770);
  uStack_270 = (undefined1 *)0x0;
  uStack_268 = (undefined *)0x0;
  uStack_260 = (undefined *)0x0;
  uStack_258 = (long *)0x0;
  lStack_250 = 0;
  uStack_248 = (long *)0x0;
  uStack_240 = 0;
  uStack_238 = 0;
  lStack_230 = 0;
  plStack_2a0 = (long *)0x80;
  uStack_3d0 = (long *)0x80;
  uStack_3c8 = _auStack_298;
  uStack_3c0 = CONCAT71(uStack_3c0._1_7_,(undefined1)uStack_290);
  plStack_3d8 = (long *)&UNK_0f4e3c70;
  func_0x04167a20(&puStack_3b8,&puStack_288);
  uStack_3b0 = uStack_280;
  puStack_3a8 = uStack_278;
  puStack_3a0 = uStack_270;
  puStack_398 = uStack_268;
  puStack_390 = uStack_260;
  uStack_388 = uStack_258;
  if (uStack_258 != (long *)0x0) {
    LOCK();
    uStack_258[1] = uStack_258[1] + 1;
    UNLOCK();
  }
  lStack_380 = lStack_250;
  if (((ulong)uStack_248 & 1) == 0) {
    uStack_368 = uStack_238;
    uStack_378 = uStack_248;
    uStack_370 = uStack_240;
  }
  else {
    func_0x0412e5e0(&uStack_378,uStack_238,uStack_240);
  }
  lStack_360 = lStack_230;
  if (iStack_1a0 == 4) {
    lVar17 = lVar17 + 0x18;
    uVar20 = func_0x07d3eca0(lVar17);
    plVar14 = (long *)FUN_048b1040(lVar17,uVar20,uStack_19c,1);
    if (plVar14 == (long *)0x0) {
      uStack_318 = (long *)0x0;
      uStack_310 = 0;
      func_0x048b10d0(&uStack_318);
      plVar18 = (long *)uStack_318[7];
      plVar14 = uStack_318;
      if (plVar18 == (long *)0x0) goto LAB_07cbd1f2;
LAB_07cbd217:
      do {
        plVar14 = plVar18;
        plVar18 = (long *)plVar14[7];
        if ((long *)plVar14[7] == (long *)0x0) {
          uStack_318 = (long *)0x0;
          uStack_310 = 0;
          func_0x048b10d0(&uStack_318);
          plVar18 = uStack_318;
        }
      } while (plVar18 != (long *)0x0);
    }
    else {
      plVar18 = (long *)plVar14[7];
      if ((long *)plVar14[7] != (long *)0x0) goto LAB_07cbd217;
LAB_07cbd1f2:
      uStack_318 = (long *)0x0;
      uStack_310 = 0;
      func_0x048b10d0(&uStack_318);
      plVar18 = uStack_318;
      if (uStack_318 != (long *)0x0) goto LAB_07cbd217;
    }
    lVar17 = plVar14[9];
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
LAB_07cbd284:
    *(undefined1 *)(puVar19 + 3) = (undefined1)uStack_3c0;
    *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_3d0;
    *(undefined4 *)((long)puVar19 + 0xc) = uStack_3d0._4_4_;
    *(undefined4 *)(puVar19 + 2) = (undefined4)uStack_3c8;
    *(undefined4 *)((long)puVar19 + 0x14) = uStack_3c8._4_4_;
    *puVar19 = &UNK_0f4e3c70;
    func_0x04167a20(puVar19 + 4,&puStack_3b8);
    puVar19[5] = uStack_3b0;
    puVar19[6] = puStack_3a8;
    puVar19[7] = puStack_3a0;
    puVar19[8] = puStack_398;
    puVar19[9] = puStack_390;
    puVar19[10] = uStack_388;
    puStack_390 = (undefined *)0x0;
    uStack_388 = (long *)0x0;
    puVar19[0xb] = lStack_380;
    puVar19[0xe] = uStack_368;
    *(undefined4 *)(puVar19 + 0xc) = (undefined4)uStack_378;
    *(undefined4 *)((long)puVar19 + 100) = uStack_378._4_4_;
    *(undefined4 *)(puVar19 + 0xd) = (undefined4)uStack_370;
    *(undefined4 *)((long)puVar19 + 0x6c) = uStack_370._4_4_;
    uStack_378 = (long *)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    puVar19[0xf] = lStack_360;
    plVar14 = *(long **)(lVar17 + 8);
    *(undefined8 **)(lVar17 + 8) = puVar19;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x28))();
    }
  }
  else if (iStack_1a0 == 1) {
    lVar17 = lVar17 + 0x18;
    uVar20 = func_0x07d3eca0(lVar17);
    plVar14 = (long *)func_0x048b0c90(lVar17,uVar20,uStack_19c,1);
    if (plVar14 == (long *)0x0) {
      uStack_318 = (long *)0x0;
      uStack_310 = 0;
      func_0x048b0d20(&uStack_318);
      plVar14 = uStack_318;
    }
    lVar17 = plVar14[0xb];
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    goto LAB_07cbd284;
  }
  plStack_3d8 = (long *)&UNK_0f4e3c70;
  if (((ulong)uStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
  }
  param_1 = lStack_190;
  plVar14 = uStack_388;
  if (uStack_388 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_388 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_388 + 0x10))(uStack_388);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&puStack_3b8);
  plStack_2a8 = (long *)&UNK_0f4e3c70;
  if (((ulong)uStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
  }
  plVar14 = uStack_258;
  if (uStack_258 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_258 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_258 + 0x10))(uStack_258);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&puStack_288);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_011a2696,0xd,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0f5c80;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_07d46310;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_07d45f40;
  puStack_2d8 = &UNK_07d463d0;
  puStack_2d0 = &UNK_07d46550;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_0132a95f,9,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0f5cf0;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_07d469d0;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_07d44280;
  puStack_2d8 = &UNK_07d46a90;
  puStack_2d0 = &UNK_07d46c00;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_01228056,0xb,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0f5c80;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_07d46310;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_07d45f40;
  puStack_2d8 = &UNK_07d47080;
  puStack_2d0 = &UNK_07d47200;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_0128fbad,0x16,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012080;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_05dd3ca0;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_05dd3990;
  puStack_2d8 = &UNK_07d473e0;
  puStack_2d0 = &UNK_07d47540;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_01431c79,0x14,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012080;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_05dd3ca0;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_05dd3990;
  puStack_2d8 = &UNK_07d47720;
  puStack_2d0 = &UNK_07d47880;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_0132a969,6,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0f3780;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_07c24fa0;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &SUB_07c249b0;
  puStack_2d8 = &UNK_07d47a60;
  puStack_2d0 = &UNK_07d47bc0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_012f69b6,0x14,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f012080;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_05dd3ca0;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_05dd3990;
  puStack_2d8 = &UNK_07d47da0;
  puStack_2d0 = &UNK_07d47f00;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_0144cb3e,0xf,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef46ef8;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_04906f70;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &SUB_04906c50;
  puStack_2d8 = &UNK_07d480e0;
  puStack_2d0 = &UNK_07d48240;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  func_0x07d3ff00(&plStack_2a8,&uStack_1c8,&UNK_011d8cd4,0xe,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0f5f48;
  if (uStack_290 != (long *)0x0) {
    lVar17 = *uStack_290;
    uStack_290 = plVar14;
    (**(code **)(lVar17 + 8))();
    plVar14 = uStack_290;
  }
  uStack_290 = plVar14;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,auStack_298);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = &UNK_07d48610;
  uStack_2e8 = &SUB_048b06d0;
  puStack_2e0 = &UNK_07d3ce30;
  puStack_2d8 = &UNK_07d486d0;
  puStack_2d0 = &UNK_07d48830;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  func_0x048b05a0(plStack_2a0,&uStack_318);
  plVar14 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07d40100(&plStack_2a8);
  func_0x048b0bc0(&uStack_290);
  lVar17 = func_0x07d48cb0(lStack_188);
  iVar10 = *(int *)(lVar17 + 0x60);
joined_r0x07cbe031:
  if ((iVar10 == -0x2b3da790) && (lVar17 = *(long *)(lVar17 + 0x68), lVar17 != 0)) {
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d49130(&uStack_318,param_1,lVar23,uVar13);
  }
  else {
    func_0x07d49130(&uStack_318,param_1,&UNK_012dcea0,0x16);
  }
  if ((char)uStack_2e8 == '\0') {
    func_0x07d499b0(&plStack_2a8,&uStack_318,&UNK_012f69cb,8);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef46ce8;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_0490ce30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_0490cb20;
    puStack_398 = &UNK_07d49ea0;
    puStack_390 = &UNK_07d4a000;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d49ba0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d499b0(&plStack_2a8,&uStack_318,&UNK_011a26a4,6);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0126a0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05daeda0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05daea90;
    puStack_398 = &UNK_07d4a1d0;
    puStack_390 = &UNK_07d4a330;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d49ba0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d499b0(&plStack_2a8,&uStack_318,&UNK_012ee1a5,7);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef46ef8;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_04906f70;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_04906c50;
    puStack_398 = &UNK_07d4a510;
    puStack_390 = &UNK_07d4a670;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d49ba0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d499b0(&plStack_2a8,&uStack_318,&UNK_012c2b9c,0x11);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0ef46ef8;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_04906f70;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_04906c50;
    puStack_398 = &UNK_07d4a850;
    puStack_390 = &UNK_07d4a9b0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d49ba0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    lVar17 = func_0x07d4ab90(lStack_188);
    iVar10 = *(int *)(lVar17 + 0x60);
  }
  else {
    lVar17 = func_0x07d4ab90(lStack_188);
    iVar10 = *(int *)(lVar17 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar17 = *(long *)(lVar17 + 0x68), lVar17 != 0)) {
    bVar27 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar23 = lVar17 + 9;
    if (bVar27) {
      lVar23 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar27) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07d4bf10(&uStack_318,param_1,lVar23,uVar13);
  }
  else {
    func_0x07d4bf10(&uStack_318,param_1,&UNK_01242579,0x12);
  }
  if ((char)uStack_2e8 == '\0') {
    func_0x07d4c7f0(&plStack_2a8,&uStack_318,&UNK_012f0cac,4,1);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0ef44b00;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = puVar19;
      (**(code **)(lVar17 + 8))();
      puVar19 = uStack_290;
    }
    uStack_290 = puVar19;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d4ccf0;
    puStack_390 = &UNK_07d4ceb0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d4c9f0(&plStack_2a8);
    cStack_198 = (char)uStack_2e8;
    uStack_1a8 = (int)uStack_2f8;
    uStack_1a4 = uStack_2f8._4_4_;
    iStack_1a0 = (int)uStack_2f0;
    uStack_19c = uStack_2f0._4_4_;
    uStack_1b8 = uStack_308;
    uStack_1b4 = uStack_304;
    iStack_1b0 = (undefined4)uStack_300;
    iStack_1ac = uStack_300._4_4_;
    uStack_1c8 = (undefined4)uStack_318;
    uStack_1c4 = uStack_318._4_4_;
    uStack_1c0 = (undefined4)uStack_310;
    uStack_1bc = uStack_310._4_4_;
    func_0x048b0bc0(&uStack_290);
    puStack_288 = (undefined8 *)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_258 = (long *)0x0;
    uStack_270 = (undefined1 *)0x0;
    uStack_268 = (undefined *)0x0;
    uStack_280 = (undefined *)0x0;
    uStack_278 = (undefined1 *)0x0;
    lStack_230 = 0;
    plStack_2a0 = (long *)0xffffffffffffffff;
    _auStack_298 = (long *)0x0;
    uStack_290 = (long *)0xff;
    plStack_2a8 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&puStack_288);
    uStack_280 = (undefined *)func_0x041681f0(&puStack_288,0xf547a30);
    uStack_278 = (undefined1 *)func_0x041681f0(&puStack_288,0xf547770);
    uStack_270 = (undefined1 *)0x0;
    uStack_268 = (undefined *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_258 = (long *)0x0;
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    lStack_230 = 0;
    plStack_2a0 = (long *)0x80;
    uStack_a8 = 0x80;
    uStack_a4 = 0;
    uStack_a0 = auStack_298;
    uStack_9c = uStack_294;
    uStack_98 = (undefined1)uStack_290;
    puStack_b0 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_90,&puStack_288);
    uStack_88 = uStack_280;
    uStack_80 = uStack_278;
    uStack_78 = (undefined4)uStack_270;
    uStack_74 = uStack_270._4_4_;
    uStack_70 = (undefined4)uStack_268;
    uStack_6c = uStack_268._4_4_;
    uStack_68 = (undefined4)uStack_260;
    uStack_64 = uStack_260._4_4_;
    uStack_60 = (undefined4)uStack_258;
    uStack_5c = uStack_258._4_4_;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      uStack_258[1] = uStack_258[1] + 1;
      UNLOCK();
    }
    uStack_58 = lStack_250;
    if (((ulong)uStack_248 & 1) == 0) {
      uStack_40 = uStack_238;
      uStack_50 = (uint)uStack_248;
      uStack_4c = uStack_248._4_4_;
      uStack_48 = (undefined4)uStack_240;
      uStack_44 = uStack_240._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_50,uStack_238,uStack_240);
    }
    uStack_38 = lStack_230;
    func_0x07cc0550(&plStack_3d8,&uStack_1c8,&puStack_b0);
    puStack_b0 = &UNK_0f4e3c70;
    if ((uStack_50 & 1) != 0) {
      func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
    }
    plVar14 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(auStack_90);
    plStack_2a8 = (long *)&UNK_0f4e3c70;
    if (((ulong)uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_258 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&puStack_288);
    func_0x07d4c7f0(&plStack_2a8,&uStack_318,&UNK_01464af4,9,0);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f0123c0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = puVar19;
      (**(code **)(lVar17 + 8))();
      puVar19 = uStack_290;
    }
    uStack_290 = puVar19;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_05e08030;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05e07cf0;
    puStack_398 = &UNK_07d4d140;
    puStack_390 = &UNK_07d4d2f0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d4c9f0(&plStack_2a8);
    cStack_198 = (char)uStack_2e8;
    uStack_1a8 = (int)uStack_2f8;
    uStack_1a4 = uStack_2f8._4_4_;
    iStack_1a0 = (int)uStack_2f0;
    uStack_19c = uStack_2f0._4_4_;
    uStack_1b8 = uStack_308;
    uStack_1b4 = uStack_304;
    iStack_1b0 = (undefined4)uStack_300;
    iStack_1ac = uStack_300._4_4_;
    uStack_1c8 = (undefined4)uStack_318;
    uStack_1c4 = uStack_318._4_4_;
    uStack_1c0 = (undefined4)uStack_310;
    uStack_1bc = uStack_310._4_4_;
    func_0x048b0bc0(&uStack_290);
    puStack_288 = (undefined8 *)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_258 = (long *)0x0;
    uStack_270 = (undefined1 *)0x0;
    uStack_268 = (undefined *)0x0;
    uStack_280 = (undefined *)0x0;
    uStack_278 = (undefined1 *)0x0;
    lStack_230 = 0;
    plStack_2a0 = (long *)0xffffffffffffffff;
    _auStack_298 = (long *)0x0;
    uStack_290 = (long *)0xff;
    plStack_2a8 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&puStack_288);
    uStack_280 = (undefined *)func_0x041681f0(&puStack_288,0xf547a30);
    uStack_278 = (undefined1 *)func_0x041681f0(&puStack_288,0xf547770);
    uStack_270 = (undefined1 *)0x0;
    uStack_268 = (undefined *)0x0;
    uStack_260 = (undefined *)0x0;
    uStack_258 = (long *)0x0;
    lStack_250 = 0;
    uStack_248 = (long *)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    lStack_230 = 0;
    plStack_2a0 = (long *)0x80;
    uStack_128 = 0x80;
    uStack_124 = 0;
    uStack_120 = auStack_298;
    uStack_11c = uStack_294;
    uStack_118 = (undefined1)uStack_290;
    puStack_130 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_110,&puStack_288);
    uStack_108 = uStack_280;
    uStack_100 = uStack_278;
    uStack_f8 = (undefined4)uStack_270;
    uStack_f4 = uStack_270._4_4_;
    uStack_f0 = (undefined4)uStack_268;
    uStack_ec = uStack_268._4_4_;
    uStack_e8 = (undefined4)uStack_260;
    uStack_e4 = uStack_260._4_4_;
    uStack_e0 = (undefined4)uStack_258;
    uStack_dc = uStack_258._4_4_;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      uStack_258[1] = uStack_258[1] + 1;
      UNLOCK();
    }
    uStack_d8 = lStack_250;
    if (((ulong)uStack_248 & 1) == 0) {
      uStack_c0 = uStack_238;
      uStack_d0 = (uint)uStack_248;
      uStack_cc = uStack_248._4_4_;
      uStack_c8 = (undefined4)uStack_240;
      uStack_c4 = uStack_240._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_d0,uStack_238,uStack_240);
    }
    uStack_b8 = lStack_230;
    func_0x07cc0550(&plStack_3d8,&uStack_1c8,&puStack_130);
    puStack_130 = &UNK_0f4e3c70;
    if ((uStack_d0 & 1) != 0) {
      func_0x0412a280(uStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
    }
    plVar14 = (long *)CONCAT44(uStack_dc,uStack_e0);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(auStack_110);
    plStack_2a8 = (long *)&UNK_0f4e3c70;
    if (((ulong)uStack_248 & 1) != 0) {
      func_0x0412a280(uStack_238,(ulong)uStack_248 & 0xfffffffffffffffe);
    }
    plVar14 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_258 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x04167a40(&puStack_288);
    func_0x07d4c7f0(&plStack_2a8,&uStack_318,&UNK_013299b2,9,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f00b118;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_06151e60;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_05dee420;
    puStack_398 = &UNK_07d4d4d0;
    puStack_390 = &UNK_07d4d630;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d4c9f0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d4c7f0(&plStack_2a8,&uStack_318,&UNK_01394955,8,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0f60a0;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = plVar14;
      (**(code **)(lVar17 + 8))();
      plVar14 = uStack_290;
    }
    uStack_290 = plVar14;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d4da20;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_07d48cb0;
    puStack_398 = &UNK_07d4da30;
    puStack_390 = &UNK_07d4dba0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d4c9f0(&plStack_2a8);
    func_0x048b0bc0(&uStack_290);
    func_0x07d4c7f0(&plStack_2a8,&uStack_318,&UNK_012d7590,10,1);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f0f6118;
    if (uStack_290 != (long *)0x0) {
      lVar17 = *uStack_290;
      uStack_290 = puVar19;
      (**(code **)(lVar17 + 8))();
      puVar19 = uStack_290;
    }
    uStack_290 = puVar19;
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,auStack_298);
    uStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    puStack_3b8 = (undefined8 *)0x0;
    uStack_3b0 = &UNK_07d51a80;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d4fef0;
    puStack_398 = &UNK_07d51a90;
    puStack_390 = &UNK_07d51ca0;
    uStack_388 = (long *)((ulong)uStack_388 & 0xffffffff00000000);
    lStack_380 = 0;
    uStack_378 = (long *)0x0;
    func_0x048b05a0(plStack_2a0,&plStack_3d8);
    plVar14 = uStack_378;
    if (uStack_378 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_378 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_378 + 0x10))(uStack_378);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07d4c9f0(&plStack_2a8);
    puStack_3a8 = (undefined1 *)CONCAT71(puStack_3a8._1_7_,(char)uStack_2e8);
    puStack_3b8 = uStack_2f8;
    uStack_3b0._0_4_ = (int)uStack_2f0;
    uStack_3b0._4_4_ = uStack_2f0._4_4_;
    uStack_3c8 = (long *)CONCAT44(uStack_304,uStack_308);
    uStack_3c0 = uStack_300;
    plStack_3d8 = uStack_318;
    uStack_3d0 = (long *)uStack_310;
    func_0x048b0bc0(&uStack_290);
    if ((int)uStack_3b0 == 4) {
      lVar17 = func_0x07d4d080(&plStack_3d8);
      lVar17 = *(long *)(lVar17 + 0x48);
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if ((int)uStack_3b0 != 1) {
        return;
      }
      plVar14 = plStack_3d8 + 3;
      uVar20 = func_0x07d4ab90(plVar14);
      plVar14 = (long *)func_0x048b0c90(plVar14,uVar20,uStack_3b0._4_4_,1);
      if (plVar14 == (long *)0x0) {
        plStack_2a8 = (long *)0x0;
        plStack_2a0 = (long *)0x0;
        func_0x048b0d20(&plStack_2a8);
        plVar14 = plStack_2a8;
      }
      lVar17 = plVar14[0xb];
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar19[1] = 0x400;
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0xff;
    *puVar19 = &UNK_0f4e3cf0;
    puVar19[4] = 0;
    puVar19[5] = 0;
    *(undefined8 *)((long)puVar19 + 0x29) = 0;
    *(undefined8 *)((long)puVar19 + 0x31) = 0;
    plVar14 = *(long **)(lVar17 + 8);
    *(undefined8 **)(lVar17 + 8) = puVar19;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x28))();
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a8d65  minLocalTransitionEnd
 */
