/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x81265f0 (ELF vaddr 0x80265f0)
 * Label: caller-of-callee
 * Body:  [[081265f0, 08127b90] [08127ba0, 081281a0] [081281b0, 08129277] [08129280, 0812a402]]
 * Ghidra: FUN_081265f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_081265f0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  bool bVar20;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  int *piStack_240;
  ulong uStack_238;
  long *plStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined *puStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  undefined8 uStack_190;
  undefined2 uStack_188;
  undefined1 uStack_184;
  undefined1 uStack_180;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined8 uStack_150;
  char cStack_148;
  uint uStack_144;
  char cStack_140;
  undefined8 uStack_138;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  char cStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  func_0x07be4b40();
  if ((DAT_0f5c8b00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b00), iVar8 != 0)) {
    func_0x081a6440();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8a80,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8b00);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8a80 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08126670;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8a80 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08126670:
    puVar9 = &DAT_0f5c8a80;
    if (iRam000000000f5c8ae0 != -0x2b3da790) goto LAB_081266c8;
LAB_0812669b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_081266c8;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar14 + 9);
    if (bVar20) {
      puVar9 = *(undefined **)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0812669b;
LAB_081266c8:
    puVar9 = &UNK_013b2689;
    uVar10 = 10;
  }
  func_0x081a6880(&uStack_178,param_1,puVar9,uVar10);
  uStack_144 = uStack_144 & 0xffffff00;
  cStack_140 = '\0';
  if (cStack_148 == '\0') {
    func_0x081aa100(&uStack_248,&UNK_011d9839,0xe);
    puVar9 = (undefined *)((ulong)uStack_220 >> 1 & 0x7f);
    lVar14 = (long)&uStack_220 + 1;
    lVar15 = lVar14;
    if (((ulong)uStack_220 & 1) != 0) {
      puVar9 = puStack_218;
      lVar15 = lStack_210;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_150._4_4_ = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + 3 + uVar18) ^
               ((int)*(char *)(lVar15 + 2 + uVar18) ^
               ((int)*(char *)(lVar15 + 1 + uVar18) ^
               ((int)*(char *)(lVar15 + uVar18) ^ uStack_150._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar10 != 0) {
        uVar17 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + uVar18 + uVar17) ^ uStack_150._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
      }
    }
    uStack_150._0_4_ = 2;
    uVar4 = (int)uStack_150;
    uStack_150._0_4_ = 2;
    if ((DAT_0f5c8b20 == '\0') &&
       (uStack_150._0_4_ = uVar4, iVar8 = func_0x04108328(&DAT_0f5c8b20), iVar8 != 0)) {
      func_0x081a6550();
      func_0x0410844d(&DAT_0f5c8b20);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081aa7c0;
    puStack_268 = &UNK_081aa7d0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081aa490(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_0812695f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0812695f;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18) = *(uint *)((long)plStack_2a0 + 0x18) | 0x90000;
      }
    }
    if (cStack_140 == '\0') {
      func_0x081aa820(&uStack_2b0,&uStack_178);
    }
    uVar16 = uStack_144;
    lVar15 = CONCAT44(uStack_174,uStack_178);
    if ((DAT_0f5c8b00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b00), iVar8 != 0)) {
      func_0x081a6440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8a80,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8b00);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c8a80 + 4)) * 8);
    do {
      lVar2 = *plVar13;
      if (lVar2 == -1) goto LAB_081269f1;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c8a80 + 4))
    ;
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_081269f1:
      puVar9 = &DAT_0f5c8a80;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01228e81),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,(long)&uStack_150 + 4,(long)&uStack_150 + 4,&uStack_2b0);
    func_0x048b0bc0(&uStack_248);
    func_0x081aa100(&uStack_248,&UNK_0144d516,0xe);
    puVar9 = (undefined *)((ulong)uStack_220 >> 1 & 0x7f);
    lVar15 = lVar14;
    if (((ulong)uStack_220 & 1) != 0) {
      puVar9 = puStack_218;
      lVar15 = lStack_210;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_150._4_4_ = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + 3 + uVar18) ^
               ((int)*(char *)(lVar15 + 2 + uVar18) ^
               ((int)*(char *)(lVar15 + 1 + uVar18) ^
               ((int)*(char *)(lVar15 + uVar18) ^ uStack_150._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar10 != 0) {
        uVar17 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + uVar18 + uVar17) ^ uStack_150._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
      }
    }
    uStack_150._0_4_ = 2;
    if ((DAT_0f5c8b20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b20), iVar8 != 0)) {
      func_0x081a6550();
      func_0x0410844d(&DAT_0f5c8b20);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081aa9e0;
    puStack_268 = &UNK_081aa9f0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081aa490(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_08126d2f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_08126d2f;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18) = *(uint *)((long)plStack_2a0 + 0x18) | 0x90000;
      }
    }
    if (cStack_140 == '\0') {
      func_0x081aa820(&uStack_2b0,&uStack_178);
    }
    uVar16 = uStack_144;
    lVar15 = CONCAT44(uStack_174,uStack_178);
    if ((DAT_0f5c8b00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b00), iVar8 != 0)) {
      func_0x081a6440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8a80,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8b00);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c8a80 + 4)) * 8);
    do {
      lVar2 = *plVar13;
      if (lVar2 == -1) goto LAB_08126dc1;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c8a80 + 4))
    ;
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_08126dc1:
      puVar9 = &DAT_0f5c8a80;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01228e81),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,(long)&uStack_150 + 4,(long)&uStack_150 + 4,&uStack_2b0);
    func_0x048b0bc0(&uStack_248);
    func_0x081aa100(&uStack_248,&UNK_0144d525,0xe);
    puVar9 = (undefined *)((ulong)uStack_220 >> 1 & 0x7f);
    lVar15 = lVar14;
    if (((ulong)uStack_220 & 1) != 0) {
      puVar9 = puStack_218;
      lVar15 = lStack_210;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_150._4_4_ = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_150._4_4_ = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + 3 + uVar18) ^
               ((int)*(char *)(lVar15 + 2 + uVar18) ^
               ((int)*(char *)(lVar15 + 1 + uVar18) ^
               ((int)*(char *)(lVar15 + uVar18) ^ uStack_150._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar10 != 0) {
        uVar17 = 0;
        do {
          uStack_150._4_4_ =
               ((int)*(char *)(lVar15 + uVar18 + uVar17) ^ uStack_150._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
      }
    }
    uStack_150._0_4_ = 2;
    if ((DAT_0f5c8b20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b20), iVar8 != 0)) {
      func_0x081a6550();
      func_0x0410844d(&DAT_0f5c8b20);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081aaa40;
    puStack_268 = &UNK_081aaa50;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081aa490(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar15 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar15 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar15 = *(long *)(piVar11 + 0xc);
      }
LAB_081270ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_081270ff;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18) = *(uint *)((long)plStack_2a0 + 0x18) | 0x90000;
      }
    }
    if (cStack_140 == '\0') {
      func_0x081aa820(&uStack_2b0,&uStack_178);
    }
    uVar16 = uStack_144;
    lVar15 = CONCAT44(uStack_174,uStack_178);
    if ((DAT_0f5c8b00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b00), iVar8 != 0)) {
      func_0x081a6440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8a80,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8b00);
    }
    plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c8a80 + 4)) * 8);
    do {
      lVar2 = *plVar13;
      if (lVar2 == -1) goto LAB_08127191;
      plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c8a80 + 4))
    ;
    if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_08127191:
      puVar9 = &DAT_0f5c8a80;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01228e81),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,(long)&uStack_150 + 4,(long)&uStack_150 + 4,&uStack_2b0);
    func_0x048b0bc0(&uStack_248);
    func_0x081aa100(&uStack_248,&UNK_012a974c,0x10);
    puVar9 = (undefined *)((ulong)uStack_220 >> 1 & 0x7f);
    if (((ulong)uStack_220 & 1) != 0) {
      puVar9 = puStack_218;
      lVar14 = lStack_210;
    }
    if (puVar9 == (undefined *)0x0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar10 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar14 + 3 + uVar18) ^
                   ((int)*(char *)(lVar14 + 2 + uVar18) ^
                   ((int)*(char *)(lVar14 + 1 + uVar18) ^
                   ((int)*(char *)(lVar14 + uVar18) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar10 != 0) {
        uVar17 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar14 + uVar18 + uVar17) ^ uVar16) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
      }
    }
    uStack_150 = CONCAT44(uVar16,2);
    if ((DAT_0f5c8b20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b20), iVar8 != 0)) {
      func_0x081a6550();
      func_0x0410844d(&DAT_0f5c8b20);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081aaaa0;
    puStack_268 = &UNK_081aaab0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081aa490(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(plStack_2a0[0xf] + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      plVar13 = *(long **)(piVar11 + 0xc);
      while (plVar13 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar13 = *(long **)(piVar11 + 0xc);
      }
LAB_081274bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(plStack_2a0[0xf] + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_081274bf;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)(plStack_2a0 + 3) = *(uint *)(plStack_2a0 + 3) | 0x90000;
      }
    }
    if (cStack_140 == '\0') {
      func_0x081aa820(&uStack_2b0,&uStack_178);
    }
    uVar16 = uStack_144;
    lVar14 = CONCAT44(uStack_174,uStack_178);
    if ((DAT_0f5c8b00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8b00), iVar8 != 0)) {
      func_0x081a6440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8a80,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8b00);
    }
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c8a80 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_08127550;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c8a80 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_08127550:
      puVar9 = &DAT_0f5c8a80;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01228e81),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,(long)&uStack_150 + 4,(long)&uStack_150 + 4,&uStack_2b0);
    func_0x048b0bc0(&uStack_248);
  }
  if ((DAT_0f5c8bb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8bb8), iVar8 != 0)) {
    func_0x081aabc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8b38,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8bb8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8b38 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08127650;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8b38 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08127650:
    puVar9 = &DAT_0f5c8b38;
    if (iRam000000000f5c8b98 != -0x2b3da790) goto LAB_081276bd;
LAB_0812767b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_081276bd;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar15 = lVar14 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x081aafa0(&uStack_178,param_1,lVar15,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0812767b;
LAB_081276bd:
    func_0x081aafa0(&uStack_178,param_1,&UNK_0120d8f0,0xd);
  }
  if (cStack_148 == '\0') {
    uStack_150 = 0xd155d06d00000002;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    puStack_1f0 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    uStack_1d8._4_4_ = (undefined4)((ulong)uStack_1d8 >> 0x20);
    uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x3f600000);
    func_0x048afb10(&puStack_208,8);
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1a0 = 0xff00;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_198 = uStack_198 & 0xffffff00;
    uStack_194 = uStack_194 & 0xffffff00;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f10b148;
    if (uStack_248 != (long *)0x0) {
      lVar14 = *uStack_248;
      uStack_248 = puVar12;
      (**(code **)(lVar14 + 8))();
      puVar12 = uStack_248;
    }
    uStack_248 = puVar12;
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(lStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
    uStack_220 = (undefined *)CONCAT26(uStack_220._6_2_,0x6570795408);
    if ((DAT_0f5c8bd8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8bd8), iVar8 != 0)) {
      func_0x081aacd0();
      func_0x0410844d(&DAT_0f5c8bd8);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081abab0;
    puStack_268 = &UNK_081abac0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b0 = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    piVar11 = piStack_240;
    puVar12 = uStack_248;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_2a8 = plVar13 + 3;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    plVar13[3] = (long)puVar12;
    plVar13[4] = (long)piVar11;
    plVar13[7] = lStack_228;
    plVar13[5] = uStack_238;
    plVar13[6] = (long)plStack_230;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    plVar13[10] = lStack_210;
    plVar13[8] = (long)uStack_220;
    plVar13[9] = (long)puStack_218;
    uStack_220 = (undefined *)0x0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    plVar13[0xb] = (long)puStack_208;
    plVar13[0xc] = lStack_200;
    plVar13[0xd] = (long)puStack_1f8;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    plVar13[0xe] = (long)puStack_1f0;
    plVar13[0xf] = uStack_1e8;
    plVar13[0x10] = lStack_1e0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_1d8;
    plVar13[0x12] = lStack_1d0;
    plVar13[0x13] = lStack_1c8;
    plVar13[0x14] = lStack_1c0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    plVar13[0x17] = lStack_1a8;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_1b8;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_1b8._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_1b0;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_1b0._4_4_;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    *(ulong *)((long)plVar13 + 0xc5) =
         CONCAT17((undefined1)uStack_194,CONCAT43(uStack_198,uStack_19c._1_3_));
    plVar13[0x18] = CONCAT44(uStack_19c,CONCAT22(uStack_19e,uStack_1a0));
    uStack_f8 = 0;
    uStack_f0 = (long *)0x0;
    plStack_2a0 = plVar13;
    FUN_048afd20(&uStack_138,&uStack_2b0);
    plVar13 = plStack_2a0;
    if (plStack_2a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2a0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
        FUN_0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_f0;
    if (uStack_f0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_f0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
        FUN_0412c2d0(plVar13);
      }
    }
    lVar14 = CONCAT44(iStack_124,iStack_128);
    if (iStack_11c == 2) {
      piVar11 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != iStack_120) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != CONCAT44(iStack_12c,iStack_130);
          piVar11 = *(int **)(piVar11 + 0xe)) {
      }
LAB_08127baa:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (iStack_11c == 1) {
        piVar11 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != iStack_120) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_08127baa;
      }
      if (iStack_11c == 0) {
        *(byte *)(lVar14 + 0x1a) = *(byte *)(lVar14 + 0x1a) | 9;
      }
    }
    func_0x048b0bc0(&uStack_248);
  }
  if ((DAT_0f5c8c70 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8c70), iVar8 != 0)) {
    func_0x081abbd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8bf0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8c70);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8bf0 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08127c10;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8bf0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08127c10:
    puVar9 = &DAT_0f5c8bf0;
    if (iRam000000000f5c8c50 != -0x2b3da790) goto LAB_08127c7d;
LAB_08127c3b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_08127c7d;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar15 = lVar14 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x081abfb0(&uStack_178,param_1,lVar15,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_08127c3b;
LAB_08127c7d:
    func_0x081abfb0(&uStack_178,param_1,&UNK_0144d516,0xe);
  }
  if (cStack_148 == '\0') {
    uStack_150 = 0xd155d06d00000002;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    puStack_1f0 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    uStack_1d8._4_4_ = (undefined4)((ulong)uStack_1d8 >> 0x20);
    uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x3f600000);
    func_0x048afb10(&puStack_208,8);
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1a0 = 0xff00;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_198 = uStack_198 & 0xffffff00;
    uStack_194 = uStack_194 & 0xffffff00;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f10b148;
    if (uStack_248 != (long *)0x0) {
      lVar14 = *uStack_248;
      uStack_248 = puVar12;
      (**(code **)(lVar14 + 8))();
      puVar12 = uStack_248;
    }
    uStack_248 = puVar12;
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(lStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
    uStack_220 = (undefined *)CONCAT26(uStack_220._6_2_,0x6570795408);
    if ((DAT_0f5c8c90 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8c90), iVar8 != 0)) {
      func_0x081abce0();
      func_0x0410844d(&DAT_0f5c8c90);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081acac0;
    puStack_268 = &UNK_081acad0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b0 = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    piVar11 = piStack_240;
    puVar12 = uStack_248;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_2a8 = plVar13 + 3;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    plVar13[3] = (long)puVar12;
    plVar13[4] = (long)piVar11;
    plVar13[7] = lStack_228;
    plVar13[5] = uStack_238;
    plVar13[6] = (long)plStack_230;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    plVar13[10] = lStack_210;
    plVar13[8] = (long)uStack_220;
    plVar13[9] = (long)puStack_218;
    uStack_220 = (undefined *)0x0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    plVar13[0xb] = (long)puStack_208;
    plVar13[0xc] = lStack_200;
    plVar13[0xd] = (long)puStack_1f8;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    plVar13[0xe] = (long)puStack_1f0;
    plVar13[0xf] = uStack_1e8;
    plVar13[0x10] = lStack_1e0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_1d8;
    plVar13[0x12] = lStack_1d0;
    plVar13[0x13] = lStack_1c8;
    plVar13[0x14] = lStack_1c0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    plVar13[0x17] = lStack_1a8;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_1b8;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_1b8._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_1b0;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_1b0._4_4_;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    *(ulong *)((long)plVar13 + 0xc5) =
         CONCAT17((undefined1)uStack_194,CONCAT43(uStack_198,uStack_19c._1_3_));
    plVar13[0x18] = CONCAT44(uStack_19c,CONCAT22(uStack_19e,uStack_1a0));
    uStack_f8 = 0;
    uStack_f0 = (long *)0x0;
    plStack_2a0 = plVar13;
    FUN_048afd20(&uStack_138,&uStack_2b0);
    plVar13 = plStack_2a0;
    if (plStack_2a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2a0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
        FUN_0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_f0;
    if (uStack_f0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_f0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
        FUN_0412c2d0(plVar13);
      }
    }
    lVar14 = CONCAT44(iStack_124,iStack_128);
    if (iStack_11c == 2) {
      piVar11 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != iStack_120) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != CONCAT44(iStack_12c,iStack_130);
          piVar11 = *(int **)(piVar11 + 0xe)) {
      }
LAB_081281ba:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (iStack_11c == 1) {
        piVar11 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != iStack_120) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_081281ba;
      }
      if (iStack_11c == 0) {
        *(byte *)(lVar14 + 0x1a) = *(byte *)(lVar14 + 0x1a) | 9;
      }
    }
    func_0x048b0bc0(&uStack_248);
  }
  if ((DAT_0f5c8d28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8d28), iVar8 != 0)) {
    func_0x081acbe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8ca8,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8d28);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8ca8 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08128220;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8ca8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08128220:
    puVar9 = &DAT_0f5c8ca8;
    if (iRam000000000f5c8d08 != -0x2b3da790) goto LAB_0812828d;
LAB_0812824b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0812828d;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar15 = lVar14 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x081ad000(&uStack_178,param_1,lVar15,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0812824b;
LAB_0812828d:
    func_0x081ad000(&uStack_178,param_1,&UNK_013ca980,0xb);
  }
  if (cStack_148 == '\0') {
    uStack_150 = 0xd155d06d00000002;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    puStack_1f0 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    uStack_1d8._4_4_ = (undefined4)((ulong)uStack_1d8 >> 0x20);
    uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x3f600000);
    func_0x048afb10(&puStack_208,8);
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1a0 = 0xff00;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_198 = uStack_198 & 0xffffff00;
    uStack_194 = uStack_194 & 0xffffff00;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f10b148;
    if (uStack_248 != (long *)0x0) {
      lVar14 = *uStack_248;
      uStack_248 = puVar12;
      (**(code **)(lVar14 + 8))();
      puVar12 = uStack_248;
    }
    uStack_248 = puVar12;
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(lStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
    uStack_220 = (undefined *)CONCAT26(uStack_220._6_2_,0x6570795408);
    if ((DAT_0f5c8d48 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8d48), iVar8 != 0)) {
      func_0x081accf0();
      func_0x0410844d(&DAT_0f5c8d48);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081add80;
    puStack_268 = &UNK_081add90;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081adb10(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar14 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar14 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar14 = *(long *)(piVar11 + 0xc);
      }
LAB_0812852f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0812852f;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18U) = *(uint *)((long)plStack_2a0 + 0x18U) | 0x90000;
      }
    }
    uStack_138 = CONCAT44(uStack_174,uStack_178);
    iStack_130 = iStack_170;
    iStack_12c = iStack_16c;
    iStack_128 = iStack_168;
    iStack_124 = iStack_164;
    iStack_120 = iStack_160;
    iStack_11c = iStack_15c;
    iStack_118 = iStack_158;
    iStack_114 = iStack_154;
    uStack_110 = uStack_150;
    cStack_108 = cStack_148;
    func_0x048b0bc0(&uStack_248);
    if ((DAT_0f5c8d48 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8d48), iVar8 != 0)) {
      func_0x081accf0();
      func_0x0410844d(&DAT_0f5c8d48);
    }
    uStack_110 = 0xd147f96a00000001;
    if ((DAT_0f5c8d28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8d28), iVar8 != 0)) {
      func_0x081acbe0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8ca8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8d28);
    }
    piStack_240 = (int *)(uStack_138 + 0x18);
    plVar13 = (long *)(*(long *)(uStack_138 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uStack_138 + 0x20) -
                                           *(long *)(uStack_138 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c8ca8 + 4)) * 8);
    do {
      lVar14 = *plVar13;
      if (lVar14 == -1) goto LAB_08128610;
      plVar13 = (long *)(*(long *)(uStack_138 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(uStack_138 + 0x30) + 8 + lVar14 * 0x18) !=
             *(uint *)(_DAT_0f5c8ca8 + 4));
    if (plVar13 == *(long **)(uStack_138 + 0x38)) {
LAB_08128610:
      uStack_248 = (long *)&DAT_0f5c8ca8;
    }
    else {
      uStack_248 = (long *)plVar13[2];
    }
    FUN_0ed621a0(&uStack_248,uStack_110._4_4_);
    uStack_248 = (long *)CONCAT62(uStack_248._2_6_,1);
    uStack_238 = CONCAT44(uStack_238._4_4_,uStack_110._4_4_);
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    puStack_208 = (undefined *)CONCAT17(puStack_208._7_1_,0x65756c61560a);
    puStack_1f0 = (undefined *)0x0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = CONCAT44(lStack_1c0._4_4_,0x3f600000);
    piStack_240 = &iStack_130;
    func_0x048afb10(&puStack_1f0,8);
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_19e = 0;
    uStack_19c = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_188 = 0xff00;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef46ce8;
    if (plStack_230 != (long *)0x0) {
      lVar14 = *plStack_230;
      plStack_230 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_230;
    }
    plStack_230 = plVar13;
    uStack_2b0 = (uint)uStack_238;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffff00000000);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_0490ce30;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &SUB_0490cb20;
    puStack_270 = &UNK_081adde0;
    puStack_268 = &UNK_081adf40;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(piStack_240,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    func_0x081adb10(&uStack_2b0,piStack_240,&plStack_230);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(plStack_2a0[0xf] + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      plVar13 = *(long **)(piVar11 + 0xc);
      while (plVar13 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar13 = *(long **)(piVar11 + 0xc);
      }
LAB_081288cf:
      piVar11[4] = piVar11[4] | (int)uStack_248 << 0x10;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(plStack_2a0[0xf] + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_081288cf;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)(plStack_2a0 + 3) = *(uint *)(plStack_2a0 + 3) | (int)uStack_248 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_230);
  }
  if ((DAT_0f5c8de0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8de0), iVar8 != 0)) {
    func_0x081ae1d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8d60,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8de0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8d60 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08128930;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8d60 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08128930:
    puVar9 = &DAT_0f5c8d60;
    if (iRam000000000f5c8dc0 != -0x2b3da790) goto LAB_0812899d;
LAB_0812895b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_0812899d;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar15 = lVar14 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x081ae5f0(&uStack_178,param_1,lVar15,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0812895b;
LAB_0812899d:
    func_0x081ae5f0(&uStack_178,param_1,&UNK_013ca98c,0xd);
  }
  if (cStack_148 == '\0') {
    uStack_150 = 0xd155d06d00000002;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    puStack_1f8 = (undefined1 *)0x0;
    puStack_1f0 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    lStack_200 = 0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    uStack_1d8._4_4_ = (undefined4)((ulong)uStack_1d8 >> 0x20);
    uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x3f600000);
    func_0x048afb10(&puStack_208,8);
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1a0 = 0xff00;
    uStack_19c = uStack_19c & 0xffffff00;
    uStack_198 = uStack_198 & 0xffffff00;
    uStack_194 = uStack_194 & 0xffffff00;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f10b148;
    if (uStack_248 != (long *)0x0) {
      lVar14 = *uStack_248;
      uStack_248 = puVar12;
      (**(code **)(lVar14 + 8))();
      puVar12 = uStack_248;
    }
    uStack_248 = puVar12;
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(lStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
    uStack_220 = (undefined *)CONCAT26(uStack_220._6_2_,0x6570795408);
    if ((DAT_0f5c8e00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8e00), iVar8 != 0)) {
      func_0x081ae2e0();
      func_0x0410844d(&DAT_0f5c8e00);
    }
    uStack_2b0 = uStack_150._4_4_;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)CONCAT44(plStack_2a0._4_4_,3);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_081aa700;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &UNK_081a6380;
    puStack_270 = &UNK_081af370;
    puStack_268 = &UNK_081af380;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(&iStack_170,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    iStack_128 = iStack_160;
    iStack_124 = iStack_15c;
    iStack_120 = iStack_158;
    iStack_11c = iStack_154;
    iStack_130 = iStack_168;
    iStack_12c = iStack_164;
    func_0x081af100(&uStack_2b0,&uStack_138,&uStack_248);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar14 = *(long *)(piVar11 + 0xc);
      while ((long *)lVar14 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar14 = *(long *)(piVar11 + 0xc);
      }
LAB_08128c3f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_08128c3f;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18U) = *(uint *)((long)plStack_2a0 + 0x18U) | 0x90000;
      }
    }
    uStack_138 = CONCAT44(uStack_174,uStack_178);
    iStack_130 = iStack_170;
    iStack_12c = iStack_16c;
    iStack_128 = iStack_168;
    iStack_124 = iStack_164;
    iStack_120 = iStack_160;
    iStack_11c = iStack_15c;
    iStack_118 = iStack_158;
    iStack_114 = iStack_154;
    uStack_110 = uStack_150;
    cStack_108 = cStack_148;
    func_0x048b0bc0(&uStack_248);
    if ((DAT_0f5c8e00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8e00), iVar8 != 0)) {
      func_0x081ae2e0();
      func_0x0410844d(&DAT_0f5c8e00);
    }
    lVar14 = uStack_138;
    uStack_110 = 0xd147f96a00000001;
    if ((DAT_0f5c8de0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8de0), iVar8 != 0)) {
      func_0x081ae1d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8d60,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8de0);
    }
    piStack_240 = (int *)(lVar14 + 0x18);
    plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c8d60 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_08128d20;
      plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c8d60 + 4)
            );
    if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_08128d20:
      uStack_248 = (long *)&DAT_0f5c8d60;
    }
    else {
      uStack_248 = (long *)plVar13[2];
    }
    FUN_0ed621a0(&uStack_248,uStack_110._4_4_);
    uStack_248 = (long *)CONCAT62(uStack_248._2_6_,1);
    uStack_238 = CONCAT44(uStack_238._4_4_,uStack_110._4_4_);
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    uStack_220 = (undefined *)0x0;
    puStack_218 = (undefined *)0x0;
    lStack_210 = 0;
    puStack_208 = (undefined *)CONCAT17(puStack_208._7_1_,0x65756c61560a);
    puStack_1f0 = (undefined *)0x0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = CONCAT44(lStack_1c0._4_4_,0x3f600000);
    piStack_240 = &iStack_130;
    func_0x048afb10(&puStack_1f0,8);
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_19e = 0;
    uStack_19c = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_188 = 0xff00;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0126a0;
    if (plStack_230 != (long *)0x0) {
      lVar14 = *plStack_230;
      plStack_230 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = plStack_230;
    }
    plStack_230 = plVar13;
    uStack_2b0 = (uint)uStack_238;
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffff00000000);
    uStack_298 = (long *)0x1;
    uStack_290 = 0;
    puStack_288 = &UNK_05daeda0;
    puStack_280 = &SUB_048b06d0;
    puStack_278 = &SUB_05daea90;
    puStack_270 = &UNK_081af3d0;
    puStack_268 = &UNK_081af530;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x0;
    func_0x048b05a0(piStack_240,&uStack_2b0);
    plVar13 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_250 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        FUN_0412c2d0(plVar13);
      }
    }
    func_0x081af100(&uStack_2b0,piStack_240,&plStack_230);
    if (uStack_298._4_4_ == 2) {
      piVar11 = *(int **)(plStack_2a0[0xf] + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_298) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      plVar13 = *(long **)(piVar11 + 0xc);
      while (plVar13 != plStack_2a8) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar13 = *(long **)(piVar11 + 0xc);
      }
LAB_0812902f:
      piVar11[4] = piVar11[4] | (int)uStack_248 << 0x10;
    }
    else {
      if (uStack_298._4_4_ == 1) {
        piVar11 = *(int **)(plStack_2a0[0xf] + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_298) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0812902f;
      }
      if (uStack_298._4_4_ == 0) {
        *(uint *)(plStack_2a0 + 3) = *(uint *)(plStack_2a0 + 3) | (int)uStack_248 << 0x10;
      }
    }
    iVar8 = (int)uStack_110;
    uVar4 = uStack_110._4_4_;
    func_0x048b0bc0(&plStack_230);
    if (iVar8 == 4) {
      if ((DAT_0f5c8de0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8de0), iVar8 != 0)) {
        func_0x081ae1d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8d60,0xf53dab8);
        func_0x0410844d(&DAT_0f5c8de0);
      }
      plVar13 = (long *)(*(long *)(uStack_138 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uStack_138 + 0x20) -
                                             *(long *)(uStack_138 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f5c8d60 + 4)) * 8);
      do {
        lVar14 = *plVar13;
        if (lVar14 == -1) goto LAB_08129138;
        plVar13 = (long *)(*(long *)(uStack_138 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(uStack_138 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5c8d60 + 4));
      if (plVar13 == *(long **)(uStack_138 + 0x38)) {
LAB_08129138:
        puVar9 = &DAT_0f5c8d60;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar14 = func_0x048b1040(uStack_138 + 0x18,puVar9,uVar4,1);
      if (lVar14 == 0) {
        uStack_248 = (long *)0x0;
        piStack_240 = (int *)0x0;
        func_0x048b10d0(&uStack_248);
        lVar15 = *(long *)((long)uStack_248 + 0x38);
        lVar14 = (long)uStack_248;
        if (lVar15 == 0) goto LAB_08129255;
LAB_08129271:
        do {
          lVar14 = lVar15;
          lVar15 = *(long *)(lVar14 + 0x38);
          if (*(long *)(lVar14 + 0x38) == 0) {
            uStack_248 = (long *)0x0;
            piStack_240 = (int *)0x0;
            func_0x048b10d0(&uStack_248);
            lVar15 = (long)uStack_248;
          }
        } while (lVar15 != 0);
      }
      else {
        lVar15 = *(long *)(lVar14 + 0x38);
        if (*(long *)(lVar14 + 0x38) != 0) goto LAB_08129271;
LAB_08129255:
        uStack_248 = (long *)0x0;
        piStack_240 = (int *)0x0;
        func_0x048b10d0(&uStack_248);
        lVar15 = (long)uStack_248;
        if (uStack_248 != (long *)0x0) goto LAB_08129271;
      }
      lVar14 = *(long *)(lVar14 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    else {
      if (iVar8 != 1) goto LAB_08129300;
      if ((DAT_0f5c8de0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8de0), iVar8 != 0)) {
        func_0x081ae1d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8d60,0xf53dab8);
        func_0x0410844d(&DAT_0f5c8de0);
      }
      plVar13 = (long *)(*(long *)(uStack_138 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uStack_138 + 0x20) -
                                             *(long *)(uStack_138 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f5c8d60 + 4)) * 8);
      do {
        lVar14 = *plVar13;
        if (lVar14 == -1) goto LAB_081290c8;
        plVar13 = (long *)(*(long *)(uStack_138 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(uStack_138 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5c8d60 + 4));
      if (plVar13 == *(long **)(uStack_138 + 0x38)) {
LAB_081290c8:
        puVar9 = &DAT_0f5c8d60;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar14 = func_0x048b0c90(uStack_138 + 0x18,puVar9,uVar4,1);
      if (lVar14 == 0) {
        uStack_248 = (long *)0x0;
        piStack_240 = (int *)0x0;
        func_0x048b0d20(&uStack_248);
        lVar14 = (long)uStack_248;
      }
      lVar14 = *(long *)(lVar14 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f10a408;
    plVar13 = *(long **)(lVar14 + 8);
    *(undefined8 **)(lVar14 + 8) = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
  }
LAB_08129300:
  if ((DAT_0f5c8990 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8990), iVar8 != 0)) {
    func_0x081a47b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8910,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8990);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8910 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_08129360;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5c8910 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_08129360:
    puVar9 = &DAT_0f5c8910;
    if (iRam000000000f5c8970 != -0x2b3da790) goto LAB_081293cd;
LAB_0812938b:
    lVar14 = *(long *)(puVar9 + 0x68);
    if (lVar14 == 0) goto LAB_081293cd;
    bVar20 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar15 = lVar14 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar20) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x081af700(&uStack_178,param_1,lVar15,uVar10);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0812938b;
LAB_081293cd:
    func_0x081af700(&uStack_178,param_1,&UNK_01418def,0x28);
  }
  if (cStack_148 != '\0') {
    return;
  }
  func_0x081b0270(&uStack_248,&uStack_178,&UNK_0131043f,9);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f0e95d0;
  if (plStack_230 != (long *)0x0) {
    lVar14 = *plStack_230;
    plStack_230 = plVar13;
    (**(code **)(lVar14 + 8))();
    plVar13 = plStack_230;
  }
  plStack_230 = plVar13;
  uStack_2b0 = (uint)uStack_238;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffff00000000);
  uStack_298 = (long *)0x1;
  uStack_290 = 0;
  puStack_288 = &UNK_077e7de0;
  puStack_280 = &SUB_048b06d0;
  puStack_278 = &SUB_077e7b00;
  puStack_270 = &UNK_081b0820;
  puStack_268 = &UNK_081b0980;
  uStack_260 = 0;
  uStack_258 = 0;
  plStack_250 = (long *)0x0;
  func_0x048b05a0(piStack_240,&uStack_2b0);
  plVar13 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_250 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      FUN_0412c2d0(plVar13);
    }
  }
  func_0x081b0520(&uStack_248);
  cStack_68 = cStack_148;
  iStack_78 = iStack_158;
  iStack_74 = iStack_154;
  iStack_70 = (int)uStack_150;
  uStack_6c = uStack_150._4_4_;
  iStack_88 = iStack_168;
  iStack_84 = iStack_164;
  iStack_80 = iStack_160;
  iStack_7c = iStack_15c;
  uStack_98 = uStack_178;
  uStack_94 = uStack_174;
  iStack_90 = iStack_170;
  iStack_8c = iStack_16c;
  func_0x048b0bc0(&plStack_230);
  uStack_f8 = CONCAT44(uStack_94,uStack_98);
  uStack_f0 = (long *)CONCAT44(iStack_8c,iStack_90);
  iStack_e8 = iStack_88;
  iStack_e4 = iStack_84;
  iStack_e0 = iStack_80;
  iStack_dc = iStack_7c;
  iStack_d8 = iStack_78;
  iStack_d4 = iStack_74;
  iStack_d0 = iStack_70;
  uStack_cc = uStack_6c;
  uStack_c8 = CONCAT71(uStack_67,cStack_68);
  func_0x081b0270(&uStack_248,&uStack_f8,&UNK_0137af38,0xe);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f012080;
  if (plStack_230 != (long *)0x0) {
    lVar14 = *plStack_230;
    plStack_230 = plVar13;
    (**(code **)(lVar14 + 8))();
    plVar13 = plStack_230;
  }
  plStack_230 = plVar13;
  uStack_2b0 = (uint)uStack_238;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffff00000000);
  uStack_298 = (long *)0x1;
  uStack_290 = 0;
  puStack_288 = &UNK_05dd3ca0;
  puStack_280 = &SUB_048b06d0;
  puStack_278 = &UNK_05dd3990;
  puStack_270 = &UNK_081b0b50;
  puStack_268 = &UNK_081b0cb0;
  uStack_260 = 0;
  uStack_258 = 0;
  plStack_250 = (long *)0x0;
  func_0x048b05a0(piStack_240,&uStack_2b0);
  plVar13 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_250 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      FUN_0412c2d0(plVar13);
    }
  }
  func_0x081b0520(&uStack_248);
  uVar4 = uStack_cc;
  iVar8 = iStack_d0;
  lVar14 = uStack_f8;
  uStack_50 = CONCAT44(iStack_e4,iStack_e8);
  uStack_58 = uStack_f0;
  iStack_48 = iStack_e0;
  iStack_44 = iStack_dc;
  iStack_40 = iStack_d8;
  iStack_3c = iStack_d4;
  uVar5 = (undefined1)uStack_c8;
  func_0x048b0bc0(&plStack_230);
  if ((DAT_0f5c8990 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c8990), iVar7 != 0)) {
    func_0x081a47b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8910,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8990);
  }
  plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c8910 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_08129781;
    plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c8910 + 4));
  if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_08129781:
    puVar9 = &DAT_0f5c8910;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
  }
  if ((1 < iVar8 - 1U) &&
     (cVar6 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014333a4),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar15 = func_0x048b0c90(lVar14 + 0x18,puVar9,uVar4,1);
  if (lVar15 == 0) {
    uStack_248 = (long *)0x0;
    piStack_240 = (int *)0x0;
    func_0x048b0d20(&uStack_248);
    lVar15 = (long)uStack_248;
  }
  *(undefined1 *)(*(long *)(lVar15 + 0x58) + 0xa8) = 1;
  uStack_138 = lVar14;
  iStack_130 = (int)uStack_58;
  iStack_12c = uStack_58._4_4_;
  iStack_128 = (undefined4)uStack_50;
  iStack_124 = uStack_50._4_4_;
  iStack_120 = iStack_48;
  iStack_11c = iStack_44;
  iStack_118 = iStack_40;
  iStack_114 = iStack_3c;
  uStack_110 = CONCAT44(uVar4,iVar8);
  cStack_108 = uVar5;
  if ((DAT_0f5c8e30 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8e30), iVar8 != 0)) {
    func_0x081b1080();
    func_0x0410844d(&DAT_0f5c8e30);
  }
  if ((DAT_0f5c8e30 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8e30), iVar8 != 0)) {
    func_0x081b1080();
    func_0x0410844d(&DAT_0f5c8e30);
  }
  uStack_248 = (long *)&DAT_0f5c8e18;
  piStack_240 = (int *)CONCAT44(piStack_240._4_4_,_DAT_0f5c8e1c);
  uStack_238 = 0;
  plStack_230 = (long *)CONCAT44(plStack_230._4_4_,0x80);
  lStack_228 = 8;
  uStack_220 = &UNK_081b0fc0;
  puStack_218 = &UNK_081b1100;
  lStack_210 = 0;
  puStack_208 = &UNK_081b1390;
  lStack_200 = 4;
  puStack_1f8 = &SUB_05e26240;
  puStack_1f0 = &UNK_081b1440;
  uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
  lStack_1e0 = 0;
  uStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  func_0x048aee30(&uStack_2b0,lVar14 + 0x18,&uStack_248,0x780c6df3);
  lVar14 = lStack_1d0;
  lStack_1d0 = 0;
  if (lVar14 != 0) {
    func_0x048ae940(lVar14);
    func_0x0412a280(lVar14,0x78);
  }
  plVar13 = uStack_1d8;
  if (uStack_1d8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1d8 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
      FUN_0412c2d0(plVar13);
    }
  }
  if (uStack_298._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_298) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar14 = *(long *)(piVar11 + 0xc);
    while ((long *)lVar14 != plStack_2a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar14 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (uStack_298._4_4_ != 1) {
      if (uStack_298._4_4_ == 0) {
        *(uint *)((long)plStack_2a0 + 0x18U) = *(uint *)((long)plStack_2a0 + 0x18U) | 0x10000;
      }
      goto LAB_08129a03;
    }
    piVar11 = *(int **)(*(long *)((long)plStack_2a0 + 0x78) + 0x48);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_298) {
      piVar11 = piVar11 + 0x1a;
      iVar8 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 1;
LAB_08129a03:
  uStack_238 = (ulong)plStack_2a0;
  plStack_230 = uStack_298;
  uStack_248 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
  piStack_240 = (int *)plStack_2a8;
  if ((DAT_0f5af3d0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5af3d0), iVar8 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  auStack_c0[0] = _DAT_0f5af3bc;
  plStack_b0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plStack_b0 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plStack_b0[1] = 0;
  plStack_b0[2] = 0;
  *plStack_b0 = (long)&UNK_0f0e9768;
  plStack_b8 = plStack_b0 + 3;
  plStack_b0[3] = (long)&UNK_081a62c0;
  plStack_b0[4] = 0x6570795408;
  plStack_b0[5] = 0;
  plStack_b0[6] = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  FUN_048afd20(&uStack_248,auStack_c0);
  plVar13 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      FUN_0412c2d0(plVar13);
    }
  }
  plVar13 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      FUN_0412c2d0(plVar13);
    }
  }
  func_0x081b0270(&uStack_248,&uStack_138,&UNK_0128f375,6);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f10b410;
  if (plStack_230 != (long *)0x0) {
    lVar14 = *plStack_230;
    plStack_230 = plVar13;
    (**(code **)(lVar14 + 8))();
    plVar13 = plStack_230;
  }
  plStack_230 = plVar13;
  uStack_2b0 = (uint)uStack_238;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)((ulong)plStack_2a0 & 0xffffffff00000000);
  uStack_298 = (long *)0x1;
  uStack_290 = 0;
  puStack_288 = &UNK_081b69e0;
  puStack_280 = &SUB_048b06d0;
  puStack_278 = &UNK_081b0fc0;
  puStack_270 = &UNK_081b6aa0;
  puStack_268 = &UNK_081b6c00;
  uStack_260 = 0;
  uStack_258 = 0;
  plStack_250 = (long *)0x0;
  func_0x048b05a0(piStack_240,&uStack_2b0);
  plVar13 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_250 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      FUN_0412c2d0(plVar13);
    }
  }
  func_0x081b0520(&uStack_248);
  func_0x048b0bc0(&plStack_230);
  return;
}


