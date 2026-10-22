/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8063ce0 (ELF vaddr 0x7f63ce0)
 * Label: caller-of-callee
 * Body:  [[08063ce0, 08064e26] [08064e30, 08065547]]
 * Ghidra: FUN_08063ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08063ce0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  uint auStack_238 [2];
  long lStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  uint uStack_1a4;
  char cStack_1a0;
  uint uStack_19c;
  char cStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_160;
  uint uStack_15c;
  char cStack_158;
  long lStack_148;
  long lStack_140;
  uint uStack_138;
  long *aplStack_130 [2];
  byte bStack_120;
  undefined1 auStack_11f [7];
  ulong uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5c6e08 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e08), iVar9 != 0)) {
    func_0x080def00();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c6d88,0xf53dab8);
    func_0x0410844d(&DAT_0f5c6e08);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c6d88 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_08063d50;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c6d88 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_08063d50:
    puVar11 = &DAT_0f5c6d88;
    if (iRam000000000f5c6de8 != -0x2b3da790) goto LAB_08063da5;
LAB_08063d7b:
    lVar16 = *(long *)(puVar11 + 0x68);
    if (lVar16 == 0) goto LAB_08063da5;
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar16 + 9);
    if (bVar23) {
      puVar11 = *(undefined **)(lVar16 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar19 = *(ulong *)(lVar16 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_08063d7b;
LAB_08063da5:
    puVar11 = &UNK_0147e23d;
    uVar19 = 0x22;
  }
  func_0x080df340(&lStack_1d0,param_1,puVar11,uVar19);
  uStack_19c = uStack_19c & 0xffffff00;
  cStack_198 = '\0';
  if (cStack_1a0 == '\0') {
    func_0x080e2bc0(&lStack_148,&DAT_014ab9ed,7);
    uVar19 = (ulong)(bStack_120 >> 1);
    puVar6 = auStack_11f;
    if ((bStack_120 & 1) != 0) {
      uVar19 = uStack_118;
      puVar6 = puStack_110;
    }
    if (uVar19 == 0) {
      uStack_1a4 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar20 + 3] ^
                       ((int)(char)puVar6[uVar20 + 2] ^
                       ((int)(char)puVar6[uVar20 + 1] ^
                       ((int)(char)puVar6[uVar20] ^ uStack_1a4) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar19 + uVar20] ^ uStack_1a4) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    iStack_1a8 = 2;
    if ((DAT_0f5c6e28 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e28), iVar9 != 0)) {
      func_0x080df010();
      func_0x0410844d(&DAT_0f5c6e28);
    }
    auStack_238[0] = uStack_1a4;
    lStack_230 = 0;
    uStack_228 = 3;
    uStack_220 = 1;
    uStack_218 = 0;
    puStack_210 = &UNK_080e31d0;
    puStack_208 = &SUB_048b06d0;
    puStack_200 = &UNK_080dee40;
    puStack_1f8 = &UNK_080e3290;
    puStack_1f0 = &UNK_080e32a0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    plStack_1d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1c8,auStack_238);
    plVar14 = plStack_1d8;
    if (plStack_1d8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    func_0x080e2f60(auStack_238,&lStack_188,&lStack_148);
    if (uStack_220._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_220) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while (lVar16 != lStack_230) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_0806402f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_220._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_220) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0806402f;
      }
      if (uStack_220._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_224,uStack_228) + 0x18);
        *puVar21 = *puVar21 | 0x90000;
      }
    }
    if (cStack_198 == '\0') {
      func_0x080e32f0(auStack_238,&lStack_1d0);
    }
    uVar7 = uStack_19c;
    lVar16 = lStack_1d0;
    if ((DAT_0f5c6e08 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e08), iVar9 != 0)) {
      func_0x080def00();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c6d88,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6e08);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c6d88 + 4)) * 8);
    do {
      lVar17 = *plVar14;
      if (lVar17 == -1) goto LAB_080640c1;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c6d88 + 4)
            );
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_080640c1:
      puVar11 = &DAT_0f5c6d88;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar21 != puVar2 && (*puVar21 != uVar7)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar2) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e4d75),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_238[0] = auStack_238[0] & 0xffffff00;
    func_0x05d9c620(puVar21 + 2,&uStack_1a4,&uStack_1a4,auStack_238);
    func_0x048b0bc0(&lStack_148);
    func_0x080e2bc0(&lStack_148,&UNK_012f6f0a,0x12);
    uVar19 = (ulong)(bStack_120 >> 1);
    puVar6 = auStack_11f;
    if ((bStack_120 & 1) != 0) {
      uVar19 = uStack_118;
      puVar6 = puStack_110;
    }
    if (uVar19 == 0) {
      uStack_1a4 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar20 + 3] ^
                       ((int)(char)puVar6[uVar20 + 2] ^
                       ((int)(char)puVar6[uVar20 + 1] ^
                       ((int)(char)puVar6[uVar20] ^ uStack_1a4) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar19 + uVar20] ^ uStack_1a4) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    iStack_1a8 = 2;
    if ((DAT_0f5c6e28 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e28), iVar9 != 0)) {
      func_0x080df010();
      func_0x0410844d(&DAT_0f5c6e28);
    }
    auStack_238[0] = uStack_1a4;
    lStack_230 = 0;
    uStack_228 = 3;
    uStack_220 = 1;
    uStack_218 = 0;
    puStack_210 = &UNK_080e31d0;
    puStack_208 = &SUB_048b06d0;
    puStack_200 = &UNK_080dee40;
    puStack_1f8 = &UNK_080e34b0;
    puStack_1f0 = &UNK_080e34c0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    plStack_1d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1c8,auStack_238);
    plVar14 = plStack_1d8;
    if (plStack_1d8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    func_0x080e2f60(auStack_238,&lStack_188,&lStack_148);
    if (uStack_220._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_220) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while (lVar16 != lStack_230) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_080643ff:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_220._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_220) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_080643ff;
      }
      if (uStack_220._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_224,uStack_228) + 0x18);
        *puVar21 = *puVar21 | 0x90000;
      }
    }
    if (cStack_198 == '\0') {
      func_0x080e32f0(auStack_238,&lStack_1d0);
    }
    uVar7 = uStack_19c;
    lVar16 = lStack_1d0;
    if ((DAT_0f5c6e08 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e08), iVar9 != 0)) {
      func_0x080def00();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c6d88,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6e08);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c6d88 + 4)) * 8);
    do {
      lVar17 = *plVar14;
      if (lVar17 == -1) goto LAB_08064491;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c6d88 + 4)
            );
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_08064491:
      puVar11 = &DAT_0f5c6d88;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar21 != puVar2 && (*puVar21 != uVar7)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar2) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e4d75),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_238[0] = auStack_238[0] & 0xffffff00;
    func_0x05d9c620(puVar21 + 2,&uStack_1a4,&uStack_1a4,auStack_238);
    func_0x048b0bc0(&lStack_148);
    func_0x080e2bc0(&lStack_148,&UNK_01290d23,0x10);
    uVar19 = (ulong)(bStack_120 >> 1);
    puVar6 = auStack_11f;
    if ((bStack_120 & 1) != 0) {
      uVar19 = uStack_118;
      puVar6 = puStack_110;
    }
    if (uVar19 == 0) {
      uStack_1a4 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_1a4 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar20 + 3] ^
                       ((int)(char)puVar6[uVar20 + 2] ^
                       ((int)(char)puVar6[uVar20 + 1] ^
                       ((int)(char)puVar6[uVar20] ^ uStack_1a4) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_1a4 = ((int)(char)puVar6[uVar19 + uVar20] ^ uStack_1a4) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    iStack_1a8 = 2;
    if ((DAT_0f5c6e28 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e28), iVar9 != 0)) {
      func_0x080df010();
      func_0x0410844d(&DAT_0f5c6e28);
    }
    auStack_238[0] = uStack_1a4;
    lStack_230 = 0;
    uStack_228 = 3;
    uStack_220 = 1;
    uStack_218 = 0;
    puStack_210 = &UNK_080e31d0;
    puStack_208 = &SUB_048b06d0;
    puStack_200 = &UNK_080dee40;
    puStack_1f8 = &UNK_080e3510;
    puStack_1f0 = &UNK_080e3520;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    plStack_1d8 = (long *)0x0;
    func_0x048b05a0(&uStack_1c8,auStack_238);
    plVar14 = plStack_1d8;
    if (plStack_1d8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    func_0x080e2f60(auStack_238,&lStack_188,&lStack_148);
    if (uStack_220._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_220) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar16 = *(long *)(piVar13 + 0xc);
      while (lVar16 != lStack_230) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar16 = *(long *)(piVar13 + 0xc);
      }
LAB_080647cf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_220._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_220) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_080647cf;
      }
      if (uStack_220._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_224,uStack_228) + 0x18);
        *puVar21 = *puVar21 | 0x90000;
      }
    }
    if (cStack_198 == '\0') {
      func_0x080e32f0(auStack_238,&lStack_1d0);
    }
    uVar7 = uStack_19c;
    lVar16 = lStack_1d0;
    if ((DAT_0f5c6e08 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6e08), iVar9 != 0)) {
      func_0x080def00();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c6d88,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6e08);
    }
    plVar14 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c6d88 + 4)) * 8);
    do {
      lVar17 = *plVar14;
      if (lVar17 == -1) goto LAB_08064850;
      plVar14 = (long *)(*(long *)(lVar16 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c6d88 + 4)
            );
    if (plVar14 == *(long **)(lVar16 + 0x38)) {
LAB_08064850:
      puVar11 = &DAT_0f5c6d88;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar21 != puVar2 && (*puVar21 != uVar7)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar2) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013e4d75),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_238[0] = auStack_238[0] & 0xffffff00;
    func_0x05d9c620(puVar21 + 2,&uStack_1a4,&uStack_1a4,auStack_238);
    func_0x048b0bc0(&lStack_148);
  }
  if ((DAT_0f5c6c98 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5c6c98), iVar9 != 0)) {
    func_0x080dc370();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c6c18,0xf53dab8);
    func_0x0410844d(&DAT_0f5c6c98);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c6c18 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_08064950;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c6c18 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_08064950:
    puVar11 = &DAT_0f5c6c18;
    if (iRam000000000f5c6c78 != -0x2b3da790) goto LAB_080649ba;
LAB_0806497b:
    lVar16 = *(long *)(puVar11 + 0x68);
    if (lVar16 == 0) goto LAB_080649ba;
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar17 = lVar16 + 9;
    if (bVar23) {
      lVar17 = *(long *)(lVar16 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar19 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x080e3570(&lStack_1d0,param_1,lVar17,uVar19);
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0806497b;
LAB_080649ba:
    func_0x080e3570(&lStack_1d0,param_1,&UNK_011d97e1,0x25);
  }
  if (cStack_1a0 != '\0') {
    return;
  }
  func_0x080e4090(&lStack_148,&lStack_1d0,&UNK_013b2355,0x1a);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f107398;
  if (aplStack_130[0] != (long *)0x0) {
    lVar16 = *aplStack_130[0];
    aplStack_130[0] = plVar14;
    (**(code **)(lVar16 + 8))();
    plVar14 = aplStack_130[0];
  }
  aplStack_130[0] = plVar14;
  auStack_238[0] = uStack_138;
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 1;
  uStack_218 = 0;
  puStack_210 = &UNK_080e31d0;
  puStack_208 = &SUB_048b06d0;
  puStack_200 = &UNK_080dee40;
  puStack_1f8 = &UNK_080e46a0;
  puStack_1f0 = &UNK_080e4800;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  func_0x048b05a0(lStack_140,auStack_238);
  plVar14 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1d8 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x080e43a0(&lStack_148);
  uVar7 = uStack_1a4;
  iVar9 = iStack_1a8;
  uStack_78 = CONCAT44(uStack_1c4,uStack_1c8);
  uStack_70 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_68 = uStack_1b8;
  uStack_64 = uStack_1b4;
  uStack_60 = uStack_1b0;
  uStack_5c = uStack_1ac;
  func_0x048b0bc0(aplStack_130);
  puStack_190 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puStack_190 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puStack_190 = 2;
  puStack_190[1] = 1;
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar15 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  puVar22 = puVar15 + 4;
  uVar3 = *(undefined4 *)((long)puStack_190 + 4);
  uVar4 = *(undefined4 *)(puStack_190 + 1);
  uVar5 = *(undefined4 *)((long)puStack_190 + 0xc);
  *puVar15 = *(undefined4 *)puStack_190;
  puVar15[1] = uVar3;
  puVar15[2] = uVar4;
  puVar15[3] = uVar5;
  if (iVar9 == 1) {
    if ((DAT_0f5c6c98 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5c6c98), iVar10 != 0)) {
      func_0x080dc370();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c6c18,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6c98);
    }
    plVar14 = (long *)(*(long *)(lStack_1d0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_1d0 + 0x20) -
                                           *(long *)(lStack_1d0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c6c18 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_08064cb8;
      plVar14 = (long *)(*(long *)(lStack_1d0 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_1d0 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5c6c18 + 4));
    if (plVar14 == *(long **)(lStack_1d0 + 0x38)) {
LAB_08064cb8:
      puVar11 = &DAT_0f5c6c18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar16 = FUN_048b0c90(lStack_1d0 + 0x18,puVar11,uVar7,1);
    if (lVar16 == 0) {
      lStack_148 = 0;
      lStack_140 = 0;
      func_0x048b0d20(&lStack_148);
      lVar16 = lStack_148;
    }
    lVar16 = *(long *)(lVar16 + 0x58);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    if (iVar9 != 4) goto LAB_08064ed6;
    if ((DAT_0f5c6c98 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5c6c98), iVar10 != 0)) {
      func_0x080dc370();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c6c18,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6c98);
    }
    plVar14 = (long *)(*(long *)(lStack_1d0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_1d0 + 0x20) -
                                           *(long *)(lStack_1d0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c6c18 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_08064c48;
      plVar14 = (long *)(*(long *)(lStack_1d0 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_1d0 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5c6c18 + 4));
    if (plVar14 == *(long **)(lStack_1d0 + 0x38)) {
LAB_08064c48:
      puVar11 = &DAT_0f5c6c18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar16 = func_0x048b1040(lStack_1d0 + 0x18,puVar11,uVar7,1);
    if (lVar16 == 0) {
      lStack_148 = 0;
      lStack_140 = 0;
      func_0x048b10d0(&lStack_148);
      lVar17 = *(long *)(lStack_148 + 0x38);
      lVar16 = lStack_148;
      if (lVar17 == 0) goto LAB_08064df8;
LAB_08064e1d:
      do {
        lVar16 = lVar17;
        lVar17 = *(long *)(lVar16 + 0x38);
        if (*(long *)(lVar16 + 0x38) == 0) {
          lStack_148 = 0;
          lStack_140 = 0;
          func_0x048b10d0(&lStack_148);
          lVar17 = lStack_148;
        }
      } while (lVar17 != 0);
    }
    else {
      lVar17 = *(long *)(lVar16 + 0x38);
      if (*(long *)(lVar16 + 0x38) != 0) goto LAB_08064e1d;
LAB_08064df8:
      lStack_148 = 0;
      lStack_140 = 0;
      func_0x048b10d0(&lStack_148);
      lVar17 = lStack_148;
      if (lStack_148 != 0) goto LAB_08064e1d;
    }
    lVar16 = *(long *)(lVar16 + 0x48);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  puVar18[1] = 0xffffffffffffffff;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 0xff;
  *puVar18 = &UNK_0f4e3aa0;
  puVar18[4] = puVar15;
  puVar18[5] = puVar22;
  puVar18[6] = puVar22;
  plVar14 = *(long **)(lVar16 + 8);
  *(undefined8 **)(lVar16 + 8) = puVar18;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))();
  }
  puVar22 = (undefined4 *)0x0;
  puVar15 = (undefined4 *)0x0;
LAB_08064ed6:
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_58 = (undefined4)uStack_78;
  uStack_54 = uStack_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  if ((DAT_0f5c6c98 == '\0') && (iVar10 = FUN_04108328(&DAT_0f5c6c98), iVar10 != 0)) {
    func_0x080dc370();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c6c18,0xf53dab8);
    func_0x0410844d(&DAT_0f5c6c98);
  }
  plVar14 = (long *)(*(long *)(lStack_1d0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_1d0 + 0x20) -
                                         *(long *)(lStack_1d0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5c6c18 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_08064f50;
    plVar14 = (long *)(*(long *)(lStack_1d0 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lStack_1d0 + 0x30) + 8 + lVar16 * 0x18) !=
           *(uint *)(_DAT_0f5c6c18 + 4));
  if (plVar14 == *(long **)(lStack_1d0 + 0x38)) {
LAB_08064f50:
    puVar11 = &DAT_0f5c6c18;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139770a),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar16 = FUN_048b0c90(lStack_1d0 + 0x18,puVar11,uVar7,1);
  if (lVar16 == 0) {
    lStack_148 = 0;
    lStack_140 = 0;
    func_0x048b0d20(&lStack_148);
    lVar16 = lStack_148;
  }
  *(undefined1 *)(*(long *)(lVar16 + 0x58) + 0xa8) = 5;
  lStack_188 = lStack_1d0;
  uStack_180 = uStack_58;
  uStack_17c = uStack_54;
  uStack_178 = uStack_50;
  uStack_174 = uStack_4c;
  uStack_170 = uStack_48;
  uStack_16c = uStack_44;
  uStack_168 = uStack_40;
  uStack_164 = uStack_3c;
  iStack_160 = iVar9;
  uStack_15c = uVar7;
  cStack_158 = cStack_1a0;
  func_0x080e4090(&lStack_148,&lStack_188,&UNK_0120d825,0x11);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f011ba0;
  if (aplStack_130[0] != (long *)0x0) {
    lVar16 = *aplStack_130[0];
    aplStack_130[0] = plVar14;
    (**(code **)(lVar16 + 8))();
    plVar14 = aplStack_130[0];
  }
  aplStack_130[0] = plVar14;
  auStack_238[0] = uStack_138;
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 1;
  uStack_218 = 0;
  puStack_210 = &UNK_080e4c60;
  puStack_208 = &SUB_048b06d0;
  puStack_200 = &UNK_05e01070;
  puStack_1f8 = &UNK_080e4c70;
  puStack_1f0 = &UNK_080e4de0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  func_0x048b05a0(lStack_140,auStack_238);
  plVar14 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1d8 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      func_0x0412c2d0(plVar14);
    }
  }
  iVar9 = *(int *)(lStack_140 + 0x1c);
  if (iVar9 == 2) {
    piVar13 = *(int **)(*(long *)(*(long *)(lStack_140 + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(lStack_140 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar9 = *piVar13;
    }
    lVar16 = *(long *)(piVar13 + 0xc);
    while (lVar16 != *(long *)(lStack_140 + 8)) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar16 = *(long *)(piVar13 + 0xc);
    }
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar13 = *(int **)(*(long *)(*(long *)(lStack_140 + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(lStack_140 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar9 = *piVar13;
    }
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar21 = (uint *)(*(long *)(lStack_140 + 0x10) + 0x18);
    *puVar21 = *puVar21 | 0x40000;
  }
  func_0x080e43a0(&lStack_148);
  func_0x048b0bc0(aplStack_130);
  if (puVar15 != (undefined4 *)0x0) {
    func_0x0412a280(puVar15,(long)puVar22 - (long)puVar15);
  }
  func_0x0412a280(puStack_190,0x10);
  return;
}


