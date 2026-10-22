/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7a941e0 (ELF vaddr 0x79941e0)
 * Label: string:SubChunk_BiomeData
 * Body:  [[07a941e0, 07ab16d2]]
 * Ghidra: FUN_07a941e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07a941e0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
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
  
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  uVar13 = _DAT_0f5b4a08;
  lVar9 = _DAT_0f5b4a00;
  lVar8 = func_0x07b1f8e0(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar16 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar9 = lVar8 + 9;
    if (bVar16) {
      lVar9 = *(long *)(lVar8 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar8 + 0x10);
    }
  }
  func_0x07b1fcd0(&lStack_148,param_1,lVar9,uVar13);
  uStack_114 = uStack_114 & 0xffffff00;
  cStack_110 = '\0';
  if (cStack_118 != '\0') {
    return;
  }
  func_0x07b234b0(auStack_e8,&UNK_014ab9ed,7);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23b10;
  puStack_168 = &UNK_07b23b20;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9452a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9452a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_012f60e8,0x13);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23b70;
  puStack_168 = &UNK_07b23b80;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9494a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9494a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0130f336,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23bd0;
  puStack_168 = &UNK_07b23be0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a94d5a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a94d5a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_012c23d9,0xe);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23c30;
  puStack_168 = &UNK_07b23c40;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9516a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9516a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013453db,0xe);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23c90;
  puStack_168 = &UNK_07b23ca0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9557a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9557a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_014641ef,0x12);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23cf0;
  puStack_168 = &UNK_07b23d00;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9598a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9598a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0132a67d,0xd);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23d50;
  puStack_168 = &UNK_07b23d60;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a95d9a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a95d9a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013b1270,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23db0;
  puStack_168 = &UNK_07b23dc0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a961aa:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a961aa;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013453ea,6);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23e10;
  puStack_168 = &UNK_07b23e20;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a965ba:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a965ba;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_012f60fc,0xd);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23e70;
  puStack_168 = &UNK_07b23e80;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a969ca:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a969ca;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0119e3f0,6);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23ed0;
  puStack_168 = &UNK_07b23ee0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a96dda:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a96dda;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013453f1,8);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23f30;
  puStack_168 = &UNK_07b23f40;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a971ea:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a971ea;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01241c49,9);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23f90;
  puStack_168 = &UNK_07b23fa0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a975fa:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a975fa;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0149a096,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b23ff0;
  puStack_168 = &UNK_07b24000;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a97a0a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a97a0a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0137b0d8,0xd);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24050;
  puStack_168 = &UNK_07b24060;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a97e1a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a97e1a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013453fa,10);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b240b0;
  puStack_168 = &UNK_07b240c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9822a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9822a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01227a95,4);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24110;
  puStack_168 = &UNK_07b24120;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9863a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9863a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_014b2b8a,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24170;
  puStack_168 = &UNK_07b24180;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a98a4a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a98a4a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0132a68b,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b241d0;
  puStack_168 = &UNK_07b241e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a98e5a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a98e5a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01464202,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24230;
  puStack_168 = &UNK_07b24240;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9926a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9926a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0132a691,6);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24290;
  puStack_168 = &UNK_07b242a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9967a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9967a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01345405,0x1a);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b242f0;
  puStack_168 = &UNK_07b24300;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a99a8a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a99a8a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0125c7ba,0x12);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24350;
  puStack_168 = &UNK_07b24360;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a99e9a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a99e9a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_012c23e8,0x21);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b243b0;
  puStack_168 = &UNK_07b243c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9a2aa:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9a2aa;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0139629c,0x26);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24410;
  puStack_168 = &UNK_07b24420;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9a6ba:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9a6ba;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013fdc86,0x20);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24470;
  puStack_168 = &UNK_07b24480;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9aaca:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9aaca;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01464208,0x21);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b244d0;
  puStack_168 = &UNK_07b244e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9aeda:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9aeda;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0128f5b4,0x20);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24530;
  puStack_168 = &UNK_07b24540;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9b2ea:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9b2ea;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_012f610a,0x21);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24590;
  puStack_168 = &UNK_07b245a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9b6fa:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9b6fa;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_014176f2,0x1f);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b245f0;
  puStack_168 = &UNK_07b24600;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9bb0a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9bb0a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_013e3c2e,0x1e);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24650;
  puStack_168 = &UNK_07b24660;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9bf1a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9bf1a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0147d0c4,0x1d);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b246b0;
  puStack_168 = &UNK_07b246c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9c32a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9c32a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_011f2155,0xf);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24710;
  puStack_168 = &UNK_07b24720;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9c73a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9c73a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0147d0e2,0xb);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24770;
  puStack_168 = &UNK_07b24780;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9cb4a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9cb4a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0149a09c,0x14);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b247d0;
  puStack_168 = &UNK_07b247e0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9cf5a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9cf5a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0146422a,0x27);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24830;
  puStack_168 = &UNK_07b24840;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9d36a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9d36a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_0130f33c,0x21);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24890;
  puStack_168 = &UNK_07b248a0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9d77a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9d77a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01345420,9);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b248f0;
  puStack_168 = &UNK_07b24900;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9db8a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9db8a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_01479ac1,5);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24950;
  puStack_168 = &UNK_07b24960;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9df9a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9df9a;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_011f2165,0xf);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b249b0;
  puStack_168 = &UNK_07b249c0;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9e3aa:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9e3aa;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar5 = uStack_114;
  lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar5)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01227b6e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  FUN_05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x07b234b0(auStack_e8,&UNK_011b8ea4,10);
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
    uVar10 = (ulong)((uint)uVar13 & 3);
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
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        uStack_11c = ((int)(char)puVar3[uVar13 + uVar14] ^ uStack_11c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
    }
  }
  uStack_120 = 2;
  if ((DAT_0f5b4a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b4a10), iVar7 != 0)) {
    func_0x07b23440(0xf5b49f8);
    func_0x0410844d(&DAT_0f5b4a10);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_07b23b00;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07b1f8e0;
  puStack_170 = &UNK_07b24a10;
  puStack_168 = &UNK_07b24a20;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  FUN_048b05a0(&uStack_140,auStack_1b0);
  plVar4 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      FUN_0412c2d0(plVar4);
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
  func_0x07b23890(auStack_1b0,&uStack_108,auStack_e8);
  if (uStack_198._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_198) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_1a8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_07a9e7ba:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_198._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_19c,uStack_1a0) + 0x78) + 0x48);
      iVar7 = *piVar11;
      while (iVar7 != (int)uStack_198) {
        piVar11 = piVar11 + 0x1a;
        iVar7 = *piVar11;
      }
      goto LAB_07a9e7ba;
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
    lVar9 = func_0x07b1f8e0(lStack_148 + 0x18);
    lVar9 = *(long *)(lVar9 + 0x68);
    piVar12 = *(int **)(lVar9 + 0x28);
    for (piVar11 = *(int **)(lVar9 + 0x20); (piVar11 != piVar12 && (*piVar11 != -0x44779c53));
        piVar11 = piVar11 + 0xe) {
    }
    if (piVar11 == piVar12) {
      if (piVar12 < *(int **)(lVar9 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar9 + 0x20,auStack_1b0);
      }
      *(int **)(lVar9 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar11 + 8) != 0) &&
            (cVar6 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013b1303),
            cVar6 != '\0')) {
      _DAT
/* truncated by DecompileTargets.java */

