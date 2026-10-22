/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7eb4e00 (ELF vaddr 0x7db4e00)
 * Label: caller-of-callee
 * Body:  [[07eb4e00, 07eb615a] [07eb6160, 07eb66fe]]
 * Ghidra: FUN_07eb4e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07eb4e00(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  undefined4 *puVar24;
  bool bVar25;
  uint auStack_228 [2];
  long lStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  uint uStack_18c;
  char cStack_188;
  uint uStack_184;
  char cStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  char cStack_148;
  ulong uStack_138;
  long lStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  long *aplStack_110 [2];
  byte bStack_100;
  undefined1 auStack_ff [7];
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5c21c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c21c8), iVar10 != 0)) {
    func_0x07f87e60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2148,0xf53dab8);
    func_0x0410844d(&DAT_0f5c21c8);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c2148 + 4)) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_07eb4e70;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c2148 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07eb4e70:
    puVar11 = &DAT_0f5c2148;
    if (iRam000000000f5c21a8 != -0x2b3da790) goto LAB_07eb4ec8;
LAB_07eb4e9b:
    lVar15 = *(long *)(puVar11 + 0x68);
    if (lVar15 == 0) goto LAB_07eb4ec8;
    bVar25 = (*(byte *)(lVar15 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar15 + 9);
    if (bVar25) {
      puVar11 = *(undefined **)(lVar15 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar15 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_07eb4e9b;
LAB_07eb4ec8:
    puVar11 = &UNK_01465393;
    uVar21 = 0x1c;
  }
  func_0x07f882a0(&uStack_1b8,param_1,puVar11,uVar21);
  uStack_184 = uStack_184 & 0xffffff00;
  cStack_180 = '\0';
  if (cStack_188 == '\0') {
    func_0x07f8b9e0(&lStack_128,&UNK_0128f375);
    uVar21 = (ulong)(bStack_100 >> 1);
    puVar6 = auStack_ff;
    if ((bStack_100 & 1) != 0) {
      uVar21 = uStack_f8;
      puVar6 = puStack_f0;
    }
    if (uVar21 == 0) {
      uStack_18c = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_18c = ((int)(char)puVar6[uVar22 + 3] ^
                       ((int)(char)puVar6[uVar22 + 2] ^
                       ((int)(char)puVar6[uVar22 + 1] ^
                       ((int)(char)puVar6[uVar22] ^ uStack_18c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_18c = ((int)(char)puVar6[uVar21 + uVar22] ^ uStack_18c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    uStack_190 = 2;
    if ((DAT_0f5c21e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c21e8), iVar10 != 0)) {
      func_0x07f87f70();
      func_0x0410844d(&DAT_0f5c21e8);
    }
    auStack_228[0] = uStack_18c;
    lStack_220 = 0;
    uStack_218 = 3;
    uStack_210 = 1;
    uStack_208 = 0;
    puStack_200 = &UNK_07f8bfa0;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &UNK_07f87da0;
    puStack_1e8 = &UNK_07f8c060;
    puStack_1e0 = &UNK_07f8c070;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(&uStack_1b0,auStack_228);
    plVar14 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_168 = uStack_1a0;
    uStack_164 = uStack_19c;
    uStack_160 = uStack_198;
    uStack_15c = uStack_194;
    uStack_170 = uStack_1a8;
    uStack_16c = uStack_1a4;
    func_0x07f8bd30(auStack_228,&uStack_178,&lStack_128);
    if (uStack_210._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_210) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_220) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07eb514f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_210._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_210) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07eb514f;
      }
      if (uStack_210._4_4_ == 0) {
        puVar23 = (uint *)(CONCAT44(uStack_214,uStack_218) + 0x18);
        *puVar23 = *puVar23 | 0x90000;
      }
    }
    if (cStack_180 == '\0') {
      func_0x07f8c0c0(auStack_228,&uStack_1b8);
    }
    uVar7 = uStack_184;
    lVar15 = CONCAT44(uStack_1b4,uStack_1b8);
    if ((DAT_0f5c21c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c21c8), iVar10 != 0)) {
      func_0x07f87e60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2148,0xf53dab8);
      func_0x0410844d(&DAT_0f5c21c8);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c2148 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_07eb51f1;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5c2148 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07eb51f1:
      puVar11 = &DAT_0f5c2148;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar23 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar23 != puVar2 && (*puVar23 != uVar7)); puVar23 = puVar23 + 0xe) {
    }
    if ((puVar23 == puVar2) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013101b3),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_228[0] = auStack_228[0] & 0xffffff00;
    func_0x05d9c620(puVar23 + 2,&uStack_18c,&uStack_18c,auStack_228);
    func_0x048b0bc0(&lStack_128);
    func_0x07f8b9e0(&lStack_128);
    uVar21 = (ulong)(bStack_100 >> 1);
    puVar6 = auStack_ff;
    if ((bStack_100 & 1) != 0) {
      uVar21 = uStack_f8;
      puVar6 = puStack_f0;
    }
    if (uVar21 == 0) {
      uStack_18c = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_18c = ((int)(char)puVar6[uVar22 + 3] ^
                       ((int)(char)puVar6[uVar22 + 2] ^
                       ((int)(char)puVar6[uVar22 + 1] ^
                       ((int)(char)puVar6[uVar22] ^ uStack_18c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_18c = ((int)(char)puVar6[uVar21 + uVar22] ^ uStack_18c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    uStack_190 = 2;
    if ((DAT_0f5c21e8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c21e8), iVar10 != 0)) {
      func_0x07f87f70();
      func_0x0410844d(&DAT_0f5c21e8);
    }
    auStack_228[0] = uStack_18c;
    lStack_220 = 0;
    uStack_218 = 3;
    uStack_210 = 1;
    uStack_208 = 0;
    puStack_200 = &UNK_07f8bfa0;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &UNK_07f87da0;
    puStack_1e8 = &UNK_07f8c280;
    puStack_1e0 = &UNK_07f8c290;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(&uStack_1b0,auStack_228);
    plVar14 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_168 = uStack_1a0;
    uStack_164 = uStack_19c;
    uStack_160 = uStack_198;
    uStack_15c = uStack_194;
    uStack_170 = uStack_1a8;
    uStack_16c = uStack_1a4;
    func_0x07f8bd30(auStack_228,&uStack_178,&lStack_128);
    if (uStack_210._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_210) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_220) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07eb551f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_210._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_210) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07eb551f;
      }
      if (uStack_210._4_4_ == 0) {
        puVar23 = (uint *)(CONCAT44(uStack_214,uStack_218) + 0x18);
        *puVar23 = *puVar23 | 0x90000;
      }
    }
    if (cStack_180 == '\0') {
      func_0x07f8c0c0(auStack_228,&uStack_1b8);
    }
    uVar7 = uStack_184;
    lVar15 = CONCAT44(uStack_1b4,uStack_1b8);
    if ((DAT_0f5c21c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c21c8), iVar10 != 0)) {
      func_0x07f87e60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2148,0xf53dab8);
      func_0x0410844d(&DAT_0f5c21c8);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c2148 + 4)) * 8);
    do {
      lVar19 = *plVar14;
      if (lVar19 == -1) goto LAB_07eb55b0;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f5c2148 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07eb55b0:
      puVar11 = &DAT_0f5c2148;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar23 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar23 != puVar2 && (*puVar23 != uVar7)); puVar23 = puVar23 + 0xe) {
    }
    if ((puVar23 == puVar2) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_013101b3),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_228[0] = auStack_228[0] & 0xffffff00;
    func_0x05d9c620(puVar23 + 2,&uStack_18c,&uStack_18c,auStack_228);
    func_0x048b0bc0(&lStack_128);
  }
  func_0x078e6970(param_1);
  if ((DAT_0f5c2280 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2280), iVar10 != 0)) {
    func_0x07f8c3a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2200,0xf53dab8);
    func_0x0410844d(&DAT_0f5c2280);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c2200 + 4)) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_07eb56b0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c2200 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07eb56b0:
    puVar11 = &DAT_0f5c2200;
    if (iRam000000000f5c2260 != -0x2b3da790) goto LAB_07eb571d;
LAB_07eb56db:
    lVar15 = *(long *)(puVar11 + 0x68);
    if (lVar15 == 0) goto LAB_07eb571d;
    bVar25 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar19 = lVar15 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar15 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x07f8c880(&uStack_1b8,param_1,lVar19,uVar21);
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_07eb56db;
LAB_07eb571d:
    func_0x07f8c880(&uStack_1b8,param_1,&UNK_01418472,0x1c);
  }
  if (cStack_188 == '\0') {
    func_0x07f8d3e0(&lStack_128,&uStack_1b8,&UNK_01463f83,0xd,1);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0fe0d0;
    if (aplStack_110[0] != (long *)0x0) {
      lVar15 = *aplStack_110[0];
      aplStack_110[0] = plVar14;
      (**(code **)(lVar15 + 8))();
      plVar14 = aplStack_110[0];
    }
    aplStack_110[0] = plVar14;
    auStack_228[0] = uStack_118;
    lStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_208 = 0;
    puStack_200 = &UNK_07f71930;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &SUB_0791e540;
    puStack_1e8 = &UNK_07f8d9a0;
    puStack_1e0 = &UNK_07f8db00;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(uStack_120,auStack_228);
    plVar14 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07f8d6a0(&lStack_128);
    cStack_148 = cStack_188;
    uStack_158 = uStack_198;
    uStack_154 = uStack_194;
    uStack_150 = uStack_190;
    uStack_14c = uStack_18c;
    uStack_168 = uStack_1a8;
    uStack_164 = uStack_1a4;
    uStack_160 = uStack_1a0;
    uStack_15c = uStack_19c;
    uStack_178 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    func_0x048b0bc0(aplStack_110);
    func_0x07f8d3e0(&lStack_128,&uStack_178,&UNK_0149a9f3,0x10,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f0fea88;
    if (aplStack_110[0] != (long *)0x0) {
      lVar15 = *aplStack_110[0];
      aplStack_110[0] = plVar14;
      (**(code **)(lVar15 + 8))();
      plVar14 = aplStack_110[0];
    }
    aplStack_110[0] = plVar14;
    auStack_228[0] = uStack_118;
    lStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_208 = 0;
    puStack_200 = &UNK_07f8e830;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &UNK_07f8e510;
    puStack_1e8 = &UNK_07f8e840;
    puStack_1e0 = &UNK_07f8e9b0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(uStack_120,auStack_228);
    plVar14 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar14);
      }
    }
    func_0x07f8d6a0(&lStack_128);
    uVar8 = uStack_14c;
    uVar7 = uStack_150;
    func_0x048b0bc0(aplStack_110);
    if ((DAT_0f5c2280 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2280), iVar10 != 0)) {
      func_0x07f8c3a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2200,0xf53dab8);
      func_0x0410844d(&DAT_0f5c2280);
    }
    plVar14 = (long *)(*(long *)(uStack_178 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uStack_178 + 0x20) -
                                           *(long *)(uStack_178 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c2200 + 4)) * 8);
    do {
      lVar15 = *plVar14;
      if (lVar15 == -1) goto LAB_07eb5a70;
      plVar14 = (long *)(*(long *)(uStack_178 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uStack_178 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5c2200 + 4));
    if (plVar14 == *(long **)(uStack_178 + 0x38)) {
LAB_07eb5a70:
      puVar11 = &DAT_0f5c2200;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    if ((1 < uVar7 - 1) &&
       (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012f6e59),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar15 = func_0x048b0c90(uStack_178 + 0x18,puVar11,uVar8,1);
    if (lVar15 == 0) {
      lStack_128 = 0;
      uStack_120 = 0;
      func_0x048b0d20(&lStack_128);
      lVar15 = lStack_128;
    }
    *(undefined1 *)(*(long *)(lVar15 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5c2088 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2088), iVar10 != 0)) {
    func_0x07f860d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2008,0xf53dab8);
    func_0x0410844d(&DAT_0f5c2088);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c2008 + 4)) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_07eb5b70;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5c2008 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07eb5b70:
    puVar11 = &DAT_0f5c2008;
    if (iRam000000000f5c2068 != -0x2b3da790) goto LAB_07eb5bdd;
LAB_07eb5b9b:
    lVar15 = *(long *)(puVar11 + 0x68);
    if (lVar15 == 0) goto LAB_07eb5bdd;
    bVar25 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar19 = lVar15 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar15 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x07f8ee20(&uStack_1b8,param_1,lVar19,uVar21);
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_07eb5b9b;
LAB_07eb5bdd:
    func_0x07f8ee20(&uStack_1b8,param_1,&UNK_011f2dd5,0x22);
  }
  if (cStack_188 != '\0') {
    return;
  }
  func_0x07f8f980(&lStack_128,&uStack_1b8,&UNK_011f2df8,0x1f);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0fe9c0;
  if (aplStack_110[0] != (long *)0x0) {
    lVar15 = *aplStack_110[0];
    aplStack_110[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_110[0];
  }
  aplStack_110[0] = plVar14;
  auStack_228[0] = uStack_118;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_208 = 0;
  puStack_200 = &UNK_07f8bfa0;
  puStack_1f8 = &SUB_048b06d0;
  puStack_1f0 = &UNK_07f87da0;
  puStack_1e8 = &UNK_07f8ff60;
  puStack_1e0 = &UNK_07f900c0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  func_0x048b05a0(uStack_120,auStack_228);
  plVar14 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07f8fc60(&lStack_128);
  uVar8 = uStack_18c;
  uVar7 = uStack_190;
  lVar15 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_58 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_50 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_48 = uStack_1a0;
  uStack_44 = uStack_19c;
  uStack_40 = uStack_198;
  uStack_3c = uStack_194;
  uVar21 = (ulong)uStack_190;
  func_0x048b0bc0(aplStack_110);
  if ((DAT_0f5c2088 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2088), iVar10 != 0)) {
    func_0x07f860d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2008,0xf53dab8);
    func_0x0410844d(&DAT_0f5c2088);
  }
  lVar19 = lVar15 + 0x18;
  plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c2008 + 4)) * 8);
  do {
    lVar16 = *plVar14;
    if (lVar16 == -1) goto LAB_07eb5df0;
    plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c2008 + 4));
  if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07eb5df0:
    puVar11 = &DAT_0f5c2008;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  if ((1 < uVar7 - 1) &&
     (cVar9 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013e498a),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar16 = func_0x048b0c90(lVar19,puVar11,uVar8,1);
  if (lVar16 == 0) {
    lStack_128 = 0;
    uStack_120 = 0;
    func_0x048b0d20(&lStack_128);
    lVar16 = lStack_128;
  }
  uStack_1bc = uVar8;
  *(undefined1 *)(*(long *)(lVar16 + 0x58) + 0xa8) = 4;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar17 = 0;
  puVar17[1] = 1;
  uStack_138 = uVar21;
  puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar18 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  puVar24 = puVar18 + 4;
  uVar3 = *(undefined4 *)((long)puVar17 + 4);
  uVar4 = *(undefined4 *)(puVar17 + 1);
  uVar5 = *(undefined4 *)((long)puVar17 + 0xc);
  *puVar18 = *(undefined4 *)puVar17;
  puVar18[1] = uVar3;
  puVar18[2] = uVar4;
  puVar18[3] = uVar5;
  if ((int)uStack_138 == 1) {
    if ((DAT_0f5c2088 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2088), iVar10 != 0)) {
      func_0x07f860d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2008,0xf53dab8);
      func_0x0410844d(&DAT_0f5c2088);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c2008 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_07eb5fe8;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c2008 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07eb5fe8:
      puVar11 = &DAT_0f5c2008;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar15 = func_0x048b0c90(lVar19,puVar11,uStack_1bc,1);
    if (lVar15 == 0) {
      lStack_128 = 0;
      uStack_120 = 0;
      func_0x048b0d20(&lStack_128);
      lVar15 = lStack_128;
    }
    lVar15 = *(long *)(lVar15 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    if ((int)uStack_138 != 4) goto LAB_07eb61f9;
    if ((DAT_0f5c2088 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c2088), iVar10 != 0)) {
      func_0x07f860d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c2008,0xf53dab8);
      func_0x0410844d(&DAT_0f5c2088);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c2008 + 4)) * 8);
    do {
      lVar16 = *plVar14;
      if (lVar16 == -1) goto LAB_07eb5f78;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c2008 + 4)
            );
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07eb5f78:
      puVar11 = &DAT_0f5c2008;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar15 = func_0x048b1040(lVar19,puVar11,uStack_1bc,1);
    if (lVar15 == 0) {
      lStack_128 = 0;
      uStack_120 = 0;
      FUN_048b10d0(&lStack_128);
      lVar19 = *(long *)(lStack_128 + 0x38);
      lVar15 = lStack_128;
      if (lVar19 == 0) goto LAB_07eb612c;
LAB_07eb6151:
      do {
        lVar15 = lVar19;
        lVar19 = *(long *)(lVar15 + 0x38);
        if (*(long *)(lVar15 + 0x38) == 0) {
          lStack_128 = 0;
          uStack_120 = 0;
          FUN_048b10d0(&lStack_128);
          lVar19 = lStack_128;
        }
      } while (lVar19 != 0);
    }
    else {
      lVar19 = *(long *)(lVar15 + 0x38);
      if (*(long *)(lVar15 + 0x38) != 0) goto LAB_07eb6151;
LAB_07eb612c:
      lStack_128 = 0;
      uStack_120 = 0;
      FUN_048b10d0(&lStack_128);
      lVar19 = lStack_128;
      if (lStack_128 != 0) goto LAB_07eb6151;
    }
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  puVar20[1] = 0xffffffffffffffff;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 0xff;
  *puVar20 = &UNK_0f4e3aa0;
  puVar20[4] = puVar18;
  puVar20[5] = puVar24;
  puVar20[6] = puVar24;
  plVar14 = *(long **)(lVar15 + 8);
  *(undefined8 **)(lVar15 + 8) = puVar20;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))();
  }
  puVar24 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
LAB_07eb61f9:
  uStack_160 = uStack_48;
  uStack_15c = uStack_44;
  uStack_158 = uStack_40;
  uStack_154 = uStack_3c;
  uStack_170 = (undefined4)uStack_58;
  uStack_16c = uStack_58._4_4_;
  uStack_168 = (undefined4)uStack_50;
  uStack_164 = uStack_50._4_4_;
  uStack_150 = (uint)uStack_138;
  uStack_14c = uStack_1bc;
  cStack_148 = cStack_188;
  func_0x07f8f980(&lStack_128,&uStack_178,&UNK_013fe59b,0x18);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0feb70;
  if (aplStack_110[0] != (long *)0x0) {
    lVar15 = *aplStack_110[0];
    aplStack_110[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_110[0];
  }
  aplStack_110[0] = plVar14;
  auStack_228[0] = uStack_118;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_208 = 0;
  puStack_200 = &UNK_07f93460;
  puStack_1f8 = &SUB_048b06d0;
  puStack_1f0 = &UNK_07f922d0;
  puStack_1e8 = &UNK_07f93520;
  puStack_1e0 = &UNK_07f93750;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  func_0x048b05a0(uStack_120,auStack_228);
  plVar14 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x07f8fc60(&lStack_128);
  func_0x048b0bc0(aplStack_110);
  if (puVar18 != (undefined4 *)0x0) {
    func_0x0412a280(puVar18,(long)puVar24 - (long)puVar18);
  }
  func_0x0412a280(puVar17,0x10);
  return;
}


