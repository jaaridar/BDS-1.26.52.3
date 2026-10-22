/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9b1070 (ELF vaddr 0xe8b1070)
 * Label: caller-of-callee
 * Body:  [[0e9b1070, 0e9b2da1] [0e9b2db0, 0e9b4b9b]]
 * Ghidra: FUN_0e9b1070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9b1070(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  bool bVar18;
  uint auStack_320 [2];
  long *plStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined *puStack_2b8;
  undefined4 *puStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long lStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined2 uStack_26f;
  undefined1 uStack_26d;
  undefined4 uStack_26c;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined4 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  uint uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  char cStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  char cStack_78;
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
  uint uStack_3c;
  char cStack_38;
  
  if ((DAT_0f76d2b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2b8), iVar7 != 0)) {
    func_0x0eb37c00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d238,0xf53dab8);
    func_0x0410844d(&DAT_0f76d2b8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76d238 + 4)) * 8);
  do {
    lVar2 = *plVar11;
    if (lVar2 == -1) goto LAB_0e9b10e0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76d238 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e9b10e0:
    puVar8 = &DAT_0f76d238;
    if (iRam000000000f76d298 != -0x2b3da790) goto LAB_0e9b1138;
LAB_0e9b110b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0e9b1138;
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar8 = (undefined *)(lVar2 + 9);
    if (bVar18) {
      puVar8 = *(undefined **)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e9b110b;
LAB_0e9b1138:
    puVar8 = &UNK_012b92a4;
    uVar15 = 0x28;
  }
  func_0x0eb38040(&uStack_1e8,param_1,puVar8,uVar15);
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  uStack_1b0 = uStack_1b0 & 0xffffff00;
  if ((char)uStack_1b8 == '\0') {
    func_0x0eb3b8c0(&puStack_2b8,&UNK_01343dd6,8);
    uVar15 = uStack_290 >> 1 & 0x7f;
    lVar2 = (long)&uStack_290 + 1;
    lVar14 = lVar2;
    if ((uStack_290 & 1) != 0) {
      uVar15 = uStack_288;
      lVar14 = lStack_280;
    }
    if (uVar15 == 0) {
      uVar13 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uVar13 = 0x811c9dc5;
        uVar16 = 0;
      }
      else {
        uVar13 = 0x811c9dc5;
        uVar16 = 0;
        do {
          uVar13 = ((int)*(char *)(lVar14 + 3 + uVar16) ^
                   ((int)*(char *)(lVar14 + 2 + uVar16) ^
                   ((int)*(char *)(lVar14 + 1 + uVar16) ^
                   ((int)*(char *)(lVar14 + uVar16) ^ uVar13) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar16 = uVar16 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar16);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uVar13 = ((int)*(char *)(lVar14 + uVar16 + uVar15) ^ uVar13) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    uStack_1c0 = CONCAT44(uVar13,2);
    if ((DAT_0f76d2d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2d8), iVar7 != 0)) {
      func_0x0eb37d10();
      func_0x0410844d(&DAT_0f76d2d8);
    }
    auStack_320[0] = uStack_1c0._4_4_;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb3bed0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb37b40;
    puStack_2e0 = &UNK_0eb3bf90;
    puStack_2d8 = &UNK_0eb3bfa0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_1e0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_158 = uStack_1d0;
    uStack_154 = uStack_1cc;
    uStack_150 = uStack_1c8;
    uStack_14c = uStack_1c4;
    func_0x0eb3bc60(auStack_320,&uStack_168,&puStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      lVar14 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar14 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar14 = *(long *)(piVar10 + 0xc);
      }
LAB_0e9b13cf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b13cf;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)((long)plStack_310 + 0x18) = *(uint *)((long)plStack_310 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1b0 == '\0') {
      func_0x0eb3bff0(auStack_320,&uStack_1e8);
    }
    uVar13 = uStack_1b4;
    lVar14 = CONCAT44(uStack_1e4,uStack_1e8);
    if ((DAT_0f76d2b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2b8), iVar7 != 0)) {
      func_0x0eb37c00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d238,0xf53dab8);
      func_0x0410844d(&DAT_0f76d2b8);
    }
    plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f76d238 + 4)) * 8);
    do {
      lVar3 = *plVar11;
      if (lVar3 == -1) goto LAB_0e9b1460;
      plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f76d238 + 4))
    ;
    if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e9b1460:
      puVar8 = &DAT_0f76d238;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar17 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar17 != puVar4 && (*puVar17 != uVar13)); puVar17 = puVar17 + 0xe) {
    }
    if ((puVar17 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aa12c),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar17 + 2,(long)&uStack_1c0 + 4,(long)&uStack_1c0 + 4,auStack_320);
    uStack_128 = uStack_1e8;
    uStack_124 = uStack_1e4;
    uStack_120 = uStack_1e0;
    uStack_11c = uStack_1dc;
    uStack_118 = uStack_1d8;
    uStack_114 = uStack_1d4;
    uStack_110 = uStack_1d0;
    uStack_10c = uStack_1cc;
    uStack_108 = uStack_1c8;
    uStack_104 = uStack_1c4;
    uStack_100 = (undefined4)uStack_1c0;
    uStack_fc = uStack_1c0._4_4_;
    uStack_f8 = uStack_1b8;
    uStack_f4 = uStack_1b4;
    uStack_f0 = uStack_1b0;
    func_0x048b0bc0(&puStack_2b8);
    func_0x0eb3b8c0(&puStack_2b8,&UNK_011e8790,0x16);
    uVar15 = uStack_290 >> 1 & 0x7f;
    lVar14 = lVar2;
    if ((uStack_290 & 1) != 0) {
      uVar15 = uStack_288;
      lVar14 = lStack_280;
    }
    if (uVar15 == 0) {
      uStack_fc = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uStack_fc = 0x811c9dc5;
        uVar16 = 0;
      }
      else {
        uStack_fc = 0x811c9dc5;
        uVar16 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar14 + 3 + uVar16) ^
                      ((int)*(char *)(lVar14 + 2 + uVar16) ^
                      ((int)*(char *)(lVar14 + 1 + uVar16) ^
                      ((int)*(char *)(lVar14 + uVar16) ^ uStack_fc) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar16 = uVar16 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar16);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar14 + uVar16 + uVar15) ^ uStack_fc) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    uStack_100 = 2;
    if ((DAT_0f76d2d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2d8), iVar7 != 0)) {
      func_0x0eb37d10();
      func_0x0410844d(&DAT_0f76d2d8);
    }
    auStack_320[0] = uStack_fc;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb3bed0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb37b40;
    puStack_2e0 = &UNK_0eb3c1b0;
    puStack_2d8 = &UNK_0eb3c1c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_120,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_158 = uStack_110;
    uStack_154 = uStack_10c;
    uStack_150 = uStack_108;
    uStack_14c = uStack_104;
    uStack_168 = (long *)CONCAT44(uStack_11c,uStack_120);
    uStack_160 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x0eb3bc60(auStack_320,&uStack_168,&puStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      lVar14 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar14 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar14 = *(long *)(piVar10 + 0xc);
      }
LAB_0e9b17df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b17df;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)((long)plStack_310 + 0x18) = *(uint *)((long)plStack_310 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_f0 == '\0') {
      func_0x0eb3bff0(auStack_320,&uStack_128);
    }
    uVar13 = uStack_f4;
    lVar14 = CONCAT44(uStack_124,uStack_128);
    if ((DAT_0f76d2b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2b8), iVar7 != 0)) {
      func_0x0eb37c00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d238,0xf53dab8);
      func_0x0410844d(&DAT_0f76d2b8);
    }
    plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f76d238 + 4)) * 8);
    do {
      lVar3 = *plVar11;
      if (lVar3 == -1) goto LAB_0e9b1870;
      plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f76d238 + 4))
    ;
    if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e9b1870:
      puVar8 = &DAT_0f76d238;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar17 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar17 != puVar4 && (*puVar17 != uVar13)); puVar17 = puVar17 + 0xe) {
    }
    if ((puVar17 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aa12c),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar17 + 2,&uStack_fc,&uStack_fc,auStack_320);
    uStack_1a8 = CONCAT44(uStack_124,uStack_128);
    uStack_1a0 = (long *)CONCAT44(uStack_11c,uStack_120);
    uStack_198 = uStack_118;
    uStack_194 = uStack_114;
    uStack_190 = uStack_110;
    uStack_18c = uStack_10c;
    uStack_188 = uStack_108;
    uStack_184 = uStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    uStack_178 = uStack_f8;
    uStack_174 = uStack_f4;
    uStack_170 = uStack_f0;
    func_0x048b0bc0(&puStack_2b8);
    func_0x0eb3b8c0(&puStack_2b8,&UNK_011e87a7,7);
    uVar15 = uStack_290 >> 1 & 0x7f;
    lVar14 = lVar2;
    if ((uStack_290 & 1) != 0) {
      uVar15 = uStack_288;
      lVar14 = lStack_280;
    }
    if (uVar15 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar16 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar16 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar14 + 3 + uVar16) ^
                       ((int)*(char *)(lVar14 + 2 + uVar16) ^
                       ((int)*(char *)(lVar14 + 1 + uVar16) ^
                       ((int)*(char *)(lVar14 + uVar16) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar16 = uVar16 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar16);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar14 + uVar16 + uVar15) ^ uStack_17c) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    uStack_180 = 2;
    if ((DAT_0f76d2d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2d8), iVar7 != 0)) {
      func_0x0eb37d10();
      func_0x0410844d(&DAT_0f76d2d8);
    }
    auStack_320[0] = uStack_17c;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb3bed0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb37b40;
    puStack_2e0 = &UNK_0eb3c210;
    puStack_2d8 = &UNK_0eb3c220;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_158 = uStack_190;
    uStack_154 = uStack_18c;
    uStack_150 = uStack_188;
    uStack_14c = uStack_184;
    uStack_168 = uStack_1a0;
    uStack_160 = (long *)CONCAT44(uStack_194,uStack_198);
    func_0x0eb3bc60(auStack_320,&uStack_168,&puStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      lVar14 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar14 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar14 = *(long *)(piVar10 + 0xc);
      }
LAB_0e9b1bef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b1bef;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)((long)plStack_310 + 0x18) = *(uint *)((long)plStack_310 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0eb3bff0(auStack_320,&uStack_1a8);
    }
    uVar13 = uStack_174;
    lVar14 = uStack_1a8;
    if ((DAT_0f76d2b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2b8), iVar7 != 0)) {
      func_0x0eb37c00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d238,0xf53dab8);
      func_0x0410844d(&DAT_0f76d2b8);
    }
    plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f76d238 + 4)) * 8);
    do {
      lVar3 = *plVar11;
      if (lVar3 == -1) goto LAB_0e9b1c80;
      plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f76d238 + 4))
    ;
    if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e9b1c80:
      puVar8 = &DAT_0f76d238;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar17 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar17 != puVar4 && (*puVar17 != uVar13)); puVar17 = puVar17 + 0xe) {
    }
    if ((puVar17 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aa12c),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar17 + 2,&uStack_17c,&uStack_17c,auStack_320);
    uStack_168 = (long *)uStack_1a8;
    uStack_160 = uStack_1a0;
    uStack_158 = uStack_198;
    uStack_154 = uStack_194;
    uStack_150 = uStack_190;
    uStack_14c = uStack_18c;
    uStack_148 = uStack_188;
    uStack_144 = uStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_138 = uStack_178;
    uStack_134 = uStack_174;
    uStack_130 = uStack_170;
    func_0x048b0bc0(&puStack_2b8);
    func_0x0eb3b8c0(&puStack_2b8,&UNK_01321212,0xd);
    uVar15 = uStack_290 >> 1 & 0x7f;
    if ((uStack_290 & 1) != 0) {
      uVar15 = uStack_288;
      lVar2 = lStack_280;
    }
    if (uVar15 == 0) {
      uStack_13c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar15 & 3);
      if (uVar15 < 4) {
        uStack_13c = 0x811c9dc5;
        uVar16 = 0;
      }
      else {
        uStack_13c = 0x811c9dc5;
        uVar16 = 0;
        do {
          uStack_13c = ((int)*(char *)(lVar2 + 3 + uVar16) ^
                       ((int)*(char *)(lVar2 + 2 + uVar16) ^
                       ((int)*(char *)(lVar2 + 1 + uVar16) ^
                       ((int)*(char *)(lVar2 + uVar16) ^ uStack_13c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar16 = uVar16 + 4;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar16);
      }
      if (uVar9 != 0) {
        uVar15 = 0;
        do {
          uStack_13c = ((int)*(char *)(lVar2 + uVar16 + uVar15) ^ uStack_13c) * 0x1000193;
          uVar15 = uVar15 + 1;
        } while (uVar9 != uVar15);
      }
    }
    uStack_140 = 2;
    if ((DAT_0f76d2d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2d8), iVar7 != 0)) {
      func_0x0eb37d10();
      func_0x0410844d(&DAT_0f76d2d8);
    }
    auStack_320[0] = uStack_13c;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb3bed0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb37b40;
    puStack_2e0 = &UNK_0eb3c270;
    puStack_2d8 = &UNK_0eb3c280;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_160,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_d8 = uStack_150;
    uStack_d4 = uStack_14c;
    uStack_d0 = uStack_148;
    uStack_cc = uStack_144;
    uStack_e8 = (undefined4)uStack_160;
    uStack_e4 = uStack_160._4_4_;
    uStack_e0 = uStack_158;
    uStack_dc = uStack_154;
    func_0x0eb3bc60(auStack_320,&uStack_e8,&puStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(plStack_310[0xf] + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      plVar11 = *(long **)(piVar10 + 0xc);
      while (plVar11 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar11 = *(long **)(piVar10 + 0xc);
      }
LAB_0e9b1fef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(plStack_310[0xf] + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b1fef;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)(plStack_310 + 3) = *(uint *)(plStack_310 + 3) | 0x90000;
      }
    }
    if ((char)uStack_130 == '\0') {
      func_0x0eb3bff0(auStack_320,&uStack_168);
    }
    uVar13 = uStack_134;
    lVar2 = (long)uStack_168;
    if ((DAT_0f76d2b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d2b8), iVar7 != 0)) {
      func_0x0eb37c00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d238,0xf53dab8);
      func_0x0410844d(&DAT_0f76d2b8);
    }
    plVar11 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f76d238 + 4)) * 8);
    do {
      lVar14 = *plVar11;
      if (lVar14 == -1) goto LAB_0e9b2080;
      plVar11 = (long *)(*(long *)(lVar2 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f76d238 + 4))
    ;
    if (plVar11 == *(long **)(lVar2 + 0x38)) {
LAB_0e9b2080:
      puVar8 = &DAT_0f76d238;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar17 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar17 != puVar4 && (*puVar17 != uVar13)); puVar17 = puVar17 + 0xe) {
    }
    if ((puVar17 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aa12c),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar17 + 2,&uStack_13c,&uStack_13c,auStack_320);
    func_0x048b0bc0(&puStack_2b8);
  }
  if ((DAT_0f76d370 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d370), iVar7 != 0)) {
    func_0x0eb3c390();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d2f0,0xf53dab8);
    func_0x0410844d(&DAT_0f76d370);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76d2f0 + 4)) * 8);
  do {
    lVar2 = *plVar11;
    if (lVar2 == -1) goto LAB_0e9b2180;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76d2f0 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e9b2180:
    puVar8 = &DAT_0f76d2f0;
    if (iRam000000000f76d350 != -0x2b3da790) goto LAB_0e9b21ed;
LAB_0e9b21ab:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0e9b21ed;
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar14 = lVar2 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0eb3cc10(&uStack_1e8,param_1,lVar14,uVar15);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e9b21ab;
LAB_0e9b21ed:
    func_0x0eb3cc10(&uStack_1e8,param_1,&UNK_014906e7,0x1c);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0eb3d7c0(&puStack_2b8,&uStack_1e8,&UNK_013fcdd0,6,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f012348;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_05ea71a0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_05e9fca0;
    puStack_2e0 = &UNK_0eb3dd80;
    puStack_2d8 = &UNK_0eb3df90;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb3da80(&puStack_2b8);
    uStack_178 = CONCAT31(uStack_178._1_3_,(char)uStack_1b8);
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = (undefined4)uStack_1c0;
    uStack_17c = uStack_1c0._4_4_;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = (long *)CONCAT44(uStack_1dc,uStack_1e0);
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb3d7c0(&puStack_2b8,&uStack_1a8,&UNK_0142a5c6,4,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4da338;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb3bed0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb37b40;
    puStack_2e0 = &UNK_0eb3e160;
    puStack_2d8 = &UNK_0eb3e2c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb3da80(&puStack_2b8);
    uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
    uStack_148 = uStack_188;
    uStack_144 = uStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_158 = uStack_198;
    uStack_154 = uStack_194;
    uStack_150 = uStack_190;
    uStack_14c = uStack_18c;
    uStack_168 = (long *)uStack_1a8;
    uStack_160 = uStack_1a0;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb3d200(&puStack_2b8,(long)uStack_168 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar5 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar5 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0e9b25bf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b25bf;
      }
      if (uStack_2a0._4_4_ == 0) {
        puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
        *puVar17 = *puVar17 | 0x40000;
      }
    }
    func_0x0eb3d7c0(&puStack_2b8,&uStack_168,&UNK_013c106b,0x15,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f2cccf0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0d9d7be0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_0b68b830;
    puStack_2e0 = &UNK_0eb3e730;
    puStack_2d8 = &UNK_0eb3e970;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb3da80(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f76d428 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d428), iVar7 != 0)) {
    func_0x0eb3ec10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d3a8,0xf53dab8);
    func_0x0410844d(&DAT_0f76d428);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76d3a8 + 4)) * 8);
  do {
    lVar2 = *plVar11;
    if (lVar2 == -1) goto LAB_0e9b2750;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76d3a8 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e9b2750:
    puVar8 = &DAT_0f76d3a8;
    if (iRam000000000f76d408 != -0x2b3da790) goto LAB_0e9b27bd;
LAB_0e9b277b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0e9b27bd;
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar14 = lVar2 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0eb3f210(&uStack_1e8,param_1,lVar14,uVar15);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e9b277b;
LAB_0e9b27bd:
    func_0x0eb3f210(&uStack_1e8,param_1,&UNK_014c498d,0x1b);
  }
  if ((char)uStack_1b8 == '\0') {
    if ((DAT_0f76d448 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d448), iVar7 != 0)) {
      func_0x0eb3ed20();
      func_0x0410844d(&DAT_0f76d448);
    }
    uStack_1c0 = 0x5a66a3c300000001;
    lVar2 = CONCAT44(uStack_1e4,uStack_1e8);
    if ((DAT_0f76d428 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d428), iVar7 != 0)) {
      func_0x0eb3ec10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d3a8,0xf53dab8);
      func_0x0410844d(&DAT_0f76d428);
    }
    puStack_2b0 = (undefined4 *)(lVar2 + 0x18);
    plVar11 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f76d3a8 + 4)) * 8);
    do {
      lVar14 = *plVar11;
      if (lVar14 == -1) goto LAB_0e9b2880;
      plVar11 = (long *)(*(long *)(lVar2 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f76d3a8 + 4))
    ;
    if (plVar11 == *(long **)(lVar2 + 0x38)) {
LAB_0e9b2880:
      puStack_2b8 = &DAT_0f76d3a8;
    }
    else {
      puStack_2b8 = (undefined *)plVar11[2];
    }
    FUN_0ed621a0(&puStack_2b8,uStack_1c0._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,1);
    uStack_2a8 = uStack_1c0._4_4_;
    uStack_2a0 = (long *)0x0;
    lStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    lStack_280 = 0;
    uStack_278 = 0x14;
    uStack_277 = 0x6e5f746e657665;
    uStack_270 = 0x61;
    uStack_26f = 0x656d;
    uStack_26d = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_1e0;
    func_0x048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = puVar12;
      (**(code **)(lVar2 + 8))();
      puVar12 = uStack_2a0;
    }
    uStack_2a0 = puVar12;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_048b3f30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_048b2190;
    puStack_2e0 = &UNK_0eb3fd70;
    puStack_2d8 = &UNK_0eb3ff30;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    puVar5 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_320[0] = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar2 = lStack_298;
    puVar12 = uStack_2a0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_318 = plVar11 + 3;
    uStack_2a0 = (long *)0x0;
    lStack_298 = 0;
    plVar11[3] = (long)puVar12;
    plVar11[4] = lVar2;
    plVar11[7] = lStack_280;
    plVar11[5] = uStack_290;
    plVar11[6] = uStack_288;
    uStack_290 = 0;
    uStack_288 = 0;
    lStack_280 = 0;
    plVar11[10] = lStack_268;
    plVar11[8] = CONCAT71(uStack_277,uStack_278);
    plVar11[9] = CONCAT44(uStack_26c,CONCAT13(uStack_26d,CONCAT21(uStack_26f,uStack_270)));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    uStack_26c = 0;
    lStack_268 = 0;
    plVar11[0xb] = lStack_260;
    plVar11[0xc] = lStack_258;
    plVar11[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar11[0xe] = lStack_248;
    plVar11[0xf] = lStack_240;
    plVar11[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_230;
    plVar11[0x12] = lStack_228;
    plVar11[0x13] = lStack_220;
    plVar11[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar11[0x17] = lStack_200;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar11[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_168 = (long *)0x0;
    uStack_160 = (long *)0x0;
    plStack_310 = plVar11;
    FUN_048afd20(puVar5,auStack_320);
    plVar11 = plStack_310;
    if (plStack_310 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_310 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_310 + 0x10))(plStack_310);
        FUN_0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_160;
    if (uStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_160 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_160 + 0x10))(uStack_160);
        FUN_0412c2d0(plVar11);
      }
    }
    lVar2 = *(long *)(puVar5 + 4);
    iVar7 = puVar5[7];
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != puVar5[6]) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar5 + 2); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_0e9b2dba:
      piVar10[4] = piVar10[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != puVar5[6]) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b2dba;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f76d4e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76d4e0), iVar7 != 0)) {
    func_0x0eb401c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76d460,0xf53dab8);
    func_0x0410844d(&DAT_0f76d4e0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76d460 + 4)) * 8);
  do {
    lVar2 = *plVar11;
    if (lVar2 == -1) goto LAB_0e9b2e20;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76d460 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e9b2e20:
    puVar8 = &DAT_0f76d460;
    if (iRam000000000f76d4c0 != -0x2b3da790) goto LAB_0e9b2e8d;
LAB_0e9b2e4b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0e9b2e8d;
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar14 = lVar2 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0eb40750(&uStack_1e8,param_1,lVar14,uVar15);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e9b2e4b;
LAB_0e9b2e8d:
    func_0x0eb40750(&uStack_1e8,param_1,&UNK_0128709c,0x1a);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0eb41370(&puStack_2b8,&uStack_1e8,&UNK_01e366d1,6,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f0126a0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_05daeda0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_05daea90;
    puStack_2e0 = &UNK_0eb41930;
    puStack_2d8 = &UNK_0eb41aa0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    cStack_38 = (char)uStack_1b8;
    uStack_48 = uStack_1c8;
    uStack_44 = uStack_1c4;
    uStack_40 = (undefined4)uStack_1c0;
    uStack_3c = uStack_1c0._4_4_;
    uStack_58 = uStack_1d8;
    uStack_54 = uStack_1d4;
    uStack_50 = uStack_1d0;
    uStack_4c = uStack_1cc;
    uStack_68 = uStack_1e8;
    uStack_64 = uStack_1e4;
    uStack_60 = uStack_1e0;
    uStack_5c = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb41370(&puStack_2b8,&uStack_68,&UNK_0119ed3b,8,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4da4e0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb45dc0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb459f0;
    puStack_2e0 = &UNK_0eb45e80;
    puStack_2d8 = &UNK_0eb45fd0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    cStack_78 = cStack_38;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb41370(&puStack_2b8,&uStack_a8,&UNK_012652bd,9,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4da660;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb4a910;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb4a540;
    puStack_2e0 = &UNK_0eb4a9d0;
    puStack_2d8 = &UNK_0eb4ab10;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    cStack_b8 = cStack_78;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb40d40(&puStack_2b8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar5 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar5 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0e9b337f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b337f;
      }
      if (uStack_2a0._4_4_ == 0) {
        puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
        *puVar17 = *puVar17 | 0x40000;
      }
    }
    func_0x0eb41370(&puStack_2b8,&uStack_e8,&UNK_0147683e,10,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f2cccf0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0d9d7be0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_0b68b830;
    puStack_2e0 = &UNK_0eb4b070;
    puStack_2d8 = &UNK_0eb4b2b0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    uStack_f8 = CONCAT31(uStack_f8._1_3_,cStack_b8);
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_118 = uStack_d8;
    uStack_114 = uStack_d4;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb40d40(&puStack_2b8,CONCAT44(uStack_124,uStack_128) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar5 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar5 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0e9b35bf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b35bf;
      }
      if (uStack_2a0._4_4_ == 0) {
        puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
        *puVar17 = *puVar17 | 0x40000;
      }
    }
    func_0x0eb41370(&puStack_2b8,&uStack_128,&UNK_01394f0f,0xf,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4da858;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb4b6d0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb3c2d0;
    puStack_2e0 = &UNK_0eb4b790;
    puStack_2d8 = &UNK_0eb4b9a0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_f8);
    uStack_188 = uStack_108;
    uStack_184 = uStack_104;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    uStack_198 = uStack_118;
    uStack_194 = uStack_114;
    uStack_190 = uStack_110;
    uStack_18c = uStack_10c;
    uStack_1a8 = CONCAT44(uStack_124,uStack_128);
    uStack_1a0 = (long *)CONCAT44(uStack_11c,uStack_120);
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb41370(&puStack_2b8,&uStack_1a8,&UNK_012c1418,0xc,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4da8d0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_0eb4d1d0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0eb4ce00;
    puStack_2e0 = &UNK_0eb4d290;
    puStack_2d8 = &UNK_0eb4d460;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
    uStack_148 = uStack_188;
    uStack_144 = uStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_158 = uStack_198;
    uStack_154 = uStack_194;
    uStack_150 = uStack_190;
    uStack_14c = uStack_18c;
    uStack_168 = (long *)uStack_1a8;
    uStack_160 = uStack_1a0;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0eb40d40(&puStack_2b8,(long)uStack_168 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar5 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar5 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0e9b396f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_0e9b396f;
      }
      if (uStack_2a0._4_4_ == 0) {
        puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
        *puVar17 = *puVar17 | 0x40000;
      }
    }
    func_0x0eb41370(&puStack_2b8,&uStack_168,&UNK_014c59e0,3,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar11;
      (**(code **)(lVar2 + 8))();
      plVar11 = uStack_2a0;
    }
    uStack_2a0 = plVar11;
    auStack_320[0] = uStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_048b3f30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_048b2190;
    puStack_2e0 = &UNK_0eb4d9c0;
    puStack_2d8 = &UNK_0eb4dba0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,auStack_320);
    plVar11 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0eb41630(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f76cef0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f76cef0), iVar7 != 0)) {
    func_0x0eb34240();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76ce70,0xf53dab8);
    func_0x0410844d(&DAT_0f76cef0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76ce70 + 4)) * 8);
  do {
    lVar2 = *plVar11;
    if (lVar2 == -1) goto LAB_0e9b3b00;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76ce70 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e9b3b00:
    puVar8 = &DAT_0f76ce70;
    if (iRam000000000f76ced0 != -0x2b3da790) goto LAB_0e9b3b6d;
LAB_0e9b3b2b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0e9b3b6d;
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar14 = lVar2 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0eb4dd80(&uStack_1e8,param_1,lVar14,uVar15);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e9b3b2b;
LAB_0e9b3b6d:
    func_0x0eb4dd80(&uStack_1e8,param_1,&UNK_011e87af,0x13);
  }
  if ((char)uStack_1b8 != '\0') {
    return;
  }
  func_0x0eb4e370(&puStack_2b8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_2a0) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    puVar5 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar5 != puStack_2b0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0e9b3c0f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_2a0._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_0e9b3c0f;
    }
    if (uStack_2a0._4_4_ == 0) {
      puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
      *puVar17 = *puVar17 | 0x40000;
    }
  }
  func_0x0eb4e990(&puStack_2b8,&uStack_1e8,&UNK_0147683e,10,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f2cccf0;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = plVar11;
    (**(code **)(lVar2 + 8))();
    plVar11 = uStack_2a0;
  }
  uStack_2a0 = plVar11;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_0d9d7be0;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &SUB_0b68b830;
  puStack_2e0 = &UNK_0eb4ef50;
  puStack_2d8 = &UNK_0eb4f190;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  cStack_78 = (char)uStack_1b8;
  uStack_88 = uStack_1c8;
  uStack_84 = uStack_1c4;
  uStack_80 = (undefined4)uStack_1c0;
  uStack_7c = uStack_1c0._4_4_;
  uStack_98 = uStack_1d8;
  uStack_94 = uStack_1d4;
  uStack_90 = uStack_1d0;
  uStack_8c = uStack_1cc;
  uStack_a8 = uStack_1e8;
  uStack_a4 = uStack_1e4;
  uStack_a0 = uStack_1e0;
  uStack_9c = uStack_1dc;
  func_0x048b0bc0(&uStack_2a0);
  func_0x0eb4e370(&puStack_2b8,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_2a0) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    puVar5 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar5 != puStack_2b0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0e9b3e4f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_2a0._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
      iVar7 = *piVar10;
      while (iVar7 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x1a;
        iVar7 = *piVar10;
      }
      goto LAB_0e9b3e4f;
    }
    if (uStack_2a0._4_4_ == 0) {
      puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
      *puVar17 = *puVar17 | 0x40000;
    }
  }
  func_0x0eb4e990(&puStack_2b8,&uStack_a8,&UNK_01394f0f,0xf,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4da858;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = plVar11;
    (**(code **)(lVar2 + 8))();
    plVar11 = uStack_2a0;
  }
  uStack_2a0 = plVar11;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_0eb4b6d0;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_0eb3c2d0;
  puStack_2e0 = &UNK_0eb4f370;
  puStack_2d8 = &UNK_0eb4f580;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  cStack_b8 = cStack_78;
  uStack_c8 = uStack_88;
  uStack_c4 = uStack_84;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  uStack_d8 = uStack_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  uStack_e8 = uStack_a8;
  uStack_e4 = uStack_a4;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  func_0x048b0bc0(&uStack_2a0);
  func_0x0eb4e990(&puStack_2b8,&uStack_e8,&UNK_012c1418,0xc,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4da8d0;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = plVar11;
    (**(code **)(lVar2 + 8))();
    plVar11 = uStack_2a0;
  }
  uStack_2a0 = plVar11;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_0eb4d1d0;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_0eb4ce00;
  puStack_2e0 = &UNK_0eb4f760;
  puStack_2d8 = &UNK_0eb4f930;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  uStack_f8 = CONCAT31(uStack_f8._1_3_,cStack_b8);
  uStack_108 = uStack_c8;
  uStack_104 = uStack_c4;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  uStack_118 = uStack_d8;
  uStack_114 = uStack_d4;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  func_0x048b0bc0(&uStack_2a0);
  func_0x0eb4e370(&puStack_2b8,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_2a0) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    puVar5 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar5 != puStack_2b0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar5 = *(undefined4 **)(piVar10 + 0xc);
    }
  }
  else {
    if (uStack_2a0._4_4_ != 1) {
      if (uStack_2a0._4_4_ == 0) {
        puVar17 = (uint *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
        *puVar17 = *puVar17 | 0x40000;
      }
      goto LAB_0e9b4253;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2a4,uStack_2a8) + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != (int)uStack_2a0) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
LAB_0e9b4253:
  func_0x0eb4e990(&puStack_2b8,&uStack_128,&UNK_014c59e0,3,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = plVar11;
    (**(code **)(lVar2 + 8))();
    plVar11 = uStack_2a0;
  }
  uStack_2a0 = plVar11;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_048b3f30;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &SUB_048b2190;
  puStack_2e0 = &UNK_0eb4fb10;
  puStack_2d8 = &UNK_0eb4fcf0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_f8);
  uStack_188 = uStack_108;
  uStack_184 = uStack_104;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  uStack_198 = uStack_118;
  uStack_194 = uStack_114;
  uStack_190 = uStack_110;
  uStack_18c = uStack_10c;
  uStack_1a8 = CONCAT44(uStack_124,uStack_128);
  uStack_1a0 = (long *)CONCAT44(uStack_11c,uStack_120);
  func_0x048b0bc0(&uStack_2a0);
  func_0x0eb4e990(&puStack_2b8,&uStack_1a8,&UNK_0119ed3b,8,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4da4e0;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = plVar11;
    (**(code **)(lVar2 + 8))();
    plVar11 = uStack_2a0;
  }
  uStack_2a0 = plVar11;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_0eb45dc0;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_0eb459f0;
  puStack_2e0 = &UNK_0eb4fed0;
  puStack_2d8 = &UNK_0eb50020;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  uStack_138 = CONCAT31(uStack_138._1_3_,(undefined1)uStack_178);
  uStack_148 = uStack_188;
  uStack_144 = uStack_184;
  uStack_140 = uStack_180;
  uStack_13c = uStack_17c;
  uStack_158 = uStack_198;
  uStack_154 = uStack_194;
  uStack_150 = uStack_190;
  uStack_14c = uStack_18c;
  uStack_168 = (long *)uStack_1a8;
  uStack_160 = uStack_1a0;
  func_0x048b0bc0(&uStack_2a0);
  func_0x0eb4e990(&puStack_2b8,&uStack_168,&UNK_012652bd,9,0);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4da660;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = puVar12;
    (**(code **)(lVar2 + 8))();
    puVar12 = uStack_2a0;
  }
  uStack_2a0 = puVar12;
  auStack_320[0] = uStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_0eb4a910;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_0eb4a540;
  puStack_2e0 = &UNK_0eb501f0;
  puStack_2d8 = &UNK_0eb50330;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  plStack_2c0 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,auStack_320);
  plVar11 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0eb4ec50(&puStack_2b8);
  func_0x048b0bc0(&uStack_2a0);
  return;
}


