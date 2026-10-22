/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2cd580 (ELF vaddr 0xe1cd580)
 * Label: caller-of-callee
 * Body:  [[0e2cd580, 0e2cec65] [0e2cec70, 0e2ceca1] [0e2cecb0, 0e2cf795]]
 * Ghidra: FUN_0e2cd580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2cd580(long param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  int *piVar17;
  long *plVar18;
  code *pcVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  uint *puVar28;
  long lVar29;
  bool bVar30;
  ulong uStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined4 uStack_238;
  undefined3 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  uint uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f0;
  undefined3 uStack_1ec;
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
  int iStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  uint uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  char cStack_13c;
  ulong uStack_138;
  long lStack_130;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined1 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x0e97c740();
  if ((DAT_0f74ec28 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ec28), iVar14 != 0)) {
    func_0x0e370ca0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74eba8,0xf53dab8);
    FUN_0410844d(&DAT_0f74ec28);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74eba8 + 4)) * 8);
  do {
    lVar29 = *plVar18;
    if (lVar29 == -1) goto LAB_0e2cd600;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar29 * 0x18) != *(uint *)(_DAT_0f74eba8 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e2cd600:
    puVar16 = &DAT_0f74eba8;
    if (iRam000000000f74ec08 != -0x2b3da790) goto LAB_0e2cd655;
LAB_0e2cd62b:
    lVar29 = *(long *)(puVar16 + 0x68);
    if (lVar29 == 0) goto LAB_0e2cd655;
    bVar30 = (*(byte *)(lVar29 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar29 + 9);
    if (bVar30) {
      puVar16 = *(undefined **)(lVar29 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar29 + 8) >> 1);
    if (bVar30) {
      uVar23 = *(ulong *)(lVar29 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e2cd62b;
LAB_0e2cd655:
    puVar16 = &UNK_0120266e;
    uVar23 = 0xe;
  }
  func_0x0e3710e0(&uStack_230,param_1,puVar16,uVar23);
  uStack_1fc = uStack_1fc & 0xffffff00;
  uStack_1f8 = uStack_1f8 & 0xffffff00;
  if ((char)uStack_200 == '\0') {
    func_0x0e374960(&puStack_168,&UNK_0144266a,0x12);
    uVar23 = (ulong)((byte)uStack_140 >> 1);
    lVar29 = (long)&uStack_140 + 1;
    lVar26 = lVar29;
    if ((uStack_140 & 1) != 0) {
      uVar23 = uStack_138;
      lVar26 = lStack_130;
    }
    if (uVar23 == 0) {
      uStack_204 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_204 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_204 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_204 = ((int)*(char *)(lVar26 + 3 + uVar24) ^
                       ((int)*(char *)(lVar26 + 2 + uVar24) ^
                       ((int)*(char *)(lVar26 + 1 + uVar24) ^
                       ((int)*(char *)(lVar26 + uVar24) ^ uStack_204) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar27 != 0) {
        uVar23 = 0;
        do {
          uStack_204 = ((int)*(char *)(lVar26 + uVar24 + uVar23) ^ uStack_204) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
    }
    iStack_208 = 2;
    if ((DAT_0f74ec48 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ec48), iVar14 != 0)) {
      func_0x0e370db0();
      FUN_0410844d(&DAT_0f74ec48);
    }
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_204);
    lStack_298 = 0;
    puStack_290 = (undefined *)CONCAT44(puStack_290._4_4_,3);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0e374f60;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &UNK_0e370be0;
    puStack_260 = &UNK_0e375020;
    puStack_258 = &UNK_0e375030;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(&uStack_228,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar26 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    uStack_198 = uStack_218;
    uStack_194 = uStack_214;
    uStack_190 = uStack_210;
    uStack_18c = uStack_20c;
    func_0x0e374cf0(&uStack_2a0,&uStack_1a8,&puStack_168);
    if (uStack_288._4_4_ == 2) {
      piVar17 = *(int **)(*(long *)((long)puStack_290 + 0x78) + 0x60);
      iVar14 = *piVar17;
      while (iVar14 != (int)uStack_288) {
        piVar17 = piVar17 + 0x16;
        iVar14 = *piVar17;
      }
      lVar26 = *(long *)(piVar17 + 0xc);
      while (lVar26 != lStack_298) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar26 = *(long *)(piVar17 + 0xc);
      }
LAB_0e2cd8df:
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 9;
    }
    else {
      if (uStack_288._4_4_ == 1) {
        piVar17 = *(int **)(*(long *)((long)puStack_290 + 0x78) + 0x48);
        iVar14 = *piVar17;
        while (iVar14 != (int)uStack_288) {
          piVar17 = piVar17 + 0x1a;
          iVar14 = *piVar17;
        }
        goto LAB_0e2cd8df;
      }
      if (uStack_288._4_4_ == 0) {
        *(uint *)((long)puStack_290 + 0x18) = *(uint *)((long)puStack_290 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1f8 == '\0') {
      func_0x0e375080(&uStack_2a0,&uStack_230);
    }
    uVar11 = uStack_1fc;
    lVar26 = CONCAT44(uStack_22c,uStack_230);
    if ((DAT_0f74ec28 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ec28), iVar14 != 0)) {
      func_0x0e370ca0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74eba8,0xf53dab8);
      FUN_0410844d(&DAT_0f74ec28);
    }
    plVar18 = (long *)(*(long *)(lVar26 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar26 + 0x20) - *(long *)(lVar26 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74eba8 + 4)) * 8);
    do {
      lVar3 = *plVar18;
      if (lVar3 == -1) goto LAB_0e2cd970;
      plVar18 = (long *)(*(long *)(lVar26 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar26 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f74eba8 + 4))
    ;
    if (plVar18 == *(long **)(lVar26 + 0x38)) {
LAB_0e2cd970:
      puVar16 = &DAT_0f74eba8;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (puVar28 = *(uint **)(*(long *)(puVar16 + 0x68) + 0x20);
        (puVar28 != puVar4 && (*puVar28 != uVar11)); puVar28 = puVar28 + 0xe) {
    }
    if ((puVar28 == puVar4) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133b434),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    func_0x05d9c620(puVar28 + 2,&uStack_204,&uStack_204,&uStack_2a0);
    uStack_1e8 = uStack_230;
    uStack_1e4 = uStack_22c;
    uStack_1e0 = uStack_228;
    uStack_1dc = uStack_224;
    uStack_1d8 = uStack_220;
    uStack_1d4 = uStack_21c;
    uStack_1d0 = uStack_218;
    uStack_1cc = uStack_214;
    uStack_1c8 = uStack_210;
    uStack_1c4 = uStack_20c;
    iStack_1c0 = iStack_208;
    uStack_1bc = uStack_204;
    uStack_1b8 = CONCAT44(uStack_1fc,uStack_200);
    uStack_1b0 = uStack_1f8;
    func_0x048b0bc0(&puStack_168);
    func_0x0e374960(&puStack_168,&UNK_012b807e,10);
    uVar23 = (ulong)((byte)uStack_140 >> 1);
    lVar26 = lVar29;
    if ((uStack_140 & 1) != 0) {
      uVar23 = uStack_138;
      lVar26 = lStack_130;
    }
    if (uVar23 == 0) {
      uStack_1bc = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_1bc = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_1bc = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar26 + 3 + uVar24) ^
                       ((int)*(char *)(lVar26 + 2 + uVar24) ^
                       ((int)*(char *)(lVar26 + 1 + uVar24) ^
                       ((int)*(char *)(lVar26 + uVar24) ^ uStack_1bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar27 != 0) {
        uVar23 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar26 + uVar24 + uVar23) ^ uStack_1bc) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
    }
    iStack_1c0 = 2;
    if ((DAT_0f74ec48 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ec48), iVar14 != 0)) {
      func_0x0e370db0();
      FUN_0410844d(&DAT_0f74ec48);
    }
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_1bc);
    lStack_298 = 0;
    puStack_290 = (undefined *)CONCAT44(puStack_290._4_4_,3);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0e374f60;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &UNK_0e370be0;
    puStack_260 = &UNK_0e375240;
    puStack_258 = &UNK_0e375250;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(&uStack_1e0,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar26 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    uStack_198 = uStack_1d0;
    uStack_194 = uStack_1cc;
    uStack_190 = uStack_1c8;
    uStack_18c = uStack_1c4;
    uStack_1a8 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_1a0 = CONCAT44(uStack_1d4,uStack_1d8);
    func_0x0e374cf0(&uStack_2a0,&uStack_1a8,&puStack_168);
    if (uStack_288._4_4_ == 2) {
      piVar17 = *(int **)(*(long *)((long)puStack_290 + 0x78) + 0x60);
      iVar14 = *piVar17;
      while (iVar14 != (int)uStack_288) {
        piVar17 = piVar17 + 0x16;
        iVar14 = *piVar17;
      }
      lVar26 = *(long *)(piVar17 + 0xc);
      while (lVar26 != lStack_298) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar26 = *(long *)(piVar17 + 0xc);
      }
LAB_0e2cdcef:
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 9;
    }
    else {
      if (uStack_288._4_4_ == 1) {
        piVar17 = *(int **)(*(long *)((long)puStack_290 + 0x78) + 0x48);
        iVar14 = *piVar17;
        while (iVar14 != (int)uStack_288) {
          piVar17 = piVar17 + 0x1a;
          iVar14 = *piVar17;
        }
        goto LAB_0e2cdcef;
      }
      if (uStack_288._4_4_ == 0) {
        *(uint *)((long)puStack_290 + 0x18) = *(uint *)((long)puStack_290 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1b0 == '\0') {
      func_0x0e375080(&uStack_2a0,&uStack_1e8);
    }
    iVar14 = uStack_1b8._4_4_;
    lVar26 = CONCAT44(uStack_1e4,uStack_1e8);
    if ((DAT_0f74ec28 == '\0') && (iVar15 = func_0x04108328(&DAT_0f74ec28), iVar15 != 0)) {
      func_0x0e370ca0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74eba8,0xf53dab8);
      FUN_0410844d(&DAT_0f74ec28);
    }
    plVar18 = (long *)(*(long *)(lVar26 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar26 + 0x20) - *(long *)(lVar26 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74eba8 + 4)) * 8);
    do {
      lVar3 = *plVar18;
      if (lVar3 == -1) goto LAB_0e2cdd80;
      plVar18 = (long *)(*(long *)(lVar26 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar26 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f74eba8 + 4))
    ;
    if (plVar18 == *(long **)(lVar26 + 0x38)) {
LAB_0e2cdd80:
      puVar16 = &DAT_0f74eba8;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    piVar5 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (piVar17 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
        (piVar17 != piVar5 && (*piVar17 != iVar14)); piVar17 = piVar17 + 0xe) {
    }
    if ((piVar17 == piVar5) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133b434),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    func_0x05d9c620(piVar17 + 2,&uStack_1bc,&uStack_1bc,&uStack_2a0);
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = (undefined4)uStack_1b8;
    iStack_174 = uStack_1b8._4_4_;
    uStack_170 = uStack_1b0;
    func_0x048b0bc0(&puStack_168);
    func_0x0e374960(&puStack_168,&UNK_0145a1c6,0x16);
    uVar23 = (ulong)((byte)uStack_140 >> 1);
    if ((uStack_140 & 1) != 0) {
      uVar23 = uStack_138;
      lVar29 = lStack_130;
    }
    if (uVar23 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar23 & 3);
      if (uVar23 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar29 + 3 + uVar24) ^
                       ((int)*(char *)(lVar29 + 2 + uVar24) ^
                       ((int)*(char *)(lVar29 + 1 + uVar24) ^
                       ((int)*(char *)(lVar29 + uVar24) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar23 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar27 != 0) {
        uVar23 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar29 + uVar24 + uVar23) ^ uStack_17c) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
    }
    iStack_180 = 2;
    if ((DAT_0f74ec48 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ec48), iVar14 != 0)) {
      func_0x0e370db0();
      FUN_0410844d(&DAT_0f74ec48);
    }
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_17c);
    lStack_298 = 0;
    puStack_290 = (undefined *)CONCAT44(puStack_290._4_4_,3);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0e374f60;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &UNK_0e370be0;
    puStack_260 = &UNK_0e3752a0;
    puStack_258 = &UNK_0e3752b0;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(&uStack_1a0,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    uStack_78 = (undefined4 *)CONCAT44(uStack_18c,uStack_190);
    uStack_70 = uStack_188;
    uStack_6c = uStack_184;
    uStack_88 = uStack_1a0;
    uStack_80 = CONCAT44(uStack_194,uStack_198);
    func_0x0e374cf0(&uStack_2a0,&uStack_88,&puStack_168);
    if (uStack_288._4_4_ == 2) {
      piVar17 = *(int **)(*(long *)(puStack_290 + 0x78) + 0x60);
      iVar14 = *piVar17;
      while (iVar14 != (int)uStack_288) {
        piVar17 = piVar17 + 0x16;
        iVar14 = *piVar17;
      }
      lVar29 = *(long *)(piVar17 + 0xc);
      while (lVar29 != lStack_298) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar29 = *(long *)(piVar17 + 0xc);
      }
LAB_0e2ce0ff:
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 9;
    }
    else {
      if (uStack_288._4_4_ == 1) {
        piVar17 = *(int **)(*(long *)(puStack_290 + 0x78) + 0x48);
        iVar14 = *piVar17;
        while (iVar14 != (int)uStack_288) {
          piVar17 = piVar17 + 0x1a;
          iVar14 = *piVar17;
        }
        goto LAB_0e2ce0ff;
      }
      if (uStack_288._4_4_ == 0) {
        *(uint *)(puStack_290 + 0x18) = *(uint *)(puStack_290 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_170 == '\0') {
      func_0x0e375080(&uStack_2a0,&uStack_1a8);
    }
    iVar14 = iStack_174;
    lVar29 = uStack_1a8;
    if ((DAT_0f74ec28 == '\0') && (iVar15 = func_0x04108328(&DAT_0f74ec28), iVar15 != 0)) {
      func_0x0e370ca0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74eba8,0xf53dab8);
      FUN_0410844d(&DAT_0f74ec28);
    }
    plVar18 = (long *)(*(long *)(lVar29 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar29 + 0x20) - *(long *)(lVar29 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74eba8 + 4)) * 8);
    do {
      lVar26 = *plVar18;
      if (lVar26 == -1) goto LAB_0e2ce190;
      plVar18 = (long *)(*(long *)(lVar29 + 0x30) + lVar26 * 0x18);
    } while (*(uint *)(*(long *)(lVar29 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74eba8 + 4)
            );
    if (plVar18 == *(long **)(lVar29 + 0x38)) {
LAB_0e2ce190:
      puVar16 = &DAT_0f74eba8;
    }
    else {
      puVar16 = (undefined *)plVar18[2];
    }
    piVar5 = *(int **)(*(long *)(puVar16 + 0x68) + 0x28);
    for (piVar17 = *(int **)(*(long *)(puVar16 + 0x68) + 0x20);
        (piVar17 != piVar5 && (*piVar17 != iVar14)); piVar17 = piVar17 + 0xe) {
    }
    if ((piVar17 == piVar5) &&
       (cVar13 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0133b434),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    func_0x05d9c620(piVar17 + 2,&uStack_17c,&uStack_17c,&uStack_2a0);
    func_0x048b0bc0(&puStack_168);
  }
  if ((DAT_0f74ece0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ece0), iVar14 != 0)) {
    func_0x0e3753c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74ec60,0xf53dab8);
    FUN_0410844d(&DAT_0f74ece0);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74ec60 + 4)) * 8);
  do {
    lVar29 = *plVar18;
    if (lVar29 == -1) goto LAB_0e2ce290;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar29 * 0x18) != *(uint *)(_DAT_0f74ec60 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e2ce290:
    puVar16 = &DAT_0f74ec60;
    if (iRam000000000f74ecc0 != -0x2b3da790) goto LAB_0e2ce2fa;
LAB_0e2ce2bb:
    lVar29 = *(long *)(puVar16 + 0x68);
    if (lVar29 == 0) goto LAB_0e2ce2fa;
    bVar30 = (*(byte *)(lVar29 + 8) & 1) != 0;
    lVar26 = lVar29 + 9;
    if (bVar30) {
      lVar26 = *(long *)(lVar29 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar29 + 8) >> 1);
    if (bVar30) {
      uVar23 = *(ulong *)(lVar29 + 0x10);
    }
    func_0x0e3759b0(&uStack_230,param_1,lVar26,uVar23);
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e2ce2bb;
LAB_0e2ce2fa:
    func_0x0e3759b0(&uStack_230,param_1,&UNK_01371554,4);
  }
  if ((char)uStack_200 == '\0') {
    func_0x0e376560(&puStack_168,&uStack_230,&UNK_0122361d,9,0);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f4b73d0;
    if (uStack_150 != (code *)0x0) {
      lVar29 = *(long *)uStack_150;
      uStack_150 = (code *)plVar18;
      (**(code **)(lVar29 + 8))();
      plVar18 = (long *)uStack_150;
    }
    uStack_150 = (code *)plVar18;
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
    lStack_298 = 0;
    puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0e377810;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &UNK_0e377460;
    puStack_260 = &UNK_0e3778d0;
    puStack_258 = &UNK_0e377a40;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(puStack_160,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0e376880(&puStack_168);
    uStack_58 = (char)uStack_200;
    uStack_68 = uStack_210;
    uStack_64 = uStack_20c;
    iStack_60 = iStack_208;
    uStack_5c = uStack_204;
    uStack_78 = (undefined4 *)CONCAT44(uStack_21c,uStack_220);
    uStack_70 = uStack_218;
    uStack_6c = uStack_214;
    uStack_88 = CONCAT44(uStack_22c,uStack_230);
    uStack_80 = CONCAT44(uStack_224,uStack_228);
    func_0x048b0bc0(&uStack_150);
    func_0x0e375fa0(&puStack_168,uStack_88 + 0x18);
    if (uStack_150._4_4_ == 2) {
      piVar17 = *(int **)(*(long *)(CONCAT44(uStack_154,uStack_158) + 0x78) + 0x60);
      iVar14 = *piVar17;
      while (iVar14 != (int)uStack_150) {
        piVar17 = piVar17 + 0x16;
        iVar14 = *piVar17;
      }
      puVar20 = *(undefined8 **)(piVar17 + 0xc);
      while (puVar20 != puStack_160) {
        piVar17 = *(int **)(piVar17 + 0xe);
        puVar20 = *(undefined8 **)(piVar17 + 0xc);
      }
LAB_0e2ce50f:
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else {
      if (uStack_150._4_4_ == 1) {
        piVar17 = *(int **)(*(long *)(CONCAT44(uStack_154,uStack_158) + 0x78) + 0x48);
        iVar14 = *piVar17;
        while (iVar14 != (int)uStack_150) {
          piVar17 = piVar17 + 0x1a;
          iVar14 = *piVar17;
        }
        goto LAB_0e2ce50f;
      }
      if (uStack_150._4_4_ == 0) {
        puVar28 = (uint *)(CONCAT44(uStack_154,uStack_158) + 0x18);
        *puVar28 = *puVar28 | 0x40000;
      }
    }
    func_0x0e376560(&puStack_168,&uStack_88,&UNK_0129ec0b,0x1c,0x10);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0ef46ef8;
    if (uStack_150 != (code *)0x0) {
      lVar29 = *(long *)uStack_150;
      uStack_150 = (code *)plVar18;
      (**(code **)(lVar29 + 8))();
      plVar18 = (long *)uStack_150;
    }
    uStack_150 = (code *)plVar18;
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
    lStack_298 = 0;
    puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_04906f70;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &SUB_04906c50;
    puStack_260 = &UNK_0e377ec0;
    puStack_258 = &UNK_0e378020;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(puStack_160,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0e376880(&puStack_168);
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,uStack_58);
    uStack_1c8 = uStack_68;
    uStack_1c4 = uStack_64;
    iStack_1c0 = iStack_60;
    uStack_1bc = uStack_5c;
    uStack_1d8 = (undefined4)uStack_78;
    uStack_1d4 = uStack_78._4_4_;
    uStack_1d0 = uStack_70;
    uStack_1cc = uStack_6c;
    uStack_1e8 = (undefined4)uStack_88;
    uStack_1e4 = uStack_88._4_4_;
    uStack_1e0 = (undefined4)uStack_80;
    uStack_1dc = uStack_80._4_4_;
    func_0x048b0bc0(&uStack_150);
    func_0x0e376560(&puStack_168,&uStack_1e8,&UNK_0121c9ef,0xd,1);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f4b8268;
    if (uStack_150 != (code *)0x0) {
      lVar29 = *(long *)uStack_150;
      uStack_150 = (code *)plVar18;
      (**(code **)(lVar29 + 8))();
      plVar18 = (long *)uStack_150;
    }
    uStack_150 = (code *)plVar18;
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
    lStack_298 = 0;
    puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0e378a10;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &SUB_0e378700;
    puStack_260 = &UNK_0e378a20;
    puStack_258 = &UNK_0e378c00;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(puStack_160,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0e376880(&puStack_168);
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_1b8);
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = CONCAT44(uStack_1dc,uStack_1e0);
    func_0x048b0bc0(&uStack_150);
    func_0x0e376560(&puStack_168,&uStack_1a8,&UNK_0142e575,9,1);
    pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar19 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar19 = &UNK_0f403098;
    if (uStack_150 != (code *)0x0) {
      lVar29 = *(long *)uStack_150;
      uStack_150 = pcVar19;
      (**(code **)(lVar29 + 8))();
      pcVar19 = uStack_150;
    }
    uStack_150 = pcVar19;
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
    lStack_298 = 0;
    puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
    uStack_288 = (code *)0x1;
    uStack_280 = 0;
    puStack_278 = &UNK_0df7bad0;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &SUB_0cd7de90;
    puStack_260 = &UNK_0e379060;
    puStack_258 = &UNK_0e3791c0;
    uStack_250 = 0;
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    func_0x048b05a0(puStack_160,&uStack_2a0);
    plVar18 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_240 + 1;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0e376880(&puStack_168);
    func_0x048b0bc0(&uStack_150);
  }
  if ((DAT_0f74ee50 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ee50), iVar14 != 0)) {
    func_0x0e379460();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74edd0,0xf53dab8);
    FUN_0410844d(&DAT_0f74ee50);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74edd0 + 4)) * 8);
  do {
    lVar29 = *plVar18;
    if (lVar29 == -1) goto LAB_0e2ce9a0;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar29 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar29 * 0x18) != *(uint *)(_DAT_0f74edd0 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e2ce9a0:
    puVar16 = &DAT_0f74edd0;
    if (iRam000000000f74ee30 != -0x2b3da790) goto LAB_0e2cea0a;
LAB_0e2ce9cb:
    lVar29 = *(long *)(puVar16 + 0x68);
    if (lVar29 == 0) goto LAB_0e2cea0a;
    bVar30 = (*(byte *)(lVar29 + 8) & 1) != 0;
    lVar26 = lVar29 + 9;
    if (bVar30) {
      lVar26 = *(long *)(lVar29 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar29 + 8) >> 1);
    if (bVar30) {
      uVar23 = *(ulong *)(lVar29 + 0x10);
    }
    func_0x0e37a220(&uStack_230,param_1,lVar26,uVar23);
    uVar23 = _DAT_0f74c4c8;
  }
  else {
    puVar16 = (undefined *)plVar18[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0e2ce9cb;
LAB_0e2cea0a:
    func_0x0e37a220(&uStack_230,param_1,&UNK_01371559,0xd);
    uVar23 = _DAT_0f74c4c8;
  }
  if ((char)uStack_200 != '\0') {
    _DAT_0f74c4c8 = uVar23;
    return;
  }
  _DAT_0f74c4c8 = uVar23;
  uStack_50 = _DAT_0f74c4c0;
  uStack_38 = _DAT_0f74c4c0;
  if ((uVar23 >> 0x37 & 1) != 0) {
    lVar29 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar26 = lVar29 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar26,8);
    if (plVar18 == (long *)0x0 && lVar26 != 0) {
      func_0x0eec74c0(lVar26,8);
    }
    *plVar18 = lVar29;
    func_0x0eee2f00(plVar18 + 1,uVar23 & 0xff00ffffffffffff,lVar29);
    *(undefined1 *)((long)plVar18 + lVar29 + 8) = 0;
    uVar23 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_40 = 0;
  uVar27 = _DAT_0f74c4d0;
  if ((_DAT_0f74c4d0 & 0x80000000000000) != 0) {
    uVar27 = _DAT_0f74c4d0 & 0xff00ffffffffffff;
    lVar26 = *(long *)(uVar27 - 8);
    lVar29 = lVar26 + 9;
    uStack_48 = uVar23;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
    if (lVar29 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar29,8);
    }
    *plVar18 = lVar26;
    func_0x0eee2f00(plVar18 + 1,uVar27,lVar26);
    *(undefined1 *)((long)plVar18 + lVar26 + 8) = 0;
    uVar27 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_234 = uStack_1ec;
  uStack_238 = uStack_1f0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar29 = CONCAT44(uStack_22c,uStack_230);
  if ((DAT_0f74ee50 == '\0') && (iVar14 = func_0x04108328(&DAT_0f74ee50), iVar14 != 0)) {
    func_0x0e379460();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74edd0,0xf53dab8);
    FUN_0410844d(&DAT_0f74ee50);
  }
  lStack_90 = lVar29 + 0x18;
  plVar18 = (long *)(*(long *)(lVar29 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar29 + 0x20) - *(long *)(lVar29 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74edd0 + 4)) * 8);
  do {
    lVar26 = *plVar18;
    if (lVar26 == -1) goto LAB_0e2cec31;
    plVar18 = (long *)(*(long *)(lVar29 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(lVar29 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74edd0 + 4));
  if (plVar18 == *(long **)(lVar29 + 0x38)) {
LAB_0e2cec31:
    puVar16 = &DAT_0f74edd0;
  }
  else {
    puVar16 = (undefined *)plVar18[2];
  }
  pbVar6 = *(byte **)(CONCAT44(uStack_22c,uStack_230) + 0x58);
  for (pbVar22 = *(byte **)(CONCAT44(uStack_22c,uStack_230) + 0x50); pbVar22 != pbVar6;
      pbVar22 = pbVar22 + 0x38) {
    bVar2 = *pbVar22;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e2cecba;
    }
    else if (*(long *)(pbVar22 + 8) == 0x24) {
LAB_0e2cecba:
      if ((bVar2 & 1) == 0) {
        pbVar25 = pbVar22 + 1;
      }
      else {
        pbVar25 = *(byte **)(pbVar22 + 0x10);
      }
      iVar14 = func_0x0eee3000(&DAT_014518a9,pbVar25,0x24);
      if (iVar14 == 0) break;
    }
  }
  if (pbVar22 != pbVar6) {
    iVar14 = *(int *)(pbVar22 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550768), iVar15 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    if (iVar14 != _DAT_0f550754) goto LAB_0e2cefdc;
  }
  uVar11 = uStack_204;
  if (iStack_208 == 0) {
    if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e2ced86;
    lVar29 = *(long *)(puVar16 + 0x68) + 0x38;
  }
  else {
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)func_0x048aead0(lStack_90);
    }
    puVar16 = (undefined *)func_0x048b0c90(lStack_90,puVar16,uVar11,1);
    if (puVar16 == (undefined *)0x0) {
      puStack_168 = (undefined *)0x0;
      puStack_160 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_168);
      puVar16 = puStack_168;
      if (puStack_168 == (undefined *)0x0) goto LAB_0e2ced86;
    }
    if ((*(int *)(puVar16 + 0x50) == -0x45dcb126) && (*(long *)(puVar16 + 0x58) != 0)) {
      lVar29 = *(long *)(puVar16 + 0x58) + 0x40;
    }
    else {
LAB_0e2ced86:
      lVar29 = 0;
    }
  }
  uStack_2a0 = 0;
  puStack_290 = &UNK_048b4ab0;
  uStack_288 = (code *)&UNK_048b49f0;
  uStack_280 = CONCAT35(uStack_280._5_3_,0x1d33bd9c5);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar20 = 0x676e696c6c75430e;
  *(undefined1 *)(puVar20 + 1) = 0;
  *(undefined4 *)((long)puVar20 + 9) = uStack_238;
  *(uint *)((long)puVar20 + 0xc) = CONCAT31(uStack_234,uStack_238._3_1_);
  puVar20[2] = 0;
  uStack_234 = 0;
  uStack_238 = 0;
  *(undefined2 *)(puVar20 + 3) = 0x101;
  puVar20[4] = uStack_38;
  puVar20[5] = uVar23;
  puVar20[6] = uVar27;
  puStack_168 = &UNK_048b46e0;
  uStack_150 = (code *)&UNK_048b4ab0;
  uStack_148 = (code *)&UNK_048b49f0;
  uStack_140 = 0xd33bd9c5;
  cStack_13c = '\x01';
  uStack_2a0 = 0;
  puStack_160 = puVar20;
  puVar21 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar21 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar10 = _UNK_014518c1;
  uStack_88 = 0x29;
  uStack_80 = 0x24;
  *(undefined8 *)(puVar21 + 4) = _DAT_014518b9;
  *(undefined8 *)(puVar21 + 6) = uVar10;
  uVar9 = _UNK_014518b5;
  uVar8 = _UNK_014518b1;
  uVar7 = _UNK_014518ad;
  *puVar21 = _DAT_014518a9;
  puVar21[1] = uVar7;
  puVar21[2] = uVar8;
  puVar21[3] = uVar9;
  puVar21[8] = 0x5d797472;
  *(undefined1 *)(puVar21 + 9) = 0;
  uStack_78 = puVar21;
  lVar29 = func_0x048b5060(lVar29,&uStack_88);
  *(undefined **)(lVar29 + 0x20) = &UNK_048b46e0;
  pcVar19 = (code *)&UNK_048b49f0;
  if ((undefined **)(lVar29 + 0x20) != &puStack_168) {
    puVar20 = (undefined8 *)(lVar29 + 0x28);
    if (*(code **)(lVar29 + 0x40) == (code *)0x0) {
LAB_0e2cef4d:
      puVar12 = puStack_160;
      puStack_160 = (undefined8 *)0x0;
      *puVar20 = puVar12;
    }
    else {
      (**(code **)(lVar29 + 0x40))(puVar20);
      if (cStack_13c != '\0') {
        if (cStack_13c != '\x02') goto LAB_0e2cef4d;
        (*uStack_150)(5,&puStack_160,puVar20);
      }
    }
    *(int *)(lVar29 + 0x38) = (int)uStack_150;
    *(int *)(lVar29 + 0x3c) = uStack_150._4_4_;
    *(undefined4 *)(lVar29 + 0x40) = (undefined4)uStack_148;
    *(undefined4 *)(lVar29 + 0x44) = uStack_148._4_4_;
    *(uint *)(lVar29 + 0x48) = uStack_140;
    *(char *)(lVar29 + 0x4c) = cStack_13c;
    pcVar19 = uStack_148;
  }
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
    pcVar19 = uStack_148;
  }
  if (pcVar19 != (code *)0x0) {
    (*pcVar19)(&puStack_160);
  }
  if (uStack_288 != (code *)0x0) {
    (*uStack_288)(&uStack_2a0);
  }
  uVar27 = 0;
  uVar23 = 0;
LAB_0e2cefdc:
  uStack_1b8 = CONCAT44(uStack_1fc,uStack_200);
  uStack_1c8 = uStack_210;
  uStack_1c4 = uStack_20c;
  iStack_1c0 = iStack_208;
  uStack_1bc = uStack_204;
  uStack_1d8 = uStack_220;
  uStack_1d4 = uStack_21c;
  uStack_1d0 = uStack_218;
  uStack_1cc = uStack_214;
  uStack_1e8 = uStack_230;
  uStack_1e4 = uStack_22c;
  uStack_1e0 = uStack_228;
  uStack_1dc = uStack_224;
  func_0x0e37ad80(&puStack_168,&uStack_1e8,&UNK_011ea907,0xb);
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar18 = (long)&UNK_0f4b82e0;
  if (uStack_150 != (code *)0x0) {
    lVar29 = *(long *)uStack_150;
    uStack_150 = (code *)plVar18;
    (**(code **)(lVar29 + 8))();
    plVar18 = (long *)uStack_150;
  }
  uStack_150 = (code *)plVar18;
  uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
  lStack_298 = 0;
  puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
  uStack_288 = (code *)0x1;
  uStack_280 = 0;
  puStack_278 = &UNK_0e37bb30;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &SUB_0e37b820;
  puStack_260 = &UNK_0e37bb40;
  puStack_258 = &UNK_0e37bd00;
  uStack_250 = 0;
  uStack_248 = 0;
  plStack_240 = (long *)0x0;
  func_0x048b05a0(puStack_160,&uStack_2a0);
  plVar18 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_240 + 1;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0e37b030(&puStack_168);
  uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_1b8);
  uStack_188 = uStack_1c8;
  uStack_184 = uStack_1c4;
  iStack_180 = iStack_1c0;
  uStack_17c = uStack_1bc;
  uStack_198 = uStack_1d8;
  uStack_194 = uStack_1d4;
  uStack_190 = uStack_1d0;
  uStack_18c = uStack_1cc;
  uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
  uStack_1a0 = CONCAT44(uStack_1dc,uStack_1e0);
  func_0x048b0bc0(&uStack_150);
  func_0x0e37ad80(&puStack_168,&uStack_1a8,&UNK_0144267d,5);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4b74b8;
  if (uStack_150 != (code *)0x0) {
    lVar29 = *(long *)uStack_150;
    uStack_150 = (code *)puVar20;
    (**(code **)(lVar29 + 8))();
    puVar20 = (undefined8 *)uStack_150;
  }
  uStack_150 = (code *)puVar20;
  uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uStack_158);
  lStack_298 = 0;
  puStack_290 = (undefined *)((ulong)puStack_290 & 0xffffffff00000000);
  uStack_288 = (code *)0x1;
  uStack_280 = 0;
  puStack_278 = &UNK_0e37f710;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e37e1d0;
  puStack_260 = &UNK_0e37f7d0;
  puStack_258 = &UNK_0e37f9d0;
  uStack_250 = 0;
  uStack_248 = 0;
  plStack_240 = (long *)0x0;
  func_0x048b05a0(puStack_160,&uStack_2a0);
  plVar18 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_240 + 1;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar18);
    }
  }
  func_0x0e37b030(&puStack_168);
  func_0x048b0bc0(&uStack_150);
  if ((uVar27 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar27 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar23 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar23 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_40 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_40 & 0xff00ffffffffffff) - 8);
  }
  uStack_40 = 0;
  if ((uStack_48 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
