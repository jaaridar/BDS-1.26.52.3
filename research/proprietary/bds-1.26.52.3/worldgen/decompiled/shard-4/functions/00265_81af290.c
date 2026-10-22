/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82af290 (ELF vaddr 0x81af290)
 * Label: caller-of-callee
 * Body:  [[082af290, 082b1f91] [082b1fa0, 082b2707]]
 * Ghidra: FUN_082af290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082af290(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  bool bVar20;
  uint auStack_1d0 [2];
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  char cStack_138;
  uint uStack_134;
  char cStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined1 *puStack_100;
  uint uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined2 uStack_48;
  undefined2 uStack_46;
  uint uStack_44;
  uint uStack_40;
  undefined1 uStack_3c;
  
  if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
    func_0x08367cb0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
    func_0x0410844d(&DAT_0f5ceb30);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
  do {
    lVar3 = *plVar14;
    if (lVar3 == -1) goto LAB_082af300;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4));
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_082af300:
    puVar11 = &DAT_0f5ceab0;
    if (iRam000000000f5ceb10 != -0x2b3da790) goto LAB_082af355;
LAB_082af32b:
    lVar3 = *(long *)(puVar11 + 0x68);
    if (lVar3 == 0) goto LAB_082af355;
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar3 + 9);
    if (bVar20) {
      puVar11 = *(undefined **)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_082af32b;
LAB_082af355:
    puVar11 = &UNK_0147d275;
    uVar17 = 10;
  }
  func_0x083680f0(&lStack_168,param_1,puVar11,uVar17);
  uStack_134 = uStack_134 & 0xffffff00;
  cStack_130 = '\0';
  if (cStack_138 == '\0') {
    func_0x0836b970(&puStack_108,&UNK_01291579,0xc);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar3 = (long)&uStack_e0 + 1;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    uVar6 = (int)uStack_140;
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') &&
       (uStack_140._0_4_ = uVar6, iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c080;
    puStack_188 = &UNK_0836c090;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082af5df:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082af5df;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    lVar2 = (long)&uStack_140 + 4;
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082af671;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082af671:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_013b28ff,0x15);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c2a0;
    puStack_188 = &UNK_0836c2b0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082af9af:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082af9af;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082afa41;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082afa41:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_014b3cfe,0x15);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c300;
    puStack_188 = &UNK_0836c310;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082afd7f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082afd7f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082afe11;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082afe11:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_0120dc7f,0xb);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c360;
    puStack_188 = &UNK_0836c370;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b014f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b014f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b01e1;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b01e1:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_0147e6f6,0x19);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c3c0;
    puStack_188 = &UNK_0836c3d0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b051f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b051f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b05b1;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b05b1:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_01465a9b,0x27);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c420;
    puStack_188 = &UNK_0836c430;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b08ef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b08ef;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b0981;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b0981:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_012c3d7f,0x27);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c480;
    puStack_188 = &UNK_0836c490;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b0cbf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b0cbf;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b0d51;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b0d51:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_0144d88c,0x1f);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c4e0;
    puStack_188 = &UNK_0836c4f0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b108f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b108f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b1121;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b1121:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_0120dc8b,0x29);
    uVar17 = uStack_e0 >> 1 & 0x7f;
    lVar16 = lVar3;
    if ((uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar16 = lStack_d0;
    }
    if (uVar17 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + 3 + uVar18) ^
               ((int)*(char *)(lVar16 + 2 + uVar18) ^
               ((int)*(char *)(lVar16 + 1 + uVar18) ^
               ((int)*(char *)(lVar16 + uVar18) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_140._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c540;
    puStack_188 = &UNK_0836c550;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar16 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_082b145f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b145f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar16 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar4 = *plVar14;
      if (lVar4 == -1) goto LAB_082b14f1;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_082b14f1:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
    func_0x0836b970(&puStack_108,&UNK_01278617,0x29);
    uVar17 = (ulong)((byte)uStack_e0 >> 1);
    if (((byte)uStack_e0 & 1) != 0) {
      uVar17 = uStack_d8;
      lVar3 = lStack_d0;
    }
    if (uVar17 == 0) {
      uVar15 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar15 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar15 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar15 = ((int)*(char *)(lVar3 + 3 + uVar18) ^
                   ((int)*(char *)(lVar3 + 2 + uVar18) ^
                   ((int)*(char *)(lVar3 + 1 + uVar18) ^
                   ((int)*(char *)(lVar3 + uVar18) ^ uVar15) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uVar15 = ((int)*(char *)(lVar3 + uVar18 + uVar17) ^ uVar15) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_140 = CONCAT44(uVar15,2);
    if ((DAT_0f5ceb50 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb50), iVar9 != 0)) {
      func_0x08367dc0();
      func_0x0410844d(&DAT_0f5ceb50);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0836bfc0;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08367bf0;
    puStack_190 = &UNK_0836c5a0;
    puStack_188 = &UNK_0836c5b0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    func_0x048b05a0(auStack_160,auStack_1d0);
    plVar14 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    func_0x0836bd50(auStack_1d0,&uStack_128,&puStack_108);
    if (uStack_1b8._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_1b8) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar3 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar3 != plStack_1c8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar3 = *(long *)(piVar13 + 0xc);
      }
LAB_082b181f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_1b8) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_082b181f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18U) = *(uint *)((long)plStack_1c0 + 0x18U) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0836c0e0(auStack_1d0,&lStack_168);
    }
    uVar15 = uStack_134;
    lVar3 = lStack_168;
    if ((DAT_0f5ceb30 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ceb30), iVar9 != 0)) {
      func_0x08367cb0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ceab0,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceb30);
    }
    plVar14 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5ceab0 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_082b18b0;
      plVar14 = (long *)(*(long *)(lVar3 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5ceab0 + 4))
    ;
    if (plVar14 == *(long **)(lVar3 + 0x38)) {
LAB_082b18b0:
      puVar11 = &DAT_0f5ceab0;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar5) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147e933),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar2,lVar2,auStack_1d0);
    func_0x048b0bc0(&puStack_108);
  }
  if ((DAT_0f5ce9c0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ce9c0), iVar9 != 0)) {
    func_0x083657c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce940,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce9c0);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ce940 + 4)) * 8);
  do {
    lVar3 = *plVar14;
    if (lVar3 == -1) goto LAB_082b19b0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ce940 + 4));
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_082b19b0:
    puVar11 = &DAT_0f5ce940;
    if (iRam000000000f5ce9a0 != -0x2b3da790) goto LAB_082b1a1a;
LAB_082b19db:
    lVar3 = *(long *)(puVar11 + 0x68);
    if (lVar3 == 0) goto LAB_082b1a1a;
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar16 = lVar3 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0836c600(&lStack_168,param_1,lVar16,uVar17);
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_082b19db;
LAB_082b1a1a:
    func_0x0836c600(&lStack_168,param_1,&UNK_014b3d14,0x17);
  }
  if (cStack_138 != '\0') {
    return;
  }
  if ((DAT_0f5ce928 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ce928), iVar9 != 0)) {
    func_0x08365680();
    func_0x0410844d(&DAT_0f5ce928);
  }
  lVar3 = lStack_168;
  uStack_140 = 0x5ef20f00000001;
  if ((DAT_0f5ce9c0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ce9c0), iVar9 != 0)) {
    func_0x083657c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce940,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce9c0);
  }
  puStack_100 = (undefined1 *)(lVar3 + 0x18);
  plVar14 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ce940 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_082b1ad0;
    plVar14 = (long *)(*(long *)(lVar3 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5ce940 + 4));
  if (plVar14 == *(long **)(lVar3 + 0x38)) {
LAB_082b1ad0:
    puStack_108 = &DAT_0f5ce940;
  }
  else {
    puStack_108 = (undefined *)plVar14[2];
  }
  func_0x0ed621a0(&puStack_108,uStack_140._4_4_);
  puStack_108 = (undefined *)CONCAT62(puStack_108._2_6_,1);
  uStack_f8 = uStack_140._4_4_;
  plStack_f0 = (long *)0x0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0x7375746174530c;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0x3f600000;
  puStack_100 = auStack_160;
  func_0x048afb10(&lStack_b0,8);
  uStack_58 = 0;
  lStack_50 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_48 = 0xff00;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_3c = 0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f114d20;
  if (plStack_f0 != (long *)0x0) {
    lVar3 = *plStack_f0;
    plStack_f0 = plVar14;
    (**(code **)(lVar3 + 8))();
    plVar14 = plStack_f0;
  }
  plStack_f0 = plVar14;
  auStack_1d0[0] = uStack_f8;
  plStack_1c8 = (long *)0x0;
  plStack_1c0 = (long *)((ulong)plStack_1c0 & 0xffffffff00000000);
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  puStack_1a8 = &UNK_0836bfc0;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_08367bf0;
  puStack_190 = &UNK_0836d110;
  puStack_188 = &UNK_0836d270;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  func_0x048b05a0(puStack_100,auStack_1d0);
  plVar14 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar14);
    }
  }
  puVar7 = puStack_100;
  if ((DAT_0f550a20 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_1d0[0] = _DAT_0f550a0c;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar3 = lStack_e8;
  plVar1 = plStack_f0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_1c8 = plVar14 + 3;
  plStack_f0 = (long *)0x0;
  lStack_e8 = 0;
  plVar14[3] = (long)plVar1;
  plVar14[4] = lVar3;
  plVar14[7] = lStack_d0;
  plVar14[5] = uStack_e0;
  plVar14[6] = uStack_d8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  plVar14[10] = lStack_b8;
  plVar14[8] = lStack_c8;
  plVar14[9] = lStack_c0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  plVar14[0xb] = lStack_b0;
  plVar14[0xc] = lStack_a8;
  plVar14[0xd] = lStack_a0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  plVar14[0xe] = lStack_98;
  plVar14[0xf] = lStack_90;
  plVar14[0x10] = lStack_88;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_80;
  plVar14[0x12] = lStack_78;
  plVar14[0x13] = lStack_70;
  plVar14[0x14] = lStack_68;
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  plVar14[0x17] = lStack_50;
  *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_60;
  *(undefined4 *)((long)plVar14 + 0xac) = uStack_60._4_4_;
  *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_58;
  *(undefined4 *)((long)plVar14 + 0xb4) = uStack_58._4_4_;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_3c,CONCAT43(uStack_40,uStack_44._1_3_));
  plVar14[0x18] = CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  plStack_1c0 = plVar14;
  func_0x048afd20(puVar7,auStack_1d0);
  plVar14 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar3 = *(long *)(puVar7 + 0x10);
  iVar9 = *(int *)(puVar7 + 0x1c);
  if (iVar9 == 2) {
    piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(puVar7 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar9 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar7 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (int)puStack_108 << 0x10;
      }
      goto LAB_082b1fad;
    }
    piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(puVar7 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar9 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | (int)puStack_108 << 0x10;
LAB_082b1fad:
  iVar9 = (int)uStack_140;
  uVar6 = uStack_140._4_4_;
  func_0x048b0bc0(&plStack_f0);
  if ((DAT_0f5ce9c0 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5ce9c0), iVar10 != 0)) {
    func_0x083657c0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ce940,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce9c0);
  }
  plVar14 = (long *)(*(long *)(lStack_168 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_168 + 0x20) -
                                         *(long *)(lStack_168 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5ce940 + 4)) * 8);
  do {
    lVar3 = *plVar14;
    if (lVar3 == -1) goto LAB_082b2030;
    plVar14 = (long *)(*(long *)(lStack_168 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lStack_168 + 0x30) + 8 + lVar3 * 0x18) !=
           *(uint *)(_DAT_0f5ce940 + 4));
  if (plVar14 == *(long **)(lStack_168 + 0x38)) {
LAB_082b2030:
    puVar11 = &DAT_0f5ce940;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013633ce),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_108 = (undefined *)FUN_048b0c90(lStack_168 + 0x18,puVar11,uVar6,1);
  if (puStack_108 == (undefined *)0x0) {
    puStack_108 = (undefined *)0x0;
    puStack_100 = (undefined1 *)0x0;
    func_0x048b0d20(&puStack_108);
  }
  *(undefined1 *)(*(long *)(puStack_108 + 0x58) + 0xa8) = 6;
  return;
}


