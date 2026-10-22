/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82efe00 (ELF vaddr 0x81efe00)
 * Label: caller-of-callee
 * Body:  [[082efe00, 082f0d59] [082f0d60, 082f1671] [082f1680, 082f1b07] [082f1b10, 082f2859]]
 * Ghidra: FUN_082efe00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082efe00(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  bool bVar23;
  char cStack_299;
  undefined *puStack_298;
  uint uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined1 *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  ulong uStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  char cStack_1d8;
  uint uStack_1d4;
  char cStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined1 *puStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined2 uStack_108;
  undefined2 uStack_106;
  uint uStack_104;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  char cStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5d0d40 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0d40), iVar8 != 0)) {
    func_0x083d2330();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0cc0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0d40);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0cc0 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082efe70;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0cc0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_082efe70:
    puVar9 = &DAT_0f5d0cc0;
    if (iRam000000000f5d0d20 != -0x2b3da790) goto LAB_082efec8;
LAB_082efe9b:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_082efec8;
    bVar23 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar21 + 9);
    if (bVar23) {
      puVar9 = *(undefined **)(lVar21 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar23) {
      uVar12 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_082efe9b;
LAB_082efec8:
    puVar9 = &UNK_011d9c58;
    uVar12 = 0x18;
  }
  func_0x083d2770(&uStack_208,param_1,puVar9,uVar12);
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  cStack_1d0 = '\0';
  if (cStack_1d8 == '\0') {
    func_0x083d5ff0(&uStack_1c8,&UNK_0147e765,0x1b);
    puVar9 = (undefined *)((ulong)uStack_1a0 >> 1 & 0x7f);
    lVar21 = (long)&uStack_1a0 + 1;
    if (((ulong)uStack_1a0 & 1) != 0) {
      puVar9 = puStack_198;
      lVar21 = lStack_190;
    }
    if (puVar9 == (undefined *)0x0) {
      uStack_1e0._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uStack_1e0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_1e0._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_1e0._4_4_ =
               ((int)*(char *)(lVar21 + 3 + uVar20) ^
               ((int)*(char *)(lVar21 + 2 + uVar20) ^
               ((int)*(char *)(lVar21 + 1 + uVar20) ^
               ((int)*(char *)(lVar21 + uVar20) ^ uStack_1e0._4_4_) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uStack_1e0._4_4_ =
               ((int)*(char *)(lVar21 + uVar20 + uVar17) ^ uStack_1e0._4_4_) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_1e0._0_4_ = 2;
    uVar4 = (int)uStack_1e0;
    uStack_1e0._0_4_ = 2;
    if ((DAT_0f5d0d60 == '\0') &&
       (uStack_1e0._0_4_ = uVar4, iVar8 = func_0x04108328(&DAT_0f5d0d60), iVar8 != 0)) {
      func_0x083d2440();
      func_0x0410844d(&DAT_0f5d0d60);
    }
    uStack_288 = uStack_1e0._4_4_;
    uStack_280 = (long *)0x0;
    plStack_278 = (long *)CONCAT44(plStack_278._4_4_,3);
    uStack_270 = (long *)0x1;
    uStack_268 = 0;
    puStack_260 = &UNK_083d6640;
    puStack_258 = &SUB_048b06d0;
    puStack_250 = &UNK_083d2270;
    puStack_248 = &UNK_083d6700;
    puStack_240 = &UNK_083d6710;
    uStack_238 = 0;
    uStack_230 = 0;
    plStack_228 = (long *)0x0;
    func_0x048b05a0(&uStack_200,&uStack_288);
    plVar10 = plStack_228;
    if (plStack_228 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_228 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        FUN_0412c2d0(plVar10);
      }
    }
    uStack_e8 = uStack_1f0;
    uStack_e4 = uStack_1ec;
    uStack_e0 = uStack_1e8;
    uStack_dc = uStack_1e4;
    func_0x083d63d0(&uStack_288,&uStack_f8,&uStack_1c8);
    if (uStack_270._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_270) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      lVar21 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar21 != uStack_280) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar21 = *(long *)(piVar13 + 0xc);
      }
LAB_082f015f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_270._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != (int)uStack_270) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_082f015f;
      }
      if (uStack_270._4_4_ == 0) {
        *(uint *)((long)plStack_278 + 0x18) = *(uint *)((long)plStack_278 + 0x18) | 0x90000;
      }
    }
    if (cStack_1d0 == '\0') {
      func_0x083d6760(&uStack_288,&uStack_208);
    }
    uVar14 = uStack_1d4;
    lVar21 = CONCAT44(uStack_204,uStack_208);
    if ((DAT_0f5d0d40 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0d40), iVar8 != 0)) {
      func_0x083d2330();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0cc0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0d40);
    }
    lVar15 = (long)&uStack_1e0 + 4;
    plVar10 = (long *)(*(long *)(lVar21 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0cc0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_082f0201;
      plVar10 = (long *)(*(long *)(lVar21 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d0cc0 + 4))
    ;
    if (plVar10 == *(long **)(lVar21 + 0x38)) {
LAB_082f0201:
      puVar9 = &DAT_0f5d0cc0;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar14)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01243e25),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_288 = uStack_288 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar15,lVar15,&uStack_288);
    func_0x048b0bc0(&uStack_1c8);
    func_0x083d5ff0(&uStack_1c8,&UNK_013e50ff,0x14);
    puVar9 = (undefined *)((ulong)uStack_1a0 >> 1 & 0x7f);
    lVar21 = (long)&uStack_1a0 + 1;
    if (((ulong)uStack_1a0 & 1) != 0) {
      puVar9 = puStack_198;
      lVar21 = lStack_190;
    }
    if (puVar9 == (undefined *)0x0) {
      uVar14 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)puVar9 & 3);
      if (puVar9 < 4) {
        uVar14 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar14 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar21 + 3 + uVar20) ^
                   ((int)*(char *)(lVar21 + 2 + uVar20) ^
                   ((int)*(char *)(lVar21 + 1 + uVar20) ^
                   ((int)*(char *)(lVar21 + uVar20) ^ uVar14) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar20 = uVar20 + 4;
        } while (((ulong)puVar9 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar17 = 0;
        do {
          uVar14 = ((int)*(char *)(lVar21 + uVar20 + uVar17) ^ uVar14) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar12 != uVar17);
      }
    }
    uStack_1e0 = CONCAT44(uVar14,2);
    if ((DAT_0f5d0d60 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0d60), iVar8 != 0)) {
      func_0x083d2440();
      func_0x0410844d(&DAT_0f5d0d60);
    }
    uStack_288 = uStack_1e0._4_4_;
    uStack_280 = (long *)0x0;
    plStack_278 = (long *)CONCAT44(plStack_278._4_4_,3);
    uStack_270 = (long *)0x1;
    uStack_268 = 0;
    puStack_260 = &UNK_083d6640;
    puStack_258 = &SUB_048b06d0;
    puStack_250 = &UNK_083d2270;
    puStack_248 = &UNK_083d6920;
    puStack_240 = &UNK_083d6930;
    uStack_238 = 0;
    uStack_230 = 0;
    plStack_228 = (long *)0x0;
    func_0x048b05a0(&uStack_200,&uStack_288);
    plVar10 = plStack_228;
    if (plStack_228 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_228 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        FUN_0412c2d0(plVar10);
      }
    }
    uStack_e8 = uStack_1f0;
    uStack_e4 = uStack_1ec;
    uStack_e0 = uStack_1e8;
    uStack_dc = uStack_1e4;
    uStack_f8 = CONCAT44(uStack_1fc,uStack_200);
    uStack_f0 = (long *)CONCAT44(uStack_1f4,uStack_1f8);
    func_0x083d63d0(&uStack_288,&uStack_f8,&uStack_1c8);
    if (uStack_270._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_270) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      lVar21 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar21 != uStack_280) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar21 = *(long *)(piVar13 + 0xc);
      }
LAB_082f052f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_270._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != (int)uStack_270) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_082f052f;
      }
      if (uStack_270._4_4_ == 0) {
        *(uint *)((long)plStack_278 + 0x18U) = *(uint *)((long)plStack_278 + 0x18U) | 0x90000;
      }
    }
    if (cStack_1d0 == '\0') {
      func_0x083d6760(&uStack_288,&uStack_208);
    }
    uVar14 = uStack_1d4;
    lVar21 = CONCAT44(uStack_204,uStack_208);
    if ((DAT_0f5d0d40 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0d40), iVar8 != 0)) {
      func_0x083d2330();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0cc0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0d40);
    }
    plVar10 = (long *)(*(long *)(lVar21 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0cc0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_082f05c0;
      plVar10 = (long *)(*(long *)(lVar21 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d0cc0 + 4))
    ;
    if (plVar10 == *(long **)(lVar21 + 0x38)) {
LAB_082f05c0:
      puVar9 = &DAT_0f5d0cc0;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar14)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01243e25),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_288 = uStack_288 & 0xffffff00;
    func_0x05d9c620(puVar19 + 2,lVar15,lVar15,&uStack_288);
    func_0x048b0bc0(&uStack_1c8);
  }
  func_0x07be4b40(param_1);
  func_0x078210b0(param_1);
  if ((DAT_0f5d0df8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0df8), iVar8 != 0)) {
    func_0x083d6a40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0d78,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0df8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0d78 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f06d0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0d78 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_082f06d0:
    puVar9 = &DAT_0f5d0d78;
    if (iRam000000000f5d0dd8 != -0x2b3da790) goto LAB_082f073d;
LAB_082f06fb:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_082f073d;
    bVar23 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar15 = lVar21 + 9;
    if (bVar23) {
      lVar15 = *(long *)(lVar21 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar23) {
      uVar12 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x083d6e80(&uStack_208,param_1,lVar15,uVar12);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_082f06fb;
LAB_082f073d:
    func_0x083d6e80(&uStack_208,param_1,&UNK_0147e781,0x13);
  }
  if (cStack_1d8 != '\0') goto LAB_082f0ffc;
  func_0x083d7990(&uStack_1c8,&uStack_208,&UNK_012a808f,0xb);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f1174e0;
  if (plStack_1b0 != (long *)0x0) {
    lVar21 = *plStack_1b0;
    plStack_1b0 = plVar10;
    (**(code **)(lVar21 + 8))();
    plVar10 = plStack_1b0;
  }
  plStack_1b0 = plVar10;
  uStack_288 = (uint)uStack_1b8;
  uStack_280 = (long *)0x0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = (long *)0x1;
  uStack_268 = 0;
  puStack_260 = &UNK_083d6640;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &UNK_083d2270;
  puStack_248 = &UNK_083d7f40;
  puStack_240 = &UNK_083d80a0;
  uStack_238 = 0;
  uStack_230 = 0;
  plStack_228 = (long *)0x0;
  func_0x048b05a0(uStack_1c0,&uStack_288);
  plVar10 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_228 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      FUN_0412c2d0(plVar10);
    }
  }
  func_0x083d7c40(&uStack_1c8);
  uVar12 = CONCAT44(uStack_204,uStack_208);
  plStack_58 = (long *)CONCAT44(uStack_1fc,uStack_200);
  uStack_50 = (long *)CONCAT44(uStack_1f4,uStack_1f8);
  uStack_48 = uStack_1f0;
  uStack_44 = uStack_1ec;
  uStack_40 = uStack_1e8;
  uStack_3c = uStack_1e4;
  iVar8 = (int)uStack_1e0;
  puVar9 = (undefined *)(uStack_1e0 & 0xffffffff);
  uStack_28c = uStack_1e0._4_4_;
  cStack_299 = cStack_1d8;
  func_0x048b0bc0(&plStack_1b0);
  if ((DAT_0f5d0df8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d0df8), iVar7 != 0)) {
    func_0x083d6a40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0d78,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0df8);
  }
  uStack_218 = uVar12 + 0x18;
  plVar10 = (long *)(*(long *)(uVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0d78 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f0950;
    plVar10 = (long *)(*(long *)(uVar12 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0d78 + 4));
  if (plVar10 == *(long **)(uVar12 + 0x38)) {
LAB_082f0950:
    puVar22 = &DAT_0f5d0d78;
  }
  else {
    puVar22 = (undefined *)plVar10[2];
  }
  if ((1 < iVar8 - 1U) &&
     (cVar6 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012f7590),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_210 = puVar9;
  puVar9 = (undefined *)func_0x048b0c90(uStack_218,puVar22,uStack_28c,1);
  if (puVar9 == (undefined *)0x0) {
    uStack_1c8 = (undefined *)0x0;
    uStack_1c0 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_1c8);
    puVar9 = uStack_1c8;
  }
  *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa8) = 5;
  uStack_80 = 0xff;
  uStack_90 = (long *)0xffffffffffffffff;
  uStack_88 = (long *)0x0;
  puVar9 = &UNK_0f4e3aa0;
  puStack_98 = &UNK_0f4e3aa0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_9c = 0;
  func_0x082f38f0(&puStack_98,&uStack_9c);
  uVar20 = uStack_78;
  uStack_a8 = (undefined1)uStack_80;
  uStack_b8 = (uint)uStack_90;
  uStack_b4 = uStack_90._4_4_;
  uStack_b0 = (undefined4)uStack_88;
  uStack_ac = uStack_88._4_4_;
  puVar16 = (undefined *)(uStack_70 - uStack_78);
  if (puVar16 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    puStack_298 = (undefined *)0x0;
  }
  else {
    if ((long)puVar16 < 0) {
      func_0x0774b760();
      goto LAB_082f2745;
    }
    puVar22 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar16);
    if (puVar22 == (undefined *)0x0) {
      func_0x0eec74c0(puVar16,0);
    }
    puStack_298 = puVar22 + (long)puVar16;
    func_0x0eee2f00(puVar22,uVar20,puVar16);
  }
  uVar20 = 0xffffffff;
  puVar16 = &UNK_0f4e3aa0;
  if ((int)puStack_210 == 4) {
    if ((DAT_0f5d0df8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0df8), iVar8 != 0)) {
      func_0x083d6a40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0d78,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0df8);
    }
    plVar10 = (long *)(*(long *)(uVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0d78 + 4)) * 8);
    do {
      lVar21 = *plVar10;
      if (lVar21 == -1) goto LAB_082f0be8;
      plVar10 = (long *)(*(long *)(uVar12 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0d78 + 4)
            );
    if (plVar10 == *(long **)(uVar12 + 0x38)) {
LAB_082f0be8:
      puVar9 = &DAT_0f5d0d78;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    puVar9 = (undefined *)func_0x048b1040(uStack_218,puVar9,uStack_28c,1);
    if (puVar9 == (undefined *)0x0) {
      uStack_1c8 = (undefined *)0x0;
      uStack_1c0 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_1c8);
      puVar18 = *(undefined **)(uStack_1c8 + 0x38);
      puVar9 = uStack_1c8;
    }
    else {
      puVar18 = *(undefined **)(puVar9 + 0x38);
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_1c8 = (undefined *)0x0;
      uStack_1c0 = (undefined4 *)0x0;
      func_0x048b10d0(&uStack_1c8);
      puVar18 = uStack_1c8;
      if (uStack_1c8 == (undefined *)0x0) goto LAB_082f0d8e;
    }
    do {
      puVar9 = puVar18;
      puVar18 = *(undefined **)(puVar9 + 0x38);
      if (*(undefined **)(puVar9 + 0x38) == (undefined *)0x0) {
        uStack_1c8 = (undefined *)0x0;
        uStack_1c0 = (undefined4 *)0x0;
        func_0x048b10d0(&uStack_1c8);
        puVar18 = uStack_1c8;
      }
    } while (puVar18 != (undefined *)0x0);
LAB_082f0d8e:
    lVar21 = *(long *)(puVar9 + 0x48);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar11 != (undefined8 *)0x0) goto LAB_082f0db5;
    func_0x0eec74c0(0x38,0);
    goto LAB_082f0db5;
  }
  puVar9 = (undefined *)(ulong)uStack_28c;
  if ((int)puStack_210 != 1) goto LAB_082f0e12;
  if (DAT_0f5d0df8 == '\0') goto LAB_082f274a;
LAB_082f0b27:
  plVar10 = (long *)(*(long *)(uVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >> 3)
                            + (int)uVar20 & *(uint *)(_DAT_0f5d0d78 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f0b78;
    plVar10 = (long *)(*(long *)(uVar12 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0d78 + 4));
  if (plVar10 == *(long **)(uVar12 + 0x38)) {
LAB_082f0b78:
    puVar18 = &DAT_0f5d0d78;
  }
  else {
    puVar18 = (undefined *)plVar10[2];
  }
  puVar9 = (undefined *)func_0x048b0c90(uStack_218,puVar18,(ulong)puVar9 & 0xffffffff,1);
  if (puVar9 == (undefined *)0x0) {
    uStack_1c8 = (undefined *)0x0;
    uStack_1c0 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_1c8);
    puVar9 = uStack_1c8;
  }
  lVar21 = *(long *)(puVar9 + 0x58);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
LAB_082f0db5:
  *(undefined1 *)(puVar11 + 3) = uStack_a8;
  *(uint *)(puVar11 + 1) = uStack_b8;
  *(undefined4 *)((long)puVar11 + 0xc) = uStack_b4;
  *(undefined4 *)(puVar11 + 2) = uStack_b0;
  *(undefined4 *)((long)puVar11 + 0x14) = uStack_ac;
  *puVar11 = puVar16;
  puVar11[4] = puVar22;
  puVar11[5] = puStack_298;
  puVar11[6] = puStack_298;
  plVar10 = *(long **)(lVar21 + 8);
  *(undefined8 **)(lVar21 + 8) = puVar11;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  puVar22 = (undefined *)0x0;
  puStack_298 = (undefined *)0x0;
LAB_082f0e12:
  uStack_e0 = uStack_48;
  uStack_dc = uStack_44;
  uStack_d8 = uStack_40;
  uStack_d4 = uStack_3c;
  uStack_f0 = plStack_58;
  uStack_e8 = (undefined4)uStack_50;
  uStack_e4 = uStack_50._4_4_;
  uStack_d0 = SUB84(puStack_210,0);
  uStack_cc = uStack_28c;
  cStack_c8 = cStack_299;
  uStack_f8 = uVar12;
  func_0x083d7990(&uStack_1c8,&uStack_f8,&UNK_011a0bc2,8);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f0124a8;
  if (plStack_1b0 != (long *)0x0) {
    lVar21 = *plStack_1b0;
    plStack_1b0 = plVar10;
    (**(code **)(lVar21 + 8))();
    plVar10 = plStack_1b0;
  }
  plStack_1b0 = plVar10;
  uStack_288 = (uint)uStack_1b8;
  uStack_280 = (long *)0x0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = (long *)0x1;
  uStack_268 = 0;
  puStack_260 = &UNK_05da29c0;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &SUB_05da26d0;
  puStack_248 = &UNK_083d8500;
  puStack_240 = &UNK_083d8670;
  uStack_238 = 0;
  uStack_230 = 0;
  plStack_228 = (long *)0x0;
  func_0x048b05a0(uStack_1c0,&uStack_288);
  plVar10 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_228 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      FUN_0412c2d0(plVar10);
    }
  }
  func_0x083d7c40(&uStack_1c8);
  func_0x048b0bc0(&plStack_1b0);
  if (puVar22 != (undefined *)0x0) {
    func_0x0412a280(puVar22,(long)puStack_298 - (long)puVar22);
  }
  puStack_98 = puVar16;
  if (uStack_78 != 0) {
    uStack_70 = uStack_78;
    func_0x0412a280(uStack_78,lStack_68 - uStack_78);
  }
LAB_082f0ffc:
  if ((DAT_0f5d0eb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0eb0), iVar8 != 0)) {
    func_0x083d8910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0eb0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f1060;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0e30 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_082f1060:
    puVar9 = &DAT_0f5d0e30;
    if (iRam000000000f5d0e90 != -0x2b3da790) goto LAB_082f10cd;
LAB_082f108b:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_082f10cd;
    bVar23 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar15 = lVar21 + 9;
    if (bVar23) {
      lVar15 = *(long *)(lVar21 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar23) {
      uVar12 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x083d8d30(&uStack_208,param_1,lVar15,uVar12);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_082f108b;
LAB_082f10cd:
    func_0x083d8d30(&uStack_208,param_1,&UNK_0147e795,0xe);
  }
  if (cStack_1d8 != '\0') goto LAB_082f1bd8;
  if ((DAT_0f5d0ed0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0ed0), iVar8 != 0)) {
    func_0x083d8a20();
    func_0x0410844d(&DAT_0f5d0ed0);
  }
  uStack_1e0 = 0xf7e7597b00000001;
  lVar21 = CONCAT44(uStack_204,uStack_208);
  if ((DAT_0f5d0eb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0eb0), iVar8 != 0)) {
    func_0x083d8910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0eb0);
  }
  uStack_1c0 = (undefined4 *)(lVar21 + 0x18);
  plVar10 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_082f1190;
    plVar10 = (long *)(*(long *)(lVar21 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d0e30 + 4));
  if (plVar10 == *(long **)(lVar21 + 0x38)) {
LAB_082f1190:
    uStack_1c8 = &DAT_0f5d0e30;
  }
  else {
    uStack_1c8 = (undefined *)plVar10[2];
  }
  FUN_0ed621a0(&uStack_1c8,uStack_1e0._4_4_);
  uStack_1c8 = (undefined *)CONCAT62(uStack_1c8._2_6_,1);
  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uStack_1e0._4_4_);
  plStack_1b0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1a0 = (undefined *)0x0;
  puStack_198 = (undefined *)0x0;
  lStack_190 = 0;
  uStack_188 = 0x16;
  uStack_187 = 0x2074656b636150;
  uStack_180 = 0x65707954;
  uStack_17c = uStack_17c & 0xffffff00;
  puStack_170 = (undefined *)0x0;
  uStack_168 = 0;
  lStack_160 = 0;
  plStack_158 = (long *)0x0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0x3f600000;
  uStack_1c0 = &uStack_200;
  func_0x048afb10(&puStack_170,8);
  uStack_118 = 0;
  lStack_110 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_108 = 0xff00;
  uStack_104 = uStack_104 & 0xffffff00;
  uStack_100 = uStack_100 & 0xffffff00;
  uStack_fc = 0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f1174e0;
  if (plStack_1b0 != (long *)0x0) {
    lVar21 = *plStack_1b0;
    plStack_1b0 = plVar10;
    (**(code **)(lVar21 + 8))();
    plVar10 = plStack_1b0;
  }
  plStack_1b0 = plVar10;
  uStack_288 = (uint)uStack_1b8;
  uStack_280 = (long *)0x0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = (long *)0x1;
  uStack_268 = 0;
  puStack_260 = &UNK_083d6640;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &UNK_083d2270;
  puStack_248 = &UNK_083d9840;
  puStack_240 = &UNK_083d99a0;
  uStack_238 = 0;
  uStack_230 = 0;
  plStack_228 = (long *)0x0;
  func_0x048b05a0(uStack_1c0,&uStack_288);
  plVar10 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_228 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      FUN_0412c2d0(plVar10);
    }
  }
  puVar5 = uStack_1c0;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_288 = _DAT_0f550a0c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  uVar12 = uStack_1a8;
  plVar1 = plStack_1b0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  uStack_280 = plVar10 + 3;
  plStack_1b0 = (long *)0x0;
  uStack_1a8 = 0;
  plVar10[3] = (long)plVar1;
  plVar10[4] = uVar12;
  plVar10[7] = lStack_190;
  plVar10[5] = (long)uStack_1a0;
  plVar10[6] = (long)puStack_198;
  uStack_1a0 = (undefined *)0x0;
  puStack_198 = (undefined *)0x0;
  lStack_190 = 0;
  plVar10[10] = (long)puStack_178;
  plVar10[8] = CONCAT71(uStack_187,uStack_188);
  plVar10[9] = CONCAT44(uStack_17c,uStack_180);
  uStack_188 = 0;
  uStack_187 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  puStack_178 = (undefined1 *)0x0;
  plVar10[0xb] = (long)puStack_170;
  plVar10[0xc] = uStack_168;
  plVar10[0xd] = lStack_160;
  puStack_170 = (undefined *)0x0;
  uStack_168 = 0;
  lStack_160 = 0;
  plVar10[0xe] = (long)plStack_158;
  plVar10[0xf] = lStack_150;
  plVar10[0x10] = lStack_148;
  plStack_158 = (long *)0x0;
  lStack_150 = 0;
  lStack_148 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_140;
  plVar10[0x12] = lStack_138;
  plVar10[0x13] = lStack_130;
  plVar10[0x14] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  plVar10[0x17] = lStack_110;
  *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_120;
  *(undefined4 *)((long)plVar10 + 0xac) = uStack_120._4_4_;
  *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_118;
  *(undefined4 *)((long)plVar10 + 0xb4) = uStack_118._4_4_;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_fc,CONCAT43(uStack_100,uStack_104._1_3_));
  plVar10[0x18] = CONCAT44(uStack_104,CONCAT22(uStack_106,uStack_108));
  uStack_f8 = 0;
  uStack_f0 = (long *)0x0;
  plStack_278 = plVar10;
  FUN_048afd20(puVar5,&uStack_288);
  plVar10 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_278 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      FUN_0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_f0;
  if (uStack_f0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_f0 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_f0 + 0x10))(uStack_f0);
      FUN_0412c2d0(plVar10);
    }
  }
  lVar21 = *(long *)(puVar5 + 4);
  iVar8 = puVar5[7];
  if (iVar8 == 2) {
    piVar13 = *(int **)(*(long *)(lVar21 + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != puVar5[6]) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar5 + 2); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
LAB_082f168a:
    piVar13[4] = piVar13[4] | (int)uStack_1c8 << 0x10;
  }
  else {
    if (iVar8 == 1) {
      piVar13 = *(int **)(*(long *)(lVar21 + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != puVar5[6]) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_082f168a;
    }
    if (iVar8 == 0) {
      *(uint *)(lVar21 + 0x18) = *(uint *)(lVar21 + 0x18) | (int)uStack_1c8 << 0x10;
    }
  }
  puVar9 = (undefined *)CONCAT44(uStack_204,uStack_208);
  iVar8 = (int)uStack_1e0;
  uVar12 = uStack_1e0 & 0xffffffff;
  uVar4 = uStack_1e0._4_4_;
  func_0x048b0bc0(&plStack_1b0);
  if ((DAT_0f5d0eb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d0eb0), iVar7 != 0)) {
    func_0x083d8910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0eb0);
  }
  puStack_210 = puVar9 + 0x18;
  plVar10 = (long *)(*(long *)(puVar9 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f1711;
    plVar10 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0e30 + 4));
  if (plVar10 == *(long **)(puVar9 + 0x38)) {
LAB_082f1711:
    puVar22 = &DAT_0f5d0e30;
  }
  else {
    puVar22 = (undefined *)plVar10[2];
  }
  if ((1 < iVar8 - 1U) &&
     (cVar6 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0144db25),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_1c8 = (undefined *)func_0x048b0c90(puStack_210,puVar22,uVar4,1);
  if (uStack_1c8 == (undefined *)0x0) {
    uStack_1c8 = (undefined *)0x0;
    uStack_1c0 = (undefined4 *)0x0;
    func_0x048b0d20(&uStack_1c8);
  }
  uStack_218 = CONCAT44(uStack_218._4_4_,uVar4);
  *(undefined1 *)(*(long *)((long)uStack_1c8 + 0x58) + 0xa8) = 5;
  plStack_1b0 = (long *)0xff;
  uStack_1c0 = (undefined4 *)0xffffffffffffffff;
  uStack_1b8 = 0;
  uStack_1c8 = &UNK_0f4e3aa0;
  uStack_1a8 = 0;
  uStack_1a0 = (undefined *)0x0;
  puStack_198 = (undefined *)0x0;
  puStack_98 = (undefined *)CONCAT44(puStack_98._4_4_,1);
  func_0x082f38f0(&uStack_1c8,&puStack_98);
  uVar20 = uStack_1a8;
  plStack_278 = (long *)CONCAT71(plStack_278._1_7_,plStack_1b0._0_1_);
  uStack_288 = (uint)uStack_1c0;
  uStack_284 = uStack_1c0._4_4_;
  uStack_280 = (long *)uStack_1b8;
  puVar16 = (undefined *)((long)uStack_1a0 - uStack_1a8);
  if (puVar16 == (undefined *)0x0) {
    puStack_298 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
    goto joined_r0x082f1952;
  }
  if ((long)puVar16 < 0) {
LAB_082f2745:
    func_0x0774b760();
LAB_082f274a:
    iVar8 = func_0x04108328(&DAT_0f5d0df8);
    if (iVar8 != 0) {
      func_0x083d6a40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0d78,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0df8);
    }
    goto LAB_082f0b27;
  }
  puStack_298 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar16);
  if (puStack_298 == (undefined *)0x0) {
    func_0x0eec74c0(puVar16,0);
  }
  puVar22 = puVar16 + (long)puStack_298;
  func_0x0eee2f00(puStack_298,uVar20,puVar16);
joined_r0x082f1952:
  if (iVar8 == 4) {
    if ((DAT_0f5d0eb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0eb0), iVar8 != 0)) {
      func_0x083d8910();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
      func_0x0410844d(&DAT_0f5d0eb0);
    }
    plVar10 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
    do {
      lVar21 = *plVar10;
      if (lVar21 == -1) goto LAB_082f19b9;
      plVar10 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0e30 + 4)
            );
    if (plVar10 == *(long **)(puVar9 + 0x38)) {
LAB_082f19b9:
      puVar9 = &DAT_0f5d0e30;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    uVar12 = func_0x048b1040(puStack_210,puVar9,uStack_218 & 0xffffffff,1);
    if (uVar12 == 0) {
      uStack_f8 = 0;
      uStack_f0 = (long *)0x0;
      func_0x048b10d0(&uStack_f8);
      uVar20 = *(ulong *)(uStack_f8 + 0x38);
      uVar12 = uStack_f8;
      if (uVar20 == 0) goto LAB_082f1ad9;
LAB_082f1afe:
      do {
        uVar12 = uVar20;
        uVar20 = *(ulong *)(uVar12 + 0x38);
        if (*(ulong *)(uVar12 + 0x38) == 0) {
          uStack_f8 = 0;
          uStack_f0 = (long *)0x0;
          func_0x048b10d0(&uStack_f8);
          uVar20 = uStack_f8;
        }
      } while (uVar20 != 0);
    }
    else {
      uVar20 = *(ulong *)(uVar12 + 0x38);
      if (*(ulong *)(uVar12 + 0x38) != 0) goto LAB_082f1afe;
LAB_082f1ad9:
      uStack_f8 = 0;
      uStack_f0 = (long *)0x0;
      func_0x048b10d0(&uStack_f8);
      uVar20 = uStack_f8;
      if (uStack_f8 != 0) goto LAB_082f1afe;
    }
    lVar21 = *(long *)(uVar12 + 0x48);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
LAB_082f1b6b:
    *(undefined1 *)(puVar11 + 3) = plStack_278._0_1_;
    *(uint *)(puVar11 + 1) = uStack_288;
    *(undefined4 *)((long)puVar11 + 0xc) = uStack_284;
    *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_280;
    *(undefined4 *)((long)puVar11 + 0x14) = uStack_280._4_4_;
    *puVar11 = &UNK_0f4e3aa0;
    puVar11[4] = puStack_298;
    puVar11[5] = puVar22;
    puVar11[6] = puVar22;
    plVar10 = *(long **)(lVar21 + 8);
    *(undefined8 **)(lVar21 + 8) = puVar11;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))();
    }
  }
  else {
    if (iVar8 == 1) {
      if ((DAT_0f5d0eb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0eb0), iVar8 != 0)) {
        func_0x083d8910();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0e30,0xf53dab8);
        func_0x0410844d(&DAT_0f5d0eb0);
      }
      plVar10 = (long *)(*(long *)(puVar9 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5d0e30 + 4)) * 8);
      do {
        lVar21 = *plVar10;
        if (lVar21 == -1) goto LAB_082f1929;
        plVar10 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
      } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) !=
               *(uint *)(_DAT_0f5d0e30 + 4));
      if (plVar10 == *(long **)(puVar9 + 0x38)) {
LAB_082f1929:
        puVar9 = &DAT_0f5d0e30;
      }
      else {
        puVar9 = (undefined *)plVar10[2];
      }
      uVar12 = func_0x048b0c90(puStack_210,puVar9,uStack_218 & 0xffffffff,1);
      if (uVar12 == 0) {
        uStack_f8 = 0;
        uStack_f0 = (long *)0x0;
        func_0x048b0d20(&uStack_f8);
        uVar12 = uStack_f8;
      }
      lVar21 = *(long *)(uVar12 + 0x58);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      goto LAB_082f1b6b;
    }
    if (puStack_298 != (undefined *)0x0) {
      func_0x0412a280(puStack_298,(long)puVar22 - (long)puStack_298);
    }
  }
  uStack_1c8 = &UNK_0f4e3aa0;
  if (uStack_1a8 != 0) {
    uStack_1a0 = (undefined *)uStack_1a8;
    func_0x0412a280(uStack_1a8,(long)puStack_198 - uStack_1a8);
  }
LAB_082f1bd8:
  if ((DAT_0f5d0c00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0c00), iVar8 != 0)) {
    func_0x083d0700();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d0b80,0xf53dab8);
    func_0x0410844d(&DAT_0f5d0c00);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5d0b80 + 4)) * 8);
  do {
    lVar21 = *plVar10;
    if (lVar21 == -1) goto LAB_082f1c30;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5d0b80 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_082f1c30:
    puVar9 = &DAT_0f5d0b80;
    if (iRam000000000f5d0be0 != -0x2b3da790) goto LAB_082f1c9d;
LAB_082f1c5b:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_082f1c9d;
    bVar23 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar15 = lVar21 + 9;
    if (bVar23) {
      lVar15 = *(long *)(lVar21 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar23) {
      uVar12 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x083d9b70(&uStack_208,param_1,lVar15,uVar12);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_082f1c5b;
LAB_082f1c9d:
    func_0x083d9b70(&uStack_208,param_1,&UNK_012dd89e,0x1b);
  }
  if (cStack_1d8 != '\0') {
    return;
  }
  func_0x083da6e0(&uStack_1c8,&uStack_208,&UNK_014645f7,0xf);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f0e95d0;
  if (plStack_1b0 != (long *)0x0) {
    lVar21 = *plStack_1b0;
    plStack_1b0 = plVar10;
    (**(code **)(lVar21 + 8))();
    plVar10 = plStack_1b0;
  }
  plStack_1b0 = plVar10;
  uStack_288 = (uint)uStack_1b8;
  uStack_280 = (long *)0x0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = (long *)0x1;
  uStack_268 = 0;
  puStack_260 = &UNK_077e7de0;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &SUB_077e7b00;
  puStack_248 = &UNK_083dac90;
  puStack_240 = &UNK_083dadf0;
  uStack_238 = 0;
  uStack_230 = 0;
  plStack_228 = (long *)0x0;
  func_0x048b05a0(uStack_1c0,&uStack_288);
  plVar10 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_228 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      FUN_0412c2d0(plVar10);
    }
  }
  func_0x083da990(&uStack_1c8);
  cStack_c8 = cStack_1d8;
  uStack_d8 = uStack_1e8;
  uStack_d4 = uStack_1e4;
  uStack_d0 = (int)uStack_1e0;
  uStack_cc = uStack_1e0._4_4_;
  uStack_e8 = uStack_1f8;
  uStack_e4 = uStack_1f4;
  uStack_e0 = uStack_1f0;
  uStack_dc = uStack_1ec;
  uStack_f8 = CONCAT44(uStack_204,uStack_208);
  func_0x048b0bc0(&plStack_1b0);
  if ((DAT_0f5d0f00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0f00), iVar8 != 0)) {
    func_0x083db1b0();
    func_0x0410844d(&DAT_0f5d0f00);
  }
  if ((DAT_0f5d0f00 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d0f00), iVar8 != 0)) {
    func_0x083db1b0();
    func_0x0410844d(&DAT_0f5d0f00);
  }
  uStack_1c8 = &DAT_0f5d0ee8;
  uStack_1c0 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,_DAT_0f5d0eec);
  uStack_1b8 = 0;
  plStack_1b0 = (long *)CONCAT44(plStack_1b0._4_4_,0x80);
  uStack_1a8 = 0x14;
  uStack_1a0 = &UNK_083db0f0;
  puStack_198 = &UNK_083db230;
  lStack_190 = 0;
  uStack_188 = 0;
  uStack_187 = 0x83db5;
  uStack_180 = 2;
  uStack_17c = 0;
  puStack_178 = &SUB_05e26240;
  puStack_170 = &UNK_083db590;
  uStack_168 = uStack_168 & 0xffffffff00000000;
  lStack_160 = 0;
  plStack_158 = (long *)0x0;
  lStack_150 = 0;
  func_0x048aee30(&uStack_288,uStack_f8 + 0x18,&uStack_1c8,0x628b5c5a);
  lVar21 = lStack_150;
  lStack_150 = 0;
  if (lVar21 != 0) {
    func_0x048ae940(lVar21);
    func_0x0412a280(lVar21,0x78);
  }
  plVar10 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_158 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      FUN_0412c2d0(plVar10);
    }
  }
  if (uStack_270._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_270) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    lVar21 = *(long *)(piVar13 + 0xc);
    while ((long *)lVar21 != uStack_280) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar21 = *(long *)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_270._4_4_ != 1) {
      if (uStack_270._4_4_ == 0) {
        *(uint *)((long)plStack_278 + 0x18U) = *(uint *)((long)plStack_278 + 0x18U) | 0x10000;
      }
      goto LAB_082f2003;
    }
    piVar13 = *(int **)(*(long *)((long)plStack_278 + 0x78) + 0x48);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_270) {
      piVar13 = piVar13 + 0x1a;
      iVar8 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 1;
LAB_082f2003:
  uStack_1b8 = (ulong)plStack_278;
  plStack_1b0 = uStack_270;
  uStack_1c8 = (undefined *)CONCAT44(uStack_284,uStack_288);
  uStack_1c0 = (undefined4 *)uStack_280;
  if ((DAT_0f5af3d0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5af3d0), iVar8 != 0)) {
    func_0x07786a90(0xf5af3b8);
    func_0x0410844d(&DAT_0f5af3d0);
  }
  puStack_98 = (undefined *)CONCAT44(puStack_98._4_4_,_DAT_0f5af3bc);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0f0e9768;
  uStack_90 = plVar10 + 3;
  plVar10[3] = (long)&UNK_083d21b0;
  plVar10[4] = 0x2074656b63615016;
  *(undefined4 *)(plVar10 + 5) = 0x65707954;
  *(undefined1 *)((long)plVar10 + 0x2c) = 0;
  *(undefined2 *)((long)plVar10 + 0x2d) = (undefined2)uStack_b8;
  *(undefined1 *)((long)plVar10 + 0x2f) = uStack_b8._2_1_;
  plVar10[6] = 0;
  uStack_b8 = uStack_b8 & 0xff000000;
  plStack_58 = (long *)0x0;
  uStack_50 = (long *)0x0;
  uStack_88 = plVar10;
  FUN_048afd20(&uStack_1c8,&puStack_98);
  plVar10 = uStack_88;
  if (uStack_88 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_88 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_88 + 0x10))(uStack_88);
      FUN_0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_50;
  if (uStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_50 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_50 + 0x10))(uStack_50);
      FUN_0412c2d0(plVar10);
    }
  }
  func_0x083da6e0(&uStack_1c8,&uStack_f8,&UNK_011f3585,8);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f117698;
  if (plStack_1b0 != (long *)0x0) {
    lVar21 = *plStack_1b0;
    plStack_1b0 = plVar10;
    (**(code **)(lVar21 + 8))();
    plVar10 = plStack_1b0;
  }
  plStack_1b0 = plVar10;
  uStack_288 = (uint)uStack_1b8;
  uStack_280 = (long *)0x0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = (long *)0x1;
  uStack_268 = 0;
  puStack_260 = &UNK_083dec70;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &UNK_083db0f0;
  puStack_248 = &UNK_083ded30;
  puStack_240 = &UNK_083deea0;
  uStack_238 = 0;
  uStack_230 = 0;
  plStack_228 = (long *)0x0;
  func_0x048b05a0(uStack_1c0,&uStack_288);
  plVar10 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_228 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      FUN_0412c2d0(plVar10);
    }
  }
  func_0x083da990(&uStack_1c8);
  func_0x048b0bc0(&plStack_1b0);
  return;
}


