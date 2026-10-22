/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdce62c0 (ELF vaddr 0xdbe62c0)
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dce62c0, 0dce6fdd]]
 * Ghidra: FUN_0dce62c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dce62c0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  byte bStack_260;
  undefined7 uStack_25f;
  ulong uStack_258;
  undefined7 *puStack_250;
  uint uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  uint uStack_210;
  undefined4 uStack_20c;
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
  undefined7 *puStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_148;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  undefined7 uStack_a7;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char cStack_28;
  
  func_0x0d91a8f0();
  if ((DAT_0f73b2c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73b2c8), iVar6 != 0)) {
    func_0x0dd0f910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b248,0xf53dab8);
    func_0x0410844d(&DAT_0f73b2c8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73b248 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_0dce6330;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f73b248 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dce6330:
    puVar7 = &DAT_0f73b248;
    if (iRam000000000f73b2a8 != -0x2b3da790) goto LAB_0dce6397;
LAB_0dce635b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0dce6397;
    bVar14 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar13 = lVar9 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar9 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0dd0fe50(&uStack_248,param_1,lVar13,uVar12);
    uStack_58 = uStack_248;
    uStack_54 = uStack_244;
    uStack_50 = uStack_240;
    uStack_4c = uStack_23c;
    uStack_48 = uStack_238;
    uStack_44 = uStack_234;
    uStack_40 = uStack_230;
    uStack_3c = uStack_22c;
    uStack_38 = iStack_228;
    uStack_34 = iStack_224;
    cStack_28 = (char)puStack_218;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dce635b;
LAB_0dce6397:
    func_0x0dd0fe50(&uStack_248,param_1,&UNK_014c2a73,0x12);
    uStack_58 = uStack_248;
    uStack_54 = uStack_244;
    uStack_50 = uStack_240;
    uStack_4c = uStack_23c;
    uStack_48 = uStack_238;
    uStack_44 = uStack_234;
    uStack_40 = uStack_230;
    uStack_3c = uStack_22c;
    uStack_38 = iStack_228;
    uStack_34 = iStack_224;
    cStack_28 = (char)puStack_218;
  }
  if (cStack_28 == '\0') {
    uStack_220._4_4_ = (undefined4)((ulong)uStack_220 >> 0x20);
    uStack_30 = (undefined4)uStack_220;
    uStack_2c = uStack_220._4_4_;
    func_0x0dd109f0(&puStack_1a8,&uStack_58,&UNK_01374375,5,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f3610a0;
    if (uStack_190 != (long *)0x0) {
      lVar9 = *uStack_190;
      uStack_190 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_190;
    }
    uStack_190 = plVar8;
    uStack_210 = (uint)plStack_198;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 1;
    uStack_1f0 = 0;
    puStack_1e8 = &UNK_0c34cf90;
    puStack_1e0 = &SUB_048b06d0;
    puStack_1d8 = &SUB_0c34ccb0;
    puStack_1d0 = &UNK_0dd10fb0;
    puStack_1c8 = &UNK_0dd11110;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x048b05a0(plStack_1a0,&uStack_210);
    plVar8 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0dd10cb0(&puStack_1a8);
    cStack_a8 = cStack_28;
    uStack_b8 = uStack_38;
    uStack_b4 = uStack_34;
    uStack_b0 = uStack_30;
    uStack_ac = uStack_2c;
    uStack_c8 = uStack_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    uStack_d8 = CONCAT44(uStack_54,uStack_58);
    uStack_d0._0_4_ = uStack_50;
    uStack_d0._4_4_ = uStack_4c;
    func_0x048b0bc0(&uStack_190);
    uStack_98 = (undefined4)uStack_d8;
    uStack_94 = uStack_d8._4_4_;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    iStack_80 = uStack_c0;
    iStack_7c = uStack_bc;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    uStack_68 = CONCAT71(uStack_a7,cStack_a8);
    func_0x0dd10440(&puStack_1a8,uStack_d8 + 0x18);
    if (uStack_190._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)plStack_198 + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != (int)uStack_190) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      uVar12 = *(ulong *)(piVar11 + 0xc);
      while ((long *)uVar12 != plStack_1a0) {
        piVar11 = *(int **)(piVar11 + 0xe);
        uVar12 = *(ulong *)(piVar11 + 0xc);
      }
LAB_0dce663f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_190._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)plStack_198 + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != (int)uStack_190) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0dce663f;
      }
      if (uStack_190._4_4_ == 0) {
        *(uint *)((long)plStack_198 + 0x18) = *(uint *)((long)plStack_198 + 0x18) | 0x40000;
      }
    }
    func_0x0dd109f0(&puStack_1a8,&uStack_98,&UNK_01268a39,0xb,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f49fcc0;
    if (uStack_190 != (long *)0x0) {
      lVar9 = *uStack_190;
      uStack_190 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_190;
    }
    uStack_190 = plVar8;
    uStack_210 = (uint)plStack_198;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 1;
    uStack_1f0 = 0;
    puStack_1e8 = &UNK_0dd147e0;
    puStack_1e0 = &SUB_048b06d0;
    puStack_1d8 = &UNK_0dd141f0;
    puStack_1d0 = &UNK_0dd147f0;
    puStack_1c8 = &UNK_0dd14950;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x048b05a0(plStack_1a0,&uStack_210);
    plVar8 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0dd10cb0(&puStack_1a8);
    func_0x048b0bc0(&uStack_190);
    puStack_1a8 = (undefined7 *)&UNK_013c28d2;
    plStack_198 = (long *)&UNK_013d7623;
    puStack_188 = &UNK_0131d5bd;
    puStack_178 = &UNK_012e9aec;
    puStack_168 = &UNK_013bdce6;
    puStack_158 = &UNK_01272580;
    puStack_148 = &UNK_0135c5cd;
    func_0x0470d9a0(&bStack_260,&UNK_013f2e9e,0xca,&UNK_0ccccccc,&puStack_1a8);
    puStack_1a8 = &uStack_25f;
    plStack_1a0 = (long *)(ulong)(bStack_260 >> 1);
    if ((bStack_260 & 1) != 0) {
      plStack_1a0 = (long *)uStack_258;
      puStack_1a8 = puStack_250;
    }
    func_0x0470d9a0(&uStack_210,&UNK_01387e95,0x3c,0xd,&puStack_1a8);
    if ((uStack_210 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1fc,uStack_200),
                      CONCAT44(uStack_20c,uStack_210) & 0xfffffffffffffffe);
    }
    if ((bStack_260 & 1) != 0) {
      func_0x0412a280(puStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
    }
  }
  lVar9 = func_0x0cd0d560(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar14 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar13 = lVar9 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar9 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0dd14db0(&uStack_210,param_1,lVar13,uVar12);
    uStack_248 = uStack_210;
    uVar3 = uStack_208;
    uStack_238 = uStack_200;
    uStack_234 = uStack_1fc;
    uVar4 = uStack_1f8;
    uVar5 = uStack_1f0;
    puStack_218 = puStack_1e0;
  }
  else {
    func_0x0dd14db0(&uStack_210,param_1,&UNK_013bf335,9);
    uStack_248 = uStack_210;
    uVar3 = uStack_208;
    uStack_238 = uStack_200;
    uStack_234 = uStack_1fc;
    uVar4 = uStack_1f8;
    uVar5 = uStack_1f0;
    puStack_218 = puStack_1e0;
  }
  if ((char)puStack_1e0 != '\0') {
    return;
  }
  uStack_208._0_4_ = (undefined4)uVar3;
  uStack_208._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_1f8._0_4_ = (undefined4)uVar4;
  uStack_1f8._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_1f0._0_4_ = (int)uVar5;
  uStack_1f0._4_4_ = (int)((ulong)uVar5 >> 0x20);
  iStack_228 = (int)uStack_1f0;
  iStack_224 = uStack_1f0._4_4_;
  uStack_230 = (undefined4)uStack_1f8;
  uStack_22c = uStack_1f8._4_4_;
  uStack_240 = (undefined4)uStack_208;
  uStack_23c = uStack_208._4_4_;
  uStack_220 = 0x1e1bc4d500000004;
  uStack_210 = uStack_248;
  uStack_208 = uVar3;
  uStack_200 = uStack_238;
  uStack_1f8 = uVar4;
  uStack_1f0 = uVar5;
  puStack_1e0 = puStack_218;
  if ((DAT_0f700ab8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f700ab8), iVar6 != 0)) {
    func_0x0cd0d3e0(0xf700aa0);
    func_0x0410844d(&DAT_0f700ab8);
  }
  puStack_1a8 = (undefined7 *)CONCAT44(puStack_1a8._4_4_,uStack_220._4_4_);
  plStack_1a0 = (long *)0x0;
  plStack_198 = (long *)((ulong)plStack_198 & 0xffffffff00000000);
  uStack_190 = (long *)0x1;
  puStack_188 = &SUB_048aead0;
  puStack_180 = &UNK_0dd15660;
  puStack_178 = &UNK_0dd15720;
  uStack_170 = 0;
  puStack_168 = (undefined *)((ulong)puStack_168 & 0xffffffff00000000);
  uStack_160 = 0;
  puStack_158 = (undefined *)0x0;
  func_0x049057f0(&uStack_240,&puStack_1a8);
  func_0x048aea50(&puStack_1a8);
  uStack_88 = uStack_230;
  uStack_84 = uStack_22c;
  iStack_80 = iStack_228;
  iStack_7c = iStack_224;
  uStack_98 = uStack_240;
  uStack_94 = uStack_23c;
  uStack_90 = uStack_238;
  uStack_8c = uStack_234;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f49bc20;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_1a8 = (undefined7 *)CONCAT44(puStack_1a8._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_1a0 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_d8 = 0;
  uStack_d0 = (long *)0x0;
  plStack_198 = plVar8;
  func_0x048afd20(&uStack_98,&puStack_1a8);
  plVar8 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_198 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f700ab8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f700ab8), iVar6 != 0)) {
    func_0x0cd0d3e0(0xf700aa0);
    func_0x0410844d(&DAT_0f700ab8);
  }
  if (iStack_224 == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_228) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != CONCAT44(uStack_234,uStack_238)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (iStack_224 != 1) {
      if (iStack_224 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_22c,uStack_230) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0dce6c13;
    }
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_22c,uStack_230) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != iStack_228) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
LAB_0dce6c13:
  if ((DAT_0f700ab8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f700ab8), iVar6 != 0)) {
    func_0x0cd0d3e0(0xf700aa0);
    func_0x0410844d(&DAT_0f700ab8);
  }
  puStack_1a8 = (undefined7 *)CONCAT44(puStack_1a8._4_4_,0xbf75c8f8);
  plStack_1a0 = (long *)0x0;
  plStack_198 = (long *)((ulong)plStack_198 & 0xffffffff00000000);
  uStack_190 = (long *)0x0;
  puStack_188 = &UNK_0dd15920;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0dd161a0;
  uStack_170 = 0;
  puStack_168 = (undefined *)((ulong)puStack_168 & 0xffffffff00000000);
  uStack_160 = 0;
  puStack_158 = (undefined *)0x0;
  func_0x049057f0(&uStack_240,&puStack_1a8);
  func_0x048aea50(&puStack_1a8);
  uStack_88 = uStack_230;
  uStack_84 = uStack_22c;
  iStack_80 = iStack_228;
  iStack_7c = iStack_224;
  uStack_98 = uStack_240;
  uStack_94 = uStack_23c;
  uStack_90 = uStack_238;
  uStack_8c = uStack_234;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f49bc20;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_1a8 = (undefined7 *)CONCAT44(puStack_1a8._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_1a0 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_d8 = 0;
  uStack_d0 = (long *)0x0;
  plStack_198 = plVar8;
  func_0x048afd20(&uStack_98,&puStack_1a8);
  plVar8 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_198 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar8);
    }
  }
  return;
}


