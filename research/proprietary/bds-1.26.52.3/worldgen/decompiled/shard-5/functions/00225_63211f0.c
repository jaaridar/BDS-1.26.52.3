/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64211f0 (ELF vaddr 0x63211f0)
 * Label: caller-of-callee
 * Body:  [[064211f0, 064226f1] [06422700, 064228d8]]
 * Ghidra: FUN_064211f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_064211f0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  byte bVar16;
  uint unaff_EBP;
  ulong uVar17;
  ulong uVar18;
  uint *unaff_R14;
  bool bVar19;
  uint auStack_250 [2];
  long *plStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined6 uStack_19e;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar5 = func_0x064a2e80(param_1 + 0x18);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar19 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar6 = lVar5 + 9;
    if (bVar19) {
      lVar6 = *(long *)(lVar5 + 0x18);
    }
    puVar11 = (uint *)(ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar19) {
      puVar11 = *(uint **)(lVar5 + 0x10);
    }
  }
  else {
    lVar6 = 0;
    puVar11 = (uint *)0x0;
  }
  func_0x064a32e0(&uStack_118,param_1,lVar6,puVar11);
  uStack_e4 = uStack_e4 & 0xffffff00;
  uStack_e0 = uStack_e0 & 0xffffff00;
  if ((char)uStack_e8 == '\0') {
    func_0x064a6a00(&uStack_1e8,&UNK_014ab0b6,8);
    uVar17 = uStack_1c0 >> 1 & 0x7f;
    lVar5 = (long)&uStack_1c0 + 1;
    lVar6 = lVar5;
    if ((uStack_1c0 & 1) != 0) {
      uVar17 = uStack_1b8;
      lVar6 = lStack_1b0;
    }
    if (uVar17 == 0) {
      uVar15 = 0x811c9dc5;
    }
    else {
      uVar7 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar15 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar15 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar15 = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                   ((int)*(char *)(lVar6 + 2 + uVar18) ^
                   ((int)*(char *)(lVar6 + 1 + uVar18) ^
                   ((int)*(char *)(lVar6 + uVar18) ^ uVar15) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar7 != 0) {
        uVar17 = 0;
        do {
          uVar15 = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uVar15) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar7 != uVar17);
      }
    }
    uStack_f0 = CONCAT44(uVar15,2);
    if ((DAT_0f575c70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f575c70), iVar4 != 0)) {
      func_0x064a3070(0xf575c58);
      FUN_0410844d(&DAT_0f575c70);
    }
    auStack_250[0] = uStack_f0._4_4_;
    plStack_248 = (long *)0x0;
    plStack_240 = (long *)CONCAT44(plStack_240._4_4_,3);
    uStack_238 = 1;
    uStack_230 = 0;
    puStack_228 = &UNK_064a7010;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_064a2e80;
    puStack_210 = &UNK_064a7020;
    puStack_208 = &UNK_064a7030;
    uStack_200 = 0;
    uStack_1f8 = 0;
    plStack_1f0 = (long *)0x0;
    func_0x048b05a0(&uStack_110,auStack_250);
    plVar14 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = uStack_f8;
    uStack_bc = uStack_f4;
    func_0x064a6da0(auStack_250,&uStack_d8,&uStack_1e8);
    if (uStack_238._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != (int)uStack_238) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      lVar6 = *(long *)(piVar8 + 0xc);
      while ((long *)lVar6 != plStack_248) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar6 = *(long *)(piVar8 + 0xc);
      }
LAB_0642151a:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 9;
    }
    else {
      if (uStack_238._4_4_ == 1) {
        piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != (int)uStack_238) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_0642151a;
      }
      if (uStack_238._4_4_ == 0) {
        *(uint *)((long)plStack_240 + 0x18) = *(uint *)((long)plStack_240 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      uStack_e4 = 0xbb8863ad;
      uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
      auStack_250[0] = 0xbb8863ad;
      lVar6 = func_0x064a2e80(CONCAT44(uStack_114,uStack_118) + 0x18);
      lVar6 = *(long *)(lVar6 + 0x68);
      piVar9 = *(int **)(lVar6 + 0x28);
      for (piVar8 = *(int **)(lVar6 + 0x20); (piVar8 != piVar9 && (*piVar8 != -0x44779c53));
          piVar8 = piVar8 + 0xe) {
      }
      if (piVar8 == piVar9) {
        if (piVar9 < *(int **)(lVar6 + 0x30)) {
          *piVar9 = -0x44779c53;
          piVar9[2] = 0;
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar9[5] = 0;
          piVar9[6] = 0;
          piVar9[7] = 0;
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0x3f800000;
          *(undefined1 *)(piVar9 + 0xc) = 0;
          *(undefined1 *)(piVar9 + 0xd) = 0;
          piVar9 = piVar9 + 0xe;
        }
        else {
          piVar9 = (int *)func_0x05d9c2b0(lVar6 + 0x20,auStack_250);
        }
        *(int **)(lVar6 + 0x28) = piVar9;
      }
      else if ((*(long *)(piVar8 + 8) != 0) &&
              (cVar3 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119ec48
                                      ), cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar15 = uStack_e4;
    lVar6 = func_0x064a2e80(CONCAT44(uStack_114,uStack_118) + 0x18);
    puVar10 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar11 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar11 != puVar10 && (*puVar11 != uVar15)); puVar11 = puVar11 + 0xe) {
    }
    if ((puVar11 == puVar10) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147ab30),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_250[0] = auStack_250[0] & 0xffffff00;
    func_0x05d9c620(puVar11 + 2,(long)&uStack_f0 + 4,(long)&uStack_f0 + 4,auStack_250);
    uStack_98 = uStack_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    uStack_88 = uStack_108;
    uStack_84 = uStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    uStack_78 = uStack_f8;
    uStack_74 = uStack_f4;
    uStack_70 = (undefined4)uStack_f0;
    uStack_6c = uStack_f0._4_4_;
    uStack_68 = uStack_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    func_0x048b0bc0(&uStack_1e8);
    func_0x064a6a00(&uStack_1e8,&UNK_014149aa,4);
    uVar17 = uStack_1c0 >> 1 & 0x7f;
    lVar6 = lVar5;
    if ((uStack_1c0 & 1) != 0) {
      uVar17 = uStack_1b8;
      lVar6 = lStack_1b0;
    }
    if (uVar17 == 0) {
      uStack_6c = 0x811c9dc5;
    }
    else {
      uVar7 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_6c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_6c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                      ((int)*(char *)(lVar6 + 2 + uVar18) ^
                      ((int)*(char *)(lVar6 + 1 + uVar18) ^
                      ((int)*(char *)(lVar6 + uVar18) ^ uStack_6c) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar7 != 0) {
        uVar17 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uStack_6c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar7 != uVar17);
      }
    }
    uStack_70 = 2;
    if ((DAT_0f575c70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f575c70), iVar4 != 0)) {
      func_0x064a3070(0xf575c58);
      FUN_0410844d(&DAT_0f575c70);
    }
    auStack_250[0] = uStack_6c;
    plStack_248 = (long *)0x0;
    plStack_240 = (long *)CONCAT44(plStack_240._4_4_,3);
    uStack_238 = 1;
    uStack_230 = 0;
    puStack_228 = &UNK_064a7010;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_064a2e80;
    puStack_210 = &UNK_064a7080;
    puStack_208 = &UNK_064a7090;
    uStack_200 = 0;
    uStack_1f8 = 0;
    plStack_1f0 = (long *)0x0;
    func_0x048b05a0(&uStack_90,auStack_250);
    plVar14 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_c0 = uStack_78;
    uStack_bc = uStack_74;
    uStack_d8 = CONCAT44(uStack_8c,uStack_90);
    uStack_d0 = (long *)CONCAT44(uStack_84,uStack_88);
    func_0x064a6da0(auStack_250,&uStack_d8,&uStack_1e8);
    if (uStack_238._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != (int)uStack_238) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      lVar6 = *(long *)(piVar8 + 0xc);
      while ((long *)lVar6 != plStack_248) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar6 = *(long *)(piVar8 + 0xc);
      }
LAB_0642196a:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 9;
    }
    else {
      if (uStack_238._4_4_ == 1) {
        piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != (int)uStack_238) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_0642196a;
      }
      if (uStack_238._4_4_ == 0) {
        *(uint *)((long)plStack_240 + 0x18) = *(uint *)((long)plStack_240 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_60 == '\0') {
      uStack_64 = 0xbb8863ad;
      uStack_60 = CONCAT31(uStack_60._1_3_,1);
      auStack_250[0] = 0xbb8863ad;
      lVar6 = func_0x064a2e80(CONCAT44(uStack_94,uStack_98) + 0x18);
      lVar6 = *(long *)(lVar6 + 0x68);
      piVar9 = *(int **)(lVar6 + 0x28);
      for (piVar8 = *(int **)(lVar6 + 0x20); (piVar8 != piVar9 && (*piVar8 != -0x44779c53));
          piVar8 = piVar8 + 0xe) {
      }
      if (piVar8 == piVar9) {
        if (piVar9 < *(int **)(lVar6 + 0x30)) {
          *piVar9 = -0x44779c53;
          piVar9[2] = 0;
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar9[5] = 0;
          piVar9[6] = 0;
          piVar9[7] = 0;
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0x3f800000;
          *(undefined1 *)(piVar9 + 0xc) = 0;
          *(undefined1 *)(piVar9 + 0xd) = 0;
          piVar9 = piVar9 + 0xe;
        }
        else {
          piVar9 = (int *)func_0x05d9c2b0(lVar6 + 0x20,auStack_250);
        }
        *(int **)(lVar6 + 0x28) = piVar9;
      }
      else if ((*(long *)(piVar8 + 8) != 0) &&
              (cVar3 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119ec48
                                      ), cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar15 = uStack_64;
    lVar6 = func_0x064a2e80(CONCAT44(uStack_94,uStack_98) + 0x18);
    puVar10 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar11 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar11 != puVar10 && (*puVar11 != uVar15)); puVar11 = puVar11 + 0xe) {
    }
    if ((puVar11 == puVar10) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147ab30),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_250[0] = auStack_250[0] & 0xffffff00;
    func_0x05d9c620(puVar11 + 2,&uStack_6c,&uStack_6c,auStack_250);
    uStack_d8 = CONCAT44(uStack_94,uStack_98);
    uStack_d0 = (long *)CONCAT44(uStack_8c,uStack_90);
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    uStack_b8 = uStack_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(&uStack_1e8);
    func_0x064a6a00(&uStack_1e8,&UNK_011d5d58,9);
    uVar17 = (ulong)((byte)uStack_1c0 >> 1);
    if (((byte)uStack_1c0 & 1) != 0) {
      uVar17 = uStack_1b8;
      lVar5 = lStack_1b0;
    }
    if (uVar17 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar7 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar5 + 3 + uVar18) ^
                      ((int)*(char *)(lVar5 + 2 + uVar18) ^
                      ((int)*(char *)(lVar5 + 1 + uVar18) ^
                      ((int)*(char *)(lVar5 + uVar18) ^ uStack_ac) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar7 != 0) {
        uVar17 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar5 + uVar18 + uVar17) ^ uStack_ac) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar7 != uVar17);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f575c70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f575c70), iVar4 != 0)) {
      func_0x064a3070(0xf575c58);
      FUN_0410844d(&DAT_0f575c70);
    }
    auStack_250[0] = uStack_ac;
    plStack_248 = (long *)0x0;
    plStack_240 = (long *)CONCAT44(plStack_240._4_4_,3);
    uStack_238 = 1;
    uStack_230 = 0;
    puStack_228 = &UNK_064a7010;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_064a2e80;
    puStack_210 = &UNK_064a70e0;
    puStack_208 = &UNK_064a70f0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    plStack_1f0 = (long *)0x0;
    func_0x048b05a0(&uStack_d0,auStack_250);
    plVar14 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f0 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_48 = uStack_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    uStack_3c = uStack_b4;
    uStack_58 = (undefined4)uStack_d0;
    uStack_54 = uStack_d0._4_4_;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    func_0x064a6da0(auStack_250,&uStack_58,&uStack_1e8);
    if (uStack_238._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != (int)uStack_238) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      lVar5 = *(long *)(piVar8 + 0xc);
      while ((long *)lVar5 != plStack_248) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar5 = *(long *)(piVar8 + 0xc);
      }
LAB_06421daa:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 9;
    }
    else {
      if (uStack_238._4_4_ == 1) {
        piVar8 = *(int **)(*(long *)((long)plStack_240 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != (int)uStack_238) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_06421daa;
      }
      if (uStack_238._4_4_ == 0) {
        *(uint *)((long)plStack_240 + 0x18U) = *(uint *)((long)plStack_240 + 0x18U) | 0x90000;
      }
    }
    if ((char)uStack_a0 == '\0') {
      uStack_a4 = 0xbb8863ad;
      uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
      auStack_250[0] = 0xbb8863ad;
      lVar5 = func_0x064a2e80(uStack_d8 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x68);
      piVar9 = *(int **)(lVar5 + 0x28);
      for (piVar8 = *(int **)(lVar5 + 0x20); (piVar8 != piVar9 && (*piVar8 != -0x44779c53));
          piVar8 = piVar8 + 0xe) {
      }
      if (piVar8 == piVar9) {
        if (piVar9 < *(int **)(lVar5 + 0x30)) {
          *piVar9 = -0x44779c53;
          piVar9[2] = 0;
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar9[5] = 0;
          piVar9[6] = 0;
          piVar9[7] = 0;
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0x3f800000;
          *(undefined1 *)(piVar9 + 0xc) = 0;
          *(undefined1 *)(piVar9 + 0xd) = 0;
          piVar9 = piVar9 + 0xe;
        }
        else {
          piVar9 = (int *)func_0x05d9c2b0(lVar5 + 0x20,auStack_250);
        }
        *(int **)(lVar5 + 0x28) = piVar9;
      }
      else if ((*(long *)(piVar8 + 8) != 0) &&
              (cVar3 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119ec48
                                      ), cVar3 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    unaff_EBP = uStack_a4;
    lVar5 = func_0x064a2e80(uStack_d8 + 0x18);
    puVar10 = *(uint **)(*(long *)(lVar5 + 0x68) + 0x28);
    for (puVar11 = *(uint **)(*(long *)(lVar5 + 0x68) + 0x20);
        (puVar11 != puVar10 && (*puVar11 != unaff_EBP)); puVar11 = puVar11 + 0xe) {
    }
    if ((puVar11 == puVar10) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0147ab30),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    unaff_R14 = puVar11 + 2;
    auStack_250[0] = auStack_250[0] & 0xffffff00;
    puVar11 = auStack_250;
    func_0x05d9c620(unaff_R14,&uStack_ac,&uStack_ac,puVar11);
    func_0x048b0bc0(&uStack_1e8);
  }
  uVar2 = _DAT_0f543978;
  bVar16 = (byte)unaff_EBP;
  puVar10 = (uint *)func_0x0eee2e90(_DAT_0f543978);
  if (puVar10 < (uint *)0xfffffffffffffff8) {
    unaff_R14 = (uint *)((long)&uStack_1e8 + 1);
    if (puVar10 < (uint *)0x17) {
      uStack_1e8 = (undefined *)CONCAT71(uStack_1e8._1_7_,(char)puVar10 * '\x02');
      puVar11 = unaff_R14;
      if (puVar10 != (uint *)0x0) goto LAB_06421fbc;
    }
    else {
      uVar17 = 0x1a;
      if (((ulong)puVar10 | 7) != 0x17) {
        uVar17 = ((ulong)puVar10 | 7) + 1;
      }
      puVar11 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (puVar11 == (uint *)0x0) {
        func_0x0eec74c0(uVar17,0);
      }
      uStack_1e8 = (undefined *)(uVar17 | 1);
      puStack_1e0 = puVar10;
      puStack_1d8 = puVar11;
LAB_06421fbc:
      func_0x0eee2ee0(puVar11,uVar2,puVar10);
    }
    *(undefined1 *)((long)puVar11 + (long)puVar10) = 0;
    bVar16 = (byte)uStack_1e8 & 1;
    puVar11 = (uint *)(ulong)((byte)uStack_1e8 >> 1);
    if (((ulong)uStack_1e8 & 1) != 0) {
      puVar11 = puStack_1e0;
      unaff_R14 = puStack_1d8;
    }
    if (DAT_0f574938 == '\0') goto LAB_0642275a;
  }
  else {
    func_0x04882e30();
LAB_0642275a:
    iVar4 = func_0x04108328(&DAT_0f574938);
    if (iVar4 != 0) {
      func_0x064a7200();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5748b8,0xf53dab8);
      FUN_0410844d(&DAT_0f574938);
    }
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5748b8 + 4)) * 8);
  do {
    lVar5 = *plVar14;
    if (lVar5 == -1) goto LAB_06422050;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f5748b8 + 4));
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_06422050:
    puVar12 = &DAT_0f5748b8;
    if (iRam000000000f574918 != -0x2b3da790) goto LAB_064220b5;
LAB_0642207b:
    lVar5 = *(long *)(puVar12 + 0x68);
    if (lVar5 == 0) goto LAB_064220b5;
    bVar19 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar6 = lVar5 + 9;
    if (bVar19) {
      lVar6 = *(long *)(lVar5 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar19) {
      uVar17 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x064a7640(&uStack_118,param_1,lVar6,uVar17);
    if (bVar16 != 0) goto LAB_064220d6;
  }
  else {
    puVar12 = (undefined *)plVar14[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0642207b;
LAB_064220b5:
    func_0x064a7640(&uStack_118,param_1,unaff_R14,puVar11);
    if (((ulong)uStack_1e8 & 1) != 0) {
LAB_064220d6:
      func_0x0412a280(puStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
    }
  }
  if ((char)uStack_e8 != '\0') {
    return;
  }
  func_0x064a7c30(&uStack_1e8,CONCAT44(uStack_114,uStack_118) + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)(puStack_1d8 + 0x1e) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != (int)uStack_1d0) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    puVar11 = *(uint **)(piVar8 + 0xc);
    while (puVar11 != puStack_1e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar11 = *(uint **)(piVar8 + 0xc);
    }
LAB_064221ba:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)(puStack_1d8 + 0x1e) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != (int)uStack_1d0) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      goto LAB_064221ba;
    }
    if (uStack_1d0._4_4_ == 0) {
      puStack_1d8[6] = puStack_1d8[6] | 0x40000;
    }
  }
  if ((DAT_0f574958 == '\0') && (iVar4 = func_0x04108328(&DAT_0f574958), iVar4 != 0)) {
    func_0x064a7310();
    FUN_0410844d(&DAT_0f574958);
  }
  uStack_f0 = 0x301476bd00000001;
  lVar5 = CONCAT44(uStack_114,uStack_118);
  if ((DAT_0f574938 == '\0') && (iVar4 = func_0x04108328(&DAT_0f574938), iVar4 != 0)) {
    func_0x064a7200();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5748b8,0xf53dab8);
    FUN_0410844d(&DAT_0f574938);
  }
  puStack_1e0 = (uint *)(lVar5 + 0x18);
  plVar14 = (long *)(*(long *)(lVar5 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5748b8 + 4)) * 8);
  do {
    lVar6 = *plVar14;
    if (lVar6 == -1) goto LAB_06422250;
    plVar14 = (long *)(*(long *)(lVar5 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(lVar5 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f5748b8 + 4));
  if (plVar14 == *(long **)(lVar5 + 0x38)) {
LAB_06422250:
    uStack_1e8 = &DAT_0f5748b8;
  }
  else {
    uStack_1e8 = (undefined *)plVar14[2];
  }
  func_0x0ed621a0(&uStack_1e8,uStack_f0._4_4_);
  uStack_1e8 = (undefined *)CONCAT62(uStack_1e8._2_6_,0x10);
  puStack_1d8 = (uint *)CONCAT44(puStack_1d8._4_4_,uStack_f0._4_4_);
  uStack_1d0 = (long *)0x0;
  lStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0x10;
  uStack_1a7 = 0x646f4d77654e6d;
  uStack_1a0 = 0x65;
  uStack_19f = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_160 = 0x3f600000;
  puStack_1e0 = &uStack_110;
  FUN_048afb10(&lStack_190,8);
  uStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  uStack_128 = 0xff00;
  uStack_124 = uStack_124 & 0xffffff00;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_11c = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f0348c0;
  if (uStack_1d0 != (long *)0x0) {
    lVar5 = *uStack_1d0;
    uStack_1d0 = puVar13;
    (**(code **)(lVar5 + 8))();
    puVar13 = uStack_1d0;
  }
  uStack_1d0 = puVar13;
  auStack_250[0] = (uint)puStack_1d8;
  plStack_248 = (long *)0x0;
  plStack_240 = (long *)((ulong)plStack_240 & 0xffffffff00000000);
  uStack_238 = 1;
  uStack_230 = 0;
  puStack_228 = &UNK_064a7010;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_064a2e80;
  puStack_210 = &UNK_064a81a0;
  puStack_208 = &UNK_064a8300;
  uStack_200 = 0;
  uStack_1f8 = 0;
  plStack_1f0 = (long *)0x0;
  func_0x048b05a0(puStack_1e0,auStack_250);
  plVar14 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      func_0x0412c2d0(plVar14);
    }
  }
  puVar11 = puStack_1e0;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_250[0] = _DAT_0f550a0c;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar5 = lStack_1c8;
  puVar13 = uStack_1d0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_248 = plVar14 + 3;
  uStack_1d0 = (long *)0x0;
  lStack_1c8 = 0;
  plVar14[3] = (long)puVar13;
  plVar14[4] = lVar5;
  plVar14[7] = lStack_1b0;
  plVar14[5] = uStack_1c0;
  plVar14[6] = uStack_1b8;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  plVar14[10] = lStack_198;
  plVar14[8] = CONCAT71(uStack_1a7,uStack_1a8);
  plVar14[9] = CONCAT62(uStack_19e,CONCAT11(uStack_19f,uStack_1a0));
  uStack_1a8 = 0;
  uStack_1a7 = 0;
  uStack_1a0 = 0;
  uStack_19f = 0;
  uStack_19e = 0;
  lStack_198 = 0;
  plVar14[0xb] = lStack_190;
  plVar14[0xc] = lStack_188;
  plVar14[0xd] = lStack_180;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar14[0xe] = lStack_178;
  plVar14[0xf] = lStack_170;
  plVar14[0x10] = lStack_168;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_160;
  plVar14[0x12] = lStack_158;
  plVar14[0x13] = lStack_150;
  plVar14[0x14] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar14[0x17] = lStack_130;
  *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_140;
  *(undefined4 *)((long)plVar14 + 0xac) = uStack_140._4_4_;
  *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_138;
  *(undefined4 *)((long)plVar14 + 0xb4) = uStack_138._4_4_;
  uStack_140 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
  plVar14[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
  uStack_d8 = 0;
  uStack_d0 = (long *)0x0;
  plStack_240 = plVar14;
  func_0x048afd20(puVar11,auStack_250);
  plVar14 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_240 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar5 = *(long *)(puVar11 + 4);
  iVar4 = puVar11[7];
  if (iVar4 == 2) {
    piVar8 = *(int **)(*(long *)(lVar5 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != puVar11[6]) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar11 + 2); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) | (int)uStack_1e8 << 0x10;
      }
      goto LAB_0642270d;
    }
    piVar8 = *(int **)(*(long *)(lVar5 + 0x78) + 0x48);
    iVar4 = *piVar8;
    while (iVar4 != puVar11[6]) {
      piVar8 = piVar8 + 0x1a;
      iVar4 = *piVar8;
    }
  }
  piVar8[4] = piVar8[4] | (int)uStack_1e8 << 0x10;
LAB_0642270d:
  func_0x048b0bc0(&uStack_1d0);
  return;
}


