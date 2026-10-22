/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdde2be0 (ELF vaddr 0xdce2be0)
 * Label: caller-of-callee
 * Body:  [[0dde2be0, 0dde3cd5] [0dde3ce0, 0dde4059]]
 * Ghidra: FUN_0dde2be0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dde2be0(long param_1)

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
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_230 [2];
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  char cStack_48;
  undefined7 uStack_47;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  long lStack_38;
  
  func_0x0eb7c440();
  if ((DAT_0f73dfb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73dfb8), iVar6 != 0)) {
    func_0x0de3b3f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73df38,0xf53dab8);
    func_0x0410844d(&DAT_0f73dfb8);
  }
  lVar11 = param_1 + 0x18;
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73df38 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_0dde2c60;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f73df38 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dde2c60:
    puVar7 = &DAT_0f73df38;
    if (iRam000000000f73df98 != -0x2b3da790) goto LAB_0dde2ccd;
LAB_0dde2c8b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0dde2ccd;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar9 = lVar14 + 9;
    if (bVar15) {
      lVar9 = *(long *)(lVar14 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0de3ba50(&uStack_1c8,param_1,lVar9,uVar13);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dde2c8b;
LAB_0dde2ccd:
    func_0x0de3ba50(&uStack_1c8,param_1,&UNK_014c2cf6,0x13);
  }
  if ((char)puStack_198 == '\0') {
    func_0x0de3c5c0(&lStack_188,&uStack_1c8,&UNK_014ae949,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f377238;
    if (uStack_170 != (long *)0x0) {
      lVar14 = *uStack_170;
      uStack_170 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = uStack_170;
    }
    uStack_170 = plVar8;
    auStack_230[0] = (undefined4)uStack_178;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 1;
    uStack_210 = 0;
    puStack_208 = &UNK_0d9668d0;
    puStack_200 = &SUB_048b06d0;
    puStack_1f8 = &SUB_0c4e6f40;
    puStack_1f0 = &UNK_0de3cb70;
    puStack_1e8 = &UNK_0de3ccd0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x048b05a0(plStack_180,auStack_230);
    plVar8 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de3c870(&lStack_188);
    cStack_48 = (char)puStack_198;
    uStack_58 = iStack_1a8;
    uStack_54 = iStack_1a4;
    iStack_50 = (int)uStack_1a0;
    uStack_4c = uStack_1a0._4_4_;
    uStack_68 = uStack_1b8;
    uStack_64 = uStack_1b4;
    uStack_60 = uStack_1b0;
    uStack_5c = uStack_1ac;
    uStack_70._0_4_ = uStack_1c0;
    uStack_70._4_4_ = uStack_1bc;
    FUN_048b0bc0(&uStack_170);
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    iStack_a0 = uStack_60;
    iStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    iStack_90 = iStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = CONCAT71(uStack_47,cStack_48);
    func_0x0de3c5c0(&lStack_188,&uStack_b8,&UNK_011af031,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0126a0;
    if (uStack_170 != (long *)0x0) {
      lVar14 = *uStack_170;
      uStack_170 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = uStack_170;
    }
    uStack_170 = plVar8;
    auStack_230[0] = (undefined4)uStack_178;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 1;
    uStack_210 = 0;
    puStack_208 = &UNK_05daeda0;
    puStack_200 = &SUB_048b06d0;
    puStack_1f8 = &SUB_05daea90;
    puStack_1f0 = &UNK_0de3cea0;
    puStack_1e8 = &UNK_0de3d000;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x048b05a0(plStack_180,auStack_230);
    plVar8 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de3c870(&lStack_188);
    FUN_048b0bc0(&uStack_170);
  }
  if ((DAT_0f73e070 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73e070), iVar6 != 0)) {
    func_0x0de3d2a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73dff0,0xf53dab8);
    func_0x0410844d(&DAT_0f73e070);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73dff0 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_0dde3040;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f73dff0 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dde3040:
    puVar7 = &DAT_0f73dff0;
    if (iRam000000000f73e050 != -0x2b3da790) goto LAB_0dde30c2;
LAB_0dde306b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0dde30c2;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar9 = lVar14 + 9;
    if (bVar15) {
      lVar9 = *(long *)(lVar14 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0de3d920(&uStack_1c8,param_1,lVar9,uVar13);
    if ((char)puStack_198 != '\0') goto LAB_0dde30a8;
LAB_0dde30e8:
    func_0x0de3e4c0(&lStack_188,&uStack_1c8,&UNK_011e3f89,0x12,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0126a0;
    if (uStack_170 != (long *)0x0) {
      lVar14 = *uStack_170;
      uStack_170 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = uStack_170;
    }
    uStack_170 = plVar8;
    auStack_230[0] = (undefined4)uStack_178;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 1;
    uStack_210 = 0;
    puStack_208 = &UNK_05daeda0;
    puStack_200 = &SUB_048b06d0;
    puStack_1f8 = &SUB_05daea90;
    puStack_1f0 = &UNK_0de3ea80;
    puStack_1e8 = &UNK_0de3ebe0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x048b05a0(plStack_180,auStack_230);
    plVar8 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de3e780(&lStack_188);
    lVar14 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_78 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_70 = (long *)CONCAT44(uStack_1b4,uStack_1b8);
    uStack_68 = uStack_1b0;
    uStack_64 = uStack_1ac;
    uStack_60 = iStack_1a8;
    uStack_5c = iStack_1a4;
    FUN_048b0bc0(&uStack_170);
    if ((int)uStack_1a0 == 4) {
      if ((DAT_0f73e070 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73e070), iVar6 != 0)) {
        func_0x0de3d2a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73dff0,0xf53dab8);
        func_0x0410844d(&DAT_0f73e070);
      }
      plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73dff0 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0dde3370;
        plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f73dff0 + 4));
      if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_0dde3370:
        puVar7 = &DAT_0f73dff0;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lStack_38 = lVar11;
      lVar11 = func_0x048b1040(lVar14 + 0x18,puVar7,uStack_1a0._4_4_,1);
      if (lVar11 == 0) {
        lStack_188 = 0;
        plStack_180 = (long *)0x0;
        func_0x048b10d0(&lStack_188);
        lVar9 = *(long *)(lStack_188 + 0x38);
        lVar11 = lStack_188;
        if (lVar9 == 0) goto LAB_0dde3ca7;
LAB_0dde3ccc:
        do {
          lVar11 = lVar9;
          lVar9 = *(long *)(lVar11 + 0x38);
          if (*(long *)(lVar11 + 0x38) == 0) {
            lStack_188 = 0;
            plStack_180 = (long *)0x0;
            func_0x048b10d0(&lStack_188);
            lVar9 = lStack_188;
          }
        } while (lVar9 != 0);
      }
      else {
        lVar9 = *(long *)(lVar11 + 0x38);
        if (*(long *)(lVar11 + 0x38) != 0) goto LAB_0dde3ccc;
LAB_0dde3ca7:
        lStack_188 = 0;
        plStack_180 = (long *)0x0;
        func_0x048b10d0(&lStack_188);
        lVar9 = lStack_188;
        if (lStack_188 != 0) goto LAB_0dde3ccc;
      }
      lVar11 = *(long *)(lVar11 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f0edc68;
      uVar3 = _DAT_014f0238;
      puVar10[4] = 0;
      puVar10[5] = uVar3;
      puVar10[6] = 0;
      *(undefined2 *)(puVar10 + 7) = 0;
      *(undefined4 *)((long)puVar10 + 0x3a) = 0;
      *(undefined2 *)((long)puVar10 + 0x3e) = 0;
      plVar8 = *(long **)(lVar11 + 8);
      *(undefined8 **)(lVar11 + 8) = puVar10;
      lVar11 = lStack_38;
joined_r0x0dde3da0:
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if ((int)uStack_1a0 == 1) {
      if ((DAT_0f73e070 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73e070), iVar6 != 0)) {
        func_0x0de3d2a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73dff0,0xf53dab8);
        func_0x0410844d(&DAT_0f73e070);
      }
      plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73dff0 + 4)) * 8);
      do {
        lVar9 = *plVar8;
        if (lVar9 == -1) goto LAB_0dde32fb;
        plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar9 * 0x18);
      } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar9 * 0x18) !=
               *(uint *)(_DAT_0f73dff0 + 4));
      if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_0dde32fb:
        puVar7 = &DAT_0f73dff0;
      }
      else {
        puVar7 = (undefined *)plVar8[2];
      }
      lVar9 = func_0x048b0c90(lVar14 + 0x18,puVar7,uStack_1a0._4_4_,1);
      if (lVar9 == 0) {
        lStack_188 = 0;
        plStack_180 = (long *)0x0;
        func_0x048b0d20(&lStack_188);
        lVar9 = lStack_188;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f0edc68;
      uVar3 = _DAT_014f0238;
      puVar10[4] = 0;
      puVar10[5] = uVar3;
      puVar10[6] = 0;
      *(undefined2 *)(puVar10 + 7) = 0;
      *(undefined4 *)((long)puVar10 + 0x3a) = 0;
      *(undefined2 *)((long)puVar10 + 0x3e) = 0;
      plVar8 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar10;
      goto joined_r0x0dde3da0;
    }
    iStack_a0 = uStack_68;
    iStack_9c = uStack_64;
    uStack_98 = uStack_60;
    uStack_94 = uStack_5c;
    uStack_b0 = (undefined4)uStack_78;
    uStack_ac = uStack_78._4_4_;
    uStack_a8 = (undefined4)uStack_70;
    uStack_a4 = uStack_70._4_4_;
    iStack_90 = (int)uStack_1a0;
    uStack_8c = uStack_1a0._4_4_;
    uStack_88._0_5_ = CONCAT41(uStack_3f,(char)puStack_198);
    uStack_88 = CONCAT44(CONCAT31(uStack_3b,uStack_3f._3_1_),(undefined4)uStack_88);
    func_0x0de3df10(&lStack_188,lVar14 + 0x18);
    if (uStack_170._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_178 + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_170) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar14 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar14 != plStack_180) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar14 = *(long *)(piVar12 + 0xc);
      }
LAB_0dde353f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_170._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_178 + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_170) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_0dde353f;
      }
      if (uStack_170._4_4_ == 0) {
        *(uint *)((long)uStack_178 + 0x18) = *(uint *)((long)uStack_178 + 0x18) | 0x40000;
      }
    }
    func_0x0de3e4c0(&lStack_188,&uStack_b8,&UNK_013d70c9,0x14,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f4a16a0;
    if (uStack_170 != (long *)0x0) {
      lVar14 = *uStack_170;
      uStack_170 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = uStack_170;
    }
    uStack_170 = plVar8;
    auStack_230[0] = (undefined4)uStack_178;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 1;
    uStack_210 = 0;
    puStack_208 = &UNK_0de421f0;
    puStack_200 = &SUB_048b06d0;
    puStack_1f8 = &UNK_0de40cf0;
    puStack_1f0 = &UNK_0de422b0;
    puStack_1e8 = &UNK_0de424b0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x048b05a0(plStack_180,auStack_230);
    plVar8 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de3e780(&lStack_188);
    FUN_048b0bc0(&uStack_170);
    lVar11 = func_0x0cd062c0(lVar11);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0dde36ca;
LAB_0dde368e:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0dde36ca;
    bVar15 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar14 = lVar11 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar11 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0de42930(auStack_230,param_1,lVar14,uVar13);
    uVar3 = uStack_228;
    uStack_1b4 = uStack_21c;
    uVar4 = uStack_218;
    uVar5 = uStack_210;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dde306b;
LAB_0dde30c2:
    func_0x0de3d920(&uStack_1c8,param_1,&UNK_012b7283,0x15);
    if ((char)puStack_198 == '\0') goto LAB_0dde30e8;
LAB_0dde30a8:
    lVar11 = func_0x0cd062c0(lVar11);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0dde368e;
LAB_0dde36ca:
    func_0x0de42930(auStack_230,param_1,&UNK_014c2d0a,0x16);
    uVar3 = uStack_228;
    uStack_1b4 = uStack_21c;
    uVar4 = uStack_218;
    uVar5 = uStack_210;
  }
  if ((char)puStack_200 != '\0') {
    return;
  }
  uStack_228._0_4_ = (undefined4)uVar3;
  uStack_228._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_218._0_4_ = (undefined4)uVar4;
  uStack_218._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_210._0_4_ = (int)uVar5;
  uStack_210._4_4_ = (int)((ulong)uVar5 >> 0x20);
  iStack_1a8 = (int)uStack_210;
  iStack_1a4 = uStack_210._4_4_;
  uStack_1b0 = (undefined4)uStack_218;
  uStack_1ac = uStack_218._4_4_;
  uStack_1c0 = (undefined4)uStack_228;
  uStack_1bc = uStack_228._4_4_;
  uStack_1a0 = 0x1e1bc4d500000004;
  uStack_228 = uVar3;
  uStack_218 = uVar4;
  uStack_210 = uVar5;
  uStack_1c8 = auStack_230[0];
  uStack_1b8 = uStack_220;
  puStack_198 = puStack_200;
  if ((DAT_0f7037d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7037d0), iVar6 != 0)) {
    func_0x0cd059d0(0xf7037b8);
    func_0x0410844d(&DAT_0f7037d0);
  }
  lStack_188 = CONCAT44(lStack_188._4_4_,uStack_1a0._4_4_);
  plStack_180 = (long *)0x0;
  uStack_178 = (long *)((ulong)uStack_178._4_4_ << 0x20);
  uStack_170 = (long *)0x1;
  puStack_168 = &SUB_048aead0;
  puStack_160 = &UNK_0de431e0;
  puStack_158 = &UNK_0de432a0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x049057f0(&uStack_1c0,&lStack_188);
  func_0x048aea50(&lStack_188);
  uStack_a8 = uStack_1b0;
  uStack_a4 = uStack_1ac;
  iStack_a0 = iStack_1a8;
  iStack_9c = iStack_1a4;
  _uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_b0 = uStack_1b8;
  uStack_ac = uStack_1b4;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4a18f0;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_188 = CONCAT44(lStack_188._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_180 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_78 = 0;
  uStack_70 = (long *)0x0;
  uStack_178 = plVar8;
  func_0x048afd20(&uStack_b8,&lStack_188);
  plVar8 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_70;
  if (uStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_70 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_70 + 0x10))(uStack_70);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f7037d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7037d0), iVar6 != 0)) {
    func_0x0cd059d0(0xf7037b8);
    func_0x0410844d(&DAT_0f7037d0);
  }
  if (iStack_1a4 == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != iStack_1a8) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar11 = *(long *)(piVar12 + 0xc);
    while (lVar11 != CONCAT44(uStack_1b4,uStack_1b8)) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar11 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (iStack_1a4 != 1) {
      if (iStack_1a4 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0dde39f3;
    }
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x78) + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != iStack_1a8) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
LAB_0dde39f3:
  if ((DAT_0f7037d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7037d0), iVar6 != 0)) {
    func_0x0cd059d0(0xf7037b8);
    func_0x0410844d(&DAT_0f7037d0);
  }
  lStack_188 = CONCAT44(lStack_188._4_4_,0xbf75c8f8);
  plStack_180 = (long *)0x0;
  uStack_178 = (long *)((ulong)uStack_178 & 0xffffffff00000000);
  uStack_170 = (long *)0x0;
  puStack_168 = &UNK_0de434e0;
  puStack_160 = &SUB_048b06d0;
  puStack_158 = &UNK_0de43e70;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x049057f0(&uStack_1c0,&lStack_188);
  func_0x048aea50(&lStack_188);
  uStack_a8 = uStack_1b0;
  uStack_a4 = uStack_1ac;
  iStack_a0 = iStack_1a8;
  iStack_9c = iStack_1a4;
  _uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_b0 = uStack_1b8;
  uStack_ac = uStack_1b4;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4a18f0;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  lStack_188 = CONCAT44(lStack_188._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_180 = plVar8 + 3;
  plVar8[3] = (long)puVar10;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_78 = 0;
  uStack_70 = (long *)0x0;
  uStack_178 = plVar8;
  func_0x048afd20(&uStack_b8,&lStack_188);
  plVar8 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_70;
  if (uStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_70 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_70 + 0x10))(uStack_70);
      func_0x0412c2d0(plVar8);
    }
  }
  return;
}


