/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8037de0 (ELF vaddr 0x7f37de0)
 * Label: caller-of-callee
 * Body:  [[08037de0, 08039643]]
 * Ghidra: FUN_08037de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037de0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  uint auStack_2e0 [2];
  long lStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  char cStack_248;
  uint uStack_244;
  char cStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined *puStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = func_0x0809d6b0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar6 + 9);
    if (bVar16) {
      puVar11 = *(undefined **)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
  }
  else {
    puVar11 = &UNK_013ca6f9;
    uVar13 = 0x1c;
  }
  func_0x0809db10(&uStack_278,param_1,puVar11,uVar13);
  uStack_244 = uStack_244 & 0xffffff00;
  cStack_240 = '\0';
  if (cStack_248 != '\0') goto LAB_08038af3;
  func_0x080a1230(&puStack_238,&UNK_013e4cac,6);
  uVar13 = uStack_210 >> 1 & 0x7f;
  lVar6 = (long)&uStack_210 + 1;
  lVar7 = lVar6;
  if ((uStack_210 & 1) != 0) {
    uVar13 = uStack_208;
    lVar7 = uStack_200;
  }
  if (uVar13 == 0) {
    uStack_24c = 0x811c9dc5;
  }
  else {
    uVar8 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar7 + 3 + uVar14) ^
                     ((int)*(char *)(lVar7 + 2 + uVar14) ^
                     ((int)*(char *)(lVar7 + 1 + uVar14) ^
                     ((int)*(char *)(lVar7 + uVar14) ^ uStack_24c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar8 != 0) {
      uVar13 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar7 + uVar14 + uVar13) ^ uStack_24c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
  }
  uStack_250 = 2;
  if ((DAT_0f5c59a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5c59a0), iVar5 != 0)) {
    func_0x0809d8a0(0xf5c5988);
    func_0x0410844d(&DAT_0f5c59a0);
  }
  auStack_2e0[0] = uStack_24c;
  lStack_2d8 = 0;
  uStack_2d0 = 3;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_080a17e0;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &SUB_0809d6b0;
  puStack_2a0 = &UNK_080a17f0;
  puStack_298 = &UNK_080a1800;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  FUN_048b05a0(&uStack_270,auStack_2e0);
  plVar12 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_280 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_158 = uStack_260;
  uStack_154 = uStack_25c;
  uStack_150 = uStack_258;
  uStack_14c = uStack_254;
  uStack_168 = uStack_270;
  uStack_164 = uStack_26c;
  uStack_160 = uStack_268;
  uStack_15c = uStack_264;
  func_0x080a1570(auStack_2e0,&uStack_168,&puStack_238);
  if (uStack_2c8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != (int)uStack_2c8) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    lVar7 = *(long *)(piVar9 + 0xc);
    while (lVar7 != lStack_2d8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar7 = *(long *)(piVar9 + 0xc);
    }
LAB_0803810a:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 9;
  }
  else {
    if (uStack_2c8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x48);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_2c8) {
        piVar9 = piVar9 + 0x1a;
        iVar5 = *piVar9;
      }
      goto LAB_0803810a;
    }
    if (uStack_2c8._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_240 == '\0') {
    uStack_244 = 0xbb8863ad;
    cStack_240 = '\x01';
    auStack_2e0[0] = 0xbb8863ad;
    lVar7 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
    lVar7 = *(long *)(lVar7 + 0x68);
    piVar10 = *(int **)(lVar7 + 0x28);
    for (piVar9 = *(int **)(lVar7 + 0x20); (piVar9 != piVar10 && (*piVar9 != -0x44779c53));
        piVar9 = piVar9 + 0xe) {
    }
    if (piVar9 == piVar10) {
      if (piVar10 < *(int **)(lVar7 + 0x30)) {
        *piVar10 = -0x44779c53;
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[4] = 0;
        piVar10[5] = 0;
        piVar10[6] = 0;
        piVar10[7] = 0;
        piVar10[8] = 0;
        piVar10[9] = 0;
        piVar10[10] = 0x3f800000;
        *(undefined1 *)(piVar10 + 0xc) = 0;
        *(undefined1 *)(piVar10 + 0xd) = 0;
        piVar10 = piVar10 + 0xe;
      }
      else {
        piVar10 = (int *)FUN_05d9c2b0(lVar7 + 0x20,auStack_2e0);
      }
      *(int **)(lVar7 + 0x28) = piVar10;
    }
    else if ((*(long *)(piVar9 + 8) != 0) &&
            (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013ca74c),
            cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar3 = uStack_244;
  lVar7 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar3)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012a963f),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_2e0[0] = auStack_2e0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_24c,&uStack_24c,auStack_2e0);
  func_0x048b0bc0(&puStack_238);
  func_0x080a1230(&puStack_238,&UNK_014655f5,5);
  uVar13 = uStack_210 >> 1 & 0x7f;
  lVar7 = lVar6;
  if ((uStack_210 & 1) != 0) {
    uVar13 = uStack_208;
    lVar7 = uStack_200;
  }
  if (uVar13 == 0) {
    uStack_24c = 0x811c9dc5;
  }
  else {
    uVar8 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar7 + 3 + uVar14) ^
                     ((int)*(char *)(lVar7 + 2 + uVar14) ^
                     ((int)*(char *)(lVar7 + 1 + uVar14) ^
                     ((int)*(char *)(lVar7 + uVar14) ^ uStack_24c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar8 != 0) {
      uVar13 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar7 + uVar14 + uVar13) ^ uStack_24c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
  }
  uStack_250 = 2;
  if ((DAT_0f5c59a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5c59a0), iVar5 != 0)) {
    func_0x0809d8a0(0xf5c5988);
    func_0x0410844d(&DAT_0f5c59a0);
  }
  auStack_2e0[0] = uStack_24c;
  lStack_2d8 = 0;
  uStack_2d0 = 3;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_080a17e0;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &SUB_0809d6b0;
  puStack_2a0 = &UNK_080a1850;
  puStack_298 = &UNK_080a1860;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  FUN_048b05a0(&uStack_270,auStack_2e0);
  plVar12 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_280 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_158 = uStack_260;
  uStack_154 = uStack_25c;
  uStack_150 = uStack_258;
  uStack_14c = uStack_254;
  uStack_168 = uStack_270;
  uStack_164 = uStack_26c;
  uStack_160 = uStack_268;
  uStack_15c = uStack_264;
  func_0x080a1570(auStack_2e0,&uStack_168,&puStack_238);
  if (uStack_2c8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != (int)uStack_2c8) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    lVar7 = *(long *)(piVar9 + 0xc);
    while (lVar7 != lStack_2d8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar7 = *(long *)(piVar9 + 0xc);
    }
LAB_0803853a:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 9;
  }
  else {
    if (uStack_2c8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x48);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_2c8) {
        piVar9 = piVar9 + 0x1a;
        iVar5 = *piVar9;
      }
      goto LAB_0803853a;
    }
    if (uStack_2c8._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_240 == '\0') {
    uStack_244 = 0xbb8863ad;
    cStack_240 = '\x01';
    auStack_2e0[0] = 0xbb8863ad;
    lVar7 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
    lVar7 = *(long *)(lVar7 + 0x68);
    piVar10 = *(int **)(lVar7 + 0x28);
    for (piVar9 = *(int **)(lVar7 + 0x20); (piVar9 != piVar10 && (*piVar9 != -0x44779c53));
        piVar9 = piVar9 + 0xe) {
    }
    if (piVar9 == piVar10) {
      if (piVar10 < *(int **)(lVar7 + 0x30)) {
        *piVar10 = -0x44779c53;
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[4] = 0;
        piVar10[5] = 0;
        piVar10[6] = 0;
        piVar10[7] = 0;
        piVar10[8] = 0;
        piVar10[9] = 0;
        piVar10[10] = 0x3f800000;
        *(undefined1 *)(piVar10 + 0xc) = 0;
        *(undefined1 *)(piVar10 + 0xd) = 0;
        piVar10 = piVar10 + 0xe;
      }
      else {
        piVar10 = (int *)FUN_05d9c2b0(lVar7 + 0x20,auStack_2e0);
      }
      *(int **)(lVar7 + 0x28) = piVar10;
    }
    else if ((*(long *)(piVar9 + 8) != 0) &&
            (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013ca74c),
            cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar3 = uStack_244;
  lVar7 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar3)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012a963f),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_2e0[0] = auStack_2e0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_24c,&uStack_24c,auStack_2e0);
  func_0x048b0bc0(&puStack_238);
  func_0x080a1230(&puStack_238,&UNK_01228bbe,6);
  uVar13 = (ulong)((byte)uStack_210 >> 1);
  if (((byte)uStack_210 & 1) != 0) {
    uVar13 = uStack_208;
    lVar6 = uStack_200;
  }
  if (uVar13 == 0) {
    uStack_24c = 0x811c9dc5;
  }
  else {
    uVar8 = (ulong)((uint)uVar13 & 3);
    if (uVar13 < 4) {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
    }
    else {
      uStack_24c = 0x811c9dc5;
      uVar14 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar6 + 3 + uVar14) ^
                     ((int)*(char *)(lVar6 + 2 + uVar14) ^
                     ((int)*(char *)(lVar6 + 1 + uVar14) ^
                     ((int)*(char *)(lVar6 + uVar14) ^ uStack_24c) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar14 = uVar14 + 4;
      } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar8 != 0) {
      uVar13 = 0;
      do {
        uStack_24c = ((int)*(char *)(lVar6 + uVar14 + uVar13) ^ uStack_24c) * 0x1000193;
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
  }
  uStack_250 = 2;
  if ((DAT_0f5c59a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5c59a0), iVar5 != 0)) {
    func_0x0809d8a0(0xf5c5988);
    func_0x0410844d(&DAT_0f5c59a0);
  }
  auStack_2e0[0] = uStack_24c;
  lStack_2d8 = 0;
  uStack_2d0 = 3;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_080a17e0;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &SUB_0809d6b0;
  puStack_2a0 = &UNK_080a18b0;
  puStack_298 = &UNK_080a18c0;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  FUN_048b05a0(&uStack_270,auStack_2e0);
  plVar12 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_280 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_158 = uStack_260;
  uStack_154 = uStack_25c;
  uStack_150 = uStack_258;
  uStack_14c = uStack_254;
  uStack_168 = uStack_270;
  uStack_164 = uStack_26c;
  uStack_160 = uStack_268;
  uStack_15c = uStack_264;
  func_0x080a1570(auStack_2e0,&uStack_168,&puStack_238);
  if (uStack_2c8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != (int)uStack_2c8) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != lStack_2d8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
LAB_0803896a:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 9;
  }
  else {
    if (uStack_2c8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x78) + 0x48);
      iVar5 = *piVar9;
      while (iVar5 != (int)uStack_2c8) {
        piVar9 = piVar9 + 0x1a;
        iVar5 = *piVar9;
      }
      goto LAB_0803896a;
    }
    if (uStack_2c8._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  if (cStack_240 == '\0') {
    uStack_244 = 0xbb8863ad;
    cStack_240 = '\x01';
    auStack_2e0[0] = 0xbb8863ad;
    lVar6 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
    lVar6 = *(long *)(lVar6 + 0x68);
    piVar10 = *(int **)(lVar6 + 0x28);
    for (piVar9 = *(int **)(lVar6 + 0x20); (piVar9 != piVar10 && (*piVar9 != -0x44779c53));
        piVar9 = piVar9 + 0xe) {
    }
    if (piVar9 == piVar10) {
      if (piVar10 < *(int **)(lVar6 + 0x30)) {
        *piVar10 = -0x44779c53;
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[4] = 0;
        piVar10[5] = 0;
        piVar10[6] = 0;
        piVar10[7] = 0;
        piVar10[8] = 0;
        piVar10[9] = 0;
        piVar10[10] = 0x3f800000;
        *(undefined1 *)(piVar10 + 0xc) = 0;
        *(undefined1 *)(piVar10 + 0xd) = 0;
        piVar10 = piVar10 + 0xe;
      }
      else {
        piVar10 = (int *)FUN_05d9c2b0(lVar6 + 0x20,auStack_2e0);
      }
      *(int **)(lVar6 + 0x28) = piVar10;
    }
    else if ((*(long *)(piVar9 + 8) != 0) &&
            (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_013ca74c),
            cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar3 = uStack_244;
  lVar6 = func_0x0809d6b0(CONCAT44(uStack_274,uStack_278) + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
  for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
      (puVar15 != puVar2 && (*puVar15 != uVar3)); puVar15 = puVar15 + 0xe) {
  }
  if ((puVar15 == puVar2) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012a963f),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_2e0[0] = auStack_2e0[0] & 0xffffff00;
  func_0x05d9c620(puVar15 + 2,&uStack_24c,&uStack_24c,auStack_2e0);
  func_0x048b0bc0(&puStack_238);
LAB_08038af3:
  if ((DAT_0f5c5840 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5c5840), iVar5 != 0)) {
    func_0x0809ba50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c57c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c5840);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c57c0 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_08038b50;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f5c57c0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_08038b50:
    puVar11 = &DAT_0f5c57c0;
    iVar5 = iRam000000000f5c5820;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    iVar5 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar5 == -0x2b3da790) && (lVar6 = *(long *)(puVar11 + 0x68), lVar6 != 0)) {
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar7 = lVar6 + 9;
    if (bVar16) {
      lVar7 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x080a1910(&uStack_278,param_1,lVar7,uVar13);
  }
  else {
    func_0x080a1910(&uStack_278,param_1,&UNK_01228bc5,0x27);
  }
  if (cStack_248 == '\0') {
    func_0x080a2480(&puStack_238,&uStack_278,&UNK_013975b1,6);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar6 = *plStack_220;
      plStack_220 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = plStack_220;
    }
    plStack_220 = plVar12;
    auStack_2e0[0] = (uint)uStack_228;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_048b3f30;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &SUB_048b2190;
    puStack_2a0 = &UNK_080a2a30;
    puStack_298 = &UNK_080a2bf0;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    FUN_048b05a0(uStack_230,auStack_2e0);
    plVar12 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x080a2730(&puStack_238);
    cStack_138 = cStack_248;
    uStack_148 = uStack_258;
    uStack_144 = uStack_254;
    uStack_140 = uStack_250;
    uStack_13c = uStack_24c;
    uStack_158 = uStack_268;
    uStack_154 = uStack_264;
    uStack_150 = uStack_260;
    uStack_14c = uStack_25c;
    uStack_168 = uStack_278;
    uStack_164 = uStack_274;
    uStack_160 = uStack_270;
    uStack_15c = uStack_26c;
    func_0x048b0bc0(&plStack_220);
    uStack_218 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = (long *)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_1c0 = 0;
    uStack_230 = 0xffffffffffffffff;
    uStack_228 = 0;
    plStack_220 = (long *)0xff;
    puStack_238 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_218);
    uStack_210 = func_0x041681f0(&uStack_218,0xf547a30);
    uStack_208 = func_0x041681f0(&uStack_218,0xf547770);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_230 = 0x800;
    uStack_a8 = 0x800;
    uStack_a4 = 0;
    uStack_a0 = (uint)uStack_228;
    uStack_9c = uStack_228._4_4_;
    uStack_98 = plStack_220._0_1_;
    puStack_b0 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_90,&uStack_218);
    uStack_88 = uStack_210;
    uStack_80 = uStack_208;
    uStack_78 = (undefined4)uStack_200;
    uStack_74 = uStack_200._4_4_;
    uStack_70 = (undefined4)uStack_1f8;
    uStack_6c = uStack_1f8._4_4_;
    uStack_68 = (undefined4)uStack_1f0;
    uStack_64 = uStack_1f0._4_4_;
    uStack_60 = (undefined4)uStack_1e8;
    uStack_5c = uStack_1e8._4_4_;
    if (uStack_1e8 != (long *)0x0) {
      LOCK();
      uStack_1e8[1] = uStack_1e8[1] + 1;
      UNLOCK();
    }
    uStack_58 = uStack_1e0;
    if ((uStack_1d8 & 1) == 0) {
      uStack_40 = uStack_1c8;
      uStack_50 = (uint)uStack_1d8;
      uStack_4c = uStack_1d8._4_4_;
      uStack_48 = (undefined4)uStack_1d0;
      uStack_44 = uStack_1d0._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_50,uStack_1c8,uStack_1d0);
    }
    uStack_38 = uStack_1c0;
    func_0x0803a5a0(auStack_2e0,&uStack_168,&puStack_b0);
    puStack_b0 = &UNK_0f4e3c70;
    if ((uStack_50 & 1) != 0) {
      func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
    }
    plVar12 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(auStack_90);
    puStack_238 = &UNK_0f4e3c70;
    if ((uStack_1d8 & 1) != 0) {
      func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar12 = uStack_1e8;
    if (uStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1e8 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_1e8 + 0x10))(uStack_1e8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&uStack_218);
    func_0x080a2480(&puStack_238,&uStack_278,&UNK_011d97bc,6);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f104878;
    if (plStack_220 != (long *)0x0) {
      lVar6 = *plStack_220;
      plStack_220 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = plStack_220;
    }
    plStack_220 = plVar12;
    auStack_2e0[0] = (uint)uStack_228;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_080a17e0;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &SUB_0809d6b0;
    puStack_2a0 = &UNK_080a2dc0;
    puStack_298 = &UNK_080a2f20;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    FUN_048b05a0(uStack_230,auStack_2e0);
    plVar12 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x080a2730(&puStack_238);
    func_0x048b0bc0(&plStack_220);
    func_0x080a2480(&puStack_238,&uStack_278,&UNK_011a31a7,0x10);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar6 = *plStack_220;
      plStack_220 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = plStack_220;
    }
    plStack_220 = plVar12;
    auStack_2e0[0] = (uint)uStack_228;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_048b3f30;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &SUB_048b2190;
    puStack_2a0 = &UNK_080a3380;
    puStack_298 = &UNK_080a3550;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    FUN_048b05a0(uStack_230,auStack_2e0);
    plVar12 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x080a2730(&puStack_238);
    cStack_138 = cStack_248;
    uStack_148 = uStack_258;
    uStack_144 = uStack_254;
    uStack_140 = uStack_250;
    uStack_13c = uStack_24c;
    uStack_158 = uStack_268;
    uStack_154 = uStack_264;
    uStack_150 = uStack_260;
    uStack_14c = uStack_25c;
    uStack_168 = uStack_278;
    uStack_164 = uStack_274;
    uStack_160 = uStack_270;
    uStack_15c = uStack_26c;
    func_0x048b0bc0(&plStack_220);
    uStack_218 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = (long *)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_1c0 = 0;
    uStack_230 = 0xffffffffffffffff;
    uStack_228 = 0;
    plStack_220 = (long *)0xff;
    puStack_238 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_218);
    uStack_210 = func_0x041681f0(&uStack_218,0xf547a30);
    uStack_208 = func_0x041681f0(&uStack_218,0xf547770);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_230 = 0x40;
    uStack_128 = 0x40;
    uStack_124 = 0;
    uStack_120 = (uint)uStack_228;
    uStack_11c = uStack_228._4_4_;
    uStack_118 = plStack_220._0_1_;
    puStack_130 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_110,&uStack_218);
    uStack_108 = uStack_210;
    uStack_100 = uStack_208;
    uStack_f8 = (undefined4)uStack_200;
    uStack_f4 = uStack_200._4_4_;
    uStack_f0 = (undefined4)uStack_1f8;
    uStack_ec = uStack_1f8._4_4_;
    uStack_e8 = (undefined4)uStack_1f0;
    uStack_e4 = uStack_1f0._4_4_;
    uStack_e0 = (undefined4)uStack_1e8;
    uStack_dc = uStack_1e8._4_4_;
    if (uStack_1e8 != (long *)0x0) {
      LOCK();
      uStack_1e8[1] = uStack_1e8[1] + 1;
      UNLOCK();
    }
    uStack_d8 = uStack_1e0;
    if ((uStack_1d8 & 1) == 0) {
      uStack_c0 = uStack_1c8;
      uStack_d0 = (uint)uStack_1d8;
      uStack_cc = uStack_1d8._4_4_;
      uStack_c8 = (undefined4)uStack_1d0;
      uStack_c4 = uStack_1d0._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_d0,uStack_1c8,uStack_1d0);
    }
    uStack_b8 = uStack_1c0;
    func_0x0803a5a0(auStack_2e0,&uStack_168,&puStack_130);
    puStack_130 = &UNK_0f4e3c70;
    if ((uStack_d0 & 1) != 0) {
      func_0x0412a280(uStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
    }
    plVar12 = (long *)CONCAT44(uStack_dc,uStack_e0);
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(auStack_110);
    puStack_238 = &UNK_0f4e3c70;
    if ((uStack_1d8 & 1) != 0) {
      func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar12 = uStack_1e8;
    if (uStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1e8 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_1e8 + 0x10))(uStack_1e8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&uStack_218);
  }
  return;
}


