/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8599030 (ELF vaddr 0x8499030)
 * Label: string:Temperature
 * Body:  [[08599030, 085a6ada]]
 * Ghidra: FUN_08599030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08599030(long param_1)

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
  
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_085990a0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_085990a0:
    puVar9 = &DAT_0f5d8760;
    if (iRam000000000f5d87c0 != -0x2b3da790) goto LAB_085990f5;
LAB_085990cb:
    lVar2 = *(long *)(puVar9 + 0x68);
    if (lVar2 == 0) goto LAB_085990f5;
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
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_085990cb;
LAB_085990f5:
    puVar9 = &UNK_0125e3b3;
    uVar13 = 0x1d;
  }
  func_0x08640160(&lStack_148,param_1,puVar9,uVar13);
  uStack_114 = uStack_114 & 0xffffff00;
  cStack_110 = '\0';
  if (cStack_118 != '\0') {
    return;
  }
  func_0x086439e0(auStack_e8,&UNK_01434277,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086440d0;
  puStack_168 = &UNK_086440e0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859937f:
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
      goto LAB_0859937f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_08599410;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_08599410:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0125e3d1,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086442f0;
  puStack_168 = &UNK_08644300;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859974f:
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
      goto LAB_0859974f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085997d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085997d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0144df25,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644350;
  puStack_168 = &UNK_08644360;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_08599b0f:
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
      goto LAB_08599b0f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_08599b90;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_08599b90:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_013b3112,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086443b0;
  puStack_168 = &UNK_086443c0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_08599ecf:
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
      goto LAB_08599ecf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_08599f50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_08599f50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01278bc2,0x11);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644410;
  puStack_168 = &UNK_08644420;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859a28f:
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
      goto LAB_0859a28f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859a310;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859a310:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0144df35,0x14);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644470;
  puStack_168 = &UNK_08644480;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859a64f:
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
      goto LAB_0859a64f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859a6d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859a6d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01310e97,0x10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086444d0;
  puStack_168 = &UNK_086444e0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859aa0f:
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
      goto LAB_0859aa0f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859aa90;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859aa90:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012c4517,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644530;
  puStack_168 = &UNK_08644540;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859adcf:
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
      goto LAB_0859adcf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859ae50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859ae50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0120e621,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644590;
  puStack_168 = &UNK_086445a0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859b18f:
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
      goto LAB_0859b18f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859b210;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859b210:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01465fed,0xd);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086445f0;
  puStack_168 = &UNK_08644600;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859b54f:
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
      goto LAB_0859b54f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859b5d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859b5d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0144df4a,0xb);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644650;
  puStack_168 = &UNK_08644660;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859b90f:
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
      goto LAB_0859b90f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859b990;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859b990:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012441ad,4);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086446b0;
  puStack_168 = &UNK_086446c0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859bccf:
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
      goto LAB_0859bccf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859bd50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859bd50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012aa3e9,0x11);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644710;
  puStack_168 = &UNK_08644720;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859c08f:
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
      goto LAB_0859c08f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859c110;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859c110:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_013e56ad,10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644770;
  puStack_168 = &UNK_08644780;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859c44f:
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
      goto LAB_0859c44f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859c4d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859c4d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011da408,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086447d0;
  puStack_168 = &UNK_086447e0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859c80f:
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
      goto LAB_0859c80f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859c890;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859c890:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012aa3fb,0x15);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644830;
  puStack_168 = &UNK_08644840;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859cbcf:
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
      goto LAB_0859cbcf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859cc50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859cc50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_013b3122,10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644890;
  puStack_168 = &UNK_086448a0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859cf8f:
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
      goto LAB_0859cf8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859d010;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859d010:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011da417,0x11);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086448f0;
  puStack_168 = &UNK_08644900;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859d34f:
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
      goto LAB_0859d34f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859d3d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859d3d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012ddf90,10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644950;
  puStack_168 = &UNK_08644960;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859d70f:
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
      goto LAB_0859d70f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859d790;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859d790:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0149bf4c,0xc);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086449b0;
  puStack_168 = &UNK_086449c0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859dacf:
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
      goto LAB_0859dacf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859db50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859db50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0147eec6,8);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644a10;
  puStack_168 = &UNK_08644a20;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859de8f:
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
      goto LAB_0859de8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859df10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859df10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011a3b06,9);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644a70;
  puStack_168 = &UNK_08644a80;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859e24f:
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
      goto LAB_0859e24f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859e2d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859e2d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01434286,0x17);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644ad0;
  puStack_168 = &UNK_08644ae0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859e60f:
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
      goto LAB_0859e60f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859e690;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859e690:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012441b2,0x10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644b30;
  puStack_168 = &UNK_08644b40;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859e9cf:
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
      goto LAB_0859e9cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859ea50;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859ea50:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011da429,0x12);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644b90;
  puStack_168 = &UNK_08644ba0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859ed8f:
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
      goto LAB_0859ed8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859ee10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859ee10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0137cd87,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644bf0;
  puStack_168 = &UNK_08644c00;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859f14f:
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
      goto LAB_0859f14f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859f1d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859f1d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0132c4ff,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644c50;
  puStack_168 = &UNK_08644c60;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859f50f:
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
      goto LAB_0859f50f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859f590;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859f590:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_013cb3c1,0xf);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644cb0;
  puStack_168 = &UNK_08644cc0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859f8cf:
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
      goto LAB_0859f8cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859f950;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859f950:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011da43c,0x10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644d10;
  puStack_168 = &UNK_08644d20;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_0859fc8f:
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
      goto LAB_0859fc8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_0859fd10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_0859fd10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0144df56,0x14);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644d70;
  puStack_168 = &UNK_08644d80;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a004f:
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
      goto LAB_085a004f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a00d0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a00d0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01278bd4,0xc);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644dd0;
  puStack_168 = &UNK_08644de0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a040f:
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
      goto LAB_085a040f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a0490;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a0490:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_013ff65d,0xd);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644e30;
  puStack_168 = &UNK_08644e40;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a07cf:
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
      goto LAB_085a07cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a0850;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a0850:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0139864e,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644e90;
  puStack_168 = &UNK_08644ea0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a0b8f:
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
      goto LAB_085a0b8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a0c10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a0c10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011bebbe,0x12);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644ef0;
  puStack_168 = &UNK_08644f00;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a0f4f:
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
      goto LAB_085a0f4f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a0fd0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a0fd0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01310ea8,0xb);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644f50;
  puStack_168 = &UNK_08644f60;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a130f:
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
      goto LAB_085a130f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a1390;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a1390:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012c4526,0xc);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08644fb0;
  puStack_168 = &UNK_08644fc0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a16cf:
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
      goto LAB_085a16cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a1750;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a1750:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01278be1,0xd);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08645010;
  puStack_168 = &UNK_08645020;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a1a8f:
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
      goto LAB_085a1a8f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a1b10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a1b10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0120e631,0x11);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08645070;
  puStack_168 = &UNK_08645080;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a1e4f:
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
      goto LAB_085a1e4f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a1ed0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a1ed0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_011f3f28,0xd);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086450d0;
  puStack_168 = &UNK_086450e0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a220f:
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
      goto LAB_085a220f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a2290;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a2290:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_012ddf9b,10);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08645130;
  puStack_168 = &UNK_08645140;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a25cf:
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
      goto LAB_085a25cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a2650;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a2650:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01463d67,0xb);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08645190;
  puStack_168 = &UNK_086451a0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a298f:
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
      goto LAB_085a298f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a2a10;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a2a10:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_01278bef,8);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086451f0;
  puStack_168 = &UNK_08645200;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a2d4f:
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
      goto LAB_085a2d4f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a2dd0;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a2dd0:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0139865d,0xe);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_08645250;
  puStack_168 = &UNK_08645260;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a310f:
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
      goto LAB_085a310f;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_085a3190;
    plVar12 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5d8760 + 4));
  if (plVar12 == *(long **)(lVar2 + 0x38)) {
LAB_085a3190:
    puVar9 = &DAT_0f5d8760;
  }
  else {
    puVar9 = (undefined *)plVar12[2];
  }
  puVar4 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
      (puVar15 != puVar4 && (*puVar15 != uVar6)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar4) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011a3dc4),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_1b0[0] = auStack_1b0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_11c,&uStack_11c,auStack_1b0);
  func_0x048b0bc0(auStack_e8);
  func_0x086439e0(auStack_e8,&UNK_0125e3e1,9);
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
  if ((DAT_0f5d8800 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d8800), iVar8 != 0)) {
    func_0x0863fe30();
    func_0x0410844d(&DAT_0f5d8800);
  }
  auStack_1b0[0] = uStack_11c;
  lStack_1a8 = 0;
  uStack_1a0 = 3;
  uStack_198 = 1;
  uStack_190 = 0;
  puStack_188 = &UNK_08644010;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0863fc60;
  puStack_170 = &UNK_086452b0;
  puStack_168 = &UNK_086452c0;
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
  func_0x08643da0(auStack_1b0,&uStack_108,auStack_e8);
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
LAB_085a34cf:
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
      goto LAB_085a34cf;
    }
    if (uStack_198._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_110 == '\0') {
    func_0x08644130(auStack_1b0,&lStack_148);
  }
  uVar6 = uStack_114;
  lVar2 = lStack_148;
  if ((DAT_0f5d87e0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d87e0), iVar8 != 0)) {
    func_0x0863fd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d8760,0xf53dab8);
    func_0x0410844d(&DAT_0f5d87e0);
  }
  plVar12 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5d8760 + 4)) * 8);
  do {
  
/* truncated by DecompileTargets.java */

