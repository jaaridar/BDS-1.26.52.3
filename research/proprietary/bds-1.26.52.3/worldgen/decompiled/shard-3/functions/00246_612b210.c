/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x622b210 (ELF vaddr 0x612b210)
 * Label: caller-of-callee
 * Body:  [[0622b210, 0622d2a1] [0622d2b0, 0622d62b]]
 * Ghidra: FUN_0622b210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0622b210(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  uint unaff_EBP;
  ulong uVar17;
  ulong uVar18;
  uint *unaff_R14;
  bool bVar19;
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
  uint *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 *puStack_2b0;
  uint *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
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
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  char cStack_138;
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
  char cStack_f8;
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
  
  if ((DAT_0f56c908 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c908), iVar6 != 0)) {
    func_0x062eaba0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c888,0xf53dab8);
    func_0x0410844d(&DAT_0f56c908);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f56c888 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0622b280;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f56c888 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0622b280:
    puVar7 = &DAT_0f56c888;
    if (iRam000000000f56c8e8 != -0x2b3da790) goto LAB_0622b2d8;
LAB_0622b2ab:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0622b2d8;
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar7 = (undefined *)(lVar2 + 9);
    if (bVar19) {
      puVar7 = *(undefined **)(lVar2 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      uVar17 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0622b2ab;
LAB_0622b2d8:
    puVar7 = &UNK_014afd29;
    uVar17 = 0x1a;
  }
  func_0x062eafe0(&uStack_1e8,param_1,puVar7,uVar17);
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  uStack_1b0 = uStack_1b0 & 0xffffff00;
  if ((char)uStack_1b8 == '\0') {
    func_0x062ee860(&uStack_2b8,&UNK_0123e7b5);
    uVar17 = uStack_290 >> 1 & 0x7f;
    lVar2 = (long)&uStack_290 + 1;
    if ((uStack_290 & 1) != 0) {
      uVar17 = uStack_288;
      lVar2 = lStack_280;
    }
    if (uVar17 == 0) {
      uVar14 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar14 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar14 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar2 + 3 + uVar18) ^
                   ((int)*(char *)(lVar2 + 2 + uVar18) ^
                   ((int)*(char *)(lVar2 + 1 + uVar18) ^
                   ((int)*(char *)(lVar2 + uVar18) ^ uVar14) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar2 + uVar18 + uVar17) ^ uVar14) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1c0 = CONCAT44(uVar14,2);
    if ((DAT_0f56c928 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c928), iVar6 != 0)) {
      func_0x062eacb0();
      func_0x0410844d(&DAT_0f56c928);
    }
    auStack_320[0] = uStack_1c0._4_4_;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_062eee20;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_062eaae0;
    puStack_2e0 = &UNK_062eeee0;
    puStack_2d8 = &UNK_062eeef0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(&uStack_1e0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    uStack_198 = uStack_1d0;
    uStack_194 = uStack_1cc;
    uStack_190 = uStack_1c8;
    uStack_18c = uStack_1c4;
    func_0x062eebb0(auStack_320,&uStack_1a8,&uStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar2 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar2 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar2 = *(long *)(piVar10 + 0xc);
      }
LAB_0622b55f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622b55f;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)((long)plStack_310 + 0x18) = *(uint *)((long)plStack_310 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1b0 == '\0') {
      func_0x062eef40(auStack_320,&uStack_1e8);
    }
    uVar14 = uStack_1b4;
    lVar2 = CONCAT44(uStack_1e4,uStack_1e8);
    if ((DAT_0f56c908 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c908), iVar6 != 0)) {
      func_0x062eaba0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c888,0xf53dab8);
      func_0x0410844d(&DAT_0f56c908);
    }
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f56c888 + 4)) * 8);
    do {
      lVar15 = *plVar9;
      if (lVar15 == -1) goto LAB_0622b5f0;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f56c888 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0622b5f0:
      puVar7 = &DAT_0f56c888;
    }
    else {
      puVar7 = (undefined *)plVar9[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x28);
    for (puVar11 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x20);
        (puVar11 != puVar3 && (*puVar11 != uVar14)); puVar11 = puVar11 + 0xe) {
    }
    if ((puVar11 == puVar3) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb35d),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar11 + 2,(long)&uStack_1c0 + 4,(long)&uStack_1c0 + 4,auStack_320);
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = (long *)CONCAT44(uStack_1dc,uStack_1e0);
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = (undefined4)uStack_1c0;
    uStack_17c = uStack_1c0._4_4_;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    func_0x048b0bc0(&uStack_2b8);
    func_0x062ee860(&uStack_2b8);
    uVar17 = (ulong)((byte)uStack_290 >> 1);
    lVar2 = (long)&uStack_290 + 1;
    if (((byte)uStack_290 & 1) != 0) {
      uVar17 = uStack_288;
      lVar2 = lStack_280;
    }
    if (uVar17 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar2 + 3 + uVar18) ^
                       ((int)*(char *)(lVar2 + 2 + uVar18) ^
                       ((int)*(char *)(lVar2 + 1 + uVar18) ^
                       ((int)*(char *)(lVar2 + uVar18) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar2 + uVar18 + uVar17) ^ uStack_17c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_180 = 2;
    if ((DAT_0f56c928 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c928), iVar6 != 0)) {
      func_0x062eacb0();
      func_0x0410844d(&DAT_0f56c928);
    }
    auStack_320[0] = uStack_17c;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)CONCAT44(plStack_310._4_4_,3);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_062eee20;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_062eaae0;
    puStack_2e0 = &UNK_062ef100;
    puStack_2d8 = &UNK_062ef110;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(&uStack_1a0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      puVar3 = puStack_2c0 + 2;
      lVar2 = *(long *)puVar3;
      *(long *)puVar3 = *(long *)puVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    uStack_158 = uStack_190;
    uStack_154 = uStack_18c;
    uStack_150 = uStack_188;
    uStack_14c = uStack_184;
    uStack_168 = (undefined4)uStack_1a0;
    uStack_164 = uStack_1a0._4_4_;
    uStack_160 = uStack_198;
    uStack_15c = uStack_194;
    func_0x062eebb0(auStack_320,&uStack_168,&uStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_308) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar2 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar2 != plStack_318) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar2 = *(long *)(piVar10 + 0xc);
      }
LAB_0622b95f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_310 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_308) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622b95f;
      }
      if (uStack_308._4_4_ == 0) {
        *(uint *)((long)plStack_310 + 0x18U) = *(uint *)((long)plStack_310 + 0x18U) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x062eef40(auStack_320,&uStack_1a8);
    }
    unaff_EBP = uStack_174;
    lVar2 = uStack_1a8;
    if ((DAT_0f56c908 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c908), iVar6 != 0)) {
      func_0x062eaba0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c888,0xf53dab8);
      func_0x0410844d(&DAT_0f56c908);
    }
    unaff_R14 = &uStack_17c;
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f56c888 + 4)) * 8);
    do {
      lVar15 = *plVar9;
      if (lVar15 == -1) goto LAB_0622b9f0;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f56c888 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0622b9f0:
      puVar7 = &DAT_0f56c888;
    }
    else {
      puVar7 = (undefined *)plVar9[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x28);
    for (puVar11 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x20);
        (puVar11 != puVar3 && (*puVar11 != unaff_EBP)); puVar11 = puVar11 + 0xe) {
    }
    if ((puVar11 == puVar3) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb35d),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar11 + 2,unaff_R14,unaff_R14,auStack_320);
    func_0x048b0bc0(&uStack_2b8);
  }
  bVar16 = (byte)unaff_EBP;
  if ((DAT_0f56c9c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56c9c0), iVar6 != 0)) {
    func_0x062ef220();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c940,0xf53dab8);
    func_0x0410844d(&DAT_0f56c9c0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f56c940 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0622baf0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f56c940 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0622baf0:
    puVar7 = &DAT_0f56c940;
    if (iRam000000000f56c9a0 != -0x2b3da790) goto LAB_0622bb5d;
LAB_0622bb1b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0622bb5d;
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar15 = lVar2 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar2 + 0x18);
    }
    puVar13 = (undefined4 *)(ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      puVar13 = (undefined4 *)*(ulong *)(lVar2 + 0x10);
    }
    func_0x062efa60(&uStack_1e8,param_1,lVar15,puVar13);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0622bb1b;
LAB_0622bb5d:
    puVar13 = (undefined4 *)0x19;
    func_0x062efa60(&uStack_1e8,param_1,&UNK_011ee6f5,0x19);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622bbff:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622bbff;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_1e8,&UNK_01410416,4);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_048b3f30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_048b2190;
    puStack_2e0 = &UNK_062f0bd0;
    puStack_2d8 = &UNK_062f0d90;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    cStack_f8 = (char)uStack_1b8;
    uStack_108 = uStack_1c8;
    uStack_104 = uStack_1c4;
    uStack_100 = (undefined4)uStack_1c0;
    uStack_fc = uStack_1c0._4_4_;
    uStack_118 = uStack_1d8;
    uStack_114 = uStack_1d4;
    uStack_110 = uStack_1d0;
    uStack_10c = uStack_1cc;
    uStack_128 = uStack_1e8;
    uStack_124 = uStack_1e4;
    uStack_120 = uStack_1e0;
    uStack_11c = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_124,uStack_128) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622be8f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622be8f;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_128,&UNK_0138e8dd,5);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_04906f70;
    puStack_2f0 = &SUB_048b06d0;
    bVar16 = 0x50;
    puStack_2e8 = &SUB_04906c50;
    puStack_2e0 = &UNK_062f0f60;
    puStack_2d8 = &UNK_062f10c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    cStack_b8 = cStack_f8;
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    uStack_d8 = uStack_118;
    uStack_d4 = uStack_114;
    uStack_d0 = uStack_110;
    uStack_cc = uStack_10c;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622c0cf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622c0cf;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_e8,&UNK_012097ee,0xc);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_04906f70;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_04906c50;
    puStack_2e0 = &UNK_062f12a0;
    puStack_2d8 = &UNK_062f1400;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = uStack_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_a4,uStack_a8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622c2ef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622c2ef;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_a8,&UNK_01391889,8);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f027950;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_062e8540;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_062e43c0;
    puStack_2e0 = &UNK_062f15e0;
    puStack_2d8 = &UNK_062f1740;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    cStack_38 = cStack_78;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    uStack_58 = uStack_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_68 = uStack_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_64,uStack_68) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622c52f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622c52f;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_68,&UNK_011ea809,6);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f027aa0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_062eee20;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_062eaae0;
    puStack_2e0 = &UNK_062f1920;
    puStack_2d8 = &UNK_062f1a80;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    cStack_138 = cStack_38;
    uStack_148 = uStack_48;
    uStack_144 = uStack_44;
    uStack_140 = uStack_40;
    uStack_13c = uStack_3c;
    uStack_158 = uStack_58;
    uStack_154 = uStack_54;
    uStack_150 = uStack_50;
    uStack_14c = uStack_4c;
    uStack_168 = uStack_68;
    uStack_164 = uStack_64;
    uStack_160 = uStack_60;
    uStack_15c = uStack_5c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,CONCAT44(uStack_164,uStack_168) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622c76f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622c76f;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    func_0x062f0620(&uStack_2b8,&uStack_168,&UNK_011ea907,0xb);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_048b3f30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_048b2190;
    puStack_2e0 = &UNK_062f1ef0;
    puStack_2d8 = &UNK_062f20c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    puVar11 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      plVar9 = (long *)((long)puStack_2c0 + 8);
      lVar2 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(puVar11);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    uStack_178 = CONCAT31(uStack_178._1_3_,cStack_138);
    uStack_188 = uStack_148;
    uStack_184 = uStack_144;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
    uStack_198 = uStack_158;
    uStack_194 = uStack_154;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    uStack_1a8 = CONCAT44(uStack_164,uStack_168);
    uStack_1a0 = (long *)CONCAT44(uStack_15c,uStack_160);
    func_0x048b0bc0(&uStack_2a0);
    func_0x062f0050(&uStack_2b8,uStack_1a8 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      uVar17 = *(ulong *)(piVar10 + 0xc);
      while ((undefined4 *)uVar17 != puStack_2b0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        uVar17 = *(ulong *)(piVar10 + 0xc);
      }
LAB_0622c9af:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_2a0) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0622c9af;
      }
      if (uStack_2a0._4_4_ == 0) {
        puStack_2a8[6] = puStack_2a8[6] | 0x40000;
      }
    }
    puVar13 = (undefined4 *)0x8;
    func_0x062f0620(&uStack_2b8,&uStack_1a8,&UNK_011d4c49,8);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)puStack_2a8;
    plStack_318 = (long *)0x0;
    plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
    uStack_308 = 1;
    uStack_300 = 0;
    puStack_2f8 = &UNK_04906f70;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_04906c50;
    puStack_2e0 = &UNK_062f22a0;
    puStack_2d8 = &UNK_062f2400;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_2c0 = (uint *)0x0;
    FUN_048b05a0(puStack_2b0,auStack_320);
    unaff_R14 = puStack_2c0;
    if (puStack_2c0 != (uint *)0x0) {
      LOCK();
      puVar11 = puStack_2c0 + 2;
      lVar2 = *(long *)puVar11;
      *(long *)puVar11 = *(long *)puVar11 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
        func_0x0412c2d0(unaff_R14);
      }
    }
    func_0x062f08d0(&uStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  uVar4 = _DAT_0f543808;
  uVar17 = strlen(_DAT_0f543808);
  if (uVar17 < 0xfffffffffffffff8) {
    unaff_R14 = (uint *)((long)&uStack_2b8 + 1);
    if (uVar17 < 0x17) {
      uStack_2b8 = (undefined *)CONCAT71(uStack_2b8._1_7_,(char)uVar17 * '\x02');
      puVar11 = unaff_R14;
      if (uVar17 != 0) goto LAB_0622cb50;
    }
    else {
      uVar8 = 0x1a;
      if ((uVar17 | 7) != 0x17) {
        uVar8 = (uVar17 | 7) + 1;
      }
      puVar11 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
      if (puVar11 == (uint *)0x0) {
        FUN_0eec74c0(uVar8,0);
      }
      uStack_2b8 = (undefined *)(uVar8 | 1);
      puStack_2b0 = (undefined4 *)uVar17;
      puStack_2a8 = puVar11;
LAB_0622cb50:
      func_0x0eee2ee0(puVar11,uVar4,uVar17);
    }
    *(undefined1 *)((long)puVar11 + uVar17) = 0;
    bVar16 = (byte)uStack_2b8 & 1;
    puVar13 = (undefined4 *)(ulong)((byte)uStack_2b8 >> 1);
    if (((ulong)uStack_2b8 & 1) != 0) {
      puVar13 = puStack_2b0;
      unaff_R14 = puStack_2a8;
    }
    if (DAT_0f56ca78 == '\0') goto LAB_0622d464;
  }
  else {
    func_0x04882e30();
LAB_0622d464:
    iVar6 = func_0x04108328(&DAT_0f56ca78);
    if (iVar6 != 0) {
      func_0x062f26a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c9f8,0xf53dab8);
      func_0x0410844d(&DAT_0f56ca78);
    }
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f56c9f8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0622cbe0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f56c9f8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0622cbe0:
    puVar7 = &DAT_0f56c9f8;
    if (iRam000000000f56ca58 != -0x2b3da790) goto LAB_0622cc45;
LAB_0622cc0b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0622cc45;
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar15 = lVar2 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar2 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      uVar17 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x062f30d0(&uStack_1e8,param_1,lVar15,uVar17);
    if (bVar16 != 0) goto LAB_0622cc66;
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0622cc0b;
LAB_0622cc45:
    func_0x062f30d0(&uStack_1e8,param_1,unaff_R14,puVar13);
    if (((ulong)uStack_2b8 & 1) != 0) {
LAB_0622cc66:
      func_0x0412a280(puStack_2a8,(ulong)uStack_2b8 & 0xfffffffffffffffe);
    }
  }
  if ((char)uStack_1b8 != '\0') {
    return;
  }
  func_0x062f36c0(&uStack_2b8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != (int)uStack_2a0) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    uVar17 = *(ulong *)(piVar10 + 0xc);
    while ((undefined4 *)uVar17 != puStack_2b0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      uVar17 = *(ulong *)(piVar10 + 0xc);
    }
LAB_0622ccff:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_2a0._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(puStack_2a8 + 0x1e) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_2a0) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      goto LAB_0622ccff;
    }
    if (uStack_2a0._4_4_ == 0) {
      puStack_2a8[6] = puStack_2a8[6] | 0x40000;
    }
  }
  if ((DAT_0f56ca98 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56ca98), iVar6 != 0)) {
    func_0x062f27b0();
    func_0x0410844d(&DAT_0f56ca98);
  }
  uStack_1c0 = 0xe7c5208b00000001;
  lVar2 = CONCAT44(uStack_1e4,uStack_1e8);
  if ((DAT_0f56ca78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56ca78), iVar6 != 0)) {
    func_0x062f26a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56c9f8,0xf53dab8);
    func_0x0410844d(&DAT_0f56ca78);
  }
  puStack_2b0 = (undefined4 *)(lVar2 + 0x18);
  plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f56c9f8 + 4)) * 8);
  do {
    lVar15 = *plVar9;
    if (lVar15 == -1) goto LAB_0622cda0;
    plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f56c9f8 + 4));
  if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0622cda0:
    uStack_2b8 = &DAT_0f56c9f8;
  }
  else {
    uStack_2b8 = (undefined *)plVar9[2];
  }
  func_0x0ed621a0(&uStack_2b8,uStack_1c0._4_4_);
  uStack_2b8 = (undefined *)CONCAT62(uStack_2b8._2_6_,0x10);
  puStack_2a8 = (uint *)CONCAT44(puStack_2a8._4_4_,uStack_1c0._4_4_);
  uStack_2a0 = (long *)0x0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0x7367616c466d0c;
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
    FUN_0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f027bd8;
  if (uStack_2a0 != (long *)0x0) {
    lVar2 = *uStack_2a0;
    uStack_2a0 = puVar12;
    (**(code **)(lVar2 + 8))();
    puVar12 = uStack_2a0;
  }
  uStack_2a0 = puVar12;
  auStack_320[0] = (uint)puStack_2a8;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)((ulong)plStack_310 & 0xffffffff00000000);
  uStack_308 = 1;
  uStack_300 = 0;
  puStack_2f8 = &UNK_062f7660;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_062f5f60;
  puStack_2e0 = &UNK_062f7720;
  puStack_2d8 = &UNK_062f7a10;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  puStack_2c0 = (uint *)0x0;
  FUN_048b05a0(puStack_2b0,auStack_320);
  puVar11 = puStack_2c0;
  if (puStack_2c0 != (uint *)0x0) {
    LOCK();
    plVar9 = (long *)((long)puStack_2c0 + 8);
    lVar2 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(long *)puStack_2c0 + 0x10))(puStack_2c0);
      func_0x0412c2d0(puVar11);
    }
  }
  puVar13 = puStack_2b0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_320[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar2 = lStack_298;
  puVar12 = uStack_2a0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_318 = plVar9 + 3;
  uStack_2a0 = (long *)0x0;
  lStack_298 = 0;
  plVar9[3] = (long)puVar12;
  plVar9[4] = lVar2;
  plVar9[7] = lStack_280;
  plVar9[5] = uStack_290;
  plVar9[6] = uStack_288;
  uStack_290 = 0;
  uStack_288 = 0;
  lStack_280 = 0;
  plVar9[10] = lStack_268;
  plVar9[8] = lStack_278;
  plVar9[9] = lStack_270;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_268 = 0;
  plVar9[0xb] = lStack_260;
  plVar9[0xc] = lStack_258;
  plVar9[0xd] = lStack_250;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  plVar9[0xe] = lStack_248;
  plVar9[0xf] = lStack_240;
  plVar9[0x10] = lStack_238;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_238 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_230;
  plVar9[0x12] = lStack_228;
  plVar9[0x13] = lStack_220;
  plVar9[0x14] = lStack_218;
  lStack_228 = 0;
  lStack_220 = 0;
  lStack_218 = 0;
  plVar9[0x17] = lStack_200;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_210;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_210._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_208;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_208._4_4_;
  uStack_210 = 0;
  uStack_208 = 0;
  lStack_200 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
  plVar9[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
  uStack_1a8 = 0;
  uStack_1a0 = (long *)0x0;
  plStack_310 = plVar9;
  func_0x048afd20(puVar13,auStack_320);
  plVar9 = plStack_310;
  if (plStack_310 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_310 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_310 + 0x10))(plStack_310);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = uStack_1a0;
  if (uStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1a0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_1a0 + 0x10))(uStack_1a0);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar2 = *(long *)(puVar13 + 4);
  iVar6 = puVar13[7];
  if (iVar6 == 2) {
    piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != puVar13[6]) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar13 + 2); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)uStack_2b8 << 0x10;
      }
      goto LAB_0622d2bd;
    }
    piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar6 = *piVar10;
    while (iVar6 != puVar13[6]) {
      piVar10 = piVar10 + 0x1a;
      iVar6 = *piVar10;
    }
  }
  piVar10[4] = piVar10[4] | (int)uStack_2b8 << 0x10;
LAB_0622d2bd:
  func_0x048b0bc0(&uStack_2a0);
  return;
}


