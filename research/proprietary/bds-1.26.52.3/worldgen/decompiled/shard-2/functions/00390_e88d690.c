/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe98d690 (ELF vaddr 0xe88d690)
 * Label: caller-of-callee
 * Body:  [[0e98d690, 0e9914e1]]
 * Ghidra: FUN_0e98d690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e98d690(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  uint auStack_320 [2];
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined4 auStack_2b8 [2];
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
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
  undefined4 uStack_1c0;
  uint uStack_1bc;
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
  
  func_0x0eb67df0();
  if ((DAT_0f769d10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769d10), iVar6 != 0)) {
    func_0x0ea71780();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f769c90,0xf53dab8);
    func_0x0410844d(&DAT_0f769d10);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f769c90 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e98d710;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f769c90 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e98d710:
    puVar7 = &DAT_0f769c90;
    if (iRam000000000f769cf0 != -0x2b3da790) goto LAB_0e98d768;
LAB_0e98d73b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e98d768;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    puVar7 = (undefined *)(lVar2 + 9);
    if (bVar16) {
      puVar7 = *(undefined **)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e98d73b;
LAB_0e98d768:
    puVar7 = &UNK_011cf901;
    uVar8 = 0x35;
  }
  func_0x0ea71bc0(&uStack_1e8,param_1,puVar7,uVar8);
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  uStack_1b0 = uStack_1b0 & 0xffffff00;
  if ((char)uStack_1b8 == '\0') {
    func_0x0ea75440(auStack_2b8,&UNK_01238682,0x14);
    puVar7 = (undefined *)((ulong)uStack_290 >> 1 & 0x7f);
    lVar2 = (long)&uStack_290 + 1;
    if (((ulong)uStack_290 & 1) != 0) {
      puVar7 = puStack_288;
      lVar2 = lStack_280;
    }
    if (puVar7 == (undefined *)0x0) {
      uStack_1bc = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)puVar7 & 3);
      if (puVar7 < (undefined *)0x4) {
        uStack_1bc = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_1bc = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar2 + 3 + uVar14) ^
                       ((int)*(char *)(lVar2 + 2 + uVar14) ^
                       ((int)*(char *)(lVar2 + 1 + uVar14) ^
                       ((int)*(char *)(lVar2 + uVar14) ^ uStack_1bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while (((ulong)puVar7 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar8 != 0) {
        uVar13 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar2 + uVar14 + uVar13) ^ uStack_1bc) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar8 != uVar13);
      }
    }
    uStack_1c0 = 2;
    if ((DAT_0f769d30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769d30), iVar6 != 0)) {
      func_0x0ea71890();
      func_0x0410844d(&DAT_0f769d30);
    }
    auStack_320[0] = uStack_1bc;
    uStack_318 = 0;
    uStack_310 = 3;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea75a50;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea716c0;
    puStack_2e0 = &UNK_0ea75b10;
    puStack_2d8 = &UNK_0ea75b20;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_1e0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    uStack_198 = uStack_1d0;
    uStack_194 = uStack_1cc;
    uStack_190 = uStack_1c8;
    uStack_18c = uStack_1c4;
    func_0x0ea757e0(auStack_320,&uStack_1a8,auStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_30c,uStack_310) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_308) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar2 = *(long *)(piVar11 + 0xc);
      while (lVar2 != uStack_318) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar2 = *(long *)(piVar11 + 0xc);
      }
LAB_0e98d9ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_30c,uStack_310) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_308) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98d9ff;
      }
      if (uStack_308._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_30c,uStack_310) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_1b0 == '\0') {
      func_0x0ea75b70(auStack_320,&uStack_1e8);
    }
    uVar4 = uStack_1b4;
    lVar2 = CONCAT44(uStack_1e4,uStack_1e8);
    if ((DAT_0f769d10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769d10), iVar6 != 0)) {
      func_0x0ea71780();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f769c90,0xf53dab8);
      func_0x0410844d(&DAT_0f769d10);
    }
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f769c90 + 4)) * 8);
    do {
      lVar12 = *plVar9;
      if (lVar12 == -1) goto LAB_0e98da90;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f769c90 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0e98da90:
      puVar7 = &DAT_0f769c90;
    }
    else {
      puVar7 = (undefined *)plVar9[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x20);
        (puVar15 != puVar3 && (*puVar15 != uVar4)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012b95c0),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_1bc,&uStack_1bc,auStack_320);
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = (long *)CONCAT44(uStack_1dc,uStack_1e0);
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    func_0x048b0bc0(auStack_2b8);
    func_0x0ea75440(auStack_2b8,&UNK_012d87b3,6);
    puVar7 = (undefined *)((ulong)uStack_290 >> 1 & 0x7f);
    lVar2 = (long)&uStack_290 + 1;
    if (((ulong)uStack_290 & 1) != 0) {
      puVar7 = puStack_288;
      lVar2 = lStack_280;
    }
    if (puVar7 == (undefined *)0x0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)puVar7 & 3);
      if (puVar7 < (undefined *)0x4) {
        uStack_17c = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar2 + 3 + uVar14) ^
                       ((int)*(char *)(lVar2 + 2 + uVar14) ^
                       ((int)*(char *)(lVar2 + 1 + uVar14) ^
                       ((int)*(char *)(lVar2 + uVar14) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while (((ulong)puVar7 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar8 != 0) {
        uVar13 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar2 + uVar14 + uVar13) ^ uStack_17c) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar8 != uVar13);
      }
    }
    uStack_180 = 2;
    if ((DAT_0f769d30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769d30), iVar6 != 0)) {
      func_0x0ea71890();
      func_0x0410844d(&DAT_0f769d30);
    }
    auStack_320[0] = uStack_17c;
    uStack_318 = 0;
    uStack_310 = 3;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea75a50;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea716c0;
    puStack_2e0 = &UNK_0ea75d30;
    puStack_2d8 = &UNK_0ea75d40;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
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
    func_0x0ea757e0(auStack_320,&uStack_168,auStack_2b8);
    if (uStack_308._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_30c,uStack_310) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_308) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar2 = *(long *)(piVar11 + 0xc);
      while (lVar2 != uStack_318) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar2 = *(long *)(piVar11 + 0xc);
      }
LAB_0e98ddff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
    }
    else {
      if (uStack_308._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_30c,uStack_310) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_308) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98ddff;
      }
      if (uStack_308._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_30c,uStack_310) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0ea75b70(auStack_320,&uStack_1a8);
    }
    uVar4 = uStack_174;
    lVar2 = uStack_1a8;
    if ((DAT_0f769d10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769d10), iVar6 != 0)) {
      func_0x0ea71780();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f769c90,0xf53dab8);
      func_0x0410844d(&DAT_0f769d10);
    }
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f769c90 + 4)) * 8);
    do {
      lVar12 = *plVar9;
      if (lVar12 == -1) goto LAB_0e98de90;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f769c90 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0e98de90:
      puVar7 = &DAT_0f769c90;
    }
    else {
      puVar7 = (undefined *)plVar9[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(puVar7 + 0x68) + 0x20);
        (puVar15 != puVar3 && (*puVar15 != uVar4)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012b95c0),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_17c,&uStack_17c,auStack_320);
    func_0x048b0bc0(auStack_2b8);
  }
  if ((DAT_0f769dc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769dc8), iVar6 != 0)) {
    func_0x0ea75e50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f769d48,0xf53dab8);
    func_0x0410844d(&DAT_0f769dc8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f769d48 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e98df90;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f769d48 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e98df90:
    puVar7 = &DAT_0f769d48;
    if (iRam000000000f769da8 != -0x2b3da790) goto LAB_0e98dffd;
LAB_0e98dfbb:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e98dffd;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea764e0(&uStack_1e8,param_1,lVar12,uVar8);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e98dfbb;
LAB_0e98dffd:
    func_0x0ea764e0(&uStack_1e8,param_1,&UNK_013211c9,0x17);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0ea770a0(auStack_2b8,&uStack_1e8,&UNK_01493f37,4,1);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d64b0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea75a50;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea716c0;
    puStack_2e0 = &UNK_0ea77660;
    puStack_2d8 = &UNK_0ea777c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea77360(auStack_2b8);
    cStack_138 = (char)uStack_1b8;
    uStack_148 = uStack_1c8;
    uStack_144 = uStack_1c4;
    uStack_140 = uStack_1c0;
    uStack_13c = uStack_1bc;
    uStack_158 = uStack_1d8;
    uStack_154 = uStack_1d4;
    uStack_150 = uStack_1d0;
    uStack_14c = uStack_1cc;
    uStack_168 = uStack_1e8;
    uStack_164 = uStack_1e4;
    uStack_160 = uStack_1e0;
    uStack_15c = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea770a0(auStack_2b8,&uStack_168,&UNK_012d2e29,0x10,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d6340;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea6e640;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea6e270;
    puStack_2e0 = &UNK_0ea77c20;
    puStack_2d8 = &UNK_0ea77e90;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea77360(auStack_2b8);
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
    func_0x0ea76ad0(auStack_2b8,uStack_1a8 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98e3cf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98e3cf;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea770a0(auStack_2b8,&uStack_1a8,&UNK_01443732,0x13,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0126a0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_05daeda0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_05daea90;
    puStack_2e0 = &UNK_0ea78070;
    puStack_2d8 = &UNK_0ea781e0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea77360(auStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f769e80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769e80), iVar6 != 0)) {
    func_0x0ea78480();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f769e00,0xf53dab8);
    func_0x0410844d(&DAT_0f769e80);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f769e00 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e98e560;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f769e00 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e98e560:
    puVar7 = &DAT_0f769e00;
    if (iRam000000000f769e60 != -0x2b3da790) goto LAB_0e98e5c7;
LAB_0e98e58b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e98e5c7;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea78ce0(auStack_320,param_1,lVar12,uVar8);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e98e58b;
LAB_0e98e5c7:
    func_0x0ea78ce0(auStack_320,param_1,&UNK_011b3aab,0x30);
  }
  if ((char)puStack_2f0 == '\0') {
    uStack_2a8._4_4_ = (uint)((ulong)uStack_2a8 >> 0x20);
    uStack_2f8 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f769ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769ea0), iVar6 != 0)) {
      func_0x0ea78590();
      func_0x0410844d(&DAT_0f769ea0);
    }
    auStack_2b8[0] = uStack_2f8._4_4_;
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8._4_4_ << 0x20);
    uStack_2a0 = (long *)0x1;
    puStack_298 = &SUB_048aead0;
    uStack_290 = &UNK_0ea79870;
    puStack_288 = &UNK_0ea79930;
    lStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x049057f0(&uStack_318,auStack_2b8);
    FUN_048aea50(auStack_2b8);
    uStack_1d8 = (int)uStack_308;
    uStack_1d4 = uStack_308._4_4_;
    uStack_1d0 = (int)uStack_300;
    uStack_1cc = uStack_300._4_4_;
    uStack_1e8 = (undefined4)uStack_318;
    uStack_1e4 = uStack_318._4_4_;
    uStack_1e0 = uStack_310;
    uStack_1dc = uStack_30c;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4d65e8;
    if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_2b8[0] = _DAT_0f551bb4;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef46c48;
    plStack_2b0 = plVar9 + 3;
    plVar9[3] = (long)puVar10;
    plVar9[4] = 0;
    *(undefined1 *)(plVar9 + 5) = 0xff;
    uStack_1a8 = 0;
    uStack_1a0 = (long *)0x0;
    uStack_2a8 = plVar9;
    FUN_048afd20(&uStack_1e8,auStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        FUN_0412c2d0(plVar9);
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
        FUN_0412c2d0(plVar9);
      }
    }
    if ((DAT_0f769ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769ea0), iVar6 != 0)) {
      func_0x0ea78590();
      func_0x0410844d(&DAT_0f769ea0);
    }
    if (uStack_300._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(uStack_308 + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_300) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar2 = *(long *)(piVar11 + 0xc);
      while (lVar2 != CONCAT44(uStack_30c,uStack_310)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar2 = *(long *)(piVar11 + 0xc);
      }
LAB_0e98e88f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
    }
    else {
      if (uStack_300._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(uStack_308 + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_300) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98e88f;
      }
      if (uStack_300._4_4_ == 0) {
        *(uint *)(uStack_308 + 0x18) = *(uint *)(uStack_308 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f769ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769ea0), iVar6 != 0)) {
      func_0x0ea78590();
      func_0x0410844d(&DAT_0f769ea0);
    }
    auStack_2b8[0] = 0xbf75c8f8;
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)CONCAT44(uStack_2a8._4_4_,1);
    uStack_2a0 = (long *)0x0;
    puStack_298 = &UNK_0ea75d90;
    uStack_290 = &SUB_048b06d0;
    puStack_288 = &UNK_0ea79f00;
    lStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x049057f0(&uStack_318,auStack_2b8);
    FUN_048aea50(auStack_2b8);
    uStack_1d8 = (int)uStack_308;
    uStack_1d4 = uStack_308._4_4_;
    uStack_1d0 = (int)uStack_300;
    uStack_1cc = uStack_300._4_4_;
    uStack_1e8 = (undefined4)uStack_318;
    uStack_1e4 = uStack_318._4_4_;
    uStack_1e0 = uStack_310;
    uStack_1dc = uStack_30c;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4d65e8;
    if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_2b8[0] = _DAT_0f551c9c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef46c98;
    plStack_2b0 = plVar9 + 3;
    plVar9[3] = (long)puVar10;
    *(undefined1 *)(plVar9 + 4) = 0xff;
    uStack_1a8 = 0;
    uStack_1a0 = (long *)0x0;
    uStack_2a8 = plVar9;
    FUN_048afd20(&uStack_1e8,auStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        FUN_0412c2d0(plVar9);
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
        FUN_0412c2d0(plVar9);
      }
    }
  }
  func_0x0eb67df0(param_1);
  if ((DAT_0f769f38 == '\0') && (iVar6 = func_0x04108328(&DAT_0f769f38), iVar6 != 0)) {
    func_0x0ea7a620();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f769eb8,0xf53dab8);
    func_0x0410844d(&DAT_0f769f38);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f769eb8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e98eac0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f769eb8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e98eac0:
    puVar7 = &DAT_0f769eb8;
    if (iRam000000000f769f18 != -0x2b3da790) goto LAB_0e98eb2d;
LAB_0e98eaeb:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e98eb2d;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea7b0e0(&uStack_1e8,param_1,lVar12,uVar8);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e98eaeb;
LAB_0e98eb2d:
    func_0x0ea7b0e0(&uStack_1e8,param_1,&UNK_0126d006,0x2b);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0ea7bce0(auStack_2b8,&uStack_1e8,&UNK_011e8742,7,1);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d66d0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea7e560;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea7e0c0;
    puStack_2e0 = &UNK_0ea7e620;
    puStack_2d8 = &UNK_0ea7e830;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
    cStack_78 = (char)uStack_1b8;
    uStack_88 = uStack_1c8;
    uStack_84 = uStack_1c4;
    uStack_80 = uStack_1c0;
    uStack_7c = uStack_1bc;
    uStack_98 = uStack_1d8;
    uStack_94 = uStack_1d4;
    uStack_90 = uStack_1d0;
    uStack_8c = uStack_1cc;
    uStack_a8 = uStack_1e8;
    uStack_a4 = uStack_1e4;
    uStack_a0 = uStack_1e0;
    uStack_9c = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea7b6d0(auStack_2b8,CONCAT44(uStack_a4,uStack_a8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98ed8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98ed8f;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea7bce0(auStack_2b8,&uStack_a8,&UNK_012038a2,7,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f01a448;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_05fbc3d0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_05fbc410;
    puStack_2e0 = &UNK_0ea7edd0;
    puStack_2d8 = &UNK_0ea7ef30;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
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
    func_0x0ea7b6d0(auStack_2b8,CONCAT44(uStack_64,uStack_68) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98efcf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98efcf;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea7bce0(auStack_2b8,&uStack_68,&UNK_013daee2,7,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f01a448;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_05fbc3d0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_05fbc410;
    puStack_2e0 = &UNK_0ea7f110;
    puStack_2d8 = &UNK_0ea7f270;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
    cStack_b8 = cStack_38;
    uStack_c8 = uStack_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    uStack_d8 = uStack_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    uStack_e8 = uStack_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea7b6d0(auStack_2b8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98f1ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98f1ff;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea7bce0(auStack_2b8,&uStack_e8,&UNK_013daeea,0x11,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0126a0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_05daeda0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_05daea90;
    puStack_2e0 = &UNK_0ea7f450;
    puStack_2d8 = &UNK_0ea7f5b0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
    cStack_f8 = cStack_b8;
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
    func_0x0ea7bce0(auStack_2b8,&uStack_128,&UNK_0133c220,9,1);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f2cccf0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0d9d7be0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_0b68b830;
    puStack_2e0 = &UNK_0ea7f790;
    puStack_2d8 = &UNK_0ea7f9d0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
    cStack_138 = cStack_f8;
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    uStack_15c = uStack_11c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea7b6d0(auStack_2b8,CONCAT44(uStack_164,uStack_168) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98f5af:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98f5af;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea7bce0(auStack_2b8,&uStack_168,&UNK_01443746,0x13,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_04906f70;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_04906c50;
    puStack_2e0 = &UNK_0ea7fbb0;
    puStack_2d8 = &UNK_0ea7fd10;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
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
    func_0x0ea7b6d0(auStack_2b8,uStack_1a8 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98f7ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98f7ef;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea7bce0(auStack_2b8,&uStack_1a8,&UNK_01265964,4,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_04906f70;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_04906c50;
    puStack_2e0 = &UNK_0ea7fef0;
    puStack_2d8 = &UNK_0ea80050;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea7bfa0(auStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  func_0x0eb67df0(param_1);
  if ((DAT_0f76a0a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a0a8), iVar6 != 0)) {
    func_0x0ea802f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76a028,0xf53dab8);
    func_0x0410844d(&DAT_0f76a0a8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76a028 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e98f970;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76a028 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e98f970:
    puVar7 = &DAT_0f76a028;
    if (iRam000000000f76a088 != -0x2b3da790) goto LAB_0e98f9dd;
LAB_0e98f99b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e98f9dd;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea811f0(&uStack_1e8,param_1,lVar12,uVar8);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e98f99b;
LAB_0e98f9dd:
    func_0x0ea811f0(&uStack_1e8,param_1,&UNK_01305bcd,8);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0ea817e0(auStack_2b8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98fa7f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98fa7f;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea81da0(auStack_2b8,&uStack_1e8,&UNK_012b9270,0xd,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0490ce30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_0490cb20;
    puStack_2e0 = &UNK_0ea82360;
    puStack_2d8 = &UNK_0ea824c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea82060(auStack_2b8);
    cStack_b8 = (char)uStack_1b8;
    uStack_c8 = uStack_1c8;
    uStack_c4 = uStack_1c4;
    uStack_c0 = uStack_1c0;
    uStack_bc = uStack_1bc;
    uStack_d8 = uStack_1d8;
    uStack_d4 = uStack_1d4;
    uStack_d0 = uStack_1d0;
    uStack_cc = uStack_1cc;
    uStack_e8 = uStack_1e8;
    uStack_e4 = uStack_1e4;
    uStack_e0 = uStack_1e0;
    uStack_dc = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea817e0(auStack_2b8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar11 = *(int **)(uStack_2a8[0xf] + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_2a0) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      plVar9 = *(long **)(piVar11 + 0xc);
      while (plVar9 != plStack_2b0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar9 = *(long **)(piVar11 + 0xc);
      }
LAB_0e98fcbf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar11 = *(int **)(uStack_2a8[0xf] + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_2a0) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e98fcbf;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(uStack_2a8 + 3) = *(uint *)(uStack_2a8 + 3) | 0x40000;
      }
    }
    func_0x0ea81da0(auStack_2b8,&uStack_e8,&UNK_0121ddd5,0xe,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0490ce30;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &SUB_0490cb20;
    puStack_2e0 = &UNK_0ea82690;
    puStack_2d8 = &UNK_0ea827f0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea82060(auStack_2b8);
    cStack_f8 = cStack_b8;
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
    func_0x0ea81da0(auStack_2b8,&uStack_128,&UNK_01238697,2,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d6838;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea838a0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea834d0;
    puStack_2e0 = &UNK_0ea83960;
    puStack_2d8 = &UNK_0ea83b40;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea82060(auStack_2b8);
    cStack_138 = cStack_f8;
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    uStack_15c = uStack_11c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea81da0(auStack_2b8,&uStack_168,&UNK_013211e1,7,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d6838;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea838a0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea834d0;
    puStack_2e0 = &UNK_0ea83fc0;
    puStack_2d8 = &UNK_0ea841a0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea82060(auStack_2b8);
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
    func_0x0ea81da0(auStack_2b8,&uStack_1a8,&UNK_0129ffa0,8,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d68b0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea85830;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea85460;
    puStack_2e0 = &UNK_0ea858f0;
    puStack_2d8 = &UNK_0ea85b70;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea82060(auStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f76a2d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a2d0), iVar6 != 0)) {
    func_0x0ea860b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76a250,0xf53dab8);
    func_0x0410844d(&DAT_0f76a2d0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76a250 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e990270;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76a250 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e990270:
    puVar7 = &DAT_0f76a250;
    if (iRam000000000f76a2b0 != -0x2b3da790) goto LAB_0e9902d7;
LAB_0e99029b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_0e9902d7;
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea86d30(auStack_320,param_1,lVar12,uVar8);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e99029b;
LAB_0e9902d7:
    func_0x0ea86d30(auStack_320,param_1,&UNK_012b927e,0x25);
  }
  if ((char)puStack_2f0 != '\0') goto LAB_0e9907b2;
  uStack_2f8 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f76a2f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a2f0), iVar6 != 0)) {
    func_0x0ea861c0();
    func_0x0410844d(&DAT_0f76a2f0);
  }
  auStack_2b8[0] = uStack_2f8._4_4_;
  plStack_2b0 = (long *)0x0;
  uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
  uStack_2a0 = (long *)0x1;
  puStack_298 = &SUB_048aead0;
  uStack_290 = &UNK_0ea878c0;
  puStack_288 = &UNK_0ea87980;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  func_0x049057f0(&uStack_318,auStack_2b8);
  FUN_048aea50(auStack_2b8);
  uStack_1d8 = (int)uStack_308;
  uStack_1d4 = uStack_308._4_4_;
  uStack_1d0 = (int)uStack_300;
  uStack_1cc = uStack_300._4_4_;
  uStack_1e8 = (undefined4)uStack_318;
  uStack_1e4 = uStack_318._4_4_;
  uStack_1e0 = uStack_310;
  uStack_1dc = uStack_30c;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4d6a10;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_2b8[0] = _DAT_0f551bb4;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plStack_2b0 = plVar9 + 3;
  plVar9[3] = (long)puVar10;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  uStack_1a8 = 0;
  uStack_1a0 = (long *)0x0;
  uStack_2a8 = plVar9;
  FUN_048afd20(&uStack_1e8,auStack_2b8);
  plVar9 = uStack_2a8;
  if (uStack_2a8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2a8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
      FUN_0412c2d0(plVar9);
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
      FUN_0412c2d0(plVar9);
    }
  }
  if ((DAT_0f76a2f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a2f0), iVar6 != 0)) {
    func_0x0ea861c0();
    func_0x0410844d(&DAT_0f76a2f0);
  }
  if (uStack_300._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(uStack_308 + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != (int)uStack_300) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != CONCAT44(uStack_30c,uStack_310)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
LAB_0e9905ef:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
  }
  else {
    if (uStack_300._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(uStack_308 + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_300) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e9905ef;
    }
    if (uStack_300._4_4_ == 0) {
      *(uint *)(uStack_308 + 0x18) = *(uint *)(uStack_308 + 0x18) | 0x20000;
    }
  }
  if ((DAT_0f76a2f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a2f0), iVar6 != 0)) {
    func_0x0ea861c0();
    func_0x0410844d(&DAT_0f76a2f0);
  }
  auStack_2b8[0] = 0xbf75c8f8;
  plStack_2b0 = (long *)0x0;
  uStack_2a8 = (long *)CONCAT44(uStack_2a8._4_4_,1);
  uStack_2a0 = (long *)0x0;
  puStack_298 = &UNK_0ea80230;
  uStack_290 = &SUB_048b06d0;
  puStack_288 = &UNK_0ea880b0;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  func_0x049057f0(&uStack_318,auStack_2b8);
  FUN_048aea50(auStack_2b8);
  uStack_1d8 = (int)uStack_308;
  uStack_1d4 = uStack_308._4_4_;
  uStack_1d0 = (int)uStack_300;
  uStack_1cc = uStack_300._4_4_;
  uStack_1e8 = (undefined4)uStack_318;
  uStack_1e4 = uStack_318._4_4_;
  uStack_1e0 = uStack_310;
  uStack_1dc = uStack_30c;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4d6a10;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_2b8[0] = _DAT_0f551c9c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c98;
  plStack_2b0 = plVar9 + 3;
  plVar9[3] = (long)puVar10;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  uStack_1a8 = 0;
  uStack_1a0 = (long *)0x0;
  uStack_2a8 = plVar9;
  FUN_048afd20(&uStack_1e8,auStack_2b8);
  plVar9 = uStack_2a8;
  if (uStack_2a8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2a8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
      FUN_0412c2d0(plVar9);
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
      FUN_0412c2d0(plVar9);
    }
  }
LAB_0e9907b2:
  func_0x0eb67df0(param_1);
  if ((DAT_0f76a388 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76a388), iVar6 != 0)) {
    func_0x0ea888c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76a308,0xf53dab8);
    func_0x0410844d(&DAT_0f76a388);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76a308 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e990820;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f76a308 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e990820:
    puVar7 = &DAT_0f76a308;
    iVar6 = iRam000000000f76a368;
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar7 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar2 = *(long *)(puVar7 + 0x68), lVar2 != 0)) {
    bVar16 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar16) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0ea89b60(&uStack_1e8,param_1,lVar12,uVar8);
  }
  else {
    func_0x0ea89b60(&uStack_1e8,param_1,&UNK_0140e501,0x1d);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0ea8a6f0(auStack_2b8,&uStack_1e8,&UNK_01492c33,4,1);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d66d0;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea7e560;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea7e0c0;
    puStack_2e0 = &UNK_0ea8acb0;
    puStack_2d8 = &UNK_0ea8aec0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea8a9b0(auStack_2b8);
    cStack_f8 = (char)uStack_1b8;
    uStack_108 = uStack_1c8;
    uStack_104 = uStack_1c4;
    uStack_100 = uStack_1c0;
    uStack_fc = uStack_1bc;
    uStack_118 = uStack_1d8;
    uStack_114 = uStack_1d4;
    uStack_110 = uStack_1d0;
    uStack_10c = uStack_1cc;
    uStack_128 = uStack_1e8;
    uStack_124 = uStack_1e4;
    uStack_120 = uStack_1e0;
    uStack_11c = uStack_1dc;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea8a6f0(auStack_2b8,&uStack_128,&UNK_0126d032,0x12,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f02bd50;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0639ece0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0639e9a0;
    puStack_2e0 = &UNK_0ea8b0a0;
    puStack_2d8 = &UNK_0ea8b3c0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea8a9b0(auStack_2b8);
    cStack_138 = cStack_f8;
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    uStack_15c = uStack_11c;
    func_0x048b0bc0(&uStack_2a0);
    func_0x0ea8a6f0(auStack_2b8,&uStack_168,&UNK_0142e575,9,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f4d6af8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = plVar9;
      (**(code **)(lVar2 + 8))();
      plVar9 = uStack_2a0;
    }
    uStack_2a0 = plVar9;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea8ca40;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea8c670;
    puStack_2e0 = &UNK_0ea8cb00;
    puStack_2d8 = &UNK_0ea8cd70;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea8a9b0(auStack_2b8);
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
    func_0x0ea8a6f0(auStack_2b8,&uStack_1a8,&UNK_01238697,2,0);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4d6be8;
    if (uStack_2a0 != (long *)0x0) {
      lVar2 = *uStack_2a0;
      uStack_2a0 = puVar10;
      (**(code **)(lVar2 + 8))();
      puVar10 = uStack_2a0;
    }
    uStack_2a0 = puVar10;
    auStack_320[0] = (uint)uStack_2a8;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 1;
    uStack_300 = 0;
    uStack_2f8 = &UNK_0ea8e4c0;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0ea8e0f0;
    puStack_2e0 = &UNK_0ea8e580;
    puStack_2d8 = &UNK_0ea8e7b0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    plStack_2c0 = (long *)0x0;
    func_0x048b05a0(plStack_2b0,auStack_320);
    plVar9 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x0ea8a9b0(auStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  return;
}


