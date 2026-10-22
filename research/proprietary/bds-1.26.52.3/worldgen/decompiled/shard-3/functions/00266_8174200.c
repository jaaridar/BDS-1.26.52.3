/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8274200 (ELF vaddr 0x8174200)
 * Label: caller-of-callee
 * Body:  [[08274200, 082754b1] [082754c0, 082758c8]]
 * Ghidra: FUN_08274200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08274200(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  bool bVar19;
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
  undefined *puStack_128;
  undefined1 *puStack_120;
  uint uStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined2 uStack_68;
  undefined2 uStack_66;
  uint uStack_64;
  uint uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  long *plStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5ccfd0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccfd0), iVar8 != 0)) {
    func_0x08308e40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccf50,0xf53dab8);
    func_0x0410844d(&DAT_0f5ccfd0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ccf50 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_08274270;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5ccf50 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08274270:
    puVar10 = &DAT_0f5ccf50;
    if (iRam000000000f5ccfb0 != -0x2b3da790) goto LAB_082742c5;
LAB_0827429b:
    lVar2 = *(long *)(puVar10 + 0x68);
    if (lVar2 == 0) goto LAB_082742c5;
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar2 + 9);
    if (bVar19) {
      puVar10 = *(undefined **)(lVar2 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0827429b;
LAB_082742c5:
    puVar10 = &UNK_013b28ae;
    uVar16 = 0x1d;
  }
  func_0x08309280(&lStack_168,param_1,puVar10,uVar16);
  uStack_134 = uStack_134 & 0xffffff00;
  cStack_130 = '\0';
  if (cStack_138 == '\0') {
    func_0x0830cb00(&puStack_128,&UNK_014cf379,0x11);
    uVar16 = uStack_100 >> 1 & 0x7f;
    lVar2 = (long)&uStack_100 + 1;
    lVar15 = lVar2;
    if ((uStack_100 & 1) != 0) {
      uVar16 = uStack_f8;
      lVar15 = lStack_f0;
    }
    if (uVar16 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar15 + 3 + uVar17) ^
               ((int)*(char *)(lVar15 + 2 + uVar17) ^
               ((int)*(char *)(lVar15 + 1 + uVar17) ^
               ((int)*(char *)(lVar15 + uVar17) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar11 != 0) {
        uVar16 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar15 + uVar17 + uVar16) ^ uStack_140._4_4_) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar11 != uVar16);
      }
    }
    uStack_140._0_4_ = 2;
    uVar5 = (int)uStack_140;
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ccff0 == '\0') &&
       (uStack_140._0_4_ = uVar5, iVar8 = func_0x04108328(&DAT_0f5ccff0), iVar8 != 0)) {
      func_0x08308f50();
      func_0x0410844d(&DAT_0f5ccff0);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0830d100;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08308d80;
    puStack_190 = &UNK_0830d1c0;
    puStack_188 = &UNK_0830d1d0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    FUN_048b05a0(auStack_160,auStack_1d0);
    plVar13 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_48 = uStack_150;
    uStack_44 = uStack_14c;
    uStack_40 = uStack_148;
    uStack_3c = uStack_144;
    func_0x0830ce90(auStack_1d0,&uStack_58,&puStack_128);
    if (uStack_1b8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_1b8) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar15 != plStack_1c8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_0827454f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_1b8) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_0827454f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0830d220(auStack_1d0,&lStack_168);
    }
    uVar14 = uStack_134;
    lVar15 = lStack_168;
    if ((DAT_0f5ccfd0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccfd0), iVar8 != 0)) {
      func_0x08308e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccf50,0xf53dab8);
      func_0x0410844d(&DAT_0f5ccfd0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ccf50 + 4)) * 8);
    do {
      lVar3 = *plVar13;
      if (lVar3 == -1) goto LAB_082745e1;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ccf50 + 4))
    ;
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_082745e1:
      puVar10 = &DAT_0f5ccf50;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar18 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar18 != puVar4 && (*puVar18 != uVar14)); puVar18 = puVar18 + 0xe) {
    }
    if ((puVar18 == puVar4) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b3d65),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar18 + 2,(long)&uStack_140 + 4,(long)&uStack_140 + 4,auStack_1d0);
    func_0x048b0bc0(&puStack_128);
    func_0x0830cb00(&puStack_128,&UNK_0129154c,0x12);
    uVar16 = uStack_100 >> 1 & 0x7f;
    lVar15 = lVar2;
    if ((uStack_100 & 1) != 0) {
      uVar16 = uStack_f8;
      lVar15 = lStack_f0;
    }
    if (uVar16 == 0) {
      uStack_140._4_4_ = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_140._4_4_ = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar15 + 3 + uVar17) ^
               ((int)*(char *)(lVar15 + 2 + uVar17) ^
               ((int)*(char *)(lVar15 + 1 + uVar17) ^
               ((int)*(char *)(lVar15 + uVar17) ^ uStack_140._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar11 != 0) {
        uVar16 = 0;
        do {
          uStack_140._4_4_ =
               ((int)*(char *)(lVar15 + uVar17 + uVar16) ^ uStack_140._4_4_) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar11 != uVar16);
      }
    }
    uStack_140._0_4_ = 2;
    if ((DAT_0f5ccff0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccff0), iVar8 != 0)) {
      func_0x08308f50();
      func_0x0410844d(&DAT_0f5ccff0);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0830d100;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08308d80;
    puStack_190 = &UNK_0830d3e0;
    puStack_188 = &UNK_0830d3f0;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    FUN_048b05a0(auStack_160,auStack_1d0);
    plVar13 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_48 = uStack_150;
    uStack_44 = uStack_14c;
    uStack_40 = uStack_148;
    uStack_3c = uStack_144;
    func_0x0830ce90(auStack_1d0,&uStack_58,&puStack_128);
    if (uStack_1b8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_1b8) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar15 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar15 != plStack_1c8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar15 = *(long *)(piVar12 + 0xc);
      }
LAB_0827491f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_1b8) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_0827491f;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18) = *(uint *)((long)plStack_1c0 + 0x18) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0830d220(auStack_1d0,&lStack_168);
    }
    uVar14 = uStack_134;
    lVar15 = lStack_168;
    if ((DAT_0f5ccfd0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccfd0), iVar8 != 0)) {
      func_0x08308e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccf50,0xf53dab8);
      func_0x0410844d(&DAT_0f5ccfd0);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5ccf50 + 4)) * 8);
    do {
      lVar3 = *plVar13;
      if (lVar3 == -1) goto LAB_082749b1;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5ccf50 + 4))
    ;
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_082749b1:
      puVar10 = &DAT_0f5ccf50;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar18 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar18 != puVar4 && (*puVar18 != uVar14)); puVar18 = puVar18 + 0xe) {
    }
    if ((puVar18 == puVar4) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b3d65),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar18 + 2,(long)&uStack_140 + 4,(long)&uStack_140 + 4,auStack_1d0);
    func_0x048b0bc0(&puStack_128);
    func_0x0830cb00(&puStack_128,&UNK_013cabba,0xf);
    uVar16 = (ulong)((byte)uStack_100 >> 1);
    if (((byte)uStack_100 & 1) != 0) {
      uVar16 = uStack_f8;
      lVar2 = lStack_f0;
    }
    if (uVar16 == 0) {
      uVar14 = 0x811c9dc5;
    }
    else {
      uVar11 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uVar14 = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uVar14 = 0x811c9dc5;
        uVar17 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar2 + 3 + uVar17) ^
                   ((int)*(char *)(lVar2 + 2 + uVar17) ^
                   ((int)*(char *)(lVar2 + 1 + uVar17) ^
                   ((int)*(char *)(lVar2 + uVar17) ^ uVar14) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar11 != 0) {
        uVar16 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar2 + uVar17 + uVar16) ^ uVar14) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar11 != uVar16);
      }
    }
    uStack_140 = CONCAT44(uVar14,2);
    if ((DAT_0f5ccff0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccff0), iVar8 != 0)) {
      func_0x08308f50();
      func_0x0410844d(&DAT_0f5ccff0);
    }
    auStack_1d0[0] = uStack_140._4_4_;
    plStack_1c8 = (long *)0x0;
    plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,3);
    uStack_1b8 = 1;
    uStack_1b0 = 0;
    puStack_1a8 = &UNK_0830d100;
    puStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_08308d80;
    puStack_190 = &UNK_0830d440;
    puStack_188 = &UNK_0830d450;
    uStack_180 = 0;
    uStack_178 = 0;
    plStack_170 = (long *)0x0;
    FUN_048b05a0(auStack_160,auStack_1d0);
    plVar13 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar13);
      }
    }
    uStack_48 = uStack_150;
    uStack_44 = uStack_14c;
    uStack_40 = uStack_148;
    uStack_3c = uStack_144;
    func_0x0830ce90(auStack_1d0,&uStack_58,&puStack_128);
    if (uStack_1b8._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x60);
      iVar8 = *piVar12;
      while (iVar8 != (int)uStack_1b8) {
        piVar12 = piVar12 + 0x16;
        iVar8 = *piVar12;
      }
      lVar2 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar2 != plStack_1c8) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar2 = *(long *)(piVar12 + 0xc);
      }
LAB_08274cef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_1b8._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)plStack_1c0 + 0x78) + 0x48);
        iVar8 = *piVar12;
        while (iVar8 != (int)uStack_1b8) {
          piVar12 = piVar12 + 0x1a;
          iVar8 = *piVar12;
        }
        goto LAB_08274cef;
      }
      if (uStack_1b8._4_4_ == 0) {
        *(uint *)((long)plStack_1c0 + 0x18U) = *(uint *)((long)plStack_1c0 + 0x18U) | 0x90000;
      }
    }
    if (cStack_130 == '\0') {
      func_0x0830d220(auStack_1d0,&lStack_168);
    }
    uVar14 = uStack_134;
    lVar2 = lStack_168;
    if ((DAT_0f5ccfd0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccfd0), iVar8 != 0)) {
      func_0x08308e40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccf50,0xf53dab8);
      func_0x0410844d(&DAT_0f5ccfd0);
    }
    plVar13 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5ccf50 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_08274d70;
      plVar13 = (long *)(*(long *)(lVar2 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5ccf50 + 4))
    ;
    if (plVar13 == *(long **)(lVar2 + 0x38)) {
LAB_08274d70:
      puVar10 = &DAT_0f5ccf50;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar18 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar18 != puVar4 && (*puVar18 != uVar14)); puVar18 = puVar18 + 0xe) {
    }
    if ((puVar18 == puVar4) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b3d65),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
    func_0x05d9c620(puVar18 + 2,(long)&uStack_140 + 4,(long)&uStack_140 + 4,auStack_1d0);
    func_0x048b0bc0(&puStack_128);
  }
  if ((DAT_0f5cce60 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5cce60), iVar8 != 0)) {
    func_0x08306950();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccde0,0xf53dab8);
    func_0x0410844d(&DAT_0f5cce60);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ccde0 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_08274e70;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5ccde0 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08274e70:
    puVar10 = &DAT_0f5ccde0;
    if (iRam000000000f5cce40 != -0x2b3da790) goto LAB_08274eda;
LAB_08274e9b:
    lVar2 = *(long *)(puVar10 + 0x68);
    if (lVar2 == 0) goto LAB_08274eda;
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar15 = lVar2 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar2 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0830d4a0(&lStack_168,param_1,lVar15,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_08274e9b;
LAB_08274eda:
    func_0x0830d4a0(&lStack_168,param_1,&UNK_014cf38b,0x20);
  }
  if (cStack_138 != '\0') {
    return;
  }
  if ((DAT_0f5ccdc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ccdc8), iVar8 != 0)) {
    func_0x08306810();
    func_0x0410844d(&DAT_0f5ccdc8);
  }
  lVar2 = lStack_168;
  uStack_140 = 0x681b77d900000001;
  if ((DAT_0f5cce60 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5cce60), iVar8 != 0)) {
    func_0x08306950();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccde0,0xf53dab8);
    func_0x0410844d(&DAT_0f5cce60);
  }
  puStack_120 = (undefined1 *)(lVar2 + 0x18);
  plVar13 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ccde0 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_08274f90;
    plVar13 = (long *)(*(long *)(lVar2 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5ccde0 + 4));
  if (plVar13 == *(long **)(lVar2 + 0x38)) {
LAB_08274f90:
    puStack_128 = &DAT_0f5ccde0;
  }
  else {
    puStack_128 = (undefined *)plVar13[2];
  }
  func_0x0ed621a0(&puStack_128,uStack_140._4_4_);
  puStack_128 = (undefined *)CONCAT62(puStack_128._2_6_,1);
  uStack_118 = uStack_140._4_4_;
  plStack_110 = (long *)0x0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0x14;
  uStack_e7 = 0x5474656b636150;
  uStack_e0 = 0x79;
  uStack_df = 0x6570;
  uStack_dd = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0x3f600000;
  puStack_120 = auStack_160;
  func_0x048afb10(&lStack_d0,8);
  uStack_78 = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_68 = 0xff00;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_60 = uStack_60 & 0xffffff00;
  uStack_5c = 0;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f112468;
  if (plStack_110 != (long *)0x0) {
    lVar2 = *plStack_110;
    plStack_110 = plVar13;
    (**(code **)(lVar2 + 8))();
    plVar13 = plStack_110;
  }
  plStack_110 = plVar13;
  auStack_1d0[0] = uStack_118;
  plStack_1c8 = (long *)0x0;
  plStack_1c0 = (long *)((ulong)plStack_1c0 & 0xffffffff00000000);
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  puStack_1a8 = &UNK_0830d100;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_08308d80;
  puStack_190 = &UNK_0830dfb0;
  puStack_188 = &UNK_0830e110;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  FUN_048b05a0(puStack_120,auStack_1d0);
  plVar13 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar13);
    }
  }
  puVar6 = puStack_120;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_1d0[0] = _DAT_0f550a0c;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar2 = lStack_108;
  plVar1 = plStack_110;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef439d0;
  plStack_1c8 = plVar13 + 3;
  plStack_110 = (long *)0x0;
  lStack_108 = 0;
  plVar13[3] = (long)plVar1;
  plVar13[4] = lVar2;
  plVar13[7] = lStack_f0;
  plVar13[5] = uStack_100;
  plVar13[6] = uStack_f8;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  plVar13[10] = lStack_d8;
  plVar13[8] = CONCAT71(uStack_e7,uStack_e8);
  plVar13[9] = CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0)));
  uStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_dd = 0;
  uStack_dc = 0;
  lStack_d8 = 0;
  plVar13[0xb] = lStack_d0;
  plVar13[0xc] = lStack_c8;
  plVar13[0xd] = lStack_c0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  plVar13[0xe] = lStack_b8;
  plVar13[0xf] = lStack_b0;
  plVar13[0x10] = lStack_a8;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  *(undefined4 *)(plVar13 + 0x11) = uStack_a0;
  plVar13[0x12] = lStack_98;
  plVar13[0x13] = lStack_90;
  plVar13[0x14] = lStack_88;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  plVar13[0x17] = lStack_70;
  *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_80;
  *(undefined4 *)((long)plVar13 + 0xac) = uStack_80._4_4_;
  *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_78;
  *(undefined4 *)((long)plVar13 + 0xb4) = uStack_78._4_4_;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_5c,CONCAT43(uStack_60,uStack_64._1_3_));
  plVar13[0x18] = CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  plStack_1c0 = plVar13;
  func_0x048afd20(puVar6,auStack_1d0);
  plVar13 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar13);
    }
  }
  plVar13 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar13);
    }
  }
  lVar2 = *(long *)(puVar6 + 0x10);
  iVar8 = *(int *)(puVar6 + 0x1c);
  if (iVar8 == 2) {
    piVar12 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar8 = *piVar12;
    while (iVar8 != *(int *)(puVar6 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar8 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar6 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_128 << 0x10;
      }
      goto LAB_082754cd;
    }
    piVar12 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar8 = *piVar12;
    while (iVar8 != *(int *)(puVar6 + 0x18)) {
      piVar12 = piVar12 + 0x1a;
      iVar8 = *piVar12;
    }
  }
  piVar12[4] = piVar12[4] | (int)puStack_128 << 0x10;
LAB_082754cd:
  iVar8 = (int)uStack_140;
  uVar5 = uStack_140._4_4_;
  func_0x048b0bc0(&plStack_110);
  if ((DAT_0f5cce60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5cce60), iVar9 != 0)) {
    func_0x08306950();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ccde0,0xf53dab8);
    func_0x0410844d(&DAT_0f5cce60);
  }
  plVar13 = (long *)(*(long *)(lStack_168 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_168 + 0x20) -
                                         *(long *)(lStack_168 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5ccde0 + 4)) * 8);
  do {
    lVar2 = *plVar13;
    if (lVar2 == -1) goto LAB_08275540;
    plVar13 = (long *)(*(long *)(lStack_168 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_168 + 0x30) + 8 + lVar2 * 0x18) !=
           *(uint *)(_DAT_0f5ccde0 + 4));
  if (plVar13 == *(long **)(lStack_168 + 0x38)) {
LAB_08275540:
    puVar10 = &DAT_0f5ccde0;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  if ((1 < iVar8 - 1U) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013631e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_128 = (undefined *)func_0x048b0c90(lStack_168 + 0x18,puVar10,uVar5,1);
  if (puStack_128 == (undefined *)0x0) {
    puStack_128 = (undefined *)0x0;
    puStack_120 = (undefined1 *)0x0;
    FUN_048b0d20(&puStack_128);
  }
  *(undefined1 *)(*(long *)(puStack_128 + 0x58) + 0xa8) = 5;
  return;
}


