/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdcea240 (ELF vaddr 0xdbea240)
 * Label: caller-of-callee
 * Body:  [[0dcea240, 0dcea9c9] [0dcea9d0, 0dceb051] [0dceb060, 0dceb16c] [0dceb170, 0dceb39d]]
 * Ghidra: FUN_0dcea240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dcea240(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  long lStack_218;
  undefined4 *puStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined1 uStack_1cd;
  undefined4 uStack_1cc;
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined2 uStack_156;
  uint uStack_154;
  uint uStack_150;
  undefined1 uStack_14c;
  undefined4 auStack_148 [2];
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  undefined7 uStack_37;
  
  func_0x0e135110();
  func_0x0ecd99f0(param_1);
  if ((DAT_0f73b7d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73b7d0), iVar6 != 0)) {
    func_0x0dd36680();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b750,0xf53dab8);
    func_0x0410844d(&DAT_0f73b7d0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73b750 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0dcea2c0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f73b750 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dcea2c0:
    puVar7 = &DAT_0f73b750;
    if (iRam000000000f73b7b0 != -0x2b3da790) goto LAB_0dcea32d;
LAB_0dcea2eb:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0dcea32d;
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0dd36d20(&uStack_e0,param_1,lVar13,uVar14);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dcea2eb;
LAB_0dcea32d:
    func_0x0dd36d20(&uStack_e0,param_1,&UNK_01303520,0x13);
  }
  if (cStack_b0 == '\0') {
    uStack_138._4_4_ = (uint)((ulong)uStack_138 >> 0x20);
    func_0x0dd37310(&lStack_218,CONCAT44(uStack_dc,uStack_e0) + 0x18);
    if (uStack_200._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_200) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      lVar10 = *(long *)(piVar9 + 0xc);
      while ((undefined4 *)lVar10 != puStack_210) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar10 = *(long *)(piVar9 + 0xc);
      }
LAB_0dcea3bf:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_200._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x48);
        iVar6 = *piVar9;
        while (iVar6 != (int)uStack_200) {
          piVar9 = piVar9 + 0x1a;
          iVar6 = *piVar9;
        }
        goto LAB_0dcea3bf;
      }
      if (uStack_200._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_204,uStack_208) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0dd378d0(&lStack_218,&uStack_e0,&UNK_012b4f6d,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f49fa00;
    if (uStack_200 != (long *)0x0) {
      lVar10 = *uStack_200;
      uStack_200 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_200;
    }
    uStack_200 = plVar8;
    auStack_148[0] = uStack_208;
    plStack_140 = (long *)0x0;
    uStack_138 = (long *)((ulong)uStack_138._4_4_ << 0x20);
    uStack_130 = 1;
    uStack_128 = 0;
    puStack_120 = &UNK_0dd384b0;
    puStack_118 = &SUB_048b06d0;
    puStack_110 = &SUB_0dd381c0;
    puStack_108 = &UNK_0dd384c0;
    puStack_100 = &UNK_0dd38620;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    func_0x048b05a0(puStack_210,auStack_148);
    plVar8 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_e8 + 1;
      lVar10 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        FUN_0412c2d0(plVar8);
      }
    }
    func_0x0dd37b80(&lStack_218);
    cStack_38 = cStack_b0;
    uStack_48 = uStack_c0;
    uStack_44 = uStack_bc;
    iStack_40 = (int)uStack_b8;
    uStack_3c = uStack_b8._4_4_;
    uStack_58 = uStack_d0;
    uStack_54 = uStack_cc;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    uStack_68 = uStack_e0;
    uStack_64 = uStack_dc;
    uStack_60 = uStack_d8;
    uStack_5c = uStack_d4;
    func_0x048b0bc0(&uStack_200);
    uStack_a8 = CONCAT44(uStack_64,uStack_68);
    uStack_a0 = (long *)CONCAT44(uStack_5c,uStack_60);
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    iStack_80 = iStack_40;
    uStack_7c = uStack_3c;
    uStack_78 = CONCAT71(uStack_37,cStack_38);
    func_0x0dd37310(&lStack_218,uStack_a8 + 0x18);
    if (uStack_200._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_200) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      lVar10 = *(long *)(piVar9 + 0xc);
      while ((undefined4 *)lVar10 != puStack_210) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar10 = *(long *)(piVar9 + 0xc);
      }
LAB_0dcea64f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_200._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x48);
        iVar6 = *piVar9;
        while (iVar6 != (int)uStack_200) {
          piVar9 = piVar9 + 0x1a;
          iVar6 = *piVar9;
        }
        goto LAB_0dcea64f;
      }
      if (uStack_200._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_204,uStack_208) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0dd378d0(&lStack_218,&uStack_a8,&UNK_013f0aa6,0xc);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f3f5028;
    if (uStack_200 != (long *)0x0) {
      lVar10 = *uStack_200;
      uStack_200 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_200;
    }
    uStack_200 = plVar8;
    auStack_148[0] = uStack_208;
    plStack_140 = (long *)0x0;
    uStack_138 = (long *)((ulong)uStack_138 & 0xffffffff00000000);
    uStack_130 = 1;
    uStack_128 = 0;
    puStack_120 = &UNK_0cbc9cc0;
    puStack_118 = &SUB_048b06d0;
    puStack_110 = &UNK_0cbc85f0;
    puStack_108 = &UNK_0dd38a80;
    puStack_100 = &UNK_0dd38c60;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    func_0x048b05a0(puStack_210,auStack_148);
    plVar8 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_e8 + 1;
      lVar10 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        FUN_0412c2d0(plVar8);
      }
    }
    func_0x0dd37b80(&lStack_218);
    uVar4 = uStack_7c;
    iVar6 = iStack_80;
    lVar10 = uStack_a8;
    func_0x048b0bc0(&uStack_200);
    if (iVar6 == 4) {
      if ((DAT_0f73b7d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73b7d0), iVar6 != 0)) {
        func_0x0dd36680();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b750,0xf53dab8);
        func_0x0410844d(&DAT_0f73b7d0);
      }
      plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73b750 + 4)) * 8);
      do {
        lVar13 = *plVar8;
        if (lVar13 == -1) goto LAB_0dcea898;
        plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f73b750 + 4));
      if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_0dcea898:
        puVar7 = &DAT_0f73b750;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lVar10 = func_0x048b1040(lVar10 + 0x18,puVar7,uVar4,1);
      if (lVar10 == 0) {
        lStack_218 = 0;
        puStack_210 = (undefined4 *)0x0;
        func_0x048b10d0(&lStack_218);
        lVar13 = *(long *)(lStack_218 + 0x38);
        lVar10 = lStack_218;
      }
      else {
        lVar13 = *(long *)(lVar10 + 0x38);
      }
      if (lVar13 != 0) goto LAB_0dcea9d5;
      lStack_218 = 0;
      puStack_210 = (undefined4 *)0x0;
      func_0x048b10d0(&lStack_218);
      lVar5 = lStack_218;
      while (lVar13 = lVar5, lVar13 != 0) {
LAB_0dcea9d5:
        lVar10 = lVar13;
        lVar5 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          lStack_218 = 0;
          puStack_210 = (undefined4 *)0x0;
          func_0x048b10d0(&lStack_218);
          lVar5 = lStack_218;
        }
      }
      lVar10 = *(long *)(lVar10 + 0x48);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar6 != 1) goto LAB_0dceaa5d;
      if ((DAT_0f73b7d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73b7d0), iVar6 != 0)) {
        func_0x0dd36680();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b750,0xf53dab8);
        func_0x0410844d(&DAT_0f73b7d0);
      }
      plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73b750 + 4)) * 8);
      do {
        lVar13 = *plVar8;
        if (lVar13 == -1) goto LAB_0dcea828;
        plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f73b750 + 4));
      if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_0dcea828:
        puVar7 = &DAT_0f73b750;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lVar10 = func_0x048b0c90(lVar10 + 0x18,puVar7,uVar4,1);
      if (lVar10 == 0) {
        lStack_218 = 0;
        puStack_210 = (undefined4 *)0x0;
        func_0x048b0d20(&lStack_218);
        lVar10 = lStack_218;
      }
      lVar10 = *(long *)(lVar10 + 0x58);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar11[1] = 0x40;
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0xff;
    *puVar11 = &UNK_0f4e3cf0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    *(undefined8 *)((long)puVar11 + 0x29) = 0;
    *(undefined8 *)((long)puVar11 + 0x31) = 0;
    plVar8 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar11;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x28))();
    }
  }
LAB_0dceaa5d:
  lVar10 = func_0x0cd10ea0(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0dd38e40(&uStack_e0,param_1,lVar13,uVar14);
  }
  else {
    func_0x0dd38e40(&uStack_e0,param_1,&UNK_01425d6d,0x10);
  }
  if (cStack_b0 != '\0') {
    return;
  }
  func_0x0dd39380(&lStack_218,CONCAT44(uStack_dc,uStack_e0) + 0x18);
  if (uStack_200._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != (int)uStack_200) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    lVar10 = *(long *)(piVar9 + 0xc);
    while ((undefined4 *)lVar10 != puStack_210) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar10 = *(long *)(piVar9 + 0xc);
    }
LAB_0dceab3f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_200._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_204,uStack_208) + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_200) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
      goto LAB_0dceab3f;
    }
    if (uStack_200._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_204,uStack_208) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  if ((DAT_0f700c28 == '\0') && (iVar6 = func_0x04108328(&DAT_0f700c28), iVar6 != 0)) {
    func_0x0cd10850(0xf700c10);
    func_0x0410844d(&DAT_0f700c28);
  }
  uStack_b8 = 0x80e0d0b700000001;
  lVar10 = CONCAT44(uStack_dc,uStack_e0) + 0x18;
  lStack_218 = func_0x0cd10ea0(lVar10);
  puStack_210 = (undefined4 *)lVar10;
  FUN_0ed621a0(&lStack_218,uStack_b8._4_4_);
  puStack_210 = &uStack_d8;
  lStack_218 = CONCAT62(lStack_218._2_6_,0x10);
  uStack_208 = uStack_b8._4_4_;
  uStack_200 = (long *)0x0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0x14;
  uStack_1d7 = 0x697469646e6f63;
  uStack_1d0 = 0x6f;
  uStack_1cf = 0x736e;
  uStack_1cd = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0x3f600000;
  func_0x048afb10(&lStack_1c0,8);
  uStack_168 = 0;
  lStack_160 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  uStack_158 = 0xff00;
  uStack_154 = uStack_154 & 0xffffff00;
  uStack_150 = uStack_150 & 0xffffff00;
  uStack_14c = 0;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f49c288;
  if (uStack_200 != (long *)0x0) {
    lVar10 = *uStack_200;
    uStack_200 = puVar11;
    (**(code **)(lVar10 + 8))();
    puVar11 = uStack_200;
  }
  uStack_200 = puVar11;
  auStack_148[0] = uStack_208;
  plStack_140 = (long *)0x0;
  uStack_138 = (long *)((ulong)uStack_138 & 0xffffffff00000000);
  uStack_130 = 1;
  uStack_128 = 0;
  puStack_120 = &UNK_0dd3ca80;
  puStack_118 = &SUB_048b06d0;
  puStack_110 = &UNK_0dd3b670;
  puStack_108 = &UNK_0dd3cb40;
  puStack_100 = &UNK_0dd3cd40;
  uStack_f8 = 0;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  func_0x048b05a0(puStack_210,auStack_148);
  plVar8 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_e8 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      FUN_0412c2d0(plVar8);
    }
  }
  puVar3 = puStack_210;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_148[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar10 = lStack_1f8;
  puVar11 = uStack_200;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_140 = plVar8 + 3;
  uStack_200 = (long *)0x0;
  lStack_1f8 = 0;
  plVar8[3] = (long)puVar11;
  plVar8[4] = lVar10;
  plVar8[7] = lStack_1e0;
  plVar8[5] = lStack_1f0;
  plVar8[6] = lStack_1e8;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  plVar8[10] = lStack_1c8;
  plVar8[8] = CONCAT71(uStack_1d7,uStack_1d8);
  plVar8[9] = CONCAT44(uStack_1cc,CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,uStack_1d0)));
  uStack_1d8 = 0;
  uStack_1d7 = 0;
  uStack_1d0 = 0;
  uStack_1cf = 0;
  uStack_1cd = 0;
  uStack_1cc = 0;
  lStack_1c8 = 0;
  plVar8[0xb] = lStack_1c0;
  plVar8[0xc] = lStack_1b8;
  plVar8[0xd] = lStack_1b0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  plVar8[0xe] = lStack_1a8;
  plVar8[0xf] = lStack_1a0;
  plVar8[0x10] = lStack_198;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_190;
  plVar8[0x12] = lStack_188;
  plVar8[0x13] = lStack_180;
  plVar8[0x14] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar8[0x17] = lStack_160;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_170;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_170._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_168;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_168._4_4_;
  uStack_170 = 0;
  uStack_168 = 0;
  lStack_160 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_14c,CONCAT43(uStack_150,uStack_154._1_3_));
  plVar8[0x18] = CONCAT44(uStack_154,CONCAT22(uStack_156,uStack_158));
  uStack_a8 = 0;
  uStack_a0 = (long *)0x0;
  uStack_138 = plVar8;
  FUN_048afd20(puVar3,auStack_148);
  plVar8 = uStack_138;
  if (uStack_138 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_138 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_138 + 0x10))(uStack_138);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_a0 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      FUN_0412c2d0(plVar8);
    }
  }
  lVar10 = *(long *)(puVar3 + 4);
  iVar6 = puVar3[7];
  if (iVar6 == 2) {
    piVar9 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != puVar3[6]) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(puVar3 + 2); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | (int)lStack_218 << 0x10;
      }
      goto LAB_0dceb06d;
    }
    piVar9 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != puVar3[6]) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)lStack_218 << 0x10;
LAB_0dceb06d:
  iVar6 = (int)uStack_b8;
  uVar4 = uStack_b8._4_4_;
  func_0x048b0bc0(&uStack_200);
  if (iVar6 == 4) {
    lVar10 = CONCAT44(uStack_dc,uStack_e0) + 0x18;
    uVar12 = func_0x0cd10ea0(lVar10);
    lVar10 = func_0x048b1040(lVar10,uVar12,uVar4,1);
    if (lVar10 == 0) {
      lStack_218 = 0;
      puStack_210 = (undefined4 *)0x0;
      func_0x048b10d0(&lStack_218);
      lVar13 = *(long *)(lStack_218 + 0x38);
      lVar10 = lStack_218;
    }
    else {
      lVar13 = *(long *)(lVar10 + 0x38);
    }
    if (lVar13 != 0) goto LAB_0dceb175;
    lStack_218 = 0;
    puStack_210 = (undefined4 *)0x0;
    func_0x048b10d0(&lStack_218);
    lVar5 = lStack_218;
    while (lVar13 = lVar5, lVar13 != 0) {
LAB_0dceb175:
      lVar10 = lVar13;
      lVar5 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) == 0) {
        lStack_218 = 0;
        puStack_210 = (undefined4 *)0x0;
        func_0x048b10d0(&lStack_218);
        lVar5 = lStack_218;
      }
    }
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar6 != 1) {
      return;
    }
    lVar10 = CONCAT44(uStack_dc,uStack_e0) + 0x18;
    uVar12 = func_0x0cd10ea0(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar12,uVar4,1);
    if (lVar10 == 0) {
      lStack_218 = 0;
      puStack_210 = (undefined4 *)0x0;
      func_0x048b0d20(&lStack_218);
      lVar10 = lStack_218;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar11[1] = 0x40;
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0xff;
  *puVar11 = &UNK_0f4e3cf0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  *(undefined8 *)((long)puVar11 + 0x29) = 0;
  *(undefined8 *)((long)puVar11 + 0x31) = 0;
  plVar8 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


