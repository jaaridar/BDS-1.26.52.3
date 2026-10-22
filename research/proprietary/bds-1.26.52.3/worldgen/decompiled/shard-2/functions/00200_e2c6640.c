/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3c6640 (ELF vaddr 0xe2c6640)
 * Label: caller-of-callee
 * Body:  [[0e3c6640, 0e3c7cf7] [0e3c7d00, 0e3c7d41] [0e3c7d50, 0e3c85e1] [0e3c85f0, 0e3c87d7] [0e3c87e0, 0e3c8821] [0e3c8830, 0e3c9071] [0e3c9080, 0e3c9635]]
 * Ghidra: FUN_0e3c6640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3c6640(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  int *piVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  long *plVar18;
  code *pcVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  uint *puVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [16];
  ulong uStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  int iStack_240;
  uint auStack_23c [2];
  uint uStack_234;
  undefined4 uStack_230;
  undefined1 auStack_228 [16];
  uint uStack_218;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 *puStack_1f0;
  undefined1 auStack_1e8 [16];
  long lStack_1d8;
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined2 uStack_168;
  undefined2 uStack_166;
  uint uStack_164;
  uint uStack_160;
  undefined1 uStack_15c;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  uint uStack_12c;
  char cStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined1 auStack_118 [16];
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  uint auStack_ec [2];
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [16];
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint auStack_ac [2];
  undefined8 uStack_a4;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  uint auStack_6c [2];
  undefined8 uStack_64;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_0d91a8f0();
  if ((DAT_0f751ac0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ac0), iVar10 != 0)) {
    func_0x0e41ac60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
    func_0x0410844d(&DAT_0f751ac0);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
  do {
    lVar25 = *plVar18;
    if (lVar25 == -1) goto LAB_0e3c66c0;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e3c66c0:
    puVar12 = &DAT_0f751a40;
    if (iRam000000000f751aa0 != -0x2b3da790) goto LAB_0e3c6718;
LAB_0e3c66eb:
    lVar25 = *(long *)(puVar12 + 0x68);
    if (lVar25 == 0) goto LAB_0e3c6718;
    bVar27 = (*(byte *)(lVar25 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar25 + 9);
    if (bVar27) {
      puVar12 = *(undefined **)(lVar25 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar25 + 8) >> 1);
    if (bVar27) {
      uVar22 = *(ulong *)(lVar25 + 0x10);
    }
  }
  else {
    puVar12 = (undefined *)plVar18[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e3c66eb;
LAB_0e3c6718:
    puVar12 = &UNK_014a91c6;
    uVar22 = 0x10;
  }
  func_0x0e41b0a0(&uStack_158,param_1,puVar12,uVar22);
  uStack_124 = uStack_124 & 0xffffff00;
  uStack_120 = uStack_120 & 0xffffff00;
  if (cStack_128 == '\0') {
    func_0x0e41e920(auStack_228,&UNK_01426f71,7);
    bVar27 = (auStack_200[0] & 1) == 0;
    puVar24 = auStack_200 + 1;
    puVar13 = puStack_1f0;
    if (bVar27) {
      puVar13 = puVar24;
    }
    uVar22 = (ulong)(auStack_200[0] >> 1);
    if (!bVar27) {
      uVar22 = auStack_200._8_8_;
    }
    if (uVar22 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar23 = 0;
        do {
          uStack_12c = ((int)(char)puVar13[uVar23 + 3] ^
                       ((int)(char)puVar13[uVar23 + 2] ^
                       ((int)(char)puVar13[uVar23 + 1] ^
                       ((int)(char)puVar13[uVar23] ^ uStack_12c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          uStack_12c = ((int)(char)puVar13[uVar22 + uVar23] ^ uStack_12c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
      }
    }
    iStack_130 = 2;
    if ((DAT_0f751ae0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ae0), iVar10 != 0)) {
      func_0x0e41ad70();
      func_0x0410844d(&DAT_0f751ae0);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uStack_12c);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,3);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e41eff0;
    puStack_288 = &UNK_0e41f000;
    uStack_280 = 0;
    auStack_278 = ZEXT816(0);
    func_0x048b05a0(&uStack_150,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    puStack_258 = (undefined8 *)uStack_140;
    uStack_250 = uStack_138;
    uStack_268 = uStack_150;
    uStack_260 = uStack_148;
    func_0x0e41ecc0(&uStack_2d0,&uStack_268,auStack_228);
    if (uStack_2b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_2b8) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar25 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar25 != plStack_2c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar25 = *(long *)(piVar15 + 0xc);
      }
LAB_0e3c69af:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_2b8) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c69af;
      }
      if (uStack_2b8._4_4_ == 0) {
        *(uint *)((long)plStack_2c0 + 0x18) = *(uint *)((long)plStack_2c0 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      func_0x0e41f050(&uStack_2d0,&uStack_158);
    }
    uVar6 = uStack_124;
    uVar22 = uStack_158;
    if ((DAT_0f751ac0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ac0), iVar10 != 0)) {
      func_0x0e41ac60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
      func_0x0410844d(&DAT_0f751ac0);
    }
    plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c6a40;
      plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4)
            );
    if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c6a40:
      puVar12 = &DAT_0f751a40;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar26 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar26 != puVar3 && (*puVar26 != uVar6)); puVar26 = puVar26 + 0xe) {
    }
    if ((puVar26 == puVar3) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01304611),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    func_0x05d9c620(puVar26 + 2,&uStack_12c,&uStack_12c,&uStack_2d0);
    uStack_64 = CONCAT44(uStack_120,uStack_124);
    uStack_98 = uStack_158;
    uStack_90 = uStack_150;
    uStack_88 = uStack_148;
    uStack_80 = uStack_140;
    uStack_78 = uStack_138;
    iStack_70 = iStack_130;
    auStack_6c[0] = uStack_12c;
    func_0x048b0bc0(auStack_228);
    func_0x0e41e920(auStack_228,&UNK_013effa2,5);
    bVar27 = (auStack_200[0] & 1) == 0;
    puVar13 = puStack_1f0;
    if (bVar27) {
      puVar13 = puVar24;
    }
    uVar22 = (ulong)(auStack_200[0] >> 1);
    if (!bVar27) {
      uVar22 = auStack_200._8_8_;
    }
    if (uVar22 == 0) {
      auStack_6c[0] = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        auStack_6c[0] = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        auStack_6c[0] = 0x811c9dc5;
        uVar23 = 0;
        do {
          auStack_6c[0] =
               ((int)(char)puVar13[uVar23 + 3] ^
               ((int)(char)puVar13[uVar23 + 2] ^
               ((int)(char)puVar13[uVar23 + 1] ^
               ((int)(char)puVar13[uVar23] ^ auStack_6c[0]) * 0x1000193) * 0x1000193) * 0x1000193) *
               0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          auStack_6c[0] = ((int)(char)puVar13[uVar22 + uVar23] ^ auStack_6c[0]) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
      }
    }
    iStack_70 = 2;
    if ((DAT_0f751ae0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ae0), iVar10 != 0)) {
      func_0x0e41ad70();
      func_0x0410844d(&DAT_0f751ae0);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,auStack_6c[0]);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,3);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e41f210;
    puStack_288 = &UNK_0e41f220;
    uStack_280 = 0;
    auStack_278 = ZEXT816(0);
    func_0x048b05a0(&uStack_90,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    puStack_258 = (undefined8 *)uStack_80;
    uStack_250 = uStack_78;
    uStack_268 = uStack_90;
    uStack_260 = uStack_88;
    func_0x0e41ecc0(&uStack_2d0,&uStack_268,auStack_228);
    if (uStack_2b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_2b8) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar25 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar25 != plStack_2c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar25 = *(long *)(piVar15 + 0xc);
      }
LAB_0e3c6dbf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_2b8) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c6dbf;
      }
      if (uStack_2b8._4_4_ == 0) {
        *(uint *)((long)plStack_2c0 + 0x18) = *(uint *)((long)plStack_2c0 + 0x18) | 0x90000;
      }
    }
    if (uStack_64._4_1_ == '\0') {
      func_0x0e41f050(&uStack_2d0,&uStack_98);
    }
    uVar22 = uStack_98;
    iVar10 = (int)uStack_64;
    if ((DAT_0f751ac0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f751ac0), iVar11 != 0)) {
      func_0x0e41ac60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
      func_0x0410844d(&DAT_0f751ac0);
    }
    plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c6e50;
      plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4)
            );
    if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c6e50:
      puVar12 = &DAT_0f751a40;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar4 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01304611),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    func_0x05d9c620(piVar15 + 2,auStack_6c,auStack_6c,&uStack_2d0);
    auStack_d8._8_8_ = uStack_90;
    auStack_d8._0_8_ = uStack_98;
    uStack_c8 = uStack_88;
    uStack_c0 = uStack_80;
    uStack_b8 = uStack_78;
    uStack_b0 = iStack_70;
    auStack_ac[0] = auStack_6c[0];
    uStack_a4 = uStack_64;
    func_0x048b0bc0(auStack_228);
    func_0x0e41e920(auStack_228,&UNK_014734a6,9);
    bVar27 = (auStack_200[0] & 1) == 0;
    puVar13 = puStack_1f0;
    if (bVar27) {
      puVar13 = puVar24;
    }
    uVar22 = (ulong)(auStack_200[0] >> 1);
    if (!bVar27) {
      uVar22 = auStack_200._8_8_;
    }
    if (uVar22 == 0) {
      auStack_ac[0] = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        auStack_ac[0] = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        auStack_ac[0] = 0x811c9dc5;
        uVar23 = 0;
        do {
          auStack_ac[0] =
               ((int)(char)puVar13[uVar23 + 3] ^
               ((int)(char)puVar13[uVar23 + 2] ^
               ((int)(char)puVar13[uVar23 + 1] ^
               ((int)(char)puVar13[uVar23] ^ auStack_ac[0]) * 0x1000193) * 0x1000193) * 0x1000193) *
               0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          auStack_ac[0] = ((int)(char)puVar13[uVar22 + uVar23] ^ auStack_ac[0]) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f751ae0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ae0), iVar10 != 0)) {
      func_0x0e41ad70();
      func_0x0410844d(&DAT_0f751ae0);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,auStack_ac[0]);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,3);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e41f270;
    puStack_288 = &UNK_0e41f280;
    uStack_280 = 0;
    auStack_278 = ZEXT816(0);
    func_0x048b05a0(auStack_d8 + 8,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    puStack_258 = (undefined8 *)uStack_c0;
    uStack_250 = uStack_b8;
    uStack_268 = auStack_d8._8_8_;
    uStack_260 = uStack_c8;
    func_0x0e41ecc0(&uStack_2d0,&uStack_268,auStack_228);
    if (uStack_2b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_2b8) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar25 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar25 != plStack_2c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar25 = *(long *)(piVar15 + 0xc);
      }
LAB_0e3c71cf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_2b8) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c71cf;
      }
      if (uStack_2b8._4_4_ == 0) {
        *(uint *)((long)plStack_2c0 + 0x18) = *(uint *)((long)plStack_2c0 + 0x18) | 0x90000;
      }
    }
    if (uStack_a4._4_1_ == '\0') {
      func_0x0e41f050(&uStack_2d0,auStack_d8);
    }
    iVar10 = (int)uStack_a4;
    uVar5 = auStack_d8._0_8_;
    if ((DAT_0f751ac0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f751ac0), iVar11 != 0)) {
      func_0x0e41ac60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
      func_0x0410844d(&DAT_0f751ac0);
    }
    plVar18 = (long *)(*(long *)(uVar5 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar5 + 0x20) - *(long *)(uVar5 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c7260;
      plVar18 = (long *)(*(long *)(uVar5 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar5 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4))
    ;
    if (plVar18 == *(long **)(uVar5 + 0x38)) {
LAB_0e3c7260:
      puVar12 = &DAT_0f751a40;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    piVar4 = *(int **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar12 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar10)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01304611),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    func_0x05d9c620(piVar15 + 2,auStack_ac,auStack_ac,&uStack_2d0);
    auStack_118 = auStack_d8;
    uStack_108 = uStack_c8;
    uStack_100 = uStack_c0;
    uStack_f8 = uStack_b8;
    iStack_f0 = uStack_b0;
    auStack_ec[0] = auStack_ac[0];
    uStack_e4 = (uint)uStack_a4;
    uStack_e0 = (undefined4)((ulong)uStack_a4 >> 0x20);
    func_0x048b0bc0(auStack_228);
    func_0x0e41e920(auStack_228,&UNK_013041a6,0x16);
    bVar27 = (auStack_200[0] & 1) == 0;
    puVar13 = puStack_1f0;
    if (bVar27) {
      puVar13 = puVar24;
    }
    uVar22 = (ulong)(auStack_200[0] >> 1);
    if (!bVar27) {
      uVar22 = auStack_200._8_8_;
    }
    if (uVar22 == 0) {
      auStack_ec[0] = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        auStack_ec[0] = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        auStack_ec[0] = 0x811c9dc5;
        uVar23 = 0;
        do {
          auStack_ec[0] =
               ((int)(char)puVar13[uVar23 + 3] ^
               ((int)(char)puVar13[uVar23 + 2] ^
               ((int)(char)puVar13[uVar23 + 1] ^
               ((int)(char)puVar13[uVar23] ^ auStack_ec[0]) * 0x1000193) * 0x1000193) * 0x1000193) *
               0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          auStack_ec[0] = ((int)(char)puVar13[uVar22 + uVar23] ^ auStack_ec[0]) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
      }
    }
    iStack_f0 = 2;
    if ((DAT_0f751ae0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ae0), iVar10 != 0)) {
      func_0x0e41ad70();
      func_0x0410844d(&DAT_0f751ae0);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,auStack_ec[0]);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,3);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e41f2d0;
    puStack_288 = &UNK_0e41f2e0;
    uStack_280 = 0;
    auStack_278 = ZEXT816(0);
    func_0x048b05a0(auStack_118 + 8,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    puStack_258 = (undefined8 *)uStack_100;
    uStack_250 = uStack_f8;
    uStack_268 = auStack_118._8_8_;
    uStack_260 = uStack_108;
    func_0x0e41ecc0(&uStack_2d0,&uStack_268,auStack_228);
    if (uStack_2b8._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_2b8) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      lVar25 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar25 != plStack_2c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar25 = *(long *)(piVar15 + 0xc);
      }
LAB_0e3c75df:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b8._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2c0 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_2b8) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c75df;
      }
      if (uStack_2b8._4_4_ == 0) {
        *(uint *)((long)plStack_2c0 + 0x18) = *(uint *)((long)plStack_2c0 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      func_0x0e41f050(&uStack_2d0,auStack_118);
    }
    uVar6 = uStack_e4;
    uVar5 = auStack_118._0_8_;
    if ((DAT_0f751ac0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ac0), iVar10 != 0)) {
      func_0x0e41ac60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
      func_0x0410844d(&DAT_0f751ac0);
    }
    plVar18 = (long *)(*(long *)(uVar5 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar5 + 0x20) - *(long *)(uVar5 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c7670;
      plVar18 = (long *)(*(long *)(uVar5 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar5 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4))
    ;
    if (plVar18 == *(long **)(uVar5 + 0x38)) {
LAB_0e3c7670:
      puVar12 = &DAT_0f751a40;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar26 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar26 != puVar3 && (*puVar26 != uVar6)); puVar26 = puVar26 + 0xe) {
    }
    if ((puVar26 == puVar3) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01304611),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    func_0x05d9c620(puVar26 + 2,auStack_ec,auStack_ec,&uStack_2d0);
    uStack_268 = auStack_118._0_8_;
    uStack_260 = auStack_118._8_8_;
    puStack_258 = (undefined8 *)uStack_108;
    uStack_250 = uStack_100;
    uStack_248 = uStack_f8;
    iStack_240 = iStack_f0;
    auStack_23c[0] = auStack_ec[0];
    uStack_234 = uStack_e4;
    uStack_230 = uStack_e0;
    func_0x048b0bc0(auStack_228);
    func_0x0e41e920(auStack_228,&UNK_0129ebfd,0xd);
    bVar27 = (auStack_200[0] & 1) != 0;
    if (bVar27) {
      puVar24 = puStack_1f0;
    }
    uVar22 = (ulong)(auStack_200[0] >> 1);
    if (bVar27) {
      uVar22 = auStack_200._8_8_;
    }
    if (uVar22 == 0) {
      auStack_23c[0] = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        auStack_23c[0] = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        auStack_23c[0] = 0x811c9dc5;
        uVar23 = 0;
        do {
          auStack_23c[0] =
               ((int)(char)puVar24[uVar23 + 3] ^
               ((int)(char)puVar24[uVar23 + 2] ^
               ((int)(char)puVar24[uVar23 + 1] ^
               ((int)(char)puVar24[uVar23] ^ auStack_23c[0]) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          auStack_23c[0] = ((int)(char)puVar24[uVar22 + uVar23] ^ auStack_23c[0]) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
      }
    }
    iStack_240 = 2;
    if ((DAT_0f751ae0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ae0), iVar10 != 0)) {
      func_0x0e41ad70();
      func_0x0410844d(&DAT_0f751ae0);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,auStack_23c[0]);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,3);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e41f330;
    puStack_288 = &UNK_0e41f340;
    uStack_280 = 0;
    auStack_278 = ZEXT816(0);
    func_0x048b05a0(&uStack_260,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    uStack_48 = uStack_250;
    uStack_40 = uStack_248;
    uStack_58 = uStack_260;
    uStack_50 = (ulong)puStack_258;
    func_0x0e41ecc0(&uStack_2d0,&uStack_58,auStack_228);
    if (uStack_2b8._4_4_ == 2) {
      piVar15 = *(int **)(plStack_2c0[0xf] + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != (int)uStack_2b8) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      plVar18 = *(long **)(piVar15 + 0xc);
      while (plVar18 != plStack_2c8) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar18 = *(long **)(piVar15 + 0xc);
      }
LAB_0e3c79ef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b8._4_4_ == 1) {
        piVar15 = *(int **)(plStack_2c0[0xf] + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != (int)uStack_2b8) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c79ef;
      }
      if (uStack_2b8._4_4_ == 0) {
        *(uint *)(plStack_2c0 + 3) = *(uint *)(plStack_2c0 + 3) | 0x90000;
      }
    }
    if ((char)uStack_230 == '\0') {
      func_0x0e41f050(&uStack_2d0,&uStack_268);
    }
    uVar6 = uStack_234;
    uVar22 = uStack_268;
    if ((DAT_0f751ac0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751ac0), iVar10 != 0)) {
      func_0x0e41ac60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751a40,0xf53dab8);
      func_0x0410844d(&DAT_0f751ac0);
    }
    plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f751a40 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c7a80;
      plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751a40 + 4)
            );
    if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c7a80:
      puVar12 = &DAT_0f751a40;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x28);
    for (puVar26 = *(uint **)(*(long *)(puVar12 + 0x68) + 0x20);
        (puVar26 != puVar3 && (*puVar26 != uVar6)); puVar26 = puVar26 + 0xe) {
    }
    if ((puVar26 == puVar3) &&
       (cVar9 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01304611),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    func_0x05d9c620(puVar26 + 2,auStack_23c,auStack_23c,&uStack_2d0);
    func_0x048b0bc0(auStack_228);
  }
  if ((DAT_0f7522a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7522a8), iVar10 != 0)) {
    func_0x0e438360();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f752228,0xf53dab8);
    func_0x0410844d(&DAT_0f7522a8);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f752228 + 4)) * 8);
  do {
    lVar25 = *plVar18;
    if (lVar25 == -1) goto LAB_0e3c7b80;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f752228 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e3c7b80:
    puVar12 = &DAT_0f752228;
    if (iRam000000000f752288 != -0x2b3da790) goto LAB_0e3c7bed;
LAB_0e3c7bab:
    lVar25 = *(long *)(puVar12 + 0x68);
    if (lVar25 == 0) goto LAB_0e3c7bed;
    bVar27 = (*(byte *)(lVar25 + 8) & 1) != 0;
    lVar20 = lVar25 + 9;
    if (bVar27) {
      lVar20 = *(long *)(lVar25 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar25 + 8) >> 1);
    if (bVar27) {
      uVar22 = *(ulong *)(lVar25 + 0x10);
    }
    func_0x0e438780(&uStack_158,param_1,lVar20,uVar22);
    uVar22 = uStack_158;
  }
  else {
    puVar12 = (undefined *)plVar18[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e3c7bab;
LAB_0e3c7bed:
    func_0x0e438780(&uStack_158,param_1,&UNK_01e19080,0x11);
    uVar22 = uStack_158;
  }
  uStack_158 = uVar22;
  if (cStack_128 == '\0') {
    if ((DAT_0f7522a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7522a8), iVar10 != 0)) {
      func_0x0e438360();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f752228,0xf53dab8);
      func_0x0410844d(&DAT_0f7522a8);
    }
    plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f752228 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c7c80;
      plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f752228 + 4)
            );
    if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c7c80:
      puVar12 = &DAT_0f752228;
    }
    else {
      puVar12 = (undefined *)plVar18[2];
    }
    for (pbVar16 = *(byte **)(uStack_158 + 0x50); pbVar16 != *(byte **)(uStack_158 + 0x58);
        pbVar16 = pbVar16 + 0x38) {
      bVar2 = *pbVar16;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e3c7d5a;
      }
      else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0e3c7d5a:
        if ((bVar2 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar16 + 0x10);
        }
        auVar28[0] = -(*pbVar21 == 0x5b);
        auVar28[1] = -(pbVar21[1] == 99);
        auVar28[2] = -(pbVar21[2] == 0x65);
        auVar28[3] = -(pbVar21[3] == 0x72);
        auVar28[4] = -(pbVar21[4] == 0x65);
        auVar28[5] = -(pbVar21[5] == 0x61);
        auVar28[6] = -(pbVar21[6] == 0x6c);
        auVar28[7] = -(pbVar21[7] == 0x3a);
        auVar28[8] = -(pbVar21[8] == 100);
        auVar28[9] = -(pbVar21[9] == 0x6f);
        auVar28[10] = -(pbVar21[10] == 99);
        auVar28[0xb] = -(pbVar21[0xb] == 0x75);
        auVar28[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar28[0xd] = -(pbVar21[0xd] == 0x65);
        auVar28[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar28[0xf] = -(pbVar21[0xf] == 0x74);
        auVar30[0] = -(pbVar21[10] == 99);
        auVar30[1] = -(pbVar21[0xb] == 0x75);
        auVar30[2] = -(pbVar21[0xc] == 0x6d);
        auVar30[3] = -(pbVar21[0xd] == 0x65);
        auVar30[4] = -(pbVar21[0xe] == 0x6e);
        auVar30[5] = -(pbVar21[0xf] == 0x74);
        auVar30[6] = -(pbVar21[0x10] == 0x61);
        auVar30[7] = -(pbVar21[0x11] == 0x74);
        auVar30[8] = -(pbVar21[0x12] == 0x69);
        auVar30[9] = -(pbVar21[0x13] == 0x6f);
        auVar30[10] = -(pbVar21[0x14] == 0x6e);
        auVar30[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar30[0xc] = -(pbVar21[0x16] == 0x74);
        auVar30[0xd] = -(pbVar21[0x17] == 0x61);
        auVar30[0xe] = -(pbVar21[0x18] == 0x67);
        auVar30[0xf] = -(pbVar21[0x19] == 0x5d);
        auVar30 = auVar30 & auVar28;
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar16 == *(byte **)(uStack_158 + 0x58)) {
LAB_0e3c7d88:
      uVar6 = uStack_12c;
      if (iStack_130 == 0) {
        if (((puVar12 == (undefined *)0x0) || (*(int *)(puVar12 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar12 + 0x68) == 0)) goto LAB_0e3c7e19;
        lVar25 = *(long *)(puVar12 + 0x68) + 0x38;
      }
      else {
        if (puVar12 == (undefined *)0x0) {
          puVar12 = (undefined *)func_0x048aead0(uVar22 + 0x18);
        }
        auStack_228._0_8_ = func_0x048b0c90(uVar22 + 0x18,puVar12,uVar6,1);
        if (auStack_228._0_8_ == 0) {
          auStack_228 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_228);
          if (auStack_228._0_8_ == 0) goto LAB_0e3c7e19;
        }
        if ((*(int *)(auStack_228._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_228._0_8_ + 0x58) != 0)) {
          lVar25 = *(long *)(auStack_228._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e3c7e19:
          lVar25 = 0;
        }
      }
      plStack_2c0 = (long *)&UNK_0488e0b0;
      uStack_2b8 = (code *)0x0;
      uStack_2b0 = CONCAT35(uStack_2b0._5_3_,0x48b5725f);
      uStack_2d0 = 0;
      auStack_228 = (undefined1  [16])0x0;
      auStack_210 = ZEXT816(0x488e0b0);
      auStack_200._0_5_ = 0x48b5725f;
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      uStack_268 = 0x21;
      uStack_260 = 0x1a;
      *(ulong *)((long)puVar17 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar17 + 0x12) = uVar5;
      uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar17 = _DAT_013bbacd;
      puVar17[1] = uVar5;
      *(undefined1 *)((long)puVar17 + 0x1a) = 0;
      puStack_258 = puVar17;
      lVar25 = FUN_048b5060(lVar25,&uStack_268);
      *(undefined8 *)(lVar25 + 0x20) = 0;
      if ((undefined1 *)(lVar25 + 0x20) == auStack_228) {
        pcVar19 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar25 + 0x40) != (code *)0x0) {
          puVar17 = (undefined8 *)(lVar25 + 0x28);
          (**(code **)(lVar25 + 0x40))(puVar17);
          if (auStack_200[4] != '\0') {
            if (auStack_200[4] == '\x02') {
              (*(code *)auStack_210._0_8_)(5,auStack_228 + 8,puVar17);
            }
            else {
              uVar5 = auStack_228._8_8_;
              auStack_228._8_8_ = 0;
              *puVar17 = uVar5;
            }
          }
        }
        *(undefined8 *)(lVar25 + 0x38) = auStack_210._0_8_;
        *(undefined8 *)(lVar25 + 0x40) = auStack_210._8_8_;
        *(undefined4 *)(lVar25 + 0x48) = auStack_200._0_4_;
        *(char *)(lVar25 + 0x4c) = auStack_200[4];
        pcVar19 = (code *)auStack_210._8_8_;
      }
      if ((uStack_268 & 1) != 0) {
        func_0x0412a280(puStack_258,uStack_268 & 0xfffffffffffffffe);
        pcVar19 = (code *)auStack_210._8_8_;
      }
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(auStack_228 + 8);
      }
      if (uStack_2b8 != (code *)0x0) {
        (*uStack_2b8)(&uStack_2d0);
      }
    }
    else {
      iVar10 = *(int *)(pbVar16 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ad8), iVar11 != 0)) {
        FUN_0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar10 == _DAT_0f550ac4) goto LAB_0e3c7d88;
    }
    uStack_234 = uStack_124;
    uStack_248 = uStack_138;
    iStack_240 = iStack_130;
    auStack_23c[0] = uStack_12c;
    puStack_258 = (undefined8 *)uStack_148;
    uStack_250 = uStack_140;
    uStack_268 = uStack_158;
    uStack_260 = uStack_150;
    if ((DAT_0f7522c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7522c8), iVar10 != 0)) {
      func_0x0e438470();
      func_0x0410844d(&DAT_0f7522c8);
    }
    uVar22 = uStack_268;
    iStack_240 = 1;
    auStack_23c[0] = 0xc241d6f1;
    if ((DAT_0f7522a8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7522a8), iVar10 != 0)) {
      func_0x0e438360();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f752228,0xf53dab8);
      func_0x0410844d(&DAT_0f7522a8);
    }
    plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f752228 + 4)) * 8);
    do {
      lVar25 = *plVar18;
      if (lVar25 == -1) goto LAB_0e3c8100;
      plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
    } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f752228 + 4)
            );
    if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c8100:
      auStack_228._0_8_ = &DAT_0f752228;
    }
    else {
      auStack_228._0_8_ = plVar18[2];
    }
    auStack_228._8_8_ = uVar22 + 0x18;
    FUN_0ed621a0(auStack_228,auStack_23c[0]);
    auVar28 = auStack_1e8;
    auStack_228._0_2_ = 1;
    auStack_228._8_8_ = &uStack_260;
    uStack_218 = auStack_23c[0];
    auStack_210 = (undefined1  [16])0x0;
    auStack_200 = (undefined1  [16])0x0;
    puStack_1f0 = (undefined1 *)0x0;
    auStack_1e8._1_8_ = 0x616d5f726f6c6f63;
    auStack_1e8[0] = 0x12;
    auStack_1e8._11_5_ = auVar28._11_5_;
    auStack_1e8._9_2_ = 0x70;
    auStack_1d0 = (undefined1  [16])0x0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    uStack_1a0 = 0x3f600000;
    func_0x048afb10(auStack_1d0,8);
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    auStack_198 = (undefined1  [16])0x0;
    uStack_168 = 0xff00;
    uStack_164 = uStack_164 & 0xffffff00;
    uStack_160 = uStack_160 & 0xffffff00;
    uStack_15c = 0;
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0f4b9dc8;
    uVar5 = auStack_210._0_8_;
    auStack_210._0_8_ = puVar17;
    if ((long *)uVar5 != (long *)0x0) {
      (**(code **)(*(long *)uVar5 + 8))();
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uStack_218);
    plStack_2c8 = (long *)0x0;
    plStack_2c0 = (long *)((ulong)plStack_2c0 & 0xffffffff00000000);
    uStack_2b8 = (code *)0x1;
    uStack_2b0 = 0;
    puStack_2a8 = &UNK_0e41ef30;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0e41aba0;
    puStack_290 = &UNK_0e439290;
    puStack_288 = &UNK_0e4393f0;
    uStack_280 = 0;
    auStack_278 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_228._8_8_,&uStack_2d0);
    uVar5 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_278._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    uVar5 = auStack_228._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,_DAT_0f550a0c);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar18 + 1) = (undefined1  [16])0x0;
    *plVar18 = (long)&UNK_0ef439d0;
    plStack_2c8 = plVar18 + 3;
    uVar7 = auStack_210._0_8_;
    uVar8 = auStack_210._8_8_;
    auStack_210 = (undefined1  [16])0x0;
    plVar18[3] = uVar7;
    plVar18[4] = uVar8;
    plVar18[7] = (long)puStack_1f0;
    plVar18[5] = auStack_200._0_8_;
    plVar18[6] = auStack_200._8_8_;
    auStack_200 = (undefined1  [16])0x0;
    puStack_1f0 = (undefined1 *)0x0;
    plVar18[10] = lStack_1d8;
    plVar18[8] = auStack_1e8._0_8_;
    plVar18[9] = auStack_1e8._8_8_;
    auStack_1e8 = (undefined1  [16])0x0;
    lStack_1d8 = 0;
    plVar18[0xb] = auStack_1d0._0_8_;
    plVar18[0xc] = auStack_1d0._8_8_;
    plVar18[0xd] = lStack_1c0;
    auStack_1d0 = (undefined1  [16])0x0;
    lStack_1c0 = 0;
    plVar18[0xe] = lStack_1b8;
    plVar18[0xf] = lStack_1b0;
    plVar18[0x10] = lStack_1a8;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    *(undefined4 *)(plVar18 + 0x11) = uStack_1a0;
    plVar18[0x12] = auStack_198._0_8_;
    plVar18[0x13] = auStack_198._8_8_;
    plVar18[0x14] = lStack_188;
    auStack_198 = (undefined1  [16])0x0;
    lStack_188 = 0;
    plVar18[0x17] = lStack_170;
    plVar18[0x15] = lStack_180;
    plVar18[0x16] = lStack_178;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    *(ulong *)((long)plVar18 + 0xc5) = CONCAT17(uStack_15c,CONCAT43(uStack_160,uStack_164._1_3_));
    plVar18[0x18] = CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
    auStack_118 = (undefined1  [16])0x0;
    plStack_2c0 = plVar18;
    FUN_048afd20(uVar5,&uStack_2d0);
    plVar18 = plStack_2c0;
    if (plStack_2c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2c0 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        FUN_0412c2d0(plVar18);
      }
    }
    uVar7 = auStack_118._8_8_;
    if ((long *)auStack_118._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_118._8_8_ + 8);
      lVar25 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)auStack_118._8_8_ + 0x10))(auStack_118._8_8_);
        FUN_0412c2d0(uVar7);
      }
    }
    lVar25 = *(long *)(uVar5 + 0x10);
    iVar10 = *(int *)(uVar5 + 0x1c);
    if (iVar10 == 2) {
      piVar15 = *(int **)(*(long *)(lVar25 + 0x78) + 0x60);
      iVar10 = *piVar15;
      while (iVar10 != *(int *)(uVar5 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar10 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != *(long *)(uVar5 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_0e3c85fa:
      piVar15[4] = piVar15[4] | auStack_228._0_4_ << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar15 = *(int **)(*(long *)(lVar25 + 0x78) + 0x48);
        iVar10 = *piVar15;
        while (iVar10 != *(int *)(uVar5 + 0x18)) {
          piVar15 = piVar15 + 0x1a;
          iVar10 = *piVar15;
        }
        goto LAB_0e3c85fa;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar25 + 0x18) = *(uint *)(lVar25 + 0x18) | auStack_228._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_210);
  }
  if ((DAT_0f751d18 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751d18), iVar10 != 0)) {
    func_0x0e426f90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751c98,0xf53dab8);
    func_0x0410844d(&DAT_0f751d18);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f751c98 + 4)) * 8);
  do {
    lVar25 = *plVar18;
    if (lVar25 == -1) goto LAB_0e3c8660;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751c98 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e3c8660:
    puVar12 = &DAT_0f751c98;
    if (iRam000000000f751cf8 != -0x2b3da790) goto LAB_0e3c86cd;
LAB_0e3c868b:
    lVar25 = *(long *)(puVar12 + 0x68);
    if (lVar25 == 0) goto LAB_0e3c86cd;
    bVar27 = (*(byte *)(lVar25 + 8) & 1) != 0;
    lVar20 = lVar25 + 9;
    if (bVar27) {
      lVar20 = *(long *)(lVar25 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar25 + 8) >> 1);
    if (bVar27) {
      uVar22 = *(ulong *)(lVar25 + 0x10);
    }
    func_0x0e439850(&uStack_158,param_1,lVar20,uVar22);
    uVar22 = uStack_158;
  }
  else {
    puVar12 = (undefined *)plVar18[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e3c868b;
LAB_0e3c86cd:
    func_0x0e439850(&uStack_158,param_1,&UNK_01e19060,0x1c);
    uVar22 = uStack_158;
  }
  if (cStack_128 != '\0') {
    return;
  }
  uStack_158 = uVar22;
  if ((DAT_0f751d18 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751d18), iVar10 != 0)) {
    func_0x0e426f90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751c98,0xf53dab8);
    func_0x0410844d(&DAT_0f751d18);
  }
  plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f751c98 + 4)) * 8);
  do {
    lVar25 = *plVar18;
    if (lVar25 == -1) goto LAB_0e3c8760;
    plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751c98 + 4));
  if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c8760:
    puVar12 = &DAT_0f751c98;
  }
  else {
    puVar12 = (undefined *)plVar18[2];
  }
  for (pbVar16 = *(byte **)(uStack_158 + 0x50); pbVar16 != *(byte **)(uStack_158 + 0x58);
      pbVar16 = pbVar16 + 0x38) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3c883a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0e3c883a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar16 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar16 + 0x10);
      }
      auVar29[0] = -(*pbVar21 == 0x5b);
      auVar29[1] = -(pbVar21[1] == 99);
      auVar29[2] = -(pbVar21[2] == 0x65);
      auVar29[3] = -(pbVar21[3] == 0x72);
      auVar29[4] = -(pbVar21[4] == 0x65);
      auVar29[5] = -(pbVar21[5] == 0x61);
      auVar29[6] = -(pbVar21[6] == 0x6c);
      auVar29[7] = -(pbVar21[7] == 0x3a);
      auVar29[8] = -(pbVar21[8] == 100);
      auVar29[9] = -(pbVar21[9] == 0x6f);
      auVar29[10] = -(pbVar21[10] == 99);
      auVar29[0xb] = -(pbVar21[0xb] == 0x75);
      auVar29[0xc] = -(pbVar21[0xc] == 0x6d);
      auVar29[0xd] = -(pbVar21[0xd] == 0x65);
      auVar29[0xe] = -(pbVar21[0xe] == 0x6e);
      auVar29[0xf] = -(pbVar21[0xf] == 0x74);
      auVar31[0] = -(pbVar21[10] == 99);
      auVar31[1] = -(pbVar21[0xb] == 0x75);
      auVar31[2] = -(pbVar21[0xc] == 0x6d);
      auVar31[3] = -(pbVar21[0xd] == 0x65);
      auVar31[4] = -(pbVar21[0xe] == 0x6e);
      auVar31[5] = -(pbVar21[0xf] == 0x74);
      auVar31[6] = -(pbVar21[0x10] == 0x61);
      auVar31[7] = -(pbVar21[0x11] == 0x74);
      auVar31[8] = -(pbVar21[0x12] == 0x69);
      auVar31[9] = -(pbVar21[0x13] == 0x6f);
      auVar31[10] = -(pbVar21[0x14] == 0x6e);
      auVar31[0xb] = -(pbVar21[0x15] == 0x5f);
      auVar31[0xc] = -(pbVar21[0x16] == 0x74);
      auVar31[0xd] = -(pbVar21[0x17] == 0x61);
      auVar31[0xe] = -(pbVar21[0x18] == 0x67);
      auVar31[0xf] = -(pbVar21[0x19] == 0x5d);
      auVar31 = auVar31 & auVar29;
      if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == *(byte **)(uStack_158 + 0x58)) {
LAB_0e3c8868:
    uVar6 = uStack_12c;
    if (iStack_130 == 0) {
      if (((puVar12 == (undefined *)0x0) || (*(int *)(puVar12 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar12 + 0x68) == 0)) goto LAB_0e3c88fb;
      lVar25 = *(long *)(puVar12 + 0x68) + 0x38;
    }
    else {
      if (puVar12 == (undefined *)0x0) {
        puVar12 = (undefined *)func_0x048aead0(uVar22 + 0x18,0,uStack_12c);
      }
      auStack_228._0_8_ = func_0x048b0c90(uVar22 + 0x18,puVar12,uVar6,1);
      if (auStack_228._0_8_ == 0) {
        auStack_228 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_228);
        if (auStack_228._0_8_ == 0) goto LAB_0e3c88fb;
      }
      if ((*(int *)(auStack_228._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_228._0_8_ + 0x58) != 0)) {
        lVar25 = *(long *)(auStack_228._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3c88fb:
        lVar25 = 0;
      }
    }
    plStack_2c0 = (long *)&UNK_0488e0b0;
    uStack_2b8 = (code *)0x0;
    uStack_2b0 = CONCAT35(uStack_2b0._5_3_,0x48b5725f);
    uStack_2d0 = 0;
    auStack_228 = (undefined1  [16])0x0;
    auStack_210 = ZEXT816(0x488e0b0);
    auStack_200._0_5_ = 0x48b5725f;
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    uStack_268 = 0x21;
    uStack_260 = 0x1a;
    *(ulong *)((long)puVar17 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar17 + 0x12) = uVar5;
    uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar17 = _DAT_013bbacd;
    puVar17[1] = uVar5;
    *(undefined1 *)((long)puVar17 + 0x1a) = 0;
    puStack_258 = puVar17;
    lVar25 = FUN_048b5060(lVar25,&uStack_268);
    *(undefined8 *)(lVar25 + 0x20) = 0;
    if ((undefined1 *)(lVar25 + 0x20) == auStack_228) {
      pcVar19 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar25 + 0x40) != (code *)0x0) {
        puVar17 = (undefined8 *)(lVar25 + 0x28);
        (**(code **)(lVar25 + 0x40))(puVar17);
        if (auStack_200[4] != '\0') {
          if (auStack_200[4] == '\x02') {
            (*(code *)auStack_210._0_8_)(5,auStack_228 + 8,puVar17);
          }
          else {
            uVar5 = auStack_228._8_8_;
            auStack_228._8_8_ = 0;
            *puVar17 = uVar5;
          }
        }
      }
      *(undefined8 *)(lVar25 + 0x38) = auStack_210._0_8_;
      *(undefined8 *)(lVar25 + 0x40) = auStack_210._8_8_;
      *(undefined4 *)(lVar25 + 0x48) = auStack_200._0_4_;
      *(char *)(lVar25 + 0x4c) = auStack_200[4];
      pcVar19 = (code *)auStack_210._8_8_;
    }
    if ((uStack_268 & 1) != 0) {
      func_0x0412a280(puStack_258,uStack_268 & 0xfffffffffffffffe);
      pcVar19 = (code *)auStack_210._8_8_;
    }
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(auStack_228 + 8);
    }
    if (uStack_2b8 != (code *)0x0) {
      (*uStack_2b8)(&uStack_2d0);
    }
  }
  else {
    iVar10 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ad8), iVar11 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar10 == _DAT_0f550ac4) goto LAB_0e3c8868;
  }
  uStack_e4 = uStack_124;
  uStack_f8 = uStack_138;
  iStack_f0 = iStack_130;
  auStack_ec[0] = uStack_12c;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_268 = uStack_158;
  uStack_260 = uStack_150;
  puStack_258 = (undefined8 *)uStack_148;
  uStack_250 = uStack_140;
  uStack_248 = uStack_138;
  iStack_240 = iStack_130;
  auStack_23c[0] = uStack_12c;
  uStack_234 = uStack_124;
  if ((DAT_0f751c80 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751c80), iVar10 != 0)) {
    func_0x0e426e50();
    func_0x0410844d(&DAT_0f751c80);
  }
  uVar22 = uStack_268;
  iStack_240 = 1;
  auStack_23c[0] = 0x3d7e6258;
  if ((DAT_0f751d18 == '\0') && (iVar10 = func_0x04108328(&DAT_0f751d18), iVar10 != 0)) {
    func_0x0e426f90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751c98,0xf53dab8);
    func_0x0410844d(&DAT_0f751d18);
  }
  plVar18 = (long *)(*(long *)(uVar22 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar22 + 0x20) - *(long *)(uVar22 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f751c98 + 4)) * 8);
  do {
    lVar25 = *plVar18;
    if (lVar25 == -1) goto LAB_0e3c8ba0;
    plVar18 = (long *)(*(long *)(uVar22 + 0x30) + lVar25 * 0x18);
  } while (*(uint *)(*(long *)(uVar22 + 0x30) + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f751c98 + 4));
  if (plVar18 == *(long **)(uVar22 + 0x38)) {
LAB_0e3c8ba0:
    auStack_228._0_8_ = &DAT_0f751c98;
  }
  else {
    auStack_228._0_8_ = plVar18[2];
  }
  auStack_228._8_8_ = uVar22 + 0x18;
  FUN_0ed621a0(auStack_228,auStack_23c[0]);
  auStack_228._0_8_ = auStack_228._2_8_ << 0x10;
  auStack_228._8_8_ = &uStack_260;
  uStack_218 = auStack_23c[0];
  auStack_210 = (undefined1  [16])0x0;
  auStack_200 = (undefined1  [16])0x0;
  puStack_1f0 = (undefined1 *)0x0;
  auStack_1e8._0_7_ = 0x726f6c6f630a;
  auStack_1d0 = (undefined1  [16])0x0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0x3f600000;
  func_0x048afb10(auStack_1d0,8);
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  auStack_198 = (undefined1  [16])0x0;
  uStack_168 = 0xff00;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_160 = uStack_160 & 0xffffff00;
  uStack_15c = 0;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f4ba7c0;
  uVar5 = auStack_210._0_8_;
  auStack_210._0_8_ = puVar17;
  if ((long *)uVar5 != (long *)0x0) {
    (**(code **)(*(long *)uVar5 + 8))();
  }
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uStack_218);
  plStack_2c8 = (long *)0x0;
  plStack_2c0 = (long *)((ulong)plStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = (code *)0x1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_0e43eb10;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &UNK_0e43e740;
  puStack_290 = &UNK_0e43ebd0;
  puStack_288 = &UNK_0e43ed40;
  uStack_280 = 0;
  auStack_278 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_228._8_8_,&uStack_2d0);
  uVar5 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_278._8_8_ + 8);
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  uVar5 = auStack_228._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,_DAT_0f550a0c);
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar18 + 1) = (undefined1  [16])0x0;
  *plVar18 = (long)&UNK_0ef439d0;
  plStack_2c8 = plVar18 + 3;
  uVar7 = auStack_210._0_8_;
  uVar8 = auStack_210._8_8_;
  auStack_210 = (undefined1  [16])0x0;
  plVar18[3] = uVar7;
  plVar18[4] = uVar8;
  plVar18[7] = (long)puStack_1f0;
  plVar18[5] = auStack_200._0_8_;
  plVar18[6] = auStack_200._8_8_;
  auStack_200 = (undefined1  [16])0x0;
  puStack_1f0 = (undefined1 *)0x0;
  plVar18[10] = lStack_1d8;
  plVar18[8] = auStack_1e8._0_8_;
  plVar18[9] = auStack_1e8._8_8_;
  auStack_1e8 = (undefined1  [16])0x0;
  lStack_1d8 = 0;
  plVar18[0xb] = auStack_1d0._0_8_;
  plVar18[0xc] = auStack_1d0._8_8_;
  plVar18[0xd] = lStack_1c0;
  auStack_1d0 = (undefined1  [16])0x0;
  lStack_1c0 = 0;
  plVar18[0xe] = lStack_1b8;
  plVar18[0xf] = lStack_1b0;
  plVar18[0x10] = lStack_1a8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  *(undefined4 *)(plVar18 + 0x11) = uStack_1a0;
  plVar18[0x12] = auStack_198._0_8_;
  plVar18[0x13] = auStack_198._8_8_;
  plVar18[0x14] = lStack_188;
  auStack_198 = (undefined1  [16])0x0;
  lStack_188 = 0;
  plVar18[0x17] = lStack_170;
  plVar18[0x15] = lStack_180;
  plVar18[0x16] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(ulong *)((long)plVar18 + 0xc5) = CONCAT17(uStack_15c,CONCAT43(uStack_160,uStack_164._1_3_));
  plVar18[0x18] = CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
  auStack_d8 = (undefined1  [16])0x0;
  plStack_2c0 = plVar18;
  FUN_048afd20(uVar5,&uStack_2d0);
  plVar18 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2c0 + 1;
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      FUN_0412c2d0(plVar18);
    }
  }
  uVar7 = auStack_d8._8_8_;
  if ((long *)auStack_d8._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_d8._8_8_ + 8);
    lVar25 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*(long *)auStack_d8._8_8_ + 0x10))(auStack_d8._8_8_);
      FUN_0412c2d0(uVar7);
    }
  }
  lVar25 = *(long *)(uVar5 + 0x10);
  iVar10 = *(int *)(uVar5 + 0x1c);
  if (iVar10 == 2) {
    piVar15 = *(int **)(*(long *)(lVar25 + 0x78) + 0x60);
    iVar10 = *piVar15;
    while (iVar10 != *(int *)(uVar5 + 0x18)) {
      piVar15 = piVar15 + 0x16;
      iVar10 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != *(long *)(uVar5 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
    }
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 0) {
        *(uint *)(lVar25 + 0x18) = *(uint *)(lVar25 + 0x18) | auStack_228._0_4_ << 0x10;
      }
      goto LAB_0e3c908d;
    }
    piVar15 = *(int **)(*(long *)(lVar25 + 0x78) + 0x48);
    iVar10 = *piVar15;
    while (iVar10 != *(int *)(uVar5 + 0x18)) {
      piVar15 = piVar15 + 0x1a;
      iVar10 = *piVar15;
    }
  }
  piVar15[4] = piVar15[4] | auStack_228._0_4_ << 0x10;
LAB_0e3c908d:
  func_0x048b0bc0(auStack_210);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
