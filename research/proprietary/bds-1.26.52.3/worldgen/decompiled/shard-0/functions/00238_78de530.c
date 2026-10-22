/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x79de530 (ELF vaddr 0x78de530)
 * Label: caller-of-callee
 * Body:  [[079de530, 079ea10f]]
 * Ghidra: FUN_079de530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_079de530(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
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
  undefined1 *puStack_178;
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
  
  lVar8 = func_0x07ae77e0(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar16 = (*(byte *)(lVar8 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar8 + 9);
    if (bVar16) {
      puVar12 = *(undefined **)(lVar8 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar8 + 0x10);
    }
  }
  else {
    puVar12 = &UNK_012dc427;
    uVar13 = 0xd;
  }
  func_0x07ae7c40(&lStack_148,param_1,puVar12,uVar13);
  uStack_114 = uStack_114 & 0xffffff00;
  cStack_110 = '\0';
  if (cStack_118 != '\0') {
    return;
  }
  func_0x07aeb3b0(auStack_e8,&UNK_0144c509,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aeb9d0;
  puStack_168 = &UNK_07aeb9e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079de85a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079de85a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0149a030,0xe);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aeba30;
  puStack_168 = &UNK_07aeba40;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079dec7a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079dec7a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0147d044,0xe);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aeba90;
  puStack_168 = &UNK_07aebaa0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079df08a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079df08a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0147d053,0xf);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebaf0;
  puStack_168 = &UNK_07aebb00;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079df49a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079df49a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013e3bb9,0x14);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebb50;
  puStack_168 = &UNK_07aebb60;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079df8aa:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079df8aa;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_014cdc5f,6);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebbb0;
  puStack_168 = &UNK_07aebbc0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079dfcba:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079dfcba;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012f60ac,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebc10;
  puStack_168 = &UNK_07aebc20;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e00ca:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e00ca;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01241be2,0xc);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebc70;
  puStack_168 = &UNK_07aebc80;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e04da:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e04da;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011a203f,0xc);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebcd0;
  puStack_168 = &UNK_07aebce0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e08ea:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e08ea;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_014b2b4a,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebd30;
  puStack_168 = &UNK_07aebd40;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e0cfa:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e0cfa;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012c23c8,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebd90;
  puStack_168 = &UNK_07aebda0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e110a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e110a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013b11ee,0x10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebdf0;
  puStack_168 = &UNK_07aebe00;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e151a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e151a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0125c77b,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebe50;
  puStack_168 = &UNK_07aebe60;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e192a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e192a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012dc435,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebeb0;
  puStack_168 = &UNK_07aebec0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e1d3a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e1d3a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013fdc1f,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebf10;
  puStack_168 = &UNK_07aebf20;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e214a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e214a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011f20ec,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebf70;
  puStack_168 = &UNK_07aebf80;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e255a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e255a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013fdc27,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aebfd0;
  puStack_168 = &UNK_07aebfe0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e296a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e296a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0149a03f,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec030;
  puStack_168 = &UNK_07aec040;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e2d7a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e2d7a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01361899,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec090;
  puStack_168 = &UNK_07aec0a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e318a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e318a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011bd4c3,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec0f0;
  puStack_168 = &UNK_07aec100;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e359a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e359a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0120ca53,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec150;
  puStack_168 = &UNK_07aec160;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e39aa:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e39aa;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012a887a,5);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec1b0;
  puStack_168 = &UNK_07aec1c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e3dba:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e3dba;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01492bea,8);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec210;
  puStack_168 = &UNK_07aec220;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e41ca:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e41ca;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011a204c,0xc);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec270;
  puStack_168 = &UNK_07aec280;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e45da:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e45da;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0128f588,4);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec2d0;
  puStack_168 = &UNK_07aec2e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e49ea:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e49ea;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0137b08c,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec330;
  puStack_168 = &UNK_07aec340;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e4dfa:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e4dfa;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013618a1,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec390;
  puStack_168 = &UNK_07aec3a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e520a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e520a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012a8880,0xe);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec3f0;
  puStack_168 = &UNK_07aec400;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e561a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e561a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0132a60f,0x10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec450;
  puStack_168 = &UNK_07aec460;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e5a2a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e5a2a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01345378,8);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec4b0;
  puStack_168 = &UNK_07aec4c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e5e3a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e5e3a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0149a04a,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec510;
  puStack_168 = &UNK_07aec520;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e624a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e624a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0127728d,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec570;
  puStack_168 = &UNK_07aec580;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e665a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e665a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011bd4c9,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec5d0;
  puStack_168 = &UNK_07aec5e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e6a6a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e6a6a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0137b098,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec630;
  puStack_168 = &UNK_07aec640;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e6e7a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e6e7a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_011f20f7,8);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec690;
  puStack_168 = &UNK_07aec6a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e728a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e728a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01241bef,0xb);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec6f0;
  puStack_168 = &UNK_07aec700;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e769a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e769a;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_0144c514,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec750;
  puStack_168 = &UNK_07aec760;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e7aaa:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e7aaa;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013b11ff,10);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec7b0;
  puStack_168 = &UNK_07aec7c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e7eba:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e7eba;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_012a888f,9);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec810;
  puStack_168 = &UNK_07aec820;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e82ca:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e82ca;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_01345381,7);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec870;
  puStack_168 = &UNK_07aec880;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e86da:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e86da;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar8 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012dc59c),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  FUN_048b0bc0(auStack_e8);
  func_0x07aeb3b0(auStack_e8,&UNK_013c9387,6);
  uVar13 = (ulong)(bStack_c0 >> 1);
  puVar3 = auStack_bf;
  if ((bStack_c0 & 1) != 0) {
    uVar13 = uStack_b8;
    puVar3 = puStack_b0;
  }
  if (uVar13 == 0) {
    uStack_11c = 0x811c9dc5;
  }
  else {
    uVar9 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_11c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar14 + 3] ^
                     ((int)(char)puVar3[uVar14 + 2] ^
                     ((int)(char)puVar3[uVar14 + 1] ^
                     ((int)(char)puVar3[uVar14] ^ uStack_11c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4398 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4398), iVar7 != 0)) {
    func_0x07ae79d0(0xf5b4380);
    func_0x0410844d(&DAT_0f5b4398);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07aeb9c0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07ae77e0;
  puStack_170 = &UNK_07aec8d0;
  puStack_168 = &UNK_07aec8e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar4);
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
  func_0x07aeb750(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_198) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    lVar8 = *(long *)(piVar10 + 0xc);
    while (lVar8 != lStack_1a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar8 = *(long *)(piVar10 + 0xc);
    }
LAB_079e8aea:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_198) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_079e8aea;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    uStack_114 = 0xbb8863ad;
    cStack_110 = '\x01';
    auStack_1b0[0] = 0xbb8863ad;
    lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
    lVar8 = *(long *)(lVar8 + 0x68);
    piVar11 = *(int **)(lVar8 + 0x28);
    for (piVar10 = *(int **)(lVar8 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar11) {
      if (piVar11 < *(int **)(lVar8 + 0x30)) {
        *piVar11 = -0x44779c53;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[6] = 0;
        piVar11[7] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        piVar11[10] = 0x3f800000;
        *(undefined1 *)(piVar11 + 0xc) = 0;
        *(undefined1 *)(piVar11 + 0xd) = 0;
        piVar11 = piVar11 + 0xe;
      }
      else {
        piVar11 = (int *)func_0x05d9c2b0(lVar8 + 0x20,auStack_1b0);
      }
      *(int **)(lVar8 + 0x28) = piVar11;
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01241e6d),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar8 = func_0x07ae77e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar8 + 0x6
/* truncated by DecompileTargets.java */

