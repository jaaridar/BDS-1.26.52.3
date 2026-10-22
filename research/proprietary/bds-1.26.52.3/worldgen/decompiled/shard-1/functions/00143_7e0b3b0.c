/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f0b3b0 (ELF vaddr 0x7e0b3b0)
 * Label: string:SubChunkHeightmapData
 * Body:  [[07f0b3b0, 07f0f685] [07f0f690, 07f1054b]]
 * Ghidra: FUN_07f0b3b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f0b3b0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  bool bVar23;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  uint uStack_22c;
  char cStack_228;
  uint uStack_224;
  char cStack_220;
  int iStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  uint uStack_1fc;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined *puStack_70;
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
  int iStack_40;
  uint uStack_3c;
  char cStack_38;
  
  func_0x07f0a860();
  if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
    func_0x07f4ec70();
    func_0x0410844d(&DAT_0f5c1070);
  }
  uVar16 = _DAT_0f5c1068;
  lVar22 = _DAT_0f5c1060;
  if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
    func_0x07f4b170();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c1050);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_07f0b451;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07f0b451:
    puVar8 = &DAT_0f5c0fd0;
    iVar7 = iRam000000000f5c1030;
  }
  else {
    puVar8 = (undefined *)plVar10[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar11 = *(long *)(puVar8 + 0x68), lVar11 != 0)) {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar22 = lVar11 + 9;
    if (bVar23) {
      lVar22 = *(long *)(lVar11 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar16 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x07f4b530(&uStack_258,param_1,lVar22,uVar16);
  uStack_224 = uStack_224 & 0xffffff00;
  cStack_220 = '\0';
  if (cStack_228 == '\0') {
    func_0x07f4ecf0(&puStack_1f8,&UNK_0149af30,6);
    uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
    lVar22 = (long)&uStack_1d0 + 1;
    lVar11 = lVar22;
    if (((ulong)uStack_1d0 & 1) != 0) {
      uVar16 = uStack_1c8;
      lVar11 = lStack_1c0;
    }
    if (uVar16 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                       ((int)*(char *)(lVar11 + 2 + uVar17) ^
                       ((int)*(char *)(lVar11 + 1 + uVar17) ^
                       ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
    }
    iStack_230 = 2;
    if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
      func_0x07f4ec70();
      func_0x0410844d(&DAT_0f5c1070);
    }
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
    lStack_2c0 = 0;
    uStack_2b8 = 3;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_07f4f3c0;
    puStack_280 = &UNK_07f4f3d0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(&uStack_250,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    uStack_118 = uStack_240;
    uStack_114 = uStack_23c;
    uStack_110 = uStack_238;
    uStack_10c = uStack_234;
    uStack_128 = uStack_250;
    uStack_124 = uStack_24c;
    uStack_120 = uStack_248;
    uStack_11c = uStack_244;
    func_0x07f4f090(&uStack_2c8,&uStack_128,&puStack_1f8);
    if (uStack_2b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != (int)uStack_2b0) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar11 = *(long *)(piVar12 + 0xc);
      while (lVar11 != lStack_2c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar11 = *(long *)(piVar12 + 0xc);
      }
LAB_07f0b71f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_07f0b71f;
      }
      if (uStack_2b0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
        *puVar19 = *puVar19 | 0x90000;
      }
    }
    if (cStack_220 == '\0') {
      func_0x07f4f420(&uStack_2c8,&uStack_258);
    }
    uVar4 = uStack_224;
    lVar11 = CONCAT44(uStack_254,uStack_258);
    if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
      func_0x07f4b170();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1050);
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_07f0b7b1;
      plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4))
    ;
    if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0b7b1:
      puVar8 = &DAT_0f5c0fd0;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01465450),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
    func_0x048b0bc0(&puStack_1f8);
    func_0x07f4ecf0(&puStack_1f8,&UNK_0137b911,7);
    uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
    lVar11 = lVar22;
    if (((ulong)uStack_1d0 & 1) != 0) {
      uVar16 = uStack_1c8;
      lVar11 = lStack_1c0;
    }
    if (uVar16 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                       ((int)*(char *)(lVar11 + 2 + uVar17) ^
                       ((int)*(char *)(lVar11 + 1 + uVar17) ^
                       ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
    }
    iStack_230 = 2;
    if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
      func_0x07f4ec70();
      func_0x0410844d(&DAT_0f5c1070);
    }
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
    lStack_2c0 = 0;
    uStack_2b8 = 3;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_07f4f5e0;
    puStack_280 = &UNK_07f4f5f0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(&uStack_250,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    uStack_118 = uStack_240;
    uStack_114 = uStack_23c;
    uStack_110 = uStack_238;
    uStack_10c = uStack_234;
    uStack_128 = uStack_250;
    uStack_124 = uStack_24c;
    uStack_120 = uStack_248;
    uStack_11c = uStack_244;
    func_0x07f4f090(&uStack_2c8,&uStack_128,&puStack_1f8);
    if (uStack_2b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != (int)uStack_2b0) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar11 = *(long *)(piVar12 + 0xc);
      while (lVar11 != lStack_2c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar11 = *(long *)(piVar12 + 0xc);
      }
LAB_07f0baef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_07f0baef;
      }
      if (uStack_2b0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
        *puVar19 = *puVar19 | 0x90000;
      }
    }
    if (cStack_220 == '\0') {
      func_0x07f4f420(&uStack_2c8,&uStack_258);
    }
    uVar4 = uStack_224;
    lVar11 = CONCAT44(uStack_254,uStack_258);
    if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
      func_0x07f4b170();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1050);
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_07f0bb81;
      plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4))
    ;
    if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0bb81:
      puVar8 = &DAT_0f5c0fd0;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01465450),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
    func_0x048b0bc0(&puStack_1f8);
    func_0x07f4ecf0(&puStack_1f8,&UNK_012f6df5,10);
    uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
    lVar11 = lVar22;
    if (((ulong)uStack_1d0 & 1) != 0) {
      uVar16 = uStack_1c8;
      lVar11 = lStack_1c0;
    }
    if (uVar16 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                       ((int)*(char *)(lVar11 + 2 + uVar17) ^
                       ((int)*(char *)(lVar11 + 1 + uVar17) ^
                       ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
    }
    iStack_230 = 2;
    if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
      func_0x07f4ec70();
      func_0x0410844d(&DAT_0f5c1070);
    }
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
    lStack_2c0 = 0;
    uStack_2b8 = 3;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_07f4f640;
    puStack_280 = &UNK_07f4f650;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(&uStack_250,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    uStack_118 = uStack_240;
    uStack_114 = uStack_23c;
    uStack_110 = uStack_238;
    uStack_10c = uStack_234;
    uStack_128 = uStack_250;
    uStack_124 = uStack_24c;
    uStack_120 = uStack_248;
    uStack_11c = uStack_244;
    func_0x07f4f090(&uStack_2c8,&uStack_128,&puStack_1f8);
    if (uStack_2b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != (int)uStack_2b0) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar11 = *(long *)(piVar12 + 0xc);
      while (lVar11 != lStack_2c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar11 = *(long *)(piVar12 + 0xc);
      }
LAB_07f0bebf:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_07f0bebf;
      }
      if (uStack_2b0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
        *puVar19 = *puVar19 | 0x90000;
      }
    }
    if (cStack_220 == '\0') {
      func_0x07f4f420(&uStack_2c8,&uStack_258);
    }
    uVar4 = uStack_224;
    lVar11 = CONCAT44(uStack_254,uStack_258);
    if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
      func_0x07f4b170();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1050);
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_07f0bf51;
      plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4))
    ;
    if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0bf51:
      puVar8 = &DAT_0f5c0fd0;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01465450),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
    func_0x048b0bc0(&puStack_1f8);
    func_0x07f4ecf0(&puStack_1f8,&UNK_0129092b,9);
    uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
    lVar11 = lVar22;
    if (((ulong)uStack_1d0 & 1) != 0) {
      uVar16 = uStack_1c8;
      lVar11 = lStack_1c0;
    }
    if (uVar16 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                       ((int)*(char *)(lVar11 + 2 + uVar17) ^
                       ((int)*(char *)(lVar11 + 1 + uVar17) ^
                       ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
    }
    iStack_230 = 2;
    if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
      func_0x07f4ec70();
      func_0x0410844d(&DAT_0f5c1070);
    }
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
    lStack_2c0 = 0;
    uStack_2b8 = 3;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_07f4f6a0;
    puStack_280 = &UNK_07f4f6b0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(&uStack_250,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    uStack_118 = uStack_240;
    uStack_114 = uStack_23c;
    uStack_110 = uStack_238;
    uStack_10c = uStack_234;
    uStack_128 = uStack_250;
    uStack_124 = uStack_24c;
    uStack_120 = uStack_248;
    uStack_11c = uStack_244;
    func_0x07f4f090(&uStack_2c8,&uStack_128,&puStack_1f8);
    if (uStack_2b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != (int)uStack_2b0) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar11 = *(long *)(piVar12 + 0xc);
      while (lVar11 != lStack_2c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar11 = *(long *)(piVar12 + 0xc);
      }
LAB_07f0c28f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_07f0c28f;
      }
      if (uStack_2b0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
        *puVar19 = *puVar19 | 0x90000;
      }
    }
    if (cStack_220 == '\0') {
      func_0x07f4f420(&uStack_2c8,&uStack_258);
    }
    uVar4 = uStack_224;
    lVar11 = CONCAT44(uStack_254,uStack_258);
    if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
      func_0x07f4b170();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1050);
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
    do {
      lVar2 = *plVar10;
      if (lVar2 == -1) goto LAB_07f0c321;
      plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4))
    ;
    if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0c321:
      puVar8 = &DAT_0f5c0fd0;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01465450),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
    func_0x048b0bc0(&puStack_1f8);
    func_0x07f4ecf0(&puStack_1f8,&UNK_01242f79,9);
    uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
    if (((ulong)uStack_1d0 & 1) != 0) {
      uVar16 = uStack_1c8;
      lVar22 = lStack_1c0;
    }
    if (uVar16 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar16 & 3);
      if (uVar16 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar17 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar22 + 3 + uVar17) ^
                       ((int)*(char *)(lVar22 + 2 + uVar17) ^
                       ((int)*(char *)(lVar22 + 1 + uVar17) ^
                       ((int)*(char *)(lVar22 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar17 = uVar17 + 4;
        } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar22 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
          uVar16 = uVar16 + 1;
        } while (uVar9 != uVar16);
      }
    }
    iStack_230 = 2;
    if ((DAT_0f5c1070 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1070), iVar7 != 0)) {
      func_0x07f4ec70();
      func_0x0410844d(&DAT_0f5c1070);
    }
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
    lStack_2c0 = 0;
    uStack_2b8 = 3;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_07f4f700;
    puStack_280 = &UNK_07f4f710;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(&uStack_250,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    uStack_118 = uStack_240;
    uStack_114 = uStack_23c;
    uStack_110 = uStack_238;
    uStack_10c = uStack_234;
    uStack_128 = uStack_250;
    uStack_124 = uStack_24c;
    uStack_120 = uStack_248;
    uStack_11c = uStack_244;
    func_0x07f4f090(&uStack_2c8,&uStack_128,&puStack_1f8);
    if (uStack_2b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
      iVar7 = *piVar12;
      while (iVar7 != (int)uStack_2b0) {
        piVar12 = piVar12 + 0x16;
        iVar7 = *piVar12;
      }
      lVar22 = *(long *)(piVar12 + 0xc);
      while (lVar22 != lStack_2c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar22 = *(long *)(piVar12 + 0xc);
      }
LAB_07f0c64f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x1a;
          iVar7 = *piVar12;
        }
        goto LAB_07f0c64f;
      }
      if (uStack_2b0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
        *puVar19 = *puVar19 | 0x90000;
      }
    }
    if (cStack_220 == '\0') {
      func_0x07f4f420(&uStack_2c8,&uStack_258);
    }
    uVar4 = uStack_224;
    lVar22 = CONCAT44(uStack_254,uStack_258);
    if ((DAT_0f5c1050 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1050), iVar7 != 0)) {
      func_0x07f4b170();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1050);
    }
    plVar10 = (long *)(*(long *)(lVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar22 + 0x20) - *(long *)(lVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
    do {
      lVar11 = *plVar10;
      if (lVar11 == -1) goto LAB_07f0c6d0;
      plVar10 = (long *)(*(long *)(lVar22 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar22 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4)
            );
    if (plVar10 == *(long **)(lVar22 + 0x38)) {
LAB_07f0c6d0:
      puVar8 = &DAT_0f5c0fd0;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
        (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar3) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01465450),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
    func_0x048b0bc0(&puStack_1f8);
  }
  if ((DAT_0f5c45a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c45a8), iVar7 != 0)) {
    func_0x0800edd0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c4528,0xf53dab8);
    func_0x0410844d(&DAT_0f5c45a8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c4528 + 4)) * 8);
  do {
    lVar22 = *plVar10;
    if (lVar22 == -1) goto LAB_07f0c7d0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar22 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f5c4528 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07f0c7d0:
    puVar8 = &DAT_0f5c4528;
    if (iRam000000000f5c4588 != -0x2b3da790) goto LAB_07f0c83a;
LAB_07f0c7fb:
    lVar22 = *(long *)(puVar8 + 0x68);
    if (lVar22 == 0) goto LAB_07f0c83a;
    bVar23 = (*(byte *)(lVar22 + 8) & 1) != 0;
    lVar11 = lVar22 + 9;
    if (bVar23) {
      lVar11 = *(long *)(lVar22 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar22 + 8) >> 1);
    if (bVar23) {
      uVar16 = *(ulong *)(lVar22 + 0x10);
    }
    func_0x0800f350(&uStack_258,param_1,lVar11,uVar16);
    if (cStack_228 == '\0') goto LAB_07f0c861;
LAB_07f0d301:
    if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
      func_0x07f53320();
      func_0x0410844d(&DAT_0f5c1128);
    }
    uVar16 = _DAT_0f5c1120;
    lVar22 = _DAT_0f5c1118;
    if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
      func_0x07f4f820();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
      func_0x0410844d(&DAT_0f5c1108);
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
    do {
      lVar11 = *plVar10;
      if (lVar11 == -1) goto LAB_07f0d381;
      plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) !=
             *(uint *)(_DAT_0f5c1088 + 4));
    if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07f0d381:
      puVar8 = &DAT_0f5c1088;
      iVar7 = iRam000000000f5c10e8;
    }
    else {
      puVar8 = (undefined *)plVar10[2];
      iVar7 = *(int *)(puVar8 + 0x60);
    }
    if ((iVar7 == -0x2b3da790) && (lVar11 = *(long *)(puVar8 + 0x68), lVar11 != 0)) {
      bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
      lVar22 = lVar11 + 9;
      if (bVar23) {
        lVar22 = *(long *)(lVar11 + 0x18);
      }
      uVar16 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
      if (bVar23) {
        uVar16 = *(ulong *)(lVar11 + 0x10);
      }
    }
    func_0x07f4fbe0(&uStack_258,param_1,lVar22,uVar16);
    uStack_224 = uStack_224 & 0xffffff00;
    cStack_220 = '\0';
    if (cStack_228 == '\0') {
      func_0x07f533a0(&puStack_1f8,&UNK_01255dc9,9);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar22 = (long)&uStack_1d0 + 1;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53a70;
      puStack_280 = &UNK_07f53a80;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0d69f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0d69f;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0d731;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0d731:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_011ba979,7);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53c90;
      puStack_280 = &UNK_07f53ca0;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0da6f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0da6f;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0db01;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0db01:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_0137b919,0x15);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53cf0;
      puStack_280 = &UNK_07f53d00;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0de3f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0de3f;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0ded1;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0ded1:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_01345f7b,0xe);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53d50;
      puStack_280 = &UNK_07f53d60;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0e20f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0e20f;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0e2a1;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0e2a1:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_0132ad8c,0x11);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53db0;
      puStack_280 = &UNK_07f53dc0;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0e5df:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0e5df;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0e671;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0e671:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_01345f8a,0x10);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      lVar11 = lVar22;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar11 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + 3 + uVar17) ^
                         ((int)*(char *)(lVar11 + 2 + uVar17) ^
                         ((int)*(char *)(lVar11 + 1 + uVar17) ^
                         ((int)*(char *)(lVar11 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar11 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53e10;
      puStack_280 = &UNK_07f53e20;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar11 = *(long *)(piVar12 + 0xc);
        while (lVar11 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar11 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0e9af:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0e9af;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar11 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar2 = *plVar10;
        if (lVar2 == -1) goto LAB_07f0ea41;
        plVar10 = (long *)(*(long *)(lVar11 + 0x30) + lVar2 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar2 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar11 + 0x38)) {
LAB_07f0ea41:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
      func_0x07f533a0(&puStack_1f8,&UNK_014187e0,0xd);
      uVar16 = (ulong)uStack_1d0 >> 1 & 0x7f;
      if (((ulong)uStack_1d0 & 1) != 0) {
        uVar16 = uStack_1c8;
        lVar22 = lStack_1c0;
      }
      if (uVar16 == 0) {
        uStack_22c = 0x811c9dc5;
      }
      else {
        uVar9 = (ulong)((uint)uVar16 & 3);
        if (uVar16 < 4) {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
        }
        else {
          uStack_22c = 0x811c9dc5;
          uVar17 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar22 + 3 + uVar17) ^
                         ((int)*(char *)(lVar22 + 2 + uVar17) ^
                         ((int)*(char *)(lVar22 + 1 + uVar17) ^
                         ((int)*(char *)(lVar22 + uVar17) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                         0x1000193) * 0x1000193;
            uVar17 = uVar17 + 4;
          } while ((uVar16 & 0xfffffffffffffffc) != uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            uStack_22c = ((int)*(char *)(lVar22 + uVar17 + uVar16) ^ uStack_22c) * 0x1000193;
            uVar16 = uVar16 + 1;
          } while (uVar9 != uVar16);
        }
      }
      iStack_230 = 2;
      if ((DAT_0f5c1128 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1128), iVar7 != 0)) {
        func_0x07f53320();
        func_0x0410844d(&DAT_0f5c1128);
      }
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_22c);
      lStack_2c0 = 0;
      uStack_2b8 = 3;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f539b0;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4f760;
      puStack_288 = &UNK_07f53e70;
      puStack_280 = &UNK_07f53e80;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(&uStack_250,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      uStack_118 = uStack_240;
      uStack_114 = uStack_23c;
      uStack_110 = uStack_238;
      uStack_10c = uStack_234;
      uStack_128 = uStack_250;
      uStack_124 = uStack_24c;
      uStack_120 = uStack_248;
      uStack_11c = uStack_244;
      func_0x07f53740(&uStack_2c8,&uStack_128,&puStack_1f8);
      if (uStack_2b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x60);
        iVar7 = *piVar12;
        while (iVar7 != (int)uStack_2b0) {
          piVar12 = piVar12 + 0x16;
          iVar7 = *piVar12;
        }
        lVar22 = *(long *)(piVar12 + 0xc);
        while (lVar22 != lStack_2c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar22 = *(long *)(piVar12 + 0xc);
        }
LAB_07f0ed6f:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 9;
      }
      else {
        if (uStack_2b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x78) + 0x48);
          iVar7 = *piVar12;
          while (iVar7 != (int)uStack_2b0) {
            piVar12 = piVar12 + 0x1a;
            iVar7 = *piVar12;
          }
          goto LAB_07f0ed6f;
        }
        if (uStack_2b0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2b4,uStack_2b8) + 0x18);
          *puVar19 = *puVar19 | 0x90000;
        }
      }
      if (cStack_220 == '\0') {
        func_0x07f53ad0(&uStack_2c8,&uStack_258);
      }
      uVar4 = uStack_224;
      lVar22 = CONCAT44(uStack_254,uStack_258);
      if ((DAT_0f5c1108 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c1108), iVar7 != 0)) {
        func_0x07f4f820();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c1088,0xf53dab8);
        func_0x0410844d(&DAT_0f5c1108);
      }
      plVar10 = (long *)(*(long *)(lVar22 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar22 + 0x20) - *(long *)(lVar22 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c1088 + 4)) * 8);
      do {
        lVar11 = *plVar10;
        if (lVar11 == -1) goto LAB_07f0edf0;
        plVar10 = (long *)(*(long *)(lVar22 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(lVar22 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f5c1088 + 4));
      if (plVar10 == *(long **)(lVar22 + 0x38)) {
LAB_07f0edf0:
        puVar8 = &DAT_0f5c1088;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      puVar3 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x28);
      for (puVar19 = *(uint **)(*(long *)(puVar8 + 0x68) + 0x20);
          (puVar19 != puVar3 && (*puVar19 != uVar4)); puVar19 = puVar19 + 0xe) {
      }
      if ((puVar19 == puVar3) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014b34f1),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x05d9c620(puVar19 + 2,&uStack_22c,&uStack_22c,&uStack_2c8);
      func_0x048b0bc0(&puStack_1f8);
    }
    if ((DAT_0f5c4948 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c4948), iVar7 != 0)) {
      func_0x08016550();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c48c8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c4948);
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5c48c8 + 4)) * 8);
    do {
      lVar22 = *plVar10;
      if (lVar22 == -1) goto LAB_07f0eef0;
      plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar22 * 0x18) !=
             *(uint *)(_DAT_0f5c48c8 + 4));
    if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07f0eef0:
      puVar8 = &DAT_0f5c48c8;
      if (iRam000000000f5c4928 != -0x2b3da790) goto LAB_07f0ef5a;
LAB_07f0ef1b:
      lVar22 = *(long *)(puVar8 + 0x68);
      if (lVar22 == 0) goto LAB_07f0ef5a;
      bVar23 = (*(byte *)(lVar22 + 8) & 1) != 0;
      lVar11 = lVar22 + 9;
      if (bVar23) {
        lVar11 = *(long *)(lVar22 + 0x18);
      }
      uVar16 = (ulong)(*(byte *)(lVar22 + 8) >> 1);
      if (bVar23) {
        uVar16 = *(ulong *)(lVar22 + 0x10);
      }
      func_0x08016d50(&uStack_258,param_1,lVar11,uVar16);
    }
    else {
      puVar8 = (undefined *)plVar10[2];
      if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_07f0ef1b;
LAB_07f0ef5a:
      func_0x08016d50(&uStack_258,param_1,&UNK_014ceda2,0x12);
    }
    if (cStack_228 != '\0') {
      return;
    }
    func_0x080178c0(&puStack_1f8,&uStack_258,&UNK_013e4773,0x13,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f101df0;
    if (plStack_1e0 != (long *)0x0) {
      lVar22 = *plStack_1e0;
      plStack_1e0 = plVar10;
      (**(code **)(lVar22 + 8))();
      plVar10 = plStack_1e0;
    }
    plStack_1e0 = plVar10;
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_080180c0;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0800cd40;
    puStack_288 = &UNK_08018180;
    puStack_280 = &UNK_080182f0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_1f0,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x08017bd0(&puStack_1f8);
    func_0x048b0bc0(&plStack_1e0);
    func_0x080178c0(&puStack_1f8,&uStack_258,&UNK_0149ae3a,0x17,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0fd318;
    if (plStack_1e0 != (long *)0x0) {
      lVar22 = *plStack_1e0;
      plStack_1e0 = plVar10;
      (**(code **)(lVar22 + 8))();
      plVar10 = plStack_1e0;
    }
    plStack_1e0 = plVar10;
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f539b0;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4f760;
    puStack_288 = &UNK_08018760;
    puStack_280 = &UNK_080188c0;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_1f0,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x08017bd0(&puStack_1f8);
    puVar8 = (undefined *)CONCAT44(uStack_254,uStack_258);
    iStack_214 = iStack_230;
    uStack_1fc = uStack_22c;
    func_0x048b0bc0(&plStack_1e0);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *puVar13 = 1;
    puVar13[1] = 2;
    puVar13[2] = 3;
    puVar13[3] = 4;
    puStack_208 = puVar13 + 6;
    puVar13[4] = 5;
    if (puStack_208 <= puVar13 + 5) {
      lVar22 = (long)(puVar13 + 5) - (long)puVar13;
      puVar21 = (undefined1 *)(lVar22 >> 3);
      puVar14 = (undefined8 *)(puVar21 + 1);
      puVar20 = puVar13;
      if ((ulong)puVar14 >> 0x3d != 0) goto LAB_07f1049f;
      uVar16 = (long)puStack_208 - (long)puVar13;
      puVar20 = (undefined8 *)((long)uVar16 >> 2);
      if ((undefined8 *)((long)uVar16 >> 2) <= puVar14) {
        puVar20 = puVar14;
      }
      if (0x7ffffffffffffff7 < uVar16) {
        puVar20 = (undefined8 *)0x1fffffffffffffff;
      }
      puStack_210 = puVar13;
      if (puVar20 < (undefined8 *)0x2000000000000000) {
        uStack_78 = uVar16;
        puStack_70 = puVar8;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar20 * 8);
        if (lVar11 == 0) {
          func_0x0eec74c0((long)puVar20 * 8,0);
        }
        puVar14 = puStack_210;
        *(undefined8 *)(lVar11 + lVar22) = 6;
        puVar13 = (undefined8 *)(lVar22 + lVar11 + (long)puVar21 * -8);
        func_0x0eee2f00(puVar13,puStack_210,lVar22);
        puVar20 = (undefined8 *)((long)puVar20 * 8 + lVar11);
        func_0x0412a280(puVar14,uStack_78);
        lVar22 = (lVar22 + lVar11 + 8) - (long)puVar13;
        puVar8 = puStack_70;
        puStack_208 = puVar20;
        if (lVar22 != 0) goto LAB_07f0f2ba;
        puVar20 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)0x0;
        puStack_210 = puVar13;
        iVar7 = iStack_214;
        goto joined_r0x07f0f4a4;
      }
      goto LAB_07f104af;
    }
    puVar13[5] = 6;
    lVar22 = 0x30;
LAB_07f0f2ba:
    iVar7 = iStack_214;
    puVar21 = &SUB_048b06d0;
    puStack_210 = puVar13;
    if (lVar22 < 0) goto LAB_07f1049a;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(lVar22,0);
    }
    puVar20 = (undefined8 *)((long)puVar14 + lVar22);
    func_0x0eee2f00(puVar14,puStack_210,lVar22);
joined_r0x07f0f4a4:
    if (iVar7 != 4) {
      puVar21 = &SUB_048b06d0;
      if (iVar7 != 1) goto LAB_07f0f73a;
      if (DAT_0f5c4948 == '\0') goto LAB_07f104c4;
      goto LAB_07f0f31a;
    }
    if ((DAT_0f5c4948 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c4948), iVar7 != 0)) {
      func_0x08016550();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c48c8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c4948);
    }
    plVar10 = (long *)(*(long *)(puVar8 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c48c8 + 4)) * 8);
    do {
      lVar22 = *plVar10;
      if (lVar22 == -1) goto LAB_07f0f518;
      plVar10 = (long *)(*(long *)(puVar8 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f5c48c8 + 4)
            );
    if (plVar10 == *(long **)(puVar8 + 0x38)) {
LAB_07f0f518:
      puVar18 = &DAT_0f5c48c8;
    }
    else {
      puVar18 = (undefined *)plVar10[2];
    }
    puVar18 = (undefined *)func_0x048b1040(puVar8 + 0x18,puVar18,uStack_1fc,1);
    if (puVar18 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      uStack_1f0 = 0;
      func_0x048b10d0(&puStack_1f8);
      puVar15 = *(undefined **)(puStack_1f8 + 0x38);
      puVar18 = puStack_1f8;
      if (puVar15 == (undefined *)0x0) goto LAB_07f0f657;
LAB_07f0f67c:
      do {
        puVar18 = puVar15;
        puVar15 = *(undefined **)(puVar18 + 0x38);
        if (*(undefined **)(puVar18 + 0x38) == (undefined *)0x0) {
          puStack_1f8 = (undefined *)0x0;
          uStack_1f0 = 0;
          func_0x048b10d0(&puStack_1f8);
          puVar15 = puStack_1f8;
        }
      } while (puVar15 != (undefined *)0x0);
    }
    else {
      puVar15 = *(undefined **)(puVar18 + 0x38);
      if (*(undefined **)(puVar18 + 0x38) != (undefined *)0x0) goto LAB_07f0f67c;
LAB_07f0f657:
      puStack_1f8 = (undefined *)0x0;
      uStack_1f0 = 0;
      func_0x048b10d0(&puStack_1f8);
      puVar15 = puStack_1f8;
      if (puStack_1f8 != (undefined *)0x0) goto LAB_07f0f67c;
    }
    lVar22 = *(long *)(puVar18 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    puVar21 = &SUB_048b06d0;
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    puVar8 = (undefined *)plVar10[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_07f0c7fb;
LAB_07f0c83a:
    func_0x0800f350(&uStack_258,param_1,&UNK_0132ad31,0x15);
    if (cStack_228 != '\0') goto LAB_07f0d301;
LAB_07f0c861:
    func_0x0800fec0(&puStack_1f8,&uStack_258,&UNK_013b1faa,0xf,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0fd238;
    if (plStack_1e0 != (long *)0x0) {
      lVar22 = *plStack_1e0;
      plStack_1e0 = plVar10;
      (**(code **)(lVar22 + 8))();
      plVar10 = plStack_1e0;
    }
    plStack_1e0 = plVar10;
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_07f4f300;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_07f4b0b0;
    puStack_288 = &UNK_080104e0;
    puStack_280 = &UNK_08010640;
    uStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(uStack_1f0,&uStack_2c8);
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x080101e0(&puStack_1f8);
    cStack_38 = cStack_228;
    uStack_48 = uStack_238;
    uStack_44 = uStack_234;
    iStack_40 = iStack_230;
    uStack_3c = uStack_22c;
    uStack_58 = uStack_248;
    uStack_54 = uStack_244;
    uStack_50 = uStack_240;
    uStack_4c = uStack_23c;
    uStack_68 = uStack_258;
    uStack_64 = uStack_254;
    uStack_60 = uStack_250;
    uStack_5c = uStack_24c;
    func_0x048b0bc0(&plStack_1e0);
    plStack_1e0 = (long *)0xff;
    uStack_1f0 = 0xffffffffffffffff;
    uStack_1e8 = 0;
    puStack_1f8 = &UNK_0f4e3aa0;
    puStack_1d8 = (undefined1 *)0x0;
    uStack_1d0 = (undefined1 *)0x0;
    uStack_1c8 = 0;
    puStack_e8 = (undefined *)CONCAT44(puStack_e8._4_4_,0x3020100);
    func_0x07f0b160(&puStack_1f8,&puStack_e8,4);
    puVar21 = puStack_1d8;
    uStack_98 = plStack_1e0._0_1_;
    uStack_a8 = uStack_1f0;
    uStack_a0 = uStack_1e8;
    puStack_b0 = &UNK_0f4e3aa0;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    lVar22 = (long)uStack_1d0 - (long)puStack_1d8;
    if (lVar22 == 0) {
LAB_07f0caff:
      func_0x07f0ad80(&uStack_128,&uStack_68,&puStack_b0);
      lVar22 = CONCAT44(uStack_124,uStack_128);
      if ((DAT_0f5c45a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c45a8), iVar7 != 0)) {
        func_0x0800edd0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c4528,0xf53dab8);
        func_0x0410844d(&DAT_0f5c45a8);
      }
      plVar10 = (long *)(*(long *)(lVar22 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar22 + 0x20) - *(long *)(lVar22 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c4528 + 4)) * 8);
      do {
        lVar11 = *plVar10;
        if (lVar11 == -1) goto LAB_07f0cb90;
        plVar10 = (long *)(*(long *)(lVar22 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(lVar22 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f5c4528 + 4));
      if (plVar10 == *(long **)(lVar22 + 0x38)) {
LAB_07f0cb90:
        puVar8 = &DAT_0f5c4528;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      if ((1 < iStack_100 - 1U) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f327d),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar16 = func_0x048b0c90(lVar22 + 0x18,puVar8,uStack_fc,1);
      if (uVar16 == 0) {
        uStack_2c8 = 0;
        lStack_2c0 = 0;
        func_0x048b0d20(&uStack_2c8);
        uVar16 = uStack_2c8;
      }
      *(undefined1 *)(*(long *)(uVar16 + 0x58) + 0xa8) = 4;
      puStack_b0 = &UNK_0f4e3aa0;
      if (lStack_90 != 0) {
        lStack_88 = lStack_90;
        func_0x0412a280(lStack_90,lStack_80 - lStack_90);
      }
      puStack_1f8 = &UNK_0f4e3aa0;
      if (puStack_1d8 != (undefined1 *)0x0) {
        uStack_1d0 = puStack_1d8;
        func_0x0412a280(puStack_1d8,uStack_1c8 - (long)puStack_1d8);
      }
      func_0x0800fec0(&puStack_1f8,&uStack_258,&UNK_0147df46,0x13,0);
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar10 = (long)&UNK_0f101a98;
      if (plStack_1e0 != (long *)0x0) {
        lVar22 = *plStack_1e0;
        plStack_1e0 = plVar10;
        (**(code **)(lVar22 + 8))();
        plVar10 = plStack_1e0;
      }
      plStack_1e0 = plVar10;
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
      lStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_08015750;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_08015380;
      puStack_288 = &UNK_08015810;
      puStack_280 = &UNK_08015980;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(uStack_1f0,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      func_0x080101e0(&puStack_1f8);
      func_0x048b0bc0(&plStack_1e0);
      func_0x0800fec0(&puStack_1f8,&uStack_258,&UNK_011a2e80,0x16,1);
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar10 = (long)&UNK_0f0fd238;
      if (plStack_1e0 != (long *)0x0) {
        lVar22 = *plStack_1e0;
        plStack_1e0 = plVar10;
        (**(code **)(lVar22 + 8))();
        plVar10 = plStack_1e0;
      }
      plStack_1e0 = plVar10;
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
      lStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_07f4f300;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_07f4b0b0;
      puStack_288 = &UNK_08015e00;
      puStack_280 = &UNK_08015f60;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(uStack_1f0,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      func_0x080101e0(&puStack_1f8);
      cStack_38 = cStack_228;
      uStack_48 = uStack_238;
      uStack_44 = uStack_234;
      iStack_40 = iStack_230;
      uStack_3c = uStack_22c;
      uStack_58 = uStack_248;
      uStack_54 = uStack_244;
      uStack_50 = uStack_240;
      uStack_4c = uStack_23c;
      uStack_68 = uStack_258;
      uStack_64 = uStack_254;
      uStack_60 = uStack_250;
      uStack_5c = uStack_24c;
      func_0x048b0bc0(&plStack_1e0);
      plStack_1e0 = (long *)0xff;
      uStack_1f0 = 0xffffffffffffffff;
      uStack_1e8 = 0;
      puStack_1f8 = &UNK_0f4e3aa0;
      puStack_1d8 = (undefined1 *)0x0;
      uStack_1d0 = (undefined1 *)0x0;
      uStack_1c8 = 0;
      uStack_f0 = 0x3020100;
      uStack_ec = 4;
      func_0x07f0b160(&puStack_1f8,&uStack_f0,5);
      puVar21 = puStack_1d8;
      uStack_d0 = plStack_1e0._0_1_;
      uStack_e0 = uStack_1f0;
      uStack_d8 = uStack_1e8;
      puStack_e8 = &UNK_0f4e3aa0;
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      lVar22 = (long)uStack_1d0 - (long)puStack_1d8;
      if (lVar22 != 0) {
        if (lVar22 < 0) goto LAB_07f10495;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
        if (lVar11 == 0) {
          func_0x0eec74c0(lVar22,0);
        }
        lStack_c8 = lVar11;
        lStack_b8 = lVar11 + lVar22;
        func_0x0eee2f00(lVar11,puVar21,lVar22);
        lStack_c0 = lVar11 + lVar22;
      }
      func_0x07f0ad80(&uStack_128,&uStack_68,&puStack_e8);
      lVar22 = CONCAT44(uStack_124,uStack_128);
      if ((DAT_0f5c45a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c45a8), iVar7 != 0)) {
        func_0x0800edd0();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5c4528,0xf53dab8);
        func_0x0410844d(&DAT_0f5c45a8);
      }
      plVar10 = (long *)(*(long *)(lVar22 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar22 + 0x20) - *(long *)(lVar22 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f5c4528 + 4)) * 8);
      do {
        lVar11 = *plVar10;
        if (lVar11 == -1) goto LAB_07f0d0d0;
        plVar10 = (long *)(*(long *)(lVar22 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(lVar22 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f5c4528 + 4));
      if (plVar10 == *(long **)(lVar22 + 0x38)) {
LAB_07f0d0d0:
        puVar8 = &DAT_0f5c4528;
      }
      else {
        puVar8 = (undefined *)plVar10[2];
      }
      if ((1 < iStack_100 - 1U) &&
         (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f327d),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar16 = func_0x048b0c90(lVar22 + 0x18,puVar8,uStack_fc,1);
      if (uVar16 == 0) {
        uStack_2c8 = 0;
        lStack_2c0 = 0;
        func_0x048b0d20(&uStack_2c8);
        uVar16 = uStack_2c8;
      }
      *(undefined1 *)(*(long *)(uVar16 + 0x58) + 0xa8) = 4;
      puStack_e8 = &UNK_0f4e3aa0;
      if (lStack_c8 != 0) {
        lStack_c0 = lStack_c8;
        func_0x0412a280(lStack_c8,lStack_b8 - lStack_c8);
      }
      puStack_1f8 = &UNK_0f4e3aa0;
      if (puStack_1d8 != (undefined1 *)0x0) {
        uStack_1d0 = puStack_1d8;
        func_0x0412a280(puStack_1d8,uStack_1c8 - (long)puStack_1d8);
      }
      func_0x0800fec0(&puStack_1f8,&uStack_258,&UNK_01465426,0x1a,0);
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar10 = (long)&UNK_0f101a98;
      if (plStack_1e0 != (long *)0x0) {
        lVar22 = *plStack_1e0;
        plStack_1e0 = plVar10;
        (**(code **)(lVar22 + 8))();
        plVar10 = plStack_1e0;
      }
      plStack_1e0 = plVar10;
      uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
      lStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 1;
      uStack_2a8 = 0;
      puStack_2a0 = &UNK_08015750;
      puStack_298 = &SUB_048b06d0;
      puStack_290 = &UNK_08015380;
      puStack_288 = &UNK_08016140;
      puStack_280 = &UNK_080162b0;
      uStack_278 = 0;
      uStack_270 = 0;
      plStack_268 = (long *)0x0;
      func_0x048b05a0(uStack_1f0,&uStack_2c8);
      plVar10 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_268 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          func_0x0412c2d0(plVar10);
        }
      }
      func_0x080101e0(&puStack_1f8);
      func_0x048b0bc0(&plStack_1e0);
      goto LAB_07f0d301;
    }
    if (-1 < lVar22) {
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar22,0);
      }
      lStack_90 = lVar11;
      lStack_80 = lVar11 + lVar22;
      func_0x0eee2f00(lVar11,puVar21,lVar22);
      lStack_88 = lVar11 + lVar22;
      goto LAB_07f0caff;
    }
    func_0x0774b760();
LAB_07f10495:
    puVar13 = (undefined8 *)&SUB_048b06d0;
    puVar8 = &UNK_0f0fd238;
    func_0x0774b760();
LAB_07f1049a:
    func_0x0774b760();
    puVar20 = puVar13;
LAB_07f1049f:
    func_0x0774b760();
LAB_07f104af:
    puVar14 = puStack_208;
    func_0x04882eb0();
LAB_07f104c4:
    iVar7 = func_0x04108328(&DAT_0f5c4948);
    if (iVar7 != 0) {
      func_0x08016550();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5c48c8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c4948);
    }
LAB_07f0f31a:
    plVar10 = (long *)(*(long *)(puVar8 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c48c8 + 4)) * 8);
    do {
      lVar22 = *plVar10;
      if (lVar22 == -1) goto LAB_07f0f378;
      plVar10 = (long *)(*(long *)(puVar8 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f5c48c8 + 4)
            );
    if (plVar10 == *(long **)(puVar8 + 0x38)) {
LAB_07f0f378:
      puVar18 = &DAT_0f5c48c8;
    }
    else {
      puVar18 = (undefined *)plVar10[2];
    }
    puVar18 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar18,uStack_1fc,1);
    if (puVar18 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      uStack_1f0 = 0;
      func_0x048b0d20(&puStack_1f8);
      puVar18 = puStack_1f8;
    }
    lVar22 = *(long *)(puVar18 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  puVar13[1] = 0xffffffffffffffff;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0xff;
  *puVar13 = &UNK_0f4e3aa0;
  puVar13[4] = puVar14;
  puVar13[5] = puVar20;
  puVar13[6] = puVar20;
  plVar10 = *(long **)(lVar22 + 8);
  *(undefined8 **)(lVar22 + 8) = puVar13;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  puVar20 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  iVar7 = iStack_214;
LAB_07f0f73a:
  if ((DAT_0f5c4948 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c4948), iVar6 != 0)) {
    func_0x08016550();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5c48c8,0xf53dab8);
    func_0x0410844d(&DAT_0f5c4948);
  }
  plVar10 = (long *)(*(long *)(puVar8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c48c8 + 4)) * 8);
  do {
    lVar22 = *plVar10;
    if (lVar22 == -1) goto LAB_07f0f7a0;
    plVar10 = (long *)(*(long *)(puVar8 + 0x30) + lVar22 * 0x18);
  } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f5c48c8 + 4));
  if (plVar10 == *(long **)(puVar8 + 0x38)) {
LAB_07f0f7a0:
    puVar18 = &DAT_0f5c48c8;
  }
  else {
    puVar18 = (undefined *)plVar10[2];
  }
  if ((1 < iVar7 - 1U) &&
     (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012dd2f5),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar18,uStack_1fc,1);
  if (puVar8 == (undefined *)0x0) {
    puStack_1f8 = (undefined *)0x0;
    uStack_1f0 = 0;
    func_0x048b0d20(&puStack_1f8);
    puVar8 = puStack_1f8;
  }
  *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 4;
  if (puVar14 != (undefined8 *)0x0) {
    func_0x0412a280(puVar14,(long)puVar20 - (long)puVar14);
  }
  func_0x0412a280(puStack_210,(long)puStack_208 - (long)puStack_210);
  func_0x080178c0(&puStack_1f8,&uStack_258,&UNK_01397288,0x14,0);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f0123c0;
  if (plStack_1e0 != (long *)0x0) {
    lVar22 = *plStack_1e0;
    plStack_1e0 = plVar10;
    (**(code **)(lVar22 + 8))();
    plVar10 = plStack_1e0;
  }
  plStack_1e0 = plVar10;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
  lStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_05e08030;
  puStack_290 = &UNK_05e07cf0;
  puStack_288 = &UNK_08018d30;
  puStack_280 = &UNK_08018ee0;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  puStack_298 = puVar21;
  func_0x048b05a0(uStack_1f0,&uStack_2c8);
  plVar10 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x08017bd0(&puStack_1f8);
  func_0x048b0bc0(&plStack_1e0);
  func_0x080178c0(&puStack_1f8,&uStack_258,&UNK_0144cec2,0xf,1);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f101e68;
  if (plStack_1e0 != (long *)0x0) {
    lVar22 = *plStack_1e0;
    plStack_1e0 = plVar10;
    (**(code **)(lVar22 + 8))();
    plVar10 = plStack_1e0;
  }
  plStack_1e0 = plVar10;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
  lStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_08019300;
  puStack_290 = &UNK_0800ed10;
  puStack_288 = &UNK_080193c0;
  puStack_280 = &UNK_08019530;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  puStack_298 = puVar21;
  func_0x048b05a0(uStack_1f0,&uStack_2c8);
  plVar10 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x08017bd0(&puStack_1f8);
  func_0x048b0bc0(&plStack_1e0);
  func_0x080178c0(&puStack_1f8,&uStack_258,&UNK_01228842,7,0);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f01a540;
  if (plStack_1e0 != (long *)0x0) {
    lVar22 = *plStack_1e0;
    plStack_1e0 = plVar10;
    (**(code **)(lVar22 + 8))();
    plVar10 = plStack_1e0;
  }
  plStack_1e0 = plVar10;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_1e8);
  lStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_06030440;
  puStack_290 = &SUB_06030120;
  puStack_288 = &UNK_080199b0;
  puStack_280 = &UNK_08019b20;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  puStack_298 = puVar21;
  func_0x048b05a0(uStack_1f0,&uStack_2c8);
  plVar10 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x08017bd0(&puStack_1f8);
  func_0x048b0bc0(&plStack_1e0);
  return;
}


