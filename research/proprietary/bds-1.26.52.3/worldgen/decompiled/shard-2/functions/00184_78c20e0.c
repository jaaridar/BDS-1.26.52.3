/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x79c20e0 (ELF vaddr 0x78c20e0)
 * Label: string:JIGSAW_EDITOR
 * Body:  [[079c20e0, 079cc534]]
 * Ghidra: FUN_079c20e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_079c20e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  uint auStack_1b0 [2];
  long lStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  char cStack_118;
  uint uStack_114;
  char cStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [40];
  byte bStack_c0;
  undefined1 auStack_bf [7];
  ulong uStack_b8;
  undefined1 *puStack_b0;
  
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_079c2150;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_079c2150:
    puVar9 = &DAT_0f5b4018;
    if (iRam000000000f5b4078 != -0x2b3da790) goto LAB_079c21a5;
LAB_079c217b:
    lVar2 = *(long *)(puVar9 + 0x68);
    if (lVar2 == 0) goto LAB_079c21a5;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar2 + 9);
    if (bVar16) {
      puVar9 = *(undefined **)(lVar2 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar12[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_079c217b;
LAB_079c21a5:
    puVar9 = &UNK_012c233e;
    uVar13 = 0xd;
  }
  func_0x07ad04f0(&lStack_148,param_1,puVar9,uVar13);
  uStack_114 = uStack_114 & 0xffffff00;
  cStack_110 = '\0';
  if (cStack_118 != '\0') {
    return;
  }
  func_0x07ad3d70(auStack_e8,&UNK_0126e65f,4);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4440;
  puStack_168 = &UNK_07ad4450;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c242f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c242f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c24c0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c24c0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01464153,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4660;
  puStack_168 = &UNK_07ad4670;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c27ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c27ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c2880;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c2880:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013c9364,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad46c0;
  puStack_168 = &UNK_07ad46d0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c2bbf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c2bbf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c2c40;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c2c40:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0146415d,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4720;
  puStack_168 = &UNK_07ad4730;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c2f7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c2f7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c3000;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c3000:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01499fee,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4780;
  puStack_168 = &UNK_07ad4790;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c333f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c333f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c33c0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c33c0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013b112f,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad47e0;
  puStack_168 = &UNK_07ad47f0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c36ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c36ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c3780;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c3780:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01277230,0xd);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4840;
  puStack_168 = &UNK_07ad4850;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c3abf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c3abf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c3b40;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c3b40:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0132a5ce,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad48a0;
  puStack_168 = &UNK_07ad48b0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c3e7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c3e7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c3f00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c3f00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_011bd441,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4900;
  puStack_168 = &UNK_07ad4910;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c423f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c423f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c42c0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c42c0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01499ff6,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4960;
  puStack_168 = &UNK_07ad4970;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c45ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c45ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c4680;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c4680:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0144c4de,6);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad49c0;
  puStack_168 = &UNK_07ad49d0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c49bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c49bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c4a40;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c4a40:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0137b067,8);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4a20;
  puStack_168 = &UNK_07ad4a30;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c4d7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c4d7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c4e00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c4e00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_014b2ad7,0xe);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4a80;
  puStack_168 = &UNK_07ad4a90;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c513f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c513f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c51c0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c51c0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0127723e,0xf);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4ae0;
  puStack_168 = &UNK_07ad4af0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c54ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c54ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c5580;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c5580:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013452e7,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4b40;
  puStack_168 = &UNK_07ad4b50;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c58bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c58bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c5940;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c5940:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_011a2021,6);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4ba0;
  puStack_168 = &UNK_07ad4bb0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c5c7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c5c7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c5d00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c5d00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013c936e,0x10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4c00;
  puStack_168 = &UNK_07ad4c10;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c603f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c603f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c60c0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c60c0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0130f270,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4c60;
  puStack_168 = &UNK_07ad4c70;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c63ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c63ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c6480;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c6480:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0137b070,0xd);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4cc0;
  puStack_168 = &UNK_07ad4cd0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c67bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c67bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c6840;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c6840:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013c937f,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4d20;
  puStack_168 = &UNK_07ad4d30;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c6b7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c6b7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c6c00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c6c00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_012279f6,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4d80;
  puStack_168 = &UNK_07ad4d90;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c6f3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c6f3f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c6fc0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c6fc0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01464167,4);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4de0;
  puStack_168 = &UNK_07ad4df0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c72ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c72ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c7380;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c7380:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_012c234c,0x10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4e40;
  puStack_168 = &UNK_07ad4e50;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c76bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c76bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c7740;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c7740:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01241baa,0x13);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4ea0;
  puStack_168 = &UNK_07ad4eb0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c7a7f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c7a7f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c7b00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c7b00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_011bd44b,0x10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4f00;
  puStack_168 = &UNK_07ad4f10;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c7e3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c7e3f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c7ec0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c7ec0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0146416c,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4f60;
  puStack_168 = &UNK_07ad4f70;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c81ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c81ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c8280;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c8280:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0147d02b,4);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad4fc0;
  puStack_168 = &UNK_07ad4fd0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c85bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c85bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c8640;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c8640:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0132a5d4,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5020;
  puStack_168 = &UNK_07ad5030;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c897f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c897f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c8a00;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c8a00:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01499ffe,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5080;
  puStack_168 = &UNK_07ad5090;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c8d3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c8d3f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c8dc0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c8dc0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013e3b47,0xd);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad50e0;
  puStack_168 = &UNK_07ad50f0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c90ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c90ff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c9180;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c9180:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013452ed,6);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5140;
  puStack_168 = &UNK_07ad5150;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c94bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c94bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c9540;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c9540:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0130f276,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad51a0;
  puStack_168 = &UNK_07ad51b0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c987f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c987f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c9900;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c9900:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_0143179a,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5200;
  puStack_168 = &UNK_07ad5210;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c9c3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c9c3f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079c9cc0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079c9cc0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01396205,3);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5260;
  puStack_168 = &UNK_07ad5270;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079c9fff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079c9fff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079ca080;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079ca080:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013617d1,0xd);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad52c0;
  puStack_168 = &UNK_07ad52d0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079ca3bf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079ca3bf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079ca440;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079ca440:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013452f4,0xe);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5320;
  puStack_168 = &UNK_07ad5330;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079ca77f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079ca77f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079ca800;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079ca800:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_013b113b,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5380;
  puStack_168 = &UNK_07ad5390;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079cab3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079cab3f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079cabc0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079cabc0:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_01345303,0xd);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad53e0;
  puStack_168 = &UNK_07ad53f0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_079caeff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_079caeff;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_079caf80;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_079caf80:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07ad3d70(auStack_e8,&UNK_011d84d6,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar5 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar5 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar14 + 3] ^
                     ((int)(char)puVar5[uVar14 + 2] ^
                     ((int)(char)puVar5[uVar14 + 1] ^
                     ((int)(char)puVar5[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar5[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b40b8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b40b8), iVar8 != 0)) {
    func_0x07ad01c0();
    func_0x0410844d(&DAT_0f5b40b8);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07ad4380;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_07acfff0;
  puStack_170 = &UNK_07ad5440;
  puStack_168 = &UNK_07ad5450;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = uStack_138;
  uStack_fc = uStack_134;
  func_0x07ad4110(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (uStack_198._4_4_ != 1) {
      if (uStack_198._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
      goto joined_r0x079cb2bb;
    }
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_198) {
      piVar11 = piVar11 + 0x1a;
      iVar8 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
joined_r0x079cb2bb:
  if (cStack_110 == '\0') {
    func_0x07ad44a0(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  if ((DAT_0f5b4098 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5b4098), iVar8 != 0)) {
    func_0x07ad00b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b4018,0xf53dab8);
    func_0x0410844d(&DAT_0f5b4098);
  }
  plVar12 = (long *)(*(long *)(lStack_148 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_148 + 0x20) -
                                         *(long *)(lStack_148 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5b4018 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_079cb330;
    plVar12 = (long *)(*(long *)(lStack_148 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_148 + 0x30) + 8 + lVar2 * 0x18) !=
           *(uint *)(_DAT_0f5b4018 + 4));
  if (plVar12 == *(long **)(lStack_148 + 0x38)) {
LAB_079cb330:
    puVar9 = &DAT_0f5b4018;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc4e9),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  return;
}


