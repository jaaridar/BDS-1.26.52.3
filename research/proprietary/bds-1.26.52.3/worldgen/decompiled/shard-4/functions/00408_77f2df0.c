/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x78f2df0 (ELF vaddr 0x77f2df0)
 * Label: caller-of-callee
 * Body:  [[078f2df0, 078fbaea]]
 * Ghidra: FUN_078f2df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_078f2df0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  bool bVar23;
  uint uStack_240;
  undefined4 uStack_23c;
  long lStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint5 uStack_130;
  undefined3 uStack_12b;
  uint5 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined1 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  char cStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  char cStack_a0;
  uint uStack_9c;
  char cStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_60 [2];
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
    func_0x07974500();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2708);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f2e60;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f2e60:
    puVar12 = &DAT_0f5b2688;
    if (iRam000000000f5b26e8 != -0x2b3da790) goto LAB_078f2eb8;
LAB_078f2e8b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f2eb8;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar17 + 9);
    if (bVar23) {
      puVar12 = *(undefined **)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f2e8b;
LAB_078f2eb8:
    puVar12 = &UNK_0132a441;
    uVar13 = 0xc;
  }
  func_0x07974940(&lStack_d0,param_1,puVar12,uVar13);
  uStack_9c = uStack_9c & 0xffffff00;
  cStack_98 = '\0';
  lStack_90 = param_1;
  if (cStack_a0 == '\0') {
    func_0x079781c0(&uStack_1d8,&UNK_013b0f7f,4);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar17 = (long)&uStack_1b0 + 1;
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    uVar7 = (int)uStack_a8;
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') &&
       (uStack_a8._0_4_ = uVar7, iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978890;
    puStack_1f8 = &UNK_079788a0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f319a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f319a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    lVar2 = (long)&uStack_a8 + 4;
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f3231;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f3231:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_013e38fd,5);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978ab0;
    puStack_1f8 = &UNK_07978ac0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f356a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f356a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f3601;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f3601:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_0134500b,3);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978b10;
    puStack_1f8 = &UNK_07978b20;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f393a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f393a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f39d1;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f39d1:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_014aea19,5);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978b70;
    puStack_1f8 = &UNK_07978b80;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f3d0a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f3d0a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f3da1;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f3da1:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_012a1fec,6);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978bd0;
    puStack_1f8 = &UNK_07978be0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f40da:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f40da;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f4171;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f4171:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_013fd9b8,0xb);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978c30;
    puStack_1f8 = &UNK_07978c40;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f44aa:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f44aa;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f4541;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f4541:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_01495721,3);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978c90;
    puStack_1f8 = &UNK_07978ca0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f487a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f487a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f4911;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f4911:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_01499ef0,5);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    lVar19 = lVar17;
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar19 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uStack_a8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uStack_a8._4_4_ = 0x811c9dc5;
        uVar21 = 0;
        do {
          uStack_a8._4_4_ =
               ((int)*(char *)(lVar19 + 3 + uVar21) ^
               ((int)*(char *)(lVar19 + 2 + uVar21) ^
               ((int)*(char *)(lVar19 + 1 + uVar21) ^
               ((int)*(char *)(lVar19 + uVar21) ^ uStack_a8._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uStack_a8._4_4_ = ((int)*(char *)(lVar19 + uVar21 + uVar20) ^ uStack_a8._4_4_) * 0x1000193
          ;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8._0_4_ = 2;
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978cf0;
    puStack_1f8 = &UNK_07978d00;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f4c4a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f4c4a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar19 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar3 = *plVar16;
      if (lVar3 == -1) goto LAB_078f4ce1;
      plVar16 = (long *)(*(long *)(lVar19 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4))
    ;
    if (plVar16 == *(long **)(lVar19 + 0x38)) {
LAB_078f4ce1:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
    func_0x079781c0(&uStack_1d8,&UNK_012c1f2d,4);
    puVar12 = (undefined *)((ulong)uStack_1b0 >> 1 & 0x7f);
    if (((ulong)uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar17 = lStack_1a0;
    }
    if (puVar12 == (undefined *)0x0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)puVar12 & 3);
      if (puVar12 < 4) {
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar17 + 3 + uVar21) ^
                   ((int)*(char *)(lVar17 + 2 + uVar21) ^
                   ((int)*(char *)(lVar17 + 1 + uVar21) ^
                   ((int)*(char *)(lVar17 + uVar21) ^ uVar18) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar21 = uVar21 + 4;
        } while (((ulong)puVar12 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar13 != 0) {
        uVar20 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar17 + uVar21 + uVar20) ^ uVar18) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar13 != uVar20);
      }
    }
    uStack_a8 = CONCAT44(uVar18,2);
    if ((DAT_0f5b2728 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2728), iVar11 != 0)) {
      func_0x07974610();
      func_0x0410844d(&DAT_0f5b2728);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07978d50;
    puStack_1f8 = &UNK_07978d60;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    param_1 = lStack_90;
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_108 = CONCAT44(uStack_c4,uStack_c8);
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07978560(&uStack_240,&uStack_108,&uStack_1d8);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f500a:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f500a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    if (cStack_98 == '\0') {
      func_0x079788f0(&uStack_240,&lStack_d0);
    }
    uVar18 = uStack_9c;
    lVar17 = lStack_d0;
    if ((DAT_0f5b2708 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2708), iVar11 != 0)) {
      func_0x07974500();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2688,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2708);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2688 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f5090;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2688 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f5090:
      puVar12 = &DAT_0f5b2688;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar22 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar22 != puVar4 && (*puVar22 != uVar18)); puVar22 = puVar22 + 0xe) {
    }
    if ((puVar22 == puVar4) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013b0ffd),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_240 = uStack_240 & 0xffffff00;
    func_0x05d9c620(puVar22 + 2,lVar2,lVar2,&uStack_240);
    func_0x048b0bc0(&uStack_1d8);
  }
  if ((DAT_0f5b27c0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b27c0), iVar11 != 0)) {
    func_0x07978e70();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2740,0xf53dab8);
    func_0x0410844d(&DAT_0f5b27c0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2740 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f5190;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2740 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f5190:
    puVar12 = &DAT_0f5b2740;
    if (iRam000000000f5b27a0 != -0x2b3da790) goto LAB_078f51fe;
LAB_078f51bb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f51fe;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07979290(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f51bb;
LAB_078f51fe:
    func_0x07979290(&lStack_d0,param_1,&UNK_014b28c5,0x13);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b27e0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b27e0), iVar11 != 0)) {
      func_0x07978f80();
      func_0x0410844d(&DAT_0f5b27e0);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_0797a010;
    puStack_1f8 = &UNK_0797a020;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07979da0(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f54f2:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f54f2;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b27c0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b27c0), iVar10 != 0)) {
      func_0x07978e70();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2740,0xf53dab8);
      func_0x0410844d(&DAT_0f5b27c0);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2740 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f55a0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2740 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f55a0:
      puVar12 = &DAT_0f5b2740;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0147cf67),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b27e0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b27e0), iVar11 != 0)) {
      func_0x07978f80();
      func_0x0410844d(&DAT_0f5b27e0);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b27c0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b27c0), iVar11 != 0)) {
      func_0x07978e70();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2740,0xf53dab8);
      func_0x0410844d(&DAT_0f5b27c0);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2740 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f5710;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2740 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f5710:
      uStack_1d8 = (long *)&DAT_0f5b2740;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0edeb8;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_0797a070;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_0651e240;
    puStack_200 = &UNK_0797a080;
    puStack_1f8 = &UNK_0797a1e0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x07979da0(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f59ca:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f59ca;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  if ((DAT_0f5b2878 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2878), iVar11 != 0)) {
    func_0x0797a6f0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b27f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2878);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b27f8 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f5a30;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b27f8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f5a30:
    puVar12 = &DAT_0f5b27f8;
    if (iRam000000000f5b2858 != -0x2b3da790) goto LAB_078f5a9e;
LAB_078f5a5b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f5a9e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0797ab10(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f5a5b;
LAB_078f5a9e:
    func_0x0797ab10(&lStack_d0,param_1,&UNK_013c918c,0x14);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2898 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2898), iVar11 != 0)) {
      func_0x0797a800();
      func_0x0410844d(&DAT_0f5b2898);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_0797b890;
    puStack_1f8 = &UNK_0797b8a0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x0797b620(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f5d92:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f5d92;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2878 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2878), iVar10 != 0)) {
      func_0x0797a6f0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b27f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2878);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b27f8 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f5e40;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b27f8 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f5e40:
      puVar12 = &DAT_0f5b27f8;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01241a6d),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2898 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2898), iVar11 != 0)) {
      func_0x0797a800();
      func_0x0410844d(&DAT_0f5b2898);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2878 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2878), iVar11 != 0)) {
      func_0x0797a6f0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b27f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2878);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b27f8 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f5fb0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b27f8 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f5fb0:
      uStack_1d8 = (long *)&DAT_0f5b27f8;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0c2a88;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_0729f0a0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_0651e820;
    puStack_200 = &UNK_0797b8f0;
    puStack_1f8 = &UNK_0797ba50;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0797b620(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f626a:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f626a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  if ((DAT_0f5b2930 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2930), iVar11 != 0)) {
    func_0x0797bce0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b28b0,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2930);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b28b0 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f62d0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b28b0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f62d0:
    puVar12 = &DAT_0f5b28b0;
    if (iRam000000000f5b2910 != -0x2b3da790) goto LAB_078f633e;
LAB_078f62fb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f633e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0797c100(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f62fb;
LAB_078f633e:
    func_0x0797c100(&lStack_d0,param_1,&UNK_012c20e7,0x12);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2950 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2950), iVar11 != 0)) {
      func_0x0797bdf0();
      func_0x0410844d(&DAT_0f5b2950);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_0797ce80;
    puStack_1f8 = &UNK_0797ce90;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x0797cc10(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f6632:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f6632;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2930 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2930), iVar10 != 0)) {
      func_0x0797bce0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b28b0,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2930);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b28b0 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f66e0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b28b0 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f66e0:
      puVar12 = &DAT_0f5b28b0;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01241ad8),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2950 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2950), iVar11 != 0)) {
      func_0x0797bdf0();
      func_0x0410844d(&DAT_0f5b2950);
    }
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2930 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2930), iVar11 != 0)) {
      func_0x0797bce0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b28b0,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2930);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b28b0 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f6850;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b28b0 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f6850:
      uStack_1d8 = (long *)&DAT_0f5b28b0;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0ef46ce8;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_0490ce30;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_0490cb20;
    puStack_200 = &UNK_0797cee0;
    puStack_1f8 = &UNK_0797d040;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0797cc10(&uStack_240,puStack_1d0,&plStack_1c0);
    lVar17 = uStack_108;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f6b0a:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f6b0a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    iVar11 = (int)uStack_e0;
    uVar7 = uStack_e0._4_4_;
    func_0x048b0bc0(&plStack_1c0);
    if ((DAT_0f5b2930 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2930), iVar10 != 0)) {
      func_0x0797bce0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b28b0,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2930);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b28b0 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f6b90;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b28b0 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f6b90:
      puVar12 = &DAT_0f5b28b0;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01241ad8),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (lVar17 == 0) {
      uStack_1d8 = (long *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      lVar17 = (long)uStack_1d8;
    }
    *(undefined1 *)(*(long *)(lVar17 + 0x58) + 0xa8) = 1;
    param_1 = lStack_90;
  }
  if ((DAT_0f5b29e8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b29e8), iVar11 != 0)) {
    func_0x0797d2d0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2968,0xf53dab8);
    func_0x0410844d(&DAT_0f5b29e8);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2968 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f6c90;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2968 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f6c90:
    puVar12 = &DAT_0f5b2968;
    if (iRam000000000f5b29c8 != -0x2b3da790) goto LAB_078f6cfe;
LAB_078f6cbb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f6cfe;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0797d6f0(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f6cbb;
LAB_078f6cfe:
    func_0x0797d6f0(&lStack_d0,param_1,&UNK_0144c035,0x14);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2a08 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2a08), iVar11 != 0)) {
      func_0x0797d3e0();
      func_0x0410844d(&DAT_0f5b2a08);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_0797e470;
    puStack_1f8 = &UNK_0797e480;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x0797e200(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f6ff2:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f6ff2;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b29e8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b29e8), iVar10 != 0)) {
      func_0x0797d2d0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2968,0xf53dab8);
      func_0x0410844d(&DAT_0f5b29e8);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2968 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f70a0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2968 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f70a0:
      puVar12 = &DAT_0f5b2968;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013e3a36),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2a08 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2a08), iVar11 != 0)) {
      func_0x0797d3e0();
      func_0x0410844d(&DAT_0f5b2a08);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b29e8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b29e8), iVar11 != 0)) {
      func_0x0797d2d0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2968,0xf53dab8);
      func_0x0410844d(&DAT_0f5b29e8);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2968 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f7210;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2968 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f7210:
      uStack_1d8 = (long *)&DAT_0f5b2968;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0126a0;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_05daeda0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_05daea90;
    puStack_200 = &UNK_0797e4d0;
    puStack_1f8 = &UNK_0797e630;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0797e200(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f74ca:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f74ca;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  if ((DAT_0f5b2aa0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2aa0), iVar11 != 0)) {
    func_0x0797e8c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2a20,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2aa0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2a20 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f7530;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2a20 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f7530:
    puVar12 = &DAT_0f5b2a20;
    if (iRam000000000f5b2a80 != -0x2b3da790) goto LAB_078f759e;
LAB_078f755b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f759e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0797eec0(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f755b;
LAB_078f759e:
    func_0x0797eec0(&lStack_d0,param_1,&UNK_01463fb3,0x15);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2ac0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2ac0), iVar11 != 0)) {
      func_0x0797e9d0();
      func_0x0410844d(&DAT_0f5b2ac0);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_0797fc90;
    puStack_1f8 = &UNK_0797fca0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x0797fa20(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f7892:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f7892;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2aa0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2aa0), iVar10 != 0)) {
      func_0x0797e8c0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2a20,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2aa0);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2a20 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f7940;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2a20 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f7940:
      puVar12 = &DAT_0f5b2a20;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0144c2a3),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2ac0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2ac0), iVar11 != 0)) {
      func_0x0797e9d0();
      func_0x0410844d(&DAT_0f5b2ac0);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2aa0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2aa0), iVar11 != 0)) {
      func_0x0797e8c0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2a20,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2aa0);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2a20 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f7ab0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2a20 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f7ab0:
      uStack_1d8 = (long *)&DAT_0f5b2a20;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0ef44b00;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_048b3f30;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_048b2190;
    puStack_200 = &UNK_0797fcf0;
    puStack_1f8 = &UNK_0797feb0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0797fa20(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f7d6a:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f7d6a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  func_0x07cab540(param_1);
  if ((DAT_0f5b2b58 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2b58), iVar11 != 0)) {
    func_0x07980140();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2ad8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2b58);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2ad8 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f7de0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2ad8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f7de0:
    puVar12 = &DAT_0f5b2ad8;
    if (iRam000000000f5b2b38 != -0x2b3da790) goto LAB_078f7e4e;
LAB_078f7e0b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f7e4e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07980750(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f7e0b;
LAB_078f7e4e:
    func_0x07980750(&lStack_d0,param_1,&UNK_0134500f,0x1a);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2b78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2b78), iVar11 != 0)) {
      func_0x07980250();
      func_0x0410844d(&DAT_0f5b2b78);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07981520;
    puStack_1f8 = &UNK_07981530;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x079812b0(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f8142:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f8142;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2b58 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2b58), iVar10 != 0)) {
      func_0x07980140();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2ad8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2b58);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2ad8 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f81f0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2ad8 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f81f0:
      puVar12 = &DAT_0f5b2ad8;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01396157),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2b78 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2b78), iVar11 != 0)) {
      func_0x07980250();
      func_0x0410844d(&DAT_0f5b2b78);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2b58 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2b58), iVar11 != 0)) {
      func_0x07980140();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2ad8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2b58);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2ad8 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f8360;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2ad8 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f8360:
      uStack_1d8 = (long *)&DAT_0f5b2ad8;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0f7d80;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_077e83c0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_077e83d0;
    puStack_200 = &UNK_07981580;
    puStack_1f8 = &UNK_079816e0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    iVar11 = puStack_1d0[7];
    if (iVar11 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_1d0 + 4) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != puStack_1d0[6]) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != *(long *)(puStack_1d0 + 2)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f85fa:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (iVar11 == 1) {
        piVar14 = *(int **)(*(long *)(*(long *)(puStack_1d0 + 4) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != puStack_1d0[6]) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f85fa;
      }
      if (iVar11 == 0) {
        *(uint *)(*(long *)(puStack_1d0 + 4) + 0x18) =
             *(uint *)(*(long *)(puStack_1d0 + 4) + 0x18) | 0x40000;
      }
    }
    func_0x079812b0(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f86aa:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f86aa;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  func_0x07bed8a0(param_1);
  if ((DAT_0f5b2c10 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2c10), iVar11 != 0)) {
    func_0x079818b0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2b90,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2c10);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2b90 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f8720;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2b90 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f8720:
    puVar12 = &DAT_0f5b2b90;
    if (iRam000000000f5b2bf0 != -0x2b3da790) goto LAB_078f878e;
LAB_078f874b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f878e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07981cf0(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f874b;
LAB_078f878e:
    func_0x07981cf0(&lStack_d0,param_1,&UNK_0143144b,0x12);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2c30 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2c30), iVar11 != 0)) {
      func_0x079819c0();
      func_0x0410844d(&DAT_0f5b2c30);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07982a80;
    puStack_1f8 = &UNK_07982a90;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07982810(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f8a82:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f8a82;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2c10 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2c10), iVar10 != 0)) {
      func_0x079818b0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2b90,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2c10);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2b90 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f8b30;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2b90 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f8b30:
      puVar12 = &DAT_0f5b2b90;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012f6036),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2c30 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2c30), iVar11 != 0)) {
      func_0x079819c0();
      func_0x0410844d(&DAT_0f5b2c30);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2c10 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2c10), iVar11 != 0)) {
      func_0x079818b0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2b90,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2c10);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2b90 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f8ca0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2b90 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f8ca0:
      uStack_1d8 = (long *)&DAT_0f5b2b90;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f011f18;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_05f27580;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_05f23890;
    puStack_200 = &UNK_07982ae0;
    puStack_1f8 = &UNK_07982c50;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x07982810(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078f8f5a:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f8f5a;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  if ((DAT_0f5b2cc8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2cc8), iVar11 != 0)) {
    func_0x07982ee0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2c48,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2cc8);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2c48 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f8fc0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2c48 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f8fc0:
    puVar12 = &DAT_0f5b2c48;
    if (iRam000000000f5b2ca8 != -0x2b3da790) goto LAB_078f902e;
LAB_078f8feb:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f902e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    FUN_079832f0(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f8feb;
LAB_078f902e:
    FUN_079832f0(&lStack_d0,param_1,&UNK_01276e79,0x14);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2ce8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2ce8), iVar11 != 0)) {
      func_0x07982ff0();
      func_0x0410844d(&DAT_0f5b2ce8);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_07984070;
    puStack_1f8 = &UNK_07984080;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07983e00(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f9322:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f9322;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2cc8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2cc8), iVar10 != 0)) {
      func_0x07982ee0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2c48,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2cc8);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2c48 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f93d0;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2c48 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f93d0:
      puVar12 = &DAT_0f5b2c48;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0134522a),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2ce8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2ce8), iVar11 != 0)) {
      func_0x07982ff0();
      func_0x0410844d(&DAT_0f5b2ce8);
    }
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2cc8 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2cc8), iVar11 != 0)) {
      func_0x07982ee0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2c48,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2cc8);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2c48 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f9540;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2c48 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f9540:
      uStack_1d8 = (long *)&DAT_0f5b2c48;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0ee2f8;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_07920050;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_0651f3e0;
    puStack_200 = &UNK_079840d0;
    puStack_1f8 = &UNK_07984230;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x07983e00(&uStack_240,puStack_1d0,&plStack_1c0);
    lVar17 = uStack_108;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f97fa:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f97fa;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    iVar11 = (int)uStack_e0;
    uVar7 = uStack_e0._4_4_;
    func_0x048b0bc0(&plStack_1c0);
    if ((DAT_0f5b2cc8 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2cc8), iVar10 != 0)) {
      func_0x07982ee0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2c48,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2cc8);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2c48 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f9880;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2c48 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f9880:
      puVar12 = &DAT_0f5b2c48;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0134522a),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (lVar17 == 0) {
      uStack_1d8 = (long *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      lVar17 = (long)uStack_1d8;
    }
    *(undefined1 *)(*(long *)(lVar17 + 0x58) + 0xa8) = 1;
    param_1 = lStack_90;
  }
  func_0x078210b0(param_1);
  if ((DAT_0f5b2d80 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2d80), iVar11 != 0)) {
    func_0x079844c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2d00,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2d80);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2d00 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078f9980;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2d00 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078f9980:
    puVar12 = &DAT_0f5b2d00;
    if (iRam000000000f5b2d60 != -0x2b3da790) goto LAB_078f99ee;
LAB_078f99ab:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078f99ee;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07984910(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078f99ab;
LAB_078f99ee:
    func_0x07984910(&lStack_d0,param_1,&UNK_013e3903,0x13);
  }
  if (cStack_a0 == '\0') {
    uStack_a8 = 0xd155d06d00000002;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_188 = (undefined *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_168._4_4_ = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_168 = (long *)CONCAT44(uStack_168._4_4_,0x3f600000);
    func_0x048afb10(&puStack_198,8);
    uVar5 = _uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    _uStack_130 = CONCAT62(stack0xfffffffffffffed2,0xff00);
    uVar6 = _uStack_130;
    uStack_12b = SUB83(uVar5,5);
    uStack_130._0_4_ = (uint)uVar6;
    uStack_130 = (uint5)(uint)uStack_130;
    uVar13 = (ulong)_uStack_128 >> 0x28;
    uStack_128._0_4_ = (uint)_uStack_128 & 0xffffff00;
    uStack_128 = (uint5)(uint)uStack_128;
    _uStack_128 = CONCAT35((int3)uVar13,uStack_128);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f0eca10;
    if (uStack_1d8 != (long *)0x0) {
      lVar17 = *uStack_1d8;
      uStack_1d8 = puVar15;
      (**(code **)(lVar17 + 8))();
      puVar15 = uStack_1d8;
    }
    uStack_1d8 = puVar15;
    if (((ulong)uStack_1b0 & 1) != 0) {
      func_0x0412a280(lStack_1a0,(ulong)uStack_1b0 & 0xfffffffffffffffe);
    }
    uStack_1b0 = (undefined *)CONCAT26(uStack_1b0._6_2_,0x6570795408);
    if ((DAT_0f5b2da0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2da0), iVar11 != 0)) {
      func_0x079845d0();
      func_0x0410844d(&DAT_0f5b2da0);
    }
    uStack_240 = uStack_a8._4_4_;
    lStack_238 = 0;
    uStack_230 = 3;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_079787d0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &UNK_07974440;
    puStack_200 = &UNK_079856a0;
    puStack_1f8 = &UNK_079856b0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(&uStack_c8,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    func_0x07985430(&uStack_240,&uStack_108,&uStack_1d8);
    cVar8 = cStack_a0;
    uVar5 = uStack_a8;
    lVar17 = lStack_d0;
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_078f9ce2:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078f9ce2;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x90000;
      }
    }
    uStack_88 = CONCAT44(uStack_c4,uStack_c8);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    iVar11 = (int)uStack_a8;
    uVar7 = uStack_a8._4_4_;
    func_0x048b0bc0(&uStack_1d8);
    if ((DAT_0f5b2d80 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2d80), iVar10 != 0)) {
      func_0x079844c0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2d00,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2d80);
    }
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2d00 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f9d90;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2d00 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f9d90:
      puVar12 = &DAT_0f5b2d00;
    }
    else {
      puVar12 = (undefined *)plVar16[2];
    }
    if ((1 < iVar11 - 1U) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014175b4),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar15 = (undefined8 *)FUN_048b0c90(lVar17 + 0x18,puVar12,uVar7,1);
    if (puVar15 == (undefined8 *)0x0) {
      uStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&uStack_1d8);
      puVar15 = uStack_1d8;
    }
    *(undefined1 *)(puVar15[0xb] + 0xa8) = 4;
    uStack_108 = lVar17;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    uStack_f8 = (undefined4)uStack_80;
    uStack_f4 = uStack_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uVar5;
    cStack_d8 = cVar8;
    if ((DAT_0f5b2da0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2da0), iVar11 != 0)) {
      func_0x079845d0();
      func_0x0410844d(&DAT_0f5b2da0);
    }
    param_1 = lStack_90;
    lVar17 = uStack_108;
    uStack_e0 = 0xd147f96a00000001;
    if ((DAT_0f5b2d80 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2d80), iVar11 != 0)) {
      func_0x079844c0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b2d00,0xf53dab8);
      func_0x0410844d(&DAT_0f5b2d80);
    }
    puStack_1d0 = (undefined4 *)(lVar17 + 0x18);
    plVar16 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5b2d00 + 4)) * 8);
    do {
      lVar19 = *plVar16;
      if (lVar19 == -1) goto LAB_078f9f00;
      plVar16 = (long *)(*(long *)(lVar17 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5b2d00 + 4)
            );
    if (plVar16 == *(long **)(lVar17 + 0x38)) {
LAB_078f9f00:
      uStack_1d8 = (long *)&DAT_0f5b2d00;
    }
    else {
      uStack_1d8 = (long *)plVar16[2];
    }
    func_0x0ed621a0(&uStack_1d8,uStack_e0._4_4_);
    uStack_1d8 = (long *)CONCAT62(uStack_1d8._2_6_,1);
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    puStack_198 = (undefined *)CONCAT17(puStack_198._7_1_,0x65756c61560a);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = (long *)0x0;
    lStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x3f600000);
    puStack_1d0 = &uStack_100;
    func_0x048afb10(&puStack_180,8);
    _uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    _uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar16 = (long)&UNK_0f0124a8;
    if (plStack_1c0 != (long *)0x0) {
      lVar17 = *plStack_1c0;
      plStack_1c0 = plVar16;
      (**(code **)(lVar17 + 8))();
      plVar16 = plStack_1c0;
    }
    plStack_1c0 = plVar16;
    uStack_240 = (uint)uStack_1c8;
    lStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = (long *)0x1;
    uStack_220 = 0;
    puStack_218 = &UNK_05da29c0;
    puStack_210 = &SUB_048b06d0;
    puStack_208 = &SUB_05da26d0;
    puStack_200 = &UNK_07985700;
    puStack_1f8 = &UNK_07985870;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x048b05a0(puStack_1d0,&uStack_240);
    plVar16 = plStack_1e0;
    if (plStack_1e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e0 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x07985430(&uStack_240,puStack_1d0,&plStack_1c0);
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
      iVar11 = *piVar14;
      while (iVar11 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar11 = *piVar14;
      }
      lVar17 = *(long *)(piVar14 + 0xc);
      while (lVar17 != lStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar17 = *(long *)(piVar14 + 0xc);
      }
LAB_078fa1ba:
      piVar14[4] = piVar14[4] | (int)uStack_1d8 << 0x10;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
        iVar11 = *piVar14;
        while (iVar11 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar11 = *piVar14;
        }
        goto LAB_078fa1ba;
      }
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | (int)uStack_1d8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1c0);
  }
  if ((DAT_0f5b2e38 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2e38), iVar11 != 0)) {
    func_0x07985b00();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2db8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2e38);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b2db8 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078fa220;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5b2db8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_078fa220:
    puVar12 = &DAT_0f5b2db8;
    if (iRam000000000f5b2e18 != -0x2b3da790) goto LAB_078fa28e;
LAB_078fa24b:
    lVar17 = *(long *)(puVar12 + 0x68);
    if (lVar17 == 0) goto LAB_078fa28e;
    bVar23 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar19 = lVar17 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar23) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x07986d30(&lStack_d0,param_1,lVar19,uVar13);
  }
  else {
    puVar12 = (undefined *)plVar16[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_078fa24b;
LAB_078fa28e:
    func_0x07986d30(&lStack_d0,param_1,&UNK_014cdd9c,0xd);
  }
  if (cStack_a0 != '\0') {
    return;
  }
  func_0x07987890(&uStack_1d8,&lStack_d0,&UNK_012f5e8c,2);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar16 = (long)&UNK_0f012080;
  if (plStack_1c0 != (long *)0x0) {
    lVar17 = *plStack_1c0;
    plStack_1c0 = plVar16;
    (**(code **)(lVar17 + 8))();
    plVar16 = plStack_1c0;
  }
  plStack_1c0 = plVar16;
  uStack_240 = (uint)uStack_1c8;
  lStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = (long *)0x1;
  uStack_220 = 0;
  puStack_218 = &UNK_05dd3ca0;
  puStack_210 = &SUB_048b06d0;
  puStack_208 = &UNK_05dd3990;
  puStack_200 = &UNK_07987e40;
  puStack_1f8 = &UNK_07987fa0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  func_0x048b05a0(puStack_1d0,&uStack_240);
  plVar16 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1e0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x07987b40(&uStack_1d8);
  uVar5 = uStack_a8;
  uStack_88 = CONCAT44(uStack_c4,uStack_c8);
  uStack_80 = CONCAT44(uStack_bc,uStack_c0);
  uStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  iVar11 = (int)uStack_a8;
  uVar7 = uStack_a8._4_4_;
  func_0x048b0bc0(&plStack_1c0);
  if ((DAT_0f5b2e38 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5b2e38), iVar10 != 0)) {
    func_0x07985b00();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b2db8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b2e38);
  }
  plVar16 = (long *)(*(long *)(lStack_d0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_d0 + 0x20) - *(long *)(lStack_d0 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f5b2db8 + 4)) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_078fa491;
    plVar16 = (long *)(*(long *)(lStack_d0 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lStack_d0 + 0x30) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f5b2db8 + 4));
  if (plVar16 == *(long **)(lStack_d0 + 0x38)) {
LAB_078fa491:
    puVar12 = &DAT_0f5b2db8;
  }
  else {
    puVar12 = (undefined *)plVar16[2];
  }
  if ((1 < iVar11 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011bd3a2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar17 = FUN_048b0c90(lStack_d0 + 0x18,puVar12,uVar7,1);
  if (lVar17 == 0) {
    uStack_1d8 = (long *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_1d8);
    lVar17 = (long)uStack_1d8;
  }
  *(undefined1 *)(*(long *)(lVar17 + 0x58) + 0xa8) = 1;
  uStack_108 = lStack_d0;
  uStack_100 = (undefined4)uStack_88;
  uStack_fc = uStack_88._4_4_;
  uStack_f8 = (undefined4)uStack_80;
  uStack_f4 = uStack_80._4_4_;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uStack_e8 = uStack_70;
  uStack_e4 = uStack_6c;
  uStack_e0 = uVar5;
  cStack_d8 = cStack_a0;
  if ((DAT_0f5b2e88 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2e88), iVar11 != 0)) {
    func_0x07988360();
    func_0x0410844d(&DAT_0f5b2e88);
  }
  if ((DAT_0f5b2e88 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5b2e88), iVar11 != 0)) {
    func_0x07988360();
    func_0x0410844d(&DAT_0f5b2e88);
  }
  uStack_1d8 = (long *)&DAT_0f5b2e70;
  puStack_1d0 = (undefined4 *)CONCAT44(puStack_1d0._4_4_,_DAT_0f5b2e74);
  uStack_1c8 = 0;
  plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,0x80);
  uStack_1b8 = 0x28;
  uStack_1b0 = &UNK_079882a0;
  puStack_1a8 = &UNK_079883e0;
  lStack_1a0 = 0;
  puStack_198 = &UNK_07988900;
  uStack_190 = 9;
  puStack_188 = &UNK_05e26240;
  puStack_180 = &UNK_07988990;
  uStack_178 = uStack_178 & 0xffffffff00000000;
  uStack_170 = 0;
  uStack_168 = (long *)0x0;
  lStack_160 = 0;
  func_0x048aee30(&uStack_240,lStack_d0 + 0x18,&uStack_1d8,0xdb5f58c7);
  lVar17 = lStack_160;
  lStack_160 = 0;
  if (lVar17 != 0) {
    func_0x048ae940(lVar17);
    func_0x0412a280(lVar17,0x78);
  }
  plVar16 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar16);
    }
  }
  if (uStack_228._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
    iVar11 = *piVar14;
    while (iVar11 != (int)uStack_228) {
      piVar14 = piVar14 + 0x16;
      iVar11 = *piVar14;
    }
    lVar17 = *(long *)(piVar14 + 0xc);
    while (lVar17 != lStack_238) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar17 = *(long *)(piVar14 + 0xc);
    }
  }
  else {
    if (uStack_228._4_4_ != 1) {
      if (uStack_228._4_4_ == 0) {
        puVar22 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar22 = *puVar22 | 0x10000;
      }
      goto LAB_078fa75e;
    }
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
    iVar11 = *piVar14;
    while (iVar11 != (int)uStack_228) {
      piVar14 = piVar14 + 0x1a;
      iVar11 = *piVar14;
    }
  }
  *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 1;
LAB_078fa75e:
  uStack_1c8 = CONCAT44(uStack_22c,uStack_230);
  plStack_1c0 = uStack_228;
  uStack_1d8 = (long *)CONCAT44(uStack_23c,uStack_240);
  puStack_1d0 = (undefined4 *)lStack_238;
  if ((DAT_0f5af3d0 == '\0') && (iVar11 = FUN_04108328(&DAT_0f5af3d0), iVar11 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  auStack_60[0] = _DAT_0f5af3bc;
  plStack_50 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plStack_50 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&UNK_0f0e9768;
  plStack_58 = plStack_50 + 3;
  plStack_50[3] = (long)&UNK_07974380;
  plStack_50[4] = 0x6570795408;
  plStack_50[5] = 0;
  plStack_50[6] = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048afd20(&uStack_1d8,auStack_60);
  plVar16 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x07987890(&uStack_1d8,&uStack_108,&UNK_012a865b,7);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar16 = (long)&UNK_0f0ed078;
  if (plStack_1c0 != (long *)0x0) {
    lVar17 = *plStack_1c0;
    plStack_1c0 = plVar16;
    (**(code **)(lVar17 + 8))();
    plVar16 = plStack_1c0;
  }
  plStack_1c0 = plVar16;
  uStack_240 = (uint)uStack_1c8;
  lStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = (long *)0x1;
  uStack_220 = 0;
  puStack_218 = &UNK_07993380;
  puStack_210 = &SUB_048b06d0;
  puStack_208 = &UNK_079882a0;
  puStack_200 = &UNK_07993440;
  puStack_1f8 = &UNK_07993680;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  func_0x048b05a0(puStack_1d0,&uStack_240);
  plVar16 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1e0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x07987b40(&uStack_1d8);
  func_0x048b0bc0(&plStack_1c0);
  return;
}


