/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0bf4f0 (ELF vaddr 0xbfbf4f0)
 * Label: caller-of-callee
 * Body:  [[0c0bf4f0, 0c0c0c4c] [0c0c0c50, 0c0c0c91] [0c0c0ca0, 0c0c1ad1] [0c0c1ae0, 0c0c20c5]]
 * Ghidra: FUN_0c0bf4f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0bf4f0(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined1 auVar8 [8];
  uint uVar9;
  long **pplVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  code *pcVar20;
  long *plVar21;
  long lVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint *puVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined4 uStack_278;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [8];
  long *plStack_250;
  long *plStack_248;
  code *pcStack_240;
  code *pcStack_238;
  undefined4 uStack_230;
  uint uStack_22c;
  char cStack_228;
  uint uStack_224;
  uint uStack_220;
  long *plStack_218;
  long **pplStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined2 uStack_156;
  uint uStack_154;
  uint uStack_150;
  undefined1 uStack_14c;
  ulong uStack_148;
  ulong uStack_140;
  long *plStack_138;
  char cStack_130;
  long *plStack_128;
  long *plStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  ulong *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined4 uStack_b0;
  uint auStack_ac [2];
  undefined8 uStack_a4;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  long *plStack_58;
  long *plStack_50;
  code *pcStack_48;
  code *pcStack_40;
  
  if ((DAT_0f6d5880 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d5880), iVar12 != 0)) {
    func_0x0c0ff3e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5800,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5880);
  }
  puVar1 = param_1 + 3;
  plVar21 = (long *)(param_1[3] +
                    (ulong)((int)(param_1[4] - param_1[3] >> 3) - 1U & *(uint *)(_DAT_0f6d5800 + 4))
                    * 8);
  do {
    lVar18 = *plVar21;
    if (lVar18 == -1) goto LAB_0c0bf570;
    plVar21 = (long *)(param_1[6] + lVar18 * 0x18);
  } while (*(uint *)(param_1[6] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d5800 + 4));
  if (plVar21 == (long *)param_1[7]) {
LAB_0c0bf570:
    puVar14 = &DAT_0f6d5800;
    if (iRam000000000f6d5860 != -0x2b3da790) goto LAB_0c0bf5cb;
LAB_0c0bf59b:
    lVar18 = *(long *)(puVar14 + 0x68);
    if (lVar18 == 0) goto LAB_0c0bf5cb;
    bVar30 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar22 = lVar18 + 9;
    if (bVar30) {
      lVar22 = *(long *)(lVar18 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar30) {
      uVar25 = *(ulong *)(lVar18 + 0x10);
    }
  }
  else {
    puVar14 = (undefined *)plVar21[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c0bf59b;
LAB_0c0bf5cb:
    lVar22 = 0;
    uVar25 = 0;
  }
  func_0x0c0ff820(auStack_258,param_1,lVar22,uVar25);
  uStack_224 = uStack_224 & 0xffffff00;
  uStack_220 = uStack_220 & 0xffffff00;
  if (cStack_228 == '\0') {
    func_0x0c1030a0(&plStack_218,&UNK_0126766b,6);
    puVar23 = (undefined1 *)((ulong)uStack_1f0 >> 1 & 0x7f);
    lVar18 = (long)&uStack_1f0 + 1;
    lVar22 = lVar18;
    if (((ulong)uStack_1f0 & 1) != 0) {
      puVar23 = puStack_1e8;
      lVar22 = lStack_1e0;
    }
    if (puVar23 == (undefined1 *)0x0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar25 = (ulong)((uint)puVar23 & 3);
      if (puVar23 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar22 + 3 + uVar27) ^
                       ((int)*(char *)(lVar22 + 2 + uVar27) ^
                       ((int)*(char *)(lVar22 + 1 + uVar27) ^
                       ((int)*(char *)(lVar22 + uVar27) ^ uStack_22c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)puVar23 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          uStack_22c = ((int)*(char *)(lVar22 + uVar27 + uVar26) ^ uStack_22c) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
      }
    }
    uStack_230 = 2;
    if ((DAT_0f6d58a0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58a0), iVar12 != 0)) {
      func_0x0c0ff4f0();
      func_0x0410844d(&DAT_0f6d58a0);
    }
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,uStack_22c);
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)CONCAT44(plStack_2b8._4_4_,3);
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_0c103680;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0c0ff320;
    puStack_288 = &UNK_0c103740;
    puStack_280 = &UNK_0c103750;
    uStack_278 = 0;
    auStack_270._0_16_ = ZEXT816(0);
    puStack_e0 = param_3;
    FUN_048b05a0(&plStack_250,&plStack_2c8);
    uVar5 = auStack_270._8_8_;
    if ((long *)auStack_270._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_270._8_8_ + 8);
      lVar22 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_118 = pcStack_240;
    pcStack_110 = pcStack_238;
    plStack_128 = plStack_250;
    plStack_120 = plStack_248;
    func_0x0c103410(&plStack_2c8,&plStack_128,&plStack_218);
    if (uStack_2b0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x60);
      iVar12 = *piVar15;
      while (iVar12 != (int)uStack_2b0) {
        piVar15 = piVar15 + 0x16;
        iVar12 = *piVar15;
      }
      lVar22 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar22 != plStack_2c0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar22 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0bf86f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x48);
        iVar12 = *piVar15;
        while (iVar12 != (int)uStack_2b0) {
          piVar15 = piVar15 + 0x1a;
          iVar12 = *piVar15;
        }
        goto LAB_0c0bf86f;
      }
      if (uStack_2b0._4_4_ == 0) {
        *(uint *)((long)plStack_2b8 + 0x18) = *(uint *)((long)plStack_2b8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_220 == '\0') {
      func_0x0c1037a0(&plStack_2c8,auStack_258);
    }
    uVar9 = uStack_224;
    auVar8 = auStack_258;
    if ((DAT_0f6d5880 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d5880), iVar12 != 0)) {
      func_0x0c0ff3e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5800,0xf53dab8);
      func_0x0410844d(&DAT_0f6d5880);
    }
    plVar21 = (long *)(*(long *)((long)auVar8 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar8 + 0x20) -
                                           *(long *)((long)auVar8 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f6d5800 + 4)) * 8);
    do {
      lVar22 = *plVar21;
      if (lVar22 == -1) goto LAB_0c0bf900;
      plVar21 = (long *)(*(long *)((long)auVar8 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar8 + 0x30) + 8 + lVar22 * 0x18) !=
             *(uint *)(_DAT_0f6d5800 + 4));
    if (plVar21 == *(long **)((long)auVar8 + 0x38)) {
LAB_0c0bf900:
      puVar14 = &DAT_0f6d5800;
    }
    else {
      puVar14 = (undefined *)plVar21[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar14 + 0x68) + 0x28);
    for (puVar29 = *(uint **)(*(long *)(puVar14 + 0x68) + 0x20);
        (puVar29 != puVar3 && (*puVar29 != uVar9)); puVar29 = puVar29 + 0xe) {
    }
    if ((puVar29 == puVar3) &&
       (cVar11 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0124e245),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_2c8 = (long *)((ulong)plStack_2c8 & 0xffffffffffffff00);
    func_0x05d9c620(puVar29 + 2,&uStack_22c,&uStack_22c,&plStack_2c8);
    uStack_a4 = CONCAT44(uStack_220,uStack_224);
    plStack_d8 = (long *)auStack_258;
    plStack_d0 = plStack_250;
    plStack_c8 = plStack_248;
    pcStack_c0 = pcStack_240;
    pcStack_b8 = pcStack_238;
    uStack_b0 = uStack_230;
    auStack_ac[0] = uStack_22c;
    func_0x048b0bc0(&plStack_218);
    func_0x0c1030a0(&plStack_218,&UNK_0124e1e8,8);
    puVar23 = (undefined1 *)((ulong)uStack_1f0 >> 1 & 0x7f);
    lVar22 = lVar18;
    if (((ulong)uStack_1f0 & 1) != 0) {
      puVar23 = puStack_1e8;
      lVar22 = lStack_1e0;
    }
    if (puVar23 == (undefined1 *)0x0) {
      auStack_ac[0] = 0x811c9dc5;
    }
    else {
      uVar25 = (ulong)((uint)puVar23 & 3);
      if (puVar23 < 4) {
        auStack_ac[0] = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        auStack_ac[0] = 0x811c9dc5;
        uVar27 = 0;
        do {
          auStack_ac[0] =
               ((int)*(char *)(lVar22 + 3 + uVar27) ^
               ((int)*(char *)(lVar22 + 2 + uVar27) ^
               ((int)*(char *)(lVar22 + 1 + uVar27) ^
               ((int)*(char *)(lVar22 + uVar27) ^ auStack_ac[0]) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)puVar23 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          auStack_ac[0] = ((int)*(char *)(lVar22 + uVar27 + uVar26) ^ auStack_ac[0]) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f6d58a0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58a0), iVar12 != 0)) {
      func_0x0c0ff4f0();
      func_0x0410844d(&DAT_0f6d58a0);
    }
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,auStack_ac[0]);
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)CONCAT44(plStack_2b8._4_4_,3);
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_0c103680;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0c0ff320;
    puStack_288 = &UNK_0c103960;
    puStack_280 = &UNK_0c103970;
    uStack_278 = 0;
    auStack_270._0_16_ = ZEXT816(0);
    FUN_048b05a0(&plStack_d0,&plStack_2c8);
    uVar5 = auStack_270._8_8_;
    if ((long *)auStack_270._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_270._8_8_ + 8);
      lVar22 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_118 = pcStack_c0;
    pcStack_110 = pcStack_b8;
    plStack_128 = plStack_d0;
    plStack_120 = plStack_c8;
    func_0x0c103410(&plStack_2c8,&plStack_128,&plStack_218);
    if (uStack_2b0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x60);
      iVar12 = *piVar15;
      while (iVar12 != (int)uStack_2b0) {
        piVar15 = piVar15 + 0x16;
        iVar12 = *piVar15;
      }
      lVar22 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar22 != plStack_2c0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar22 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0bfc7f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x48);
        iVar12 = *piVar15;
        while (iVar12 != (int)uStack_2b0) {
          piVar15 = piVar15 + 0x1a;
          iVar12 = *piVar15;
        }
        goto LAB_0c0bfc7f;
      }
      if (uStack_2b0._4_4_ == 0) {
        *(uint *)((long)plStack_2b8 + 0x18) = *(uint *)((long)plStack_2b8 + 0x18) | 0x90000;
      }
    }
    if (uStack_a4._4_1_ == '\0') {
      func_0x0c1037a0(&plStack_2c8,&plStack_d8);
    }
    plVar21 = plStack_d8;
    iVar12 = (int)uStack_a4;
    if ((DAT_0f6d5880 == '\0') && (iVar13 = func_0x04108328(&DAT_0f6d5880), iVar13 != 0)) {
      func_0x0c0ff3e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5800,0xf53dab8);
      func_0x0410844d(&DAT_0f6d5880);
    }
    plVar17 = (long *)(plVar21[3] +
                      (ulong)((int)((ulong)(plVar21[4] - plVar21[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f6d5800 + 4)) * 8);
    do {
      lVar22 = *plVar17;
      if (lVar22 == -1) goto LAB_0c0bfd10;
      plVar17 = (long *)(plVar21[6] + lVar22 * 0x18);
    } while (*(uint *)(plVar21[6] + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d5800 + 4));
    if (plVar17 == (long *)plVar21[7]) {
LAB_0c0bfd10:
      puVar14 = &DAT_0f6d5800;
    }
    else {
      puVar14 = (undefined *)plVar17[2];
    }
    piVar4 = *(int **)(*(long *)(puVar14 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar14 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar12)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar11 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0124e245),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_2c8 = (long *)((ulong)plStack_2c8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,auStack_ac,auStack_ac,&plStack_2c8);
    plStack_98 = plStack_d8;
    plStack_90 = plStack_d0;
    plStack_88 = plStack_c8;
    pcStack_80 = pcStack_c0;
    pcStack_78 = pcStack_b8;
    uStack_70 = uStack_b0;
    uStack_6c = auStack_ac[0];
    iStack_64 = (int)uStack_a4;
    uStack_60 = (undefined4)((ulong)uStack_a4 >> 0x20);
    func_0x048b0bc0(&plStack_218);
    func_0x0c1030a0(&plStack_218,&UNK_013bbc1f,4);
    puVar23 = (undefined1 *)((ulong)uStack_1f0 >> 1 & 0x7f);
    lVar22 = lVar18;
    if (((ulong)uStack_1f0 & 1) != 0) {
      puVar23 = puStack_1e8;
      lVar22 = lStack_1e0;
    }
    if (puVar23 == (undefined1 *)0x0) {
      uStack_6c = 0x811c9dc5;
    }
    else {
      uVar25 = (ulong)((uint)puVar23 & 3);
      if (puVar23 < 4) {
        uStack_6c = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_6c = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar22 + 3 + uVar27) ^
                      ((int)*(char *)(lVar22 + 2 + uVar27) ^
                      ((int)*(char *)(lVar22 + 1 + uVar27) ^
                      ((int)*(char *)(lVar22 + uVar27) ^ uStack_6c) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)puVar23 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar22 + uVar27 + uVar26) ^ uStack_6c) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
      }
    }
    uStack_70 = 2;
    if ((DAT_0f6d58a0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58a0), iVar12 != 0)) {
      func_0x0c0ff4f0();
      func_0x0410844d(&DAT_0f6d58a0);
    }
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,uStack_6c);
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)CONCAT44(plStack_2b8._4_4_,3);
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_0c103680;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0c0ff320;
    puStack_288 = &UNK_0c1039c0;
    puStack_280 = &UNK_0c1039d0;
    uStack_278 = 0;
    auStack_270._0_16_ = ZEXT816(0);
    FUN_048b05a0(&plStack_90,&plStack_2c8);
    uVar5 = auStack_270._8_8_;
    if ((long *)auStack_270._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_270._8_8_ + 8);
      lVar22 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_118 = pcStack_80;
    pcStack_110 = pcStack_78;
    plStack_128 = plStack_90;
    plStack_120 = plStack_88;
    func_0x0c103410(&plStack_2c8,&plStack_128,&plStack_218);
    if (uStack_2b0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x60);
      iVar12 = *piVar15;
      while (iVar12 != (int)uStack_2b0) {
        piVar15 = piVar15 + 0x16;
        iVar12 = *piVar15;
      }
      lVar22 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar22 != plStack_2c0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar22 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0c008f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x48);
        iVar12 = *piVar15;
        while (iVar12 != (int)uStack_2b0) {
          piVar15 = piVar15 + 0x1a;
          iVar12 = *piVar15;
        }
        goto LAB_0c0c008f;
      }
      if (uStack_2b0._4_4_ == 0) {
        *(uint *)((long)plStack_2b8 + 0x18) = *(uint *)((long)plStack_2b8 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_60 == '\0') {
      func_0x0c1037a0(&plStack_2c8,&plStack_98);
    }
    iVar12 = iStack_64;
    plVar21 = plStack_98;
    if ((DAT_0f6d5880 == '\0') && (iVar13 = func_0x04108328(&DAT_0f6d5880), iVar13 != 0)) {
      func_0x0c0ff3e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5800,0xf53dab8);
      func_0x0410844d(&DAT_0f6d5880);
    }
    plVar17 = (long *)(plVar21[3] +
                      (ulong)((int)((ulong)(plVar21[4] - plVar21[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f6d5800 + 4)) * 8);
    do {
      lVar22 = *plVar17;
      if (lVar22 == -1) goto LAB_0c0c0120;
      plVar17 = (long *)(plVar21[6] + lVar22 * 0x18);
    } while (*(uint *)(plVar21[6] + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d5800 + 4));
    if (plVar17 == (long *)plVar21[7]) {
LAB_0c0c0120:
      puVar14 = &DAT_0f6d5800;
    }
    else {
      puVar14 = (undefined *)plVar17[2];
    }
    piVar4 = *(int **)(*(long *)(puVar14 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar14 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar12)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar11 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0124e245),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_2c8 = (long *)((ulong)plStack_2c8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,&uStack_6c,&uStack_6c,&plStack_2c8);
    plStack_128 = plStack_98;
    plStack_120 = plStack_90;
    pcStack_118 = (code *)plStack_88;
    pcStack_110 = pcStack_80;
    pcStack_108 = pcStack_78;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    iStack_f4 = iStack_64;
    uStack_f0 = uStack_60;
    func_0x048b0bc0(&plStack_218);
    func_0x0c1030a0(&plStack_218,&UNK_012e75e7,4);
    puVar23 = (undefined1 *)(ulong)((byte)uStack_1f0 >> 1);
    if (((byte)uStack_1f0 & 1) != 0) {
      puVar23 = puStack_1e8;
      lVar18 = lStack_1e0;
    }
    if (puVar23 == (undefined1 *)0x0) {
      uStack_fc = 0x811c9dc5;
    }
    else {
      uVar25 = (ulong)((uint)puVar23 & 3);
      if (puVar23 < 4) {
        uStack_fc = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uStack_fc = 0x811c9dc5;
        uVar27 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar18 + 3 + uVar27) ^
                      ((int)*(char *)(lVar18 + 2 + uVar27) ^
                      ((int)*(char *)(lVar18 + 1 + uVar27) ^
                      ((int)*(char *)(lVar18 + uVar27) ^ uStack_fc) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)puVar23 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar18 + uVar27 + uVar26) ^ uStack_fc) * 0x1000193;
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
      }
    }
    uStack_100 = 2;
    if ((DAT_0f6d58a0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58a0), iVar12 != 0)) {
      func_0x0c0ff4f0();
      func_0x0410844d(&DAT_0f6d58a0);
    }
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,uStack_fc);
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)CONCAT44(plStack_2b8._4_4_,3);
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_0c103680;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0c0ff320;
    puStack_288 = &UNK_0c103a20;
    puStack_280 = &UNK_0c103a30;
    uStack_278 = 0;
    auStack_270._0_16_ = ZEXT816(0);
    FUN_048b05a0(&plStack_120,&plStack_2c8);
    uVar5 = auStack_270._8_8_;
    if ((long *)auStack_270._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_270._8_8_ + 8);
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    pcStack_48 = pcStack_110;
    pcStack_40 = pcStack_108;
    plStack_58 = plStack_120;
    plStack_50 = (long *)pcStack_118;
    func_0x0c103410(&plStack_2c8,&plStack_58,&plStack_218);
    if (uStack_2b0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x60);
      iVar12 = *piVar15;
      while (iVar12 != (int)uStack_2b0) {
        piVar15 = piVar15 + 0x16;
        iVar12 = *piVar15;
      }
      plVar21 = *(long **)(piVar15 + 0xc);
      while (plVar21 != plStack_2c0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar21 = *(long **)(piVar15 + 0xc);
      }
LAB_0c0c049f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_2b0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_2b8 + 0x78) + 0x48);
        iVar12 = *piVar15;
        while (iVar12 != (int)uStack_2b0) {
          piVar15 = piVar15 + 0x1a;
          iVar12 = *piVar15;
        }
        goto LAB_0c0c049f;
      }
      if (uStack_2b0._4_4_ == 0) {
        *(uint *)((long)plStack_2b8 + 0x18U) = *(uint *)((long)plStack_2b8 + 0x18U) | 0x90000;
      }
    }
    if ((char)uStack_f0 == '\0') {
      func_0x0c1037a0(&plStack_2c8,&plStack_128);
    }
    iVar12 = iStack_f4;
    plVar21 = plStack_128;
    if ((DAT_0f6d5880 == '\0') && (iVar13 = func_0x04108328(&DAT_0f6d5880), iVar13 != 0)) {
      func_0x0c0ff3e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5800,0xf53dab8);
      func_0x0410844d(&DAT_0f6d5880);
    }
    param_3 = puStack_e0;
    plVar17 = (long *)(plVar21[3] +
                      (ulong)((int)((ulong)(plVar21[4] - plVar21[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f6d5800 + 4)) * 8);
    do {
      lVar18 = *plVar17;
      if (lVar18 == -1) goto LAB_0c0c0538;
      plVar17 = (long *)(plVar21[6] + lVar18 * 0x18);
    } while (*(uint *)(plVar21[6] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d5800 + 4));
    if (plVar17 == (long *)plVar21[7]) {
LAB_0c0c0538:
      puVar14 = &DAT_0f6d5800;
    }
    else {
      puVar14 = (undefined *)plVar17[2];
    }
    piVar4 = *(int **)(*(long *)(puVar14 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar14 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar12)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar11 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0124e245),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_2c8 = (long *)((ulong)plStack_2c8 & 0xffffffffffffff00);
    func_0x05d9c620(piVar15 + 2,&uStack_fc,&uStack_fc,&plStack_2c8);
    func_0x048b0bc0(&plStack_218);
  }
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x78,0);
  }
  uVar5 = _UNK_01489278;
  puVar16[0xc] = _DAT_01489270;
  puVar16[0xd] = uVar5;
  uVar5 = _UNK_01489268;
  puVar16[10] = _DAT_01489260;
  puVar16[0xb] = uVar5;
  uVar5 = _UNK_01489258;
  puVar16[8] = _DAT_01489250;
  puVar16[9] = uVar5;
  uVar5 = _UNK_01489248;
  puVar16[6] = _DAT_01489240;
  puVar16[7] = uVar5;
  uVar5 = _UNK_01489238;
  puVar16[4] = _DAT_01489230;
  puVar16[5] = uVar5;
  uVar5 = _UNK_01489228;
  puVar16[2] = _DAT_01489220;
  puVar16[3] = uVar5;
  uVar5 = _UNK_01489218;
  *puVar16 = _DAT_01489210;
  puVar16[1] = uVar5;
  *(undefined2 *)(puVar16 + 0xe) = 0x2e6d;
  *(undefined1 *)((long)puVar16 + 0x72) = 0;
  uStack_148 = uStack_148 & 0xffffffffffffff00;
  cStack_130 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_148 = *param_3;
    uStack_140 = 0;
    uVar25 = param_3[1];
    puStack_e0 = param_1;
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar22 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar22 + 9;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar21 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar21 = lVar22;
      func_0x0eee2f00(plVar21 + 1,uVar25 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar21 + lVar22 + 8) = 0;
      uVar25 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plStack_138 = (long *)0x0;
    plVar21 = (long *)param_3[2];
    uStack_140 = uVar25;
    if (((ulong)plVar21 & 0x80000000000000) != 0) {
      lVar22 = *(long *)(((ulong)plVar21 & 0xff00ffffffffffff) - 8);
      lVar18 = lVar22 + 9;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar17 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar17 = lVar22;
      func_0x0eee2f00(plVar17 + 1,(ulong)plVar21 & 0xff00ffffffffffff,lVar22);
      *(undefined1 *)((long)plVar17 + lVar22 + 8) = 0;
      plVar21 = (long *)((ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    cStack_130 = '\x01';
    param_1 = puStack_e0;
    plStack_138 = plVar21;
  }
  lVar18 = func_0x0c068ba0(puVar1);
  if ((*(int *)(lVar18 + 0x60) == -0x2b3da790) && (lVar18 = *(long *)(lVar18 + 0x68), lVar18 != 0))
  {
    bVar30 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar22 = lVar18 + 9;
    if (bVar30) {
      lVar22 = *(long *)(lVar18 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar30) {
      uVar25 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x0c069d90(auStack_258,param_1,lVar22,uVar25,1);
  }
  else {
    func_0x0c069d90(auStack_258,param_1,0,0,1);
  }
  if (cStack_228 == '\0') {
    if ((DAT_0f6d4f50 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d4f50), iVar12 != 0)) {
      func_0x0ee25020(0xf6d4f28,&DAT_013eefd3);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4f28,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4f50);
    }
    uVar25 = (ulong)(DAT_0f6d4f30 >> 1);
    lVar18 = 0xf6d4f31;
    if ((DAT_0f6d4f30 & 1) != 0) {
      uVar25 = _DAT_0f6d4f38;
      lVar18 = _DAT_0f6d4f40;
    }
    func_0x0c06a780(&plStack_218,auStack_258,lVar18,uVar25,0);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f351760;
    if (uStack_200 != (long *)0x0) {
      lVar18 = *uStack_200;
      uStack_200 = plVar21;
      (**(code **)(lVar18 + 8))();
      plVar21 = uStack_200;
    }
    uStack_200 = plVar21;
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,plStack_208._0_4_);
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)((ulong)plStack_2b8 & 0xffffffff00000000);
    uStack_2b0 = 1;
    uStack_2a8 = 0;
    uStack_2a0 = &UNK_0c1052b0;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0c104f20;
    puStack_288 = &UNK_0c105370;
    puStack_280 = &UNK_0c105610;
    uStack_278 = 0;
    auStack_270._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(pplStack_210,&plStack_2c8);
    uVar5 = auStack_270._8_8_;
    if ((long *)auStack_270._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_270._8_8_ + 8);
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    iVar12 = *(int *)((long)pplStack_210 + 0x1c);
    if (iVar12 == 2) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)pplStack_210 + 0x10) + 0x78) + 0x60);
      iVar12 = *piVar15;
      while (iVar12 != *(int *)((long)pplStack_210 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar12 = *piVar15;
      }
      lVar18 = *(long *)(piVar15 + 0xc);
      while (lVar18 != *(long *)((long)pplStack_210 + 8)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar18 = *(long *)(piVar15 + 0xc);
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar12 == 1) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)pplStack_210 + 0x10) + 0x78) + 0x48);
      iVar12 = *piVar15;
      while (iVar12 != *(int *)((long)pplStack_210 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar12 = *piVar15;
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar12 == 0) {
      puVar29 = (uint *)(*(long *)((long)pplStack_210 + 0x10) + 0x18);
      *puVar29 = *puVar29 | 0x40000;
    }
    func_0x0c06aa10(&plStack_218);
    func_0x048b0bc0(&uStack_200);
  }
  if ((DAT_0f6d4f50 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d4f50), iVar12 != 0)) {
    func_0x0ee25020(0xf6d4f28,&DAT_013eefd3);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4f28,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4f50);
  }
  uVar25 = (ulong)(DAT_0f6d4f30 >> 1);
  lVar18 = 0xf6d4f31;
  if ((DAT_0f6d4f30 & 1) != 0) {
    uVar25 = _DAT_0f6d4f38;
    lVar18 = _DAT_0f6d4f40;
  }
  if ((DAT_0f6d5968 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d5968), iVar12 != 0)) {
    func_0x0c104890();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d58e8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5968);
  }
  plVar21 = (long *)(param_1[3] +
                    (ulong)((int)(param_1[4] - param_1[3] >> 3) - 1U & *(uint *)(_DAT_0f6d58e8 + 4))
                    * 8);
  do {
    lVar22 = *plVar21;
    if (lVar22 == -1) goto LAB_0c0c0b51;
    plVar21 = (long *)(param_1[6] + lVar22 * 0x18);
  } while (*(uint *)(param_1[6] + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d58e8 + 4));
  if (plVar21 == (long *)param_1[7]) {
LAB_0c0c0b51:
    puVar14 = &DAT_0f6d58e8;
    iVar12 = iRam000000000f6d5948;
  }
  else {
    puVar14 = (undefined *)plVar21[2];
    iVar12 = *(int *)(puVar14 + 0x60);
  }
  if ((iVar12 == -0x2b3da790) && (lVar22 = *(long *)(puVar14 + 0x68), lVar22 != 0)) {
    bVar30 = (*(byte *)(lVar22 + 8) & 1) != 0;
    lVar18 = lVar22 + 9;
    if (bVar30) {
      lVar18 = *(long *)(lVar22 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar22 + 8) >> 1);
    if (bVar30) {
      uVar25 = *(ulong *)(lVar22 + 0x10);
    }
  }
  func_0x0c105a60(&plStack_2c8,param_1,lVar18,uVar25);
  plVar21 = plStack_2c8;
  if ((DAT_0f6d5968 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d5968), iVar12 != 0)) {
    func_0x0c104890();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d58e8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5968);
  }
  plVar17 = (long *)(plVar21[3] +
                    (ulong)((int)((ulong)(plVar21[4] - plVar21[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f6d58e8 + 4)) * 8);
  do {
    lVar18 = *plVar17;
    if (lVar18 == -1) goto LAB_0c0c0c10;
    plVar17 = (long *)(plVar21[6] + lVar18 * 0x18);
  } while (*(uint *)(plVar21[6] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d58e8 + 4));
  if (plVar17 == (long *)plVar21[7]) {
LAB_0c0c0c10:
    puVar14 = &DAT_0f6d58e8;
  }
  else {
    puVar14 = (undefined *)plVar17[2];
  }
  for (pbVar19 = (byte *)plStack_2c8[10]; pbVar19 != (byte *)plStack_2c8[0xb];
      pbVar19 = pbVar19 + 0x38) {
    bVar2 = *pbVar19;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0c0caa;
    }
    else if (*(long *)(pbVar19 + 8) == 0x1a) {
LAB_0c0c0caa:
      if ((bVar2 & 1) == 0) {
        pbVar24 = pbVar19 + 1;
      }
      else {
        pbVar24 = *(byte **)(pbVar19 + 0x10);
      }
      auVar31[0] = -(*pbVar24 == DAT_014eaba0);
      auVar31[1] = -(pbVar24[1] == DAT_014eaba0._1_1_);
      auVar31[2] = -(pbVar24[2] == DAT_014eaba0._2_1_);
      auVar31[3] = -(pbVar24[3] == DAT_014eaba0._3_1_);
      auVar31[4] = -(pbVar24[4] == DAT_014eaba0._4_1_);
      auVar31[5] = -(pbVar24[5] == DAT_014eaba0._5_1_);
      auVar31[6] = -(pbVar24[6] == DAT_014eaba0._6_1_);
      auVar31[7] = -(pbVar24[7] == DAT_014eaba0._7_1_);
      auVar31[8] = -(pbVar24[8] == DAT_014eaba0._8_1_);
      auVar31[9] = -(pbVar24[9] == DAT_014eaba0._9_1_);
      auVar31[10] = -(pbVar24[10] == DAT_014eaba0._10_1_);
      auVar31[0xb] = -(pbVar24[0xb] == DAT_014eaba0._11_1_);
      auVar31[0xc] = -(pbVar24[0xc] == DAT_014eaba0._12_1_);
      auVar31[0xd] = -(pbVar24[0xd] == DAT_014eaba0._13_1_);
      auVar31[0xe] = -(pbVar24[0xe] == DAT_014eaba0._14_1_);
      auVar31[0xf] = -(pbVar24[0xf] == DAT_014eaba0._15_1_);
      auVar32[0] = -(pbVar24[10] == DAT_014e4ff0);
      auVar32[1] = -(pbVar24[0xb] == DAT_014e4ff0._1_1_);
      auVar32[2] = -(pbVar24[0xc] == DAT_014e4ff0._2_1_);
      auVar32[3] = -(pbVar24[0xd] == DAT_014e4ff0._3_1_);
      auVar32[4] = -(pbVar24[0xe] == DAT_014e4ff0._4_1_);
      auVar32[5] = -(pbVar24[0xf] == DAT_014e4ff0._5_1_);
      auVar32[6] = -(pbVar24[0x10] == DAT_014e4ff0._6_1_);
      auVar32[7] = -(pbVar24[0x11] == DAT_014e4ff0._7_1_);
      auVar32[8] = -(pbVar24[0x12] == DAT_014e4ff0._8_1_);
      auVar32[9] = -(pbVar24[0x13] == DAT_014e4ff0._9_1_);
      auVar32[10] = -(pbVar24[0x14] == DAT_014e4ff0._10_1_);
      auVar32[0xb] = -(pbVar24[0x15] == DAT_014e4ff0._11_1_);
      auVar32[0xc] = -(pbVar24[0x16] == DAT_014e4ff0._12_1_);
      auVar32[0xd] = -(pbVar24[0x17] == DAT_014e4ff0._13_1_);
      auVar32[0xe] = -(pbVar24[0x18] == DAT_014e4ff0._14_1_);
      auVar32[0xf] = -(pbVar24[0x19] == DAT_014e4ff0._15_1_);
      auVar32 = auVar32 & auVar31;
      if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar19 == (byte *)plStack_2c8[0xb]) {
LAB_0c0c0cd8:
    if ((int)uStack_2a0 == 0) {
      if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c0c0d63;
      lVar18 = *(long *)(puVar14 + 0x68) + 0x38;
    }
    else {
      uVar7 = uStack_2a0._4_4_;
      if (puVar14 == (undefined *)0x0) {
        puVar14 = (undefined *)func_0x048aead0(plVar21 + 3);
      }
      auStack_258 = (undefined1  [8])func_0x048b0c90(plVar21 + 3,puVar14,uVar7,1);
      if (auStack_258 == (undefined1  [8])0x0) {
        _auStack_258 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_258);
        if (auStack_258 == (undefined1  [8])0x0) goto LAB_0c0c0d63;
      }
      if ((*(int *)((long)auStack_258 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_258 + 0x58) != 0)) {
        lVar18 = *(long *)((long)auStack_258 + 0x58) + 0x40;
      }
      else {
LAB_0c0c0d63:
        lVar18 = 0;
      }
    }
    plStack_c8 = (long *)&UNK_0488e0b0;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)CONCAT35(pcStack_b8._5_3_,0x48b5725f);
    plStack_d8 = (long *)0x0;
    _auStack_258 = (undefined1  [16])0x0;
    pcStack_240 = (code *)&UNK_0488e0b0;
    pcStack_238 = (code *)0x0;
    uStack_230 = 0x48b5725f;
    uStack_22c = uStack_22c & 0xffffff00;
    pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar20 == (code *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    plStack_58 = (long *)0x21;
    plStack_50 = (long *)0x1a;
    *(ulong *)(pcVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar20 + 0x12) = uVar5;
    uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(undefined8 *)pcVar20 = _DAT_013bbacd;
    *(undefined8 *)(pcVar20 + 8) = uVar5;
    pcVar20[0x1a] = (code)0x0;
    pcStack_48 = pcVar20;
    lVar18 = func_0x048b5060(lVar18,&plStack_58);
    *(undefined8 *)(lVar18 + 0x20) = 0;
    if ((undefined1 *)(lVar18 + 0x20) == auStack_258) {
      pcVar20 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar18 + 0x40) != (code *)0x0) {
        puVar28 = (undefined8 *)(lVar18 + 0x28);
        (**(code **)(lVar18 + 0x40))(puVar28);
        if ((char)uStack_22c != '\0') {
          if ((char)uStack_22c == '\x02') {
            (*pcStack_240)(5,&plStack_250,puVar28);
          }
          else {
            plVar21 = plStack_250;
            plStack_250 = (long *)0x0;
            *puVar28 = plVar21;
          }
        }
      }
      *(code **)(lVar18 + 0x38) = pcStack_240;
      *(code **)(lVar18 + 0x40) = pcStack_238;
      *(undefined4 *)(lVar18 + 0x48) = uStack_230;
      *(char *)(lVar18 + 0x4c) = (char)uStack_22c;
      pcVar20 = pcStack_238;
    }
    if (((ulong)plStack_58 & 1) != 0) {
      func_0x0412a280(pcStack_48,(ulong)plStack_58 & 0xfffffffffffffffe);
      pcVar20 = pcStack_238;
    }
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(&plStack_250);
    }
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(&plStack_d8);
    }
  }
  else {
    iVar12 = *(int *)(pbVar19 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar12 == _DAT_0f550ac4) goto LAB_0c0c0cd8;
  }
  puStack_1e8 = puStack_298;
  puStack_1f8 = (undefined1 *)uStack_2a8;
  uStack_1f0 = uStack_2a0;
  plStack_208 = plStack_2b8;
  uStack_200 = (long *)uStack_2b0;
  plStack_218 = plStack_2c8;
  pplStack_210 = (long **)plStack_2c0;
  auVar6[0xf] = 0;
  auVar6._0_15_ = stack0xfffffffffffffda9;
  _auStack_258 = auVar6 << 8;
  pcStack_240 = (code *)((ulong)pcStack_240 & 0xffffffffffffff00);
  if (cStack_130 == '\x01') {
    plStack_250 = (long *)0x0;
    auStack_258 = (undefined1  [8])uStack_148;
    auVar31 = _auStack_258;
    plStack_250 = (long *)uStack_140;
    if ((uStack_140 & 0x80000000000000) != 0) {
      uVar25 = uStack_140 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar25 - 8);
      lVar18 = lVar22 + 9;
      _auStack_258 = auVar31;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar21 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar21 = lVar22;
      func_0x0eee2f00(plVar21 + 1,uVar25,lVar22);
      *(undefined1 *)((long)plVar21 + lVar22 + 8) = 0;
      plStack_250 = (long *)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_248 = (long *)0x0;
    plVar21 = plStack_138;
    if (((ulong)plStack_138 & 0x80000000000000) != 0) {
      uVar25 = (ulong)plStack_138 & 0xff00ffffffffffff;
      lVar22 = *(long *)(uVar25 - 8);
      lVar18 = lVar22 + 9;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && plVar21 == (long *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *plVar21 = lVar22;
      func_0x0eee2f00(plVar21 + 1,uVar25,lVar22);
      *(undefined1 *)((long)plVar21 + lVar22 + 8) = 0;
      plVar21 = (long *)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pcStack_240 = (code *)CONCAT71(pcStack_240._1_7_,1);
    plStack_248 = plVar21;
  }
  func_0x0412e5e0(&plStack_d8,puVar16,0x72);
  plStack_98 = plStack_218;
  plStack_90 = (long *)pplStack_210;
  plStack_88 = plStack_208;
  pcStack_80 = (code *)uStack_200;
  pcStack_78 = (code *)puStack_1f8;
  uStack_70 = SUB84(uStack_1f0,0);
  uStack_6c = (uint)((ulong)uStack_1f0 >> 0x20);
  uStack_68 = SUB84(puStack_1e8,0);
  iStack_64 = (int)((ulong)puStack_1e8 >> 0x20);
  if (((ulong)plStack_d8 & 1) != 0) {
    func_0x0412a280(plStack_c8,(ulong)plStack_d8 & 0xfffffffffffffffe);
  }
  if ((char)pcStack_240 == '\x01') {
    if (((ulong)plStack_248 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_248 & 0xff00ffffffffffff) - 8);
    }
    plStack_248 = (long *)0x0;
    if (((ulong)plStack_250 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_250 & 0xff00ffffffffffff) - 8);
    }
  }
  uStack_70 = 4;
  uStack_6c = 0x1e1bc4d5;
  if ((DAT_0f6d58d0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58d0), iVar12 != 0)) {
    func_0x0c104750();
    func_0x0410844d(&DAT_0f6d58d0);
  }
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,uStack_6c);
  pplStack_210 = (long **)0x0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  uStack_200 = (long *)0x1;
  puStack_1f8 = &SUB_048aead0;
  uStack_1f0 = &UNK_04905970;
  puStack_1e8 = &UNK_0c106610;
  lStack_1e0 = 0;
  uStack_1d8 = (ulong)uStack_1d8._4_4_ << 0x20;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  func_0x049057f0(&plStack_90,&plStack_218);
  func_0x048aea50(&plStack_218);
  plStack_2b8 = (long *)pcStack_80;
  uStack_2b0 = (ulong)pcStack_78;
  plStack_2c8 = plStack_90;
  plStack_2c0 = plStack_88;
  puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar28 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar28 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f551bc8), iVar12 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,_DAT_0f551bb4);
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef46c48;
  pplStack_210 = (long **)(plVar21 + 3);
  plVar21[3] = (long)puVar28;
  plVar21[4] = 0;
  *(undefined1 *)(plVar21 + 5) = 0xff;
  _auStack_258 = ZEXT816(0);
  plStack_208 = plVar21;
  func_0x048afd20(&plStack_2c8,&plStack_218);
  plVar21 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_208 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_250 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      func_0x0412c2d0(plVar21);
    }
  }
  plStack_128 = plStack_98;
  plStack_120 = plStack_90;
  pcStack_118 = (code *)plStack_88;
  pcStack_110 = pcStack_80;
  pcStack_108 = pcStack_78;
  uStack_100 = uStack_70;
  uStack_fc = uStack_6c;
  uStack_f8 = uStack_68;
  iStack_f4 = iStack_64;
  func_0x0c106050(&plStack_218,plStack_98 + 3);
  if (uStack_200._4_4_ == 2) {
    piVar15 = *(int **)(plStack_208[0xf] + 0x60);
    iVar12 = *piVar15;
    while (iVar12 != (int)uStack_200) {
      piVar15 = piVar15 + 0x16;
      iVar12 = *piVar15;
    }
    plVar21 = *(long **)(piVar15 + 0xc);
    while ((long **)plVar21 != pplStack_210) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar21 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0c14ef:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_200._4_4_ == 1) {
      piVar15 = *(int **)(plStack_208[0xf] + 0x48);
      iVar12 = *piVar15;
      while (iVar12 != (int)uStack_200) {
        piVar15 = piVar15 + 0x1a;
        iVar12 = *piVar15;
      }
      goto LAB_0c0c14ef;
    }
    if (uStack_200._4_4_ == 0) {
      *(uint *)(plStack_208 + 3) = *(uint *)(plStack_208 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6d58d0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d58d0), iVar12 != 0)) {
    func_0x0c104750();
    func_0x0410844d(&DAT_0f6d58d0);
  }
  plVar21 = plStack_128;
  uStack_100 = 1;
  uStack_fc = 0x425ed3ca;
  if ((DAT_0f6d5968 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d5968), iVar12 != 0)) {
    func_0x0c104890();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d58e8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5968);
  }
  pplStack_210 = (long **)(plVar21 + 3);
  plVar17 = (long *)(plVar21[3] +
                    (ulong)((int)((ulong)(plVar21[4] - plVar21[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f6d58e8 + 4)) * 8);
  do {
    lVar18 = *plVar17;
    if (lVar18 == -1) goto LAB_0c0c1590;
    plVar17 = (long *)(plVar21[6] + lVar18 * 0x18);
  } while (*(uint *)(plVar21[6] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6d58e8 + 4));
  if (plVar17 == (long *)plVar21[7]) {
LAB_0c0c1590:
    plStack_218 = (long *)&DAT_0f6d58e8;
  }
  else {
    plStack_218 = (long *)plVar17[2];
  }
  func_0x0ed621a0(&plStack_218,uStack_fc);
  plStack_218 = (long *)CONCAT62(plStack_218._2_6_,0x10);
  plStack_208 = (long *)CONCAT44(plStack_208._4_4_,uStack_fc);
  uStack_200 = (long *)0x0;
  puStack_1f8 = (undefined1 *)0x0;
  uStack_1f0 = (undefined *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  lStack_1e0 = 0;
  uStack_1d8 = CONCAT17(uStack_1d8._7_1_,0x65756c61760a);
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0x3f600000;
  pplStack_210 = &plStack_120;
  func_0x048afb10(&lStack_1c0,8);
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  uStack_158 = 0xff00;
  uStack_154 = uStack_154 & 0xffffff00;
  uStack_150 = uStack_150 & 0xffffff00;
  uStack_14c = 0;
  puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar28 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar28 = &UNK_0f351708;
  if (uStack_200 != (long *)0x0) {
    lVar18 = *uStack_200;
    uStack_200 = puVar28;
    (**(code **)(lVar18 + 8))();
    puVar28 = uStack_200;
  }
  uStack_200 = puVar28;
  plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,plStack_208._0_4_);
  plStack_2c0 = (long *)0x0;
  plStack_2b8 = (long *)((ulong)plStack_2b8 & 0xffffffff00000000);
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  uStack_2a0 = &UNK_0c103680;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_0c0ff320;
  puStack_288 = &UNK_0c106810;
  puStack_280 = &UNK_0c106970;
  uStack_278 = 0;
  auStack_270._0_16_ = ZEXT816(0);
  FUN_048b05a0(pplStack_210,&plStack_2c8);
  uVar5 = auStack_270._8_8_;
  if ((long *)auStack_270._8_8_ != (long *)0x0) {
    LOCK();
    plVar21 = (long *)(auStack_270._8_8_ + 8);
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)auStack_270._8_8_ + 0x10))(auStack_270._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  pplVar10 = pplStack_210;
  if ((DAT_0f550a20 == '\0') && (iVar12 = func_0x04108328(&DAT_0f550a20), iVar12 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,_DAT_0f550a0c);
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  puVar23 = puStack_1f8;
  puVar28 = uStack_200;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef439d0;
  plStack_2c0 = plVar21 + 3;
  uStack_200 = (long *)0x0;
  puStack_1f8 = (undefined1 *)0x0;
  plVar21[3] = (long)puVar28;
  plVar21[4] = (long)puVar23;
  plVar21[7] = lStack_1e0;
  plVar21[5] = (long)uStack_1f0;
  plVar21[6] = (long)puStack_1e8;
  uStack_1f0 = (undefined *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  lStack_1e0 = 0;
  plVar21[10] = lStack_1c8;
  plVar21[8] = uStack_1d8;
  plVar21[9] = lStack_1d0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  plVar21[0xb] = lStack_1c0;
  plVar21[0xc] = lStack_1b8;
  plVar21[0xd] = lStack_1b0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  plVar21[0xe] = lStack_1a8;
  plVar21[0xf] = lStack_1a0;
  plVar21[0x10] = lStack_198;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  *(undefined4 *)(plVar21 + 0x11) = uStack_190;
  plVar21[0x12] = lStack_188;
  plVar21[0x13] = lStack_180;
  plVar21[0x14] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar21[0x17] = lStack_160;
  plVar21[0x15] = lStack_170;
  plVar21[0x16] = lStack_168;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  *(ulong *)((long)plVar21 + 0xc5) = CONCAT17(uStack_14c,CONCAT43(uStack_150,uStack_154._1_3_));
  plVar21[0x18] = CONCAT44(uStack_154,CONCAT22(uStack_156,uStack_158));
  _auStack_258 = ZEXT816(0);
  plStack_2b8 = plVar21;
  func_0x048afd20(pplVar10,&plStack_2c8);
  plVar21 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_2b8 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_250 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = pplVar10[2];
  iVar12 = *(int *)((long)pplVar10 + 0x1c);
  if (iVar12 == 2) {
    piVar15 = *(int **)(plVar21[0xf] + 0x60);
    iVar12 = *piVar15;
    while (iVar12 != *(int *)(pplVar10 + 3)) {
      piVar15 = piVar15 + 0x16;
      iVar12 = *piVar15;
    }
    for (; *(long **)(piVar15 + 0xc) != pplVar10[1]; piVar15 = *(int **)(piVar15 + 0xe)) {
    }
  }
  else {
    if (iVar12 != 1) {
      if (iVar12 == 0) {
        *(uint *)(plVar21 + 3) = *(uint *)(plVar21 + 3) | (int)plStack_218 << 0x10;
      }
      func_0x048b0bc0(&uStack_200);
      goto joined_r0x0c0c1afa;
    }
    piVar15 = *(int **)(plVar21[0xf] + 0x48);
    iVar12 = *piVar15;
    while (iVar12 != *(int *)(pplVar10 + 3)) {
      piVar15 = piVar15 + 0x1a;
      iVar12 = *piVar15;
    }
  }
  piVar15[4] = piVar15[4] | (int)plStack_218 << 0x10;
  func_0x048b0bc0(&uStack_200);
joined_r0x0c0c1afa:
  if (cStack_130 == '\x01') {
    if (((ulong)plStack_138 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_138 & 0xff00ffffffffffff) - 8);
    }
    plStack_138 = (long *)0x0;
    if ((uStack_140 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_140 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar16,0x78);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x1489210  Specifies the base rarity and subsequently color of the item name when the player hovers the cur
 * 0x1489220  se rarity and subsequently color of the item name when the player hovers the cursor over the ite
 * 0x1489230  bsequently color of the item name when the player hovers the cursor over the item.
 * 0x1489240   of the item name when the player hovers the cursor over the item.
 * 0x1489250  e when the player hovers the cursor over the item.
 * 0x1489260  r hovers the cursor over the item.
 * 0x1489270  sor over the item.
 * 0x14eaba0  [cereal:document
 */
