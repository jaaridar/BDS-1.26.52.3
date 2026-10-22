/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x81715a0 (ELF vaddr 0x80715a0)
 * Label: caller-of-callee
 * Body:  [[081715a0, 08171f29] [08171f30, 08172164]]
 * Ghidra: FUN_081715a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_081715a0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_1d0 [2];
  long lStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined4 *puStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  undefined5 uStack_13f;
  undefined2 uStack_13a;
  undefined1 uStack_138;
  undefined5 uStack_137;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined4 uStack_11b;
  undefined2 uStack_117;
  undefined5 uStack_115;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint5 uStack_c0;
  undefined3 uStack_bb;
  uint5 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_9c;
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
  undefined8 uStack_70;
  char cStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  char cStack_30;
  
  if ((DAT_0f5cb830 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb830), iVar6 != 0)) {
    func_0x08235c60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb7b0,0xf53dab8);
    FUN_0410844d(&DAT_0f5cb830);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5cb7b0 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_08171610;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cb7b0 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_08171610:
    puVar7 = &DAT_0f5cb7b0;
    if (iRam000000000f5cb810 != -0x2b3da790) goto LAB_0817167d;
LAB_0817163b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0817167d;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x08236360(&uStack_60,param_1,lVar13,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0817163b;
LAB_0817167d:
    func_0x08236360(&uStack_60,param_1,&UNK_01346935,0x2b);
  }
  if (cStack_30 != '\0') {
    return;
  }
  uStack_38 = 0x2aec2b1a00000002;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_117 = 0;
  uStack_115 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_127 = 0;
  uStack_123 = 0;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_132 = 0;
  uStack_131 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  bStack_140 = 0;
  uStack_13f = 0;
  uStack_13a = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  plStack_168 = (long *)0x0;
  puStack_160 = (undefined4 *)0x0;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,0x3f600000);
  FUN_048afb10(&uStack_128,8);
  uVar3 = _uStack_c0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  _uStack_c0 = CONCAT62(stack0xffffffffffffff42,0xff00);
  uVar4 = _uStack_c0;
  uStack_bb = SUB83(uVar3,5);
  uStack_c0 = (uint5)(uint)uVar4;
  uVar12 = (ulong)_uStack_b8 >> 0x28;
  uVar2 = (uint)_uStack_b8;
  uStack_b8 = (uint5)(uVar2 & 0xffffff00);
  _uStack_b8 = CONCAT35((int3)uVar12,uStack_b8);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f10efb0;
  if (plStack_168 != (long *)0x0) {
    lVar14 = *plStack_168;
    plStack_168 = plVar8;
    (**(code **)(lVar14 + 8))();
    plVar8 = plStack_168;
  }
  plStack_168 = plVar8;
  if ((bStack_140 & 1) != 0) {
    func_0x0412a280(uStack_130,
                    CONCAT26(uStack_13a,CONCAT51(uStack_13f,bStack_140)) & 0xfffffffffffffffe);
  }
  bStack_140 = 0x1a;
  uStack_13f = 0x6f70736552;
  uStack_13a = 0x736e;
  uStack_138 = 0x65;
  uStack_137 = 0x6570795420;
  uStack_132 = 0;
  if ((DAT_0f5cb850 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb850), iVar6 != 0)) {
    func_0x08235d70();
    FUN_0410844d(&DAT_0f5cb850);
  }
  auStack_1d0[0] = uStack_38._4_4_;
  lStack_1c8 = 0;
  uStack_1c0 = 3;
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  puStack_1a8 = &UNK_08234660;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_08230150;
  puStack_190 = &UNK_08237140;
  puStack_188 = &UNK_08237150;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  func_0x048b05a0(&uStack_58,auStack_1d0);
  plVar8 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_170 + 1;
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar8);
    }
  }
  uStack_88 = uStack_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  uStack_98 = uStack_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  func_0x08236ed0(auStack_1d0,&uStack_98,&plStack_168);
  if (uStack_1b8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != (int)uStack_1b8) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    lVar14 = *(long *)(piVar9 + 0xc);
    while (lVar14 != lStack_1c8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar14 = *(long *)(piVar9 + 0xc);
    }
LAB_0817192f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 9;
  }
  else {
    if (uStack_1b8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_1b8) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
      goto LAB_0817192f;
    }
    if (uStack_1b8._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x18);
      *puVar1 = *puVar1 | 0x90000;
    }
  }
  uStack_98 = uStack_60;
  uStack_94 = uStack_5c;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  uStack_88 = uStack_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  uStack_78 = uStack_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  cStack_68 = cStack_30;
  func_0x048b0bc0(&plStack_168);
  if ((DAT_0f5cb850 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb850), iVar6 != 0)) {
    func_0x08235d70();
    FUN_0410844d(&DAT_0f5cb850);
  }
  uStack_70 = 0x755317a900000001;
  lVar14 = CONCAT44(uStack_94,uStack_98);
  if ((DAT_0f5cb830 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb830), iVar6 != 0)) {
    func_0x08235c60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb7b0,0xf53dab8);
    FUN_0410844d(&DAT_0f5cb830);
  }
  puStack_160 = (undefined4 *)(lVar14 + 0x18);
  plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5cb7b0 + 4)) * 8);
  do {
    lVar13 = *plVar8;
    if (lVar13 == -1) goto LAB_08171a10;
    plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5cb7b0 + 4));
  if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_08171a10:
    plStack_168 = (long *)&DAT_0f5cb7b0;
  }
  else {
    plStack_168 = (long *)plVar8[2];
  }
  func_0x0ed621a0(&plStack_168,uStack_70._4_4_);
  plStack_168 = (long *)CONCAT62(plStack_168._2_6_,1);
  uStack_158 = CONCAT44(uStack_158._4_4_,uStack_70._4_4_);
  plStack_150 = (long *)0x0;
  uStack_148 = 0;
  bStack_140 = 0;
  uStack_13f = 0;
  uStack_13a = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_132 = 0;
  uStack_131 = 0;
  uStack_130 = 0;
  uStack_128 = 0x22;
  uStack_127 = _DAT_0144d560;
  uStack_123 = _UNK_0144d564;
  uStack_11f = _UNK_0144d568;
  uStack_11b = _UNK_0144d56c;
  uStack_117 = 0x73;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x3f600000);
  puStack_160 = &uStack_90;
  FUN_048afb10(&uStack_110,8);
  _uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  _uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_a8 = 0xff00;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f10f0e8;
  if (plStack_150 != (long *)0x0) {
    lVar14 = *plStack_150;
    plStack_150 = plVar8;
    (**(code **)(lVar14 + 8))();
    plVar8 = plStack_150;
  }
  plStack_150 = plVar8;
  auStack_1d0[0] = (undefined4)uStack_158;
  lStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  puStack_1a8 = &UNK_08238ff0;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_08238400;
  puStack_190 = &UNK_082390b0;
  puStack_188 = &UNK_08239300;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  func_0x048b05a0(puStack_160,auStack_1d0);
  plVar8 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_170 + 1;
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x08236ed0(auStack_1d0,puStack_160,&plStack_150);
  if (uStack_1b8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != (int)uStack_1b8) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    lVar14 = *(long *)(piVar9 + 0xc);
    while (lVar14 != lStack_1c8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar14 = *(long *)(piVar9 + 0xc);
    }
LAB_08171ccf:
    piVar9[4] = piVar9[4] | (int)plStack_168 << 0x10;
  }
  else {
    if (uStack_1b8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_1b8) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
      goto LAB_08171ccf;
    }
    if (uStack_1b8._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x18);
      *puVar1 = *puVar1 | (int)plStack_168 << 0x10;
    }
  }
  lVar14 = CONCAT44(uStack_94,uStack_98);
  iVar6 = (int)uStack_70;
  uVar5 = uStack_70._4_4_;
  func_0x048b0bc0(&plStack_150);
  if (iVar6 != 4) {
    if (iVar6 != 1) {
      return;
    }
    if ((DAT_0f5cb830 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb830), iVar6 != 0)) {
      func_0x08235c60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb7b0,0xf53dab8);
      FUN_0410844d(&DAT_0f5cb830);
    }
    plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5cb7b0 + 4)) * 8);
    do {
      lVar13 = *plVar8;
      if (lVar13 == -1) goto LAB_08171d69;
      plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5cb7b0 + 4)
            );
    if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_08171d69:
      puVar7 = &DAT_0f5cb7b0;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    plVar8 = (long *)func_0x048b0c90(lVar14 + 0x18,puVar7,uVar5,1);
    if (plVar8 == (long *)0x0) {
      plStack_168 = (long *)0x0;
      puStack_160 = (undefined4 *)0x0;
      func_0x048b0d20(&plStack_168);
      plVar8 = plStack_168;
    }
    lVar14 = plVar8[0xb];
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    goto LAB_08171f7a;
  }
  if ((DAT_0f5cb830 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cb830), iVar6 != 0)) {
    func_0x08235c60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cb7b0,0xf53dab8);
    FUN_0410844d(&DAT_0f5cb830);
  }
  plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5cb7b0 + 4)) * 8);
  do {
    lVar13 = *plVar8;
    if (lVar13 == -1) goto LAB_08171de9;
    plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5cb7b0 + 4));
  if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_08171de9:
    puVar7 = &DAT_0f5cb7b0;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
  }
  plVar8 = (long *)FUN_048b1040(lVar14 + 0x18,puVar7,uVar5,1);
  if (plVar8 == (long *)0x0) {
    plStack_168 = (long *)0x0;
    puStack_160 = (undefined4 *)0x0;
    func_0x048b10d0(&plStack_168);
    plVar11 = (long *)plStack_168[7];
    plVar8 = plStack_168;
    if (plVar11 == (long *)0x0) goto LAB_08171f07;
LAB_08171f23:
    do {
      plVar8 = plVar11;
      plVar11 = (long *)plVar8[7];
      if ((long *)plVar8[7] == (long *)0x0) {
        plStack_168 = (long *)0x0;
        puStack_160 = (undefined4 *)0x0;
        func_0x048b10d0(&plStack_168);
        plVar11 = plStack_168;
      }
    } while (plVar11 != (long *)0x0);
  }
  else {
    plVar11 = (long *)plVar8[7];
    if ((long *)plVar8[7] != (long *)0x0) goto LAB_08171f23;
LAB_08171f07:
    plStack_168 = (long *)0x0;
    puStack_160 = (undefined4 *)0x0;
    func_0x048b10d0(&plStack_168);
    plVar11 = plStack_168;
    if (plStack_168 != (long *)0x0) goto LAB_08171f23;
  }
  lVar14 = plVar8[9];
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
LAB_08171f7a:
  puVar10[1] = 0xffff;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0xff;
  *puVar10 = &UNK_0f4e3d70;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  plVar8 = *(long **)(lVar14 + 8);
  *(undefined8 **)(lVar14 + 8) = puVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x144d560  Downloading Packs
 */
