/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd57570 (ELF vaddr 0xcc57570)
 * Label: caller-of-callee
 * Body:  [[0cd57570, 0cd57ab1] [0cd57ac0, 0cd58262]]
 * Ghidra: FUN_0cd57570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cd57570(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined4 auStack_210 [2];
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f704598 == '\0') && (iVar5 = func_0x04108328(&DAT_0f704598), iVar5 != 0)) {
    func_0x0cd8c880();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f704518,0xf53dab8);
    func_0x0410844d(&DAT_0f704598);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f704518 + 4)) * 8);
  do {
    lVar13 = *plVar7;
    if (lVar13 == -1) goto LAB_0cd575f0;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f704518 + 4))
  ;
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_0cd575f0:
    puVar6 = &DAT_0f704518;
    if (iRam000000000f704578 != -0x2b3da790) goto LAB_0cd57672;
LAB_0cd5761b:
    lVar13 = *(long *)(puVar6 + 0x68);
    if (lVar13 == 0) goto LAB_0cd57672;
    bVar15 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar8 = lVar13 + 9;
    if (bVar15) {
      lVar8 = *(long *)(lVar13 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0cd8ccb0(&uStack_1a8,param_1,lVar8,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0cd5761b;
LAB_0cd57672:
    func_0x0cd8ccb0(&uStack_1a8,param_1,&UNK_011aeb2e,0x24);
  }
  if ((char)puStack_178 != '\0') {
    uStack_158._4_4_ = (uint)((ulong)uStack_158 >> 0x20);
    lVar13 = func_0x0cd8e4a0(param_1 + 0x18);
    iVar5 = *(int *)(lVar13 + 0x60);
    goto joined_r0x0cd57667;
  }
  func_0x0cd8d810(&lStack_168,&uStack_1a8,&UNK_011aeb53,0xe,1);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f01a0f0;
  if (uStack_150 != (long *)0x0) {
    lVar13 = *uStack_150;
    uStack_150 = plVar7;
    (**(code **)(lVar13 + 8))();
    plVar7 = uStack_150;
  }
  uStack_150 = plVar7;
  auStack_210[0] = (undefined4)uStack_158;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_05fb33c0;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_05fb3400;
  puStack_1d0 = &UNK_0cd8ddd0;
  puStack_1c8 = &UNK_0cd8df30;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  func_0x048b05a0(plStack_160,auStack_210);
  plVar7 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_1b0 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0cd8dad0(&lStack_168);
  lVar13 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_88 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_80 = (long *)CONCAT44(uStack_194,uStack_198);
  uStack_78 = uStack_190;
  uStack_74 = uStack_18c;
  uStack_70 = uStack_188;
  uStack_6c = uStack_184;
  lStack_90 = param_1 + 0x18;
  func_0x048b0bc0(&uStack_150);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0f403128;
  plVar7[4] = -1;
  plVar7[5] = 0;
  *(undefined1 *)(plVar7 + 6) = 0xff;
  lVar8 = _DAT_014f0238;
  plVar7[3] = (long)&UNK_0f0edc68;
  plVar7[7] = 0;
  plVar7[8] = lVar8;
  plVar7[9] = 0;
  plVar7[10] = 0;
  if ((int)uStack_180 == 4) {
    if ((DAT_0f704598 == '\0') && (iVar5 = func_0x04108328(&DAT_0f704598), iVar5 != 0)) {
      func_0x0cd8c880();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f704518,0xf53dab8);
      func_0x0410844d(&DAT_0f704598);
    }
    plVar12 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f704518 + 4)) * 8);
    do {
      lVar8 = *plVar12;
      if (lVar8 == -1) goto LAB_0cd57999;
      plVar12 = (long *)(*(long *)(lVar13 + 0x30) + lVar8 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f704518 + 4))
    ;
    if (plVar12 == *(long **)(lVar13 + 0x38)) {
LAB_0cd57999:
      puVar6 = &DAT_0f704518;
    }
    else {
      puVar6 = (undefined *)plVar12[2];
    }
    lVar8 = func_0x048b1040(lVar13 + 0x18,puVar6,uStack_180._4_4_,1);
    if (lVar8 == 0) {
      lStack_168 = 0;
      plStack_160 = (long *)0x0;
      func_0x048b10d0(&lStack_168);
      lVar10 = *(long *)(lStack_168 + 0x38);
      lVar8 = lStack_168;
      if (lVar10 == 0) goto LAB_0cd57a83;
LAB_0cd57aa8:
      do {
        lVar8 = lVar10;
        lVar10 = *(long *)(lVar8 + 0x38);
        if (*(long *)(lVar8 + 0x38) == 0) {
          lStack_168 = 0;
          plStack_160 = (long *)0x0;
          func_0x048b10d0(&lStack_168);
          lVar10 = lStack_168;
        }
      } while (lVar10 != 0);
    }
    else {
      lVar10 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) != 0) goto LAB_0cd57aa8;
LAB_0cd57a83:
      lStack_168 = 0;
      plStack_160 = (long *)0x0;
      func_0x048b10d0(&lStack_168);
      lVar10 = lStack_168;
      if (lStack_168 != 0) goto LAB_0cd57aa8;
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0cd57b14:
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0xff;
    *puVar9 = &UNK_0f4e3cf0;
    puVar9[4] = 0;
    puVar9[5] = plVar7 + 3;
    puVar9[6] = plVar7;
    *(undefined1 *)(puVar9 + 7) = 0;
    plVar7 = *(long **)(lVar8 + 8);
    *(undefined8 **)(lVar8 + 8) = puVar9;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x28))();
    }
    plVar7 = (long *)0x0;
  }
  else if ((int)uStack_180 == 1) {
    if ((DAT_0f704598 == '\0') && (iVar5 = func_0x04108328(&DAT_0f704598), iVar5 != 0)) {
      func_0x0cd8c880();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f704518,0xf53dab8);
      func_0x0410844d(&DAT_0f704598);
    }
    plVar12 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f704518 + 4)) * 8);
    do {
      lVar8 = *plVar12;
      if (lVar8 == -1) goto LAB_0cd57919;
      plVar12 = (long *)(*(long *)(lVar13 + 0x30) + lVar8 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f704518 + 4))
    ;
    if (plVar12 == *(long **)(lVar13 + 0x38)) {
LAB_0cd57919:
      puVar6 = &DAT_0f704518;
    }
    else {
      puVar6 = (undefined *)plVar12[2];
    }
    lVar8 = func_0x048b0c90(lVar13 + 0x18,puVar6,uStack_180._4_4_,1);
    if (lVar8 == 0) {
      lStack_168 = 0;
      plStack_160 = (long *)0x0;
      func_0x048b0d20(&lStack_168);
      lVar8 = lStack_168;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0cd57b14;
  }
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_60 = (undefined4)uStack_88;
  uStack_5c = uStack_88._4_4_;
  uStack_58 = (undefined4)uStack_80;
  uStack_54 = uStack_80._4_4_;
  uStack_3c = uStack_180._4_4_;
  cStack_38 = (char)puStack_178;
  iStack_40 = (int)uStack_180;
  func_0x0cd8d2a0(&lStack_168,lVar13 + 0x18);
  if (uStack_150._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)((long)uStack_158 + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_150) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar13 = *(long *)(piVar11 + 0xc);
    while ((long *)lVar13 != plStack_160) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar13 = *(long *)(piVar11 + 0xc);
    }
LAB_0cd57c3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (uStack_150._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)((long)uStack_158 + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_150) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0cd57c3f;
    }
    if (uStack_150._4_4_ == 0) {
      *(uint *)((long)uStack_158 + 0x18) = *(uint *)((long)uStack_158 + 0x18) | 0x40000;
    }
  }
  func_0x0cd8d810(&lStack_168,&uStack_68,&UNK_01367d32,7,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (uStack_150 != (long *)0x0) {
    lVar13 = *uStack_150;
    uStack_150 = plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = uStack_150;
  }
  uStack_150 = plVar12;
  auStack_210[0] = (undefined4)uStack_158;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_04906f70;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_04906c50;
  puStack_1d0 = &UNK_0cd8e160;
  puStack_1c8 = &UNK_0cd8e2c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  func_0x048b05a0(plStack_160,auStack_210);
  plVar12 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      FUN_0412c2d0(plVar12);
    }
  }
  func_0x0cd8dad0(&lStack_168);
  func_0x048b0bc0(&uStack_150);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0412c2d0(plVar7);
    }
  }
  lVar13 = func_0x0cd8e4a0(lStack_90);
  iVar5 = *(int *)(lVar13 + 0x60);
joined_r0x0cd57667:
  if ((iVar5 == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0)) {
    bVar15 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar8 = lVar13 + 9;
    if (bVar15) {
      lVar8 = *(long *)(lVar13 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0cd8e9b0(auStack_210,param_1,lVar8,uVar14);
    uVar2 = uStack_208;
    uStack_194 = uStack_1fc;
    uVar3 = uStack_1f8;
    uVar4 = uStack_1f0;
  }
  else {
    func_0x0cd8e9b0(auStack_210,param_1,&UNK_011a7694,4);
    uVar2 = uStack_208;
    uStack_194 = uStack_1fc;
    uVar3 = uStack_1f8;
    uVar4 = uStack_1f0;
  }
  if ((char)puStack_1e0 == '\0') {
    uStack_208._0_4_ = (undefined4)uVar2;
    uStack_208._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_1f8._0_4_ = (undefined4)uVar3;
    uStack_1f8._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    uStack_1f0._0_4_ = (undefined4)uVar4;
    uStack_1f0._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_188 = (undefined4)uStack_1f0;
    uStack_184 = uStack_1f0._4_4_;
    uStack_190 = (undefined4)uStack_1f8;
    uStack_18c = uStack_1f8._4_4_;
    uStack_1a0 = (undefined4)uStack_208;
    uStack_19c = uStack_208._4_4_;
    uStack_180 = 0x1e1bc4d500000004;
    uStack_208 = uVar2;
    uStack_1f8 = uVar3;
    uStack_1f0 = uVar4;
    uStack_1a8 = auStack_210[0];
    uStack_198 = uStack_200;
    puStack_178 = puStack_1e0;
    if ((DAT_0f704f98 == '\0') && (iVar5 = func_0x04108328(&DAT_0f704f98), iVar5 != 0)) {
      func_0x0cd8e690(0xf704f80);
      func_0x0410844d(&DAT_0f704f98);
    }
    lStack_168 = CONCAT44(lStack_168._4_4_,uStack_180._4_4_);
    plStack_160 = (long *)0x0;
    uStack_158 = (long *)((ulong)uStack_158._4_4_ << 0x20);
    uStack_150 = (long *)0x1;
    puStack_148 = &SUB_048aead0;
    puStack_140 = &UNK_0cd8f400;
    puStack_138 = &UNK_0cd8f4c0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x049057f0(&uStack_1a0,&lStack_168);
    FUN_048aea50(&lStack_168);
    uStack_58 = uStack_190;
    uStack_54 = uStack_18c;
    uStack_50 = uStack_188;
    uStack_4c = uStack_184;
    _uStack_68 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_60 = uStack_198;
    uStack_5c = uStack_194;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f402a70;
    if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    lStack_168 = CONCAT44(lStack_168._4_4_,_DAT_0f551bb4);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef46c48;
    plStack_160 = plVar7 + 3;
    plVar7[3] = (long)puVar9;
    plVar7[4] = 0;
    *(undefined1 *)(plVar7 + 5) = 0xff;
    uStack_88 = 0;
    uStack_80 = (long *)0x0;
    uStack_158 = plVar7;
    FUN_048afd20(&uStack_68,&lStack_168);
    plVar7 = uStack_158;
    if (uStack_158 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_158 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_158 + 0x10))(uStack_158);
        FUN_0412c2d0(plVar7);
      }
    }
    plVar7 = uStack_80;
    if (uStack_80 != (long *)0x0) {
      LOCK();
      plVar12 = uStack_80 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_80 + 0x10))(uStack_80);
        FUN_0412c2d0(plVar7);
      }
    }
  }
  return;
}


