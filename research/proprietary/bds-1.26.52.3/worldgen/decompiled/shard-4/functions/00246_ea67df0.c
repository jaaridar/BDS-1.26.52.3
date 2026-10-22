/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb67df0 (ELF vaddr 0xea67df0)
 * Label: caller-of-callee
 * Body:  [[0eb67df0, 0eb6882b] [0eb68830, 0eb68872] [0eb68880, 0eb6935c]]
 * Ghidra: FUN_0eb67df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb67df0(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [8];
  int *piVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1c8 [8];
  long *plStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined1 auStack_180 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long *plStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [16];
  undefined1 uStack_38;
  
  if ((DAT_0f76df88 == '\0') && (iVar5 = FUN_04108328(&DAT_0f76df88), iVar5 != 0)) {
    func_0x0ebad4e0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f76df08,0xf53dab8);
    func_0x0410844d(&DAT_0f76df88);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76df08 + 4)) * 8);
  do {
    lVar11 = *plVar9;
    if (lVar11 == -1) goto LAB_0eb67e70;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76df08 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0eb67e70:
    puVar7 = &DAT_0f76df08;
    if (iRam000000000f76df68 != -0x2b3da790) goto LAB_0eb67ed5;
LAB_0eb67e9b:
    lVar11 = *(long *)(puVar7 + 0x68);
    if (lVar11 == 0) goto LAB_0eb67ed5;
    bVar18 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar16 = lVar11 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar11 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0ebadaf0(&plStack_208,param_1,lVar16,uVar14);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0eb67e9b;
LAB_0eb67ed5:
    func_0x0ebadaf0(&plStack_208,param_1,&UNK_0126da25,0x29);
  }
  if ((char)puStack_1d8 == '\0') {
    func_0x0ebae650(auStack_1c8,&plStack_208,&UNK_0147683e,10);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0ef44b00;
    if (pcStack_1b0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1b0;
      pcStack_1b0 = pcVar8;
      (**(code **)(lVar11 + 8))();
      pcVar8 = pcStack_1b0;
    }
    pcStack_1b0 = pcVar8;
    uStack_f0 = (undefined4)uStack_1b8;
    plStack_e8 = (long *)0x0;
    uStack_e0 = 0;
    plStack_d8 = (long *)0x1;
    uStack_d0 = (long *)0x0;
    uStack_c8 = &UNK_048b3f30;
    puStack_c0 = &SUB_048b06d0;
    puStack_b8 = &SUB_048b2190;
    puStack_b0 = &UNK_0ebaec00;
    puStack_a8 = &UNK_0ebaedc0;
    uStack_a0 = 0;
    auStack_98 = ZEXT816(0);
    func_0x048b05a0(plStack_1c0,&uStack_f0);
    uVar4 = auStack_98._8_8_;
    if ((long *)auStack_98._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_98._8_8_ + 8);
      lVar11 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ebae900(auStack_1c8);
    uStack_58 = (char)puStack_1d8;
    plStack_68 = uStack_1e8;
    uStack_60 = uStack_1e0;
    plStack_78 = plStack_1f8;
    plStack_70 = (long *)pcStack_1f0;
    plStack_88 = plStack_208;
    plStack_80 = plStack_200;
    func_0x048b0bc0(&pcStack_1b0);
    func_0x0ebae650(auStack_1c8,&plStack_88,&UNK_013236a8,7);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f0c2a88;
    if (pcStack_1b0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1b0;
      pcStack_1b0 = pcVar8;
      (**(code **)(lVar11 + 8))();
      pcVar8 = pcStack_1b0;
    }
    pcStack_1b0 = pcVar8;
    uStack_f0 = (undefined4)uStack_1b8;
    plStack_e8 = (long *)0x0;
    uStack_e0 = 0;
    plStack_d8 = (long *)0x1;
    uStack_d0 = (long *)0x0;
    uStack_c8 = &UNK_0729f0a0;
    puStack_c0 = &SUB_048b06d0;
    puStack_b8 = &SUB_0651e820;
    puStack_b0 = &UNK_0ebaef90;
    puStack_a8 = &UNK_0ebaf0f0;
    uStack_a0 = 0;
    auStack_98 = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_1c0,&uStack_f0);
    uVar4 = auStack_98._8_8_;
    if ((long *)auStack_98._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_98._8_8_ + 8);
      lVar11 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ebae900(auStack_1c8);
    func_0x048b0bc0(&pcStack_1b0);
  }
  if ((DAT_0f76e040 == '\0') && (iVar5 = FUN_04108328(&DAT_0f76e040), iVar5 != 0)) {
    func_0x0ebb2080();
    __cxa_atexit(&UNK_048ae800,&DAT_0f76dfc0,0xf53dab8);
    func_0x0410844d(&DAT_0f76e040);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76dfc0 + 4)) * 8);
  do {
    lVar11 = *plVar9;
    if (lVar11 == -1) goto LAB_0eb68220;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76dfc0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0eb68220:
    puVar7 = &DAT_0f76dfc0;
    if (iRam000000000f76e020 != -0x2b3da790) goto LAB_0eb6828d;
LAB_0eb6824b:
    lVar11 = *(long *)(puVar7 + 0x68);
    if (lVar11 == 0) goto LAB_0eb6828d;
    bVar18 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar16 = lVar11 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar11 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0ebb26a0(&uStack_f0,param_1,lVar16,uVar14);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0eb6824b;
LAB_0eb6828d:
    func_0x0ebb26a0(&uStack_f0,param_1,&UNK_0126d8db,0xd);
  }
  if ((char)puStack_c0 == '\0') {
    uStack_1b8._4_4_ = (uint)((ulong)uStack_1b8 >> 0x20);
    uStack_c8 = (undefined *)0x1e1bc4d500000004;
    if (DAT_0f76e060 == '\0') {
      iVar5 = FUN_04108328(&DAT_0f76e060);
      if (iVar5 != 0) {
        func_0x0ebb2190();
        func_0x0410844d(&DAT_0f76e060);
      }
    }
    auStack_1c8._0_4_ = uStack_c8._4_4_;
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = (long *)((ulong)uStack_1b8._4_4_ << 0x20);
    pcStack_1b0 = (code *)0x2;
    pcStack_1a8 = (code *)&SUB_048aead0;
    uStack_1a0 = &UNK_0ebb3390;
    puStack_198 = &UNK_0ebb33b0;
    uStack_190 = 0;
    uStack_188 = 0;
    auStack_180 = (undefined1  [16])0x0;
    FUN_049057f0(&plStack_e8,auStack_1c8);
    func_0x048aea50(auStack_1c8);
    plStack_200 = (long *)CONCAT44(uStack_dc,uStack_e0);
    plStack_1f8 = plStack_d8;
    pcStack_1f0 = (code *)uStack_d0;
    plStack_208 = plStack_e8;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)CONCAT71(plStack_78._1_7_,0xff);
    plStack_88 = plVar9;
    func_0x0ebb3210(auStack_1c8,&plStack_208,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      (**(code **)(*plStack_80 + 0x28))();
    }
    if (plStack_88 != (long *)0x0) {
      (**(code **)(*plStack_88 + 8))();
    }
    if ((DAT_0f76e060 == '\0') && (iVar5 = FUN_04108328(&DAT_0f76e060), iVar5 != 0)) {
      func_0x0ebb2190();
      func_0x0410844d(&DAT_0f76e060);
    }
    if (uStack_d0._4_4_ == 2) {
      piVar13 = *(int **)(plStack_d8[0xf] + 0x60);
      iVar5 = *piVar13;
      while (iVar5 != (int)uStack_d0) {
        piVar13 = piVar13 + 0x16;
        iVar5 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != CONCAT44(uStack_dc,uStack_e0)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0eb6845f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 2;
    }
    else {
      if (uStack_d0._4_4_ == 1) {
        piVar13 = *(int **)(plStack_d8[0xf] + 0x48);
        iVar5 = *piVar13;
        while (iVar5 != (int)uStack_d0) {
          piVar13 = piVar13 + 0x1a;
          iVar5 = *piVar13;
        }
        goto LAB_0eb6845f;
      }
      if (uStack_d0._4_4_ == 0) {
        *(uint *)(plStack_d8 + 3) = *(uint *)(plStack_d8 + 3) | 0x20000;
      }
    }
    if ((DAT_0f76e060 == '\0') && (iVar5 = FUN_04108328(&DAT_0f76e060), iVar5 != 0)) {
      func_0x0ebb2190();
      func_0x0410844d(&DAT_0f76e060);
    }
    auStack_1c8._0_4_ = 0xbf75c8f8;
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = (long *)((ulong)uStack_1b8 & 0xffffffff00000000);
    pcStack_1b0 = (code *)0x0;
    pcStack_1a8 = (code *)&SUB_048b2190;
    uStack_1a0 = &SUB_048b06d0;
    puStack_198 = &UNK_0ebb3730;
    uStack_190 = 0;
    uStack_188 = 0;
    auStack_180 = ZEXT816(0);
    FUN_049057f0(&plStack_e8,auStack_1c8);
    func_0x048aea50(auStack_1c8);
    plStack_200 = (long *)CONCAT44(uStack_dc,uStack_e0);
    plStack_1f8 = plStack_d8;
    pcStack_1f0 = (code *)uStack_d0;
    plStack_208 = plStack_e8;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f551cb0), iVar5 != 0)) {
      FUN_04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_1c8._0_4_ = _DAT_0f551c9c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef46c98;
    plVar9[3] = (long)puVar10;
    *(undefined1 *)(plVar9 + 4) = 0xff;
    plStack_1c0 = plVar9 + 3;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    uStack_1b8 = plVar9;
    func_0x048afd20(&plStack_208,auStack_1c8);
    plVar9 = uStack_1b8;
    if (uStack_1b8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1b8 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_1b8 + 0x10))(uStack_1b8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        func_0x0412c2d0(plVar9);
      }
    }
    plStack_208 = (long *)CONCAT44(uStack_ec,uStack_f0);
    plStack_1f8 = (long *)CONCAT44(uStack_dc,uStack_e0);
    uStack_1e8 = uStack_d0;
    plStack_200 = plStack_e8;
    pcStack_1f0 = (code *)plStack_d8;
    puStack_1d8 = puStack_c0;
    uStack_1e0 = 0x1e1bc4d500000004;
    if ((DAT_0f76e060 == '\0') && (iVar5 = FUN_04108328(&DAT_0f76e060), iVar5 != 0)) {
      func_0x0ebb2190();
      func_0x0410844d(&DAT_0f76e060);
    }
    auStack_1c8._0_4_ = uStack_1e0._4_4_;
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = (long *)((ulong)uStack_1b8 & 0xffffffff00000000);
    pcStack_1b0 = (code *)0x1;
    pcStack_1a8 = (code *)&SUB_048aead0;
    uStack_1a0 = &UNK_0ebb3840;
    puStack_198 = &UNK_0ebb3900;
    uStack_190 = 0;
    uStack_188 = 0;
    auStack_180 = ZEXT816(0);
    FUN_049057f0(&plStack_200,auStack_1c8);
    func_0x048aea50(auStack_1c8);
    plStack_78 = (long *)pcStack_1f0;
    plStack_70 = uStack_1e8;
    plStack_88 = plStack_200;
    plStack_80 = plStack_1f8;
    auStack_48._0_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if ((undefined8 *)auStack_48._0_8_ == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)auStack_48._0_8_ = &UNK_0f4db1a0;
    auStack_48._8_8_ = 0;
    uStack_38 = 0xff;
    func_0x0ebb3210(auStack_1c8,&plStack_88,auStack_48);
    if ((long *)auStack_48._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_48._8_8_ + 0x28))();
    }
    if ((long *)auStack_48._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_48._0_8_ + 8))();
    }
  }
  lVar11 = func_0x0b68b830(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar18 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar16 = lVar11 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar11 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0ebb40e0(&uStack_f0,param_1,lVar16,uVar14);
  }
  else {
    func_0x0ebb40e0(&uStack_f0,param_1,&UNK_012875f9,0x11);
  }
  if ((char)puStack_c0 != '\0') {
    return;
  }
  lVar16 = CONCAT44(uStack_ec,uStack_f0) + 0x18;
  lVar11 = func_0x0b68b830(lVar16);
  pbVar3 = *(byte **)(CONCAT44(uStack_ec,uStack_f0) + 0x58);
  for (pbVar15 = *(byte **)(CONCAT44(uStack_ec,uStack_f0) + 0x50); pbVar15 != pbVar3;
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0eb6888a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1d) {
LAB_0eb6888a:
      if ((bVar2 & 1) == 0) {
        pbVar17 = pbVar15 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar15 + 0x10);
      }
      auVar19[0] = -(*pbVar17 == DAT_014e4030);
      auVar19[1] = -(pbVar17[1] == DAT_014e4030._1_1_);
      auVar19[2] = -(pbVar17[2] == DAT_014e4030._2_1_);
      auVar19[3] = -(pbVar17[3] == DAT_014e4030._3_1_);
      auVar19[4] = -(pbVar17[4] == DAT_014e4030._4_1_);
      auVar19[5] = -(pbVar17[5] == DAT_014e4030._5_1_);
      auVar19[6] = -(pbVar17[6] == DAT_014e4030._6_1_);
      auVar19[7] = -(pbVar17[7] == DAT_014e4030._7_1_);
      auVar19[8] = -(pbVar17[8] == DAT_014e4030._8_1_);
      auVar19[9] = -(pbVar17[9] == DAT_014e4030._9_1_);
      auVar19[10] = -(pbVar17[10] == DAT_014e4030._10_1_);
      auVar19[0xb] = -(pbVar17[0xb] == DAT_014e4030._11_1_);
      auVar19[0xc] = -(pbVar17[0xc] == DAT_014e4030._12_1_);
      auVar19[0xd] = -(pbVar17[0xd] == DAT_014e4030._13_1_);
      auVar19[0xe] = -(pbVar17[0xe] == DAT_014e4030._14_1_);
      auVar19[0xf] = -(pbVar17[0xf] == DAT_014e4030._15_1_);
      auVar20[0] = -(pbVar17[0xd] == DAT_014e1610);
      auVar20[1] = -(pbVar17[0xe] == DAT_014e1610._1_1_);
      auVar20[2] = -(pbVar17[0xf] == DAT_014e1610._2_1_);
      auVar20[3] = -(pbVar17[0x10] == DAT_014e1610._3_1_);
      auVar20[4] = -(pbVar17[0x11] == DAT_014e1610._4_1_);
      auVar20[5] = -(pbVar17[0x12] == DAT_014e1610._5_1_);
      auVar20[6] = -(pbVar17[0x13] == DAT_014e1610._6_1_);
      auVar20[7] = -(pbVar17[0x14] == DAT_014e1610._7_1_);
      auVar20[8] = -(pbVar17[0x15] == DAT_014e1610._8_1_);
      auVar20[9] = -(pbVar17[0x16] == DAT_014e1610._9_1_);
      auVar20[10] = -(pbVar17[0x17] == DAT_014e1610._10_1_);
      auVar20[0xb] = -(pbVar17[0x18] == DAT_014e1610._11_1_);
      auVar20[0xc] = -(pbVar17[0x19] == DAT_014e1610._12_1_);
      auVar20[0xd] = -(pbVar17[0x1a] == DAT_014e1610._13_1_);
      auVar20[0xe] = -(pbVar17[0x1b] == DAT_014e1610._14_1_);
      auVar20[0xf] = -(pbVar17[0x1c] == DAT_014e1610._15_1_);
      auVar20 = auVar20 & auVar19;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == pbVar3) {
LAB_0eb688b9:
    if ((int)uStack_c8 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0eb6892d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auVar12 = (undefined1  [8])FUN_048b0c90(lVar16,lVar11,uStack_c8._4_4_,1);
      if (auVar12 == (undefined1  [8])0x0) {
        _auStack_1c8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1c8);
        auVar12 = auStack_1c8;
        if (auStack_1c8 == (undefined1  [8])0x0) goto LAB_0eb6892d;
      }
      if ((*(int *)((long)auVar12 + 0x50) == -0x45dcb126) && (*(long *)((long)auVar12 + 0x58) != 0))
      {
        lVar11 = *(long *)((long)auVar12 + 0x58) + 0x40;
      }
      else {
LAB_0eb6892d:
        lVar11 = 0;
      }
    }
    plStack_208 = (long *)0x0;
    plStack_1f8 = (long *)&UNK_048b4ab0;
    pcStack_1f0 = (code *)&UNK_048b49f0;
    uStack_1e8 = (long *)CONCAT35(uStack_1e8._5_3_,0x1d33bd9c5);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = 0x737365727078451e;
    puVar10[1] = 0x65646f4e206e6f69;
    puVar10[2] = 0;
    *(undefined2 *)(puVar10 + 3) = 0x400;
    *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
    puVar10[6] = 0;
    pcStack_1b0 = (code *)&UNK_048b4ab0;
    pcStack_1a8 = (code *)&UNK_048b49f0;
    uStack_1a0 = (undefined *)CONCAT35(uStack_1a0._5_3_,0x1d33bd9c5);
    plStack_208 = (long *)0x0;
    plStack_1c0 = puVar10;
    auStack_1c8 = (undefined1  [8])&UNK_048b46e0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_014d987e;
    plStack_88 = (long *)0x21;
    plStack_80 = (long *)0x1d;
    *(ulong *)((long)plVar9 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)plVar9 + 0x15) = uVar4;
    lVar16 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *plVar9 = _DAT_014d9869;
    plVar9[1] = lVar16;
    *(undefined1 *)((long)plVar9 + 0x1d) = 0;
    plStack_78 = plVar9;
    lVar11 = func_0x048b5060(lVar11,&plStack_88);
    *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
    pcVar8 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar11 + 0x20) != auStack_1c8) {
      puVar10 = (undefined8 *)(lVar11 + 0x28);
      if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0eb68aa8:
        plVar9 = plStack_1c0;
        plStack_1c0 = (long *)0x0;
        *puVar10 = plVar9;
      }
      else {
        (**(code **)(lVar11 + 0x40))(puVar10);
        if (uStack_1a0._4_1_ != '\0') {
          if (uStack_1a0._4_1_ != '\x02') goto LAB_0eb68aa8;
          (*pcStack_1b0)(5,auStack_1c8 + 8,puVar10);
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_1b0;
      *(code **)(lVar11 + 0x40) = pcStack_1a8;
      *(undefined4 *)(lVar11 + 0x48) = (undefined4)uStack_1a0;
      *(char *)(lVar11 + 0x4c) = uStack_1a0._4_1_;
      pcVar8 = pcStack_1a8;
    }
    if (((ulong)plStack_88 & 1) != 0) {
      func_0x0412a280(plStack_78,(ulong)plStack_88 & 0xfffffffffffffffe);
      pcVar8 = pcStack_1a8;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_1c8 + 8);
    }
    if (pcStack_1f0 != (code *)0x0) {
      (*pcStack_1f0)(&plStack_208);
    }
  }
  else {
    iVar5 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = FUN_04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar5 == _DAT_0f550754) goto LAB_0eb688b9;
  }
  plStack_208 = (long *)CONCAT44(uStack_ec,uStack_f0);
  plStack_1f8 = (long *)CONCAT44(uStack_dc,uStack_e0);
  uStack_1e8 = uStack_d0;
  puStack_1d8 = puStack_c0;
  pcStack_1f0 = (code *)plStack_d8;
  plStack_200 = plStack_e8;
  uStack_1e0 = 0x1e1bc4d500000004;
  if ((DAT_0f6b4fd0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f6b4fd0), iVar5 != 0)) {
    func_0x0b68ba20(0xf6b4fb8);
    func_0x0410844d(&DAT_0f6b4fd0);
  }
  auStack_1c8._0_4_ = uStack_1e0._4_4_;
  plStack_1c0 = (long *)0x0;
  uStack_1b8 = (long *)((ulong)uStack_1b8 & 0xffffffff00000000);
  pcStack_1b0 = (code *)0x1;
  pcStack_1a8 = (code *)&SUB_048aead0;
  uStack_1a0 = &UNK_0ebb49a0;
  puStack_198 = &UNK_0ebb4a60;
  uStack_190 = 0;
  uStack_188 = 0;
  auStack_180 = ZEXT816(0);
  FUN_049057f0(&plStack_200,auStack_1c8);
  func_0x048aea50(auStack_1c8);
  plStack_78 = (long *)pcStack_1f0;
  plStack_70 = uStack_1e8;
  plStack_88 = plStack_200;
  plStack_80 = plStack_1f8;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4db298;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = FUN_04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_1c8._0_4_ = _DAT_0f551bb4;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plVar9[3] = (long)puVar10;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  plStack_1c0 = plVar9 + 3;
  auStack_48 = ZEXT816(0);
  uStack_1b8 = plVar9;
  func_0x048afd20(&plStack_88,auStack_1c8);
  plVar9 = uStack_1b8;
  if (uStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b8 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_1b8 + 0x10))(uStack_1b8);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar4 = auStack_48._8_8_;
  if ((long *)auStack_48._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_48._8_8_ + 8);
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_48._8_8_ + 0x10))(auStack_48._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  if ((DAT_0f6b4fd0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f6b4fd0), iVar5 != 0)) {
    func_0x0b68ba20(0xf6b4fb8);
    func_0x0410844d(&DAT_0f6b4fd0);
  }
  if (uStack_1e8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)pcStack_1f0 + 0x78) + 0x60);
    iVar5 = *piVar13;
    while (iVar5 != (int)uStack_1e8) {
      piVar13 = piVar13 + 0x16;
      iVar5 = *piVar13;
    }
    lVar11 = *(long *)(piVar13 + 0xc);
    while ((long *)lVar11 != plStack_1f8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar11 = *(long *)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_1e8._4_4_ != 1) {
      if (uStack_1e8._4_4_ == 0) {
        *(uint *)((long)pcStack_1f0 + 0x18) = *(uint *)((long)pcStack_1f0 + 0x18) | 0x20000;
      }
      goto LAB_0eb68df3;
    }
    piVar13 = *(int **)(*(long *)((long)pcStack_1f0 + 0x78) + 0x48);
    iVar5 = *piVar13;
    while (iVar5 != (int)uStack_1e8) {
      piVar13 = piVar13 + 0x1a;
      iVar5 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 2;
LAB_0eb68df3:
  if ((DAT_0f6b4fd0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f6b4fd0), iVar5 != 0)) {
    func_0x0b68ba20(0xf6b4fb8);
    func_0x0410844d(&DAT_0f6b4fd0);
  }
  auStack_1c8._0_4_ = 0xbf75c8f8;
  plStack_1c0 = (long *)0x0;
  uStack_1b8 = (long *)((ulong)uStack_1b8 & 0xffffffff00000000);
  pcStack_1b0 = (code *)0x0;
  pcStack_1a8 = (code *)&UNK_0ebb4ca0;
  uStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_0ebb5640;
  uStack_190 = 0;
  uStack_188 = 0;
  auStack_180 = ZEXT816(0);
  FUN_049057f0(&plStack_200,auStack_1c8);
  func_0x048aea50(auStack_1c8);
  plStack_78 = (long *)pcStack_1f0;
  plStack_70 = uStack_1e8;
  plStack_88 = plStack_200;
  plStack_80 = plStack_1f8;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4db298;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f551cb0), iVar5 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_1c8._0_4_ = _DAT_0f551c9c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined1 (*) [16])(plVar9 + 1) = (undefined1  [16])0x0;
  *plVar9 = (long)&UNK_0ef46c98;
  plVar9[3] = (long)puVar10;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  plStack_1c0 = plVar9 + 3;
  auStack_48 = (undefined1  [16])0x0;
  uStack_1b8 = plVar9;
  func_0x048afd20(&plStack_88,auStack_1c8);
  plVar9 = uStack_1b8;
  if (uStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b8 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_1b8 + 0x10))(uStack_1b8);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar4 = auStack_48._8_8_;
  if ((long *)auStack_48._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_48._8_8_ + 8);
    lVar11 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_48._8_8_ + 0x10))(auStack_48._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
