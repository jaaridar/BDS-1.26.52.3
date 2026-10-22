/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2abb40 (ELF vaddr 0xe1abb40)
 * Label: caller-of-callee
 * Body:  [[0e2abb40, 0e2abc0e] [0e2abc10, 0e2abc52] [0e2abc60, 0e2ac4b7] [0e2ac4c0, 0e2ac70a]]
 * Ghidra: FUN_0e2abb40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2abb40(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  lVar6 = func_0x0e1d5480(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar17 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar14 = lVar6 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar6 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar17) {
      uVar12 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0e2ec7b0(&uStack_80,param_1,lVar14,uVar12);
  }
  else {
    func_0x0e2ec7b0(&uStack_80,param_1,&UNK_01386560,0x1b);
  }
  if (cStack_50 != '\0') {
    return;
  }
  lVar14 = uStack_80 + 0x18;
  lVar6 = func_0x0e1d5480(lVar14);
  for (pbVar13 = *(byte **)(uStack_80 + 0x50); pbVar13 != *(byte **)(uStack_80 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e2abc6a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0e2abc6a:
      if ((bVar1 & 1) == 0) {
        pbVar15 = pbVar13 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar13 + 0x10);
      }
      auVar18[0] = -(*pbVar15 == DAT_014eaba0);
      auVar18[1] = -(pbVar15[1] == DAT_014eaba0._1_1_);
      auVar18[2] = -(pbVar15[2] == DAT_014eaba0._2_1_);
      auVar18[3] = -(pbVar15[3] == DAT_014eaba0._3_1_);
      auVar18[4] = -(pbVar15[4] == DAT_014eaba0._4_1_);
      auVar18[5] = -(pbVar15[5] == DAT_014eaba0._5_1_);
      auVar18[6] = -(pbVar15[6] == DAT_014eaba0._6_1_);
      auVar18[7] = -(pbVar15[7] == DAT_014eaba0._7_1_);
      auVar18[8] = -(pbVar15[8] == DAT_014eaba0._8_1_);
      auVar18[9] = -(pbVar15[9] == DAT_014eaba0._9_1_);
      auVar18[10] = -(pbVar15[10] == DAT_014eaba0._10_1_);
      auVar18[0xb] = -(pbVar15[0xb] == DAT_014eaba0._11_1_);
      auVar18[0xc] = -(pbVar15[0xc] == DAT_014eaba0._12_1_);
      auVar18[0xd] = -(pbVar15[0xd] == DAT_014eaba0._13_1_);
      auVar18[0xe] = -(pbVar15[0xe] == DAT_014eaba0._14_1_);
      auVar18[0xf] = -(pbVar15[0xf] == DAT_014eaba0._15_1_);
      auVar19[0] = -(pbVar15[10] == DAT_014e4ff0);
      auVar19[1] = -(pbVar15[0xb] == DAT_014e4ff0._1_1_);
      auVar19[2] = -(pbVar15[0xc] == DAT_014e4ff0._2_1_);
      auVar19[3] = -(pbVar15[0xd] == DAT_014e4ff0._3_1_);
      auVar19[4] = -(pbVar15[0xe] == DAT_014e4ff0._4_1_);
      auVar19[5] = -(pbVar15[0xf] == DAT_014e4ff0._5_1_);
      auVar19[6] = -(pbVar15[0x10] == DAT_014e4ff0._6_1_);
      auVar19[7] = -(pbVar15[0x11] == DAT_014e4ff0._7_1_);
      auVar19[8] = -(pbVar15[0x12] == DAT_014e4ff0._8_1_);
      auVar19[9] = -(pbVar15[0x13] == DAT_014e4ff0._9_1_);
      auVar19[10] = -(pbVar15[0x14] == DAT_014e4ff0._10_1_);
      auVar19[0xb] = -(pbVar15[0x15] == DAT_014e4ff0._11_1_);
      auVar19[0xc] = -(pbVar15[0x16] == DAT_014e4ff0._12_1_);
      auVar19[0xd] = -(pbVar15[0x17] == DAT_014e4ff0._13_1_);
      auVar19[0xe] = -(pbVar15[0x18] == DAT_014e4ff0._14_1_);
      auVar19[0xf] = -(pbVar15[0x19] == DAT_014e4ff0._15_1_);
      auVar19 = auVar19 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar13 == *(byte **)(uStack_80 + 0x58)) {
LAB_0e2abc99:
    if (iStack_58 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0e2abd09;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_168._0_8_ = func_0x048b0c90(lVar14,lVar6,uStack_54,1);
      if (auStack_168._0_8_ == 0) {
        auStack_168 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_168);
        if (auStack_168._0_8_ == 0) goto LAB_0e2abd09;
      }
      if ((*(int *)(auStack_168._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_168._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_168._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2abd09:
        lVar6 = 0;
      }
    }
    puStack_f8 = &UNK_0488e0b0;
    pcStack_f0 = (code *)0x0;
    uStack_e8 = CONCAT35(uStack_e8._5_3_,0x48b5725f);
    uStack_108 = 0;
    auStack_168 = (undefined1  [16])0x0;
    pcStack_150 = (code *)&UNK_0488e0b0;
    pcStack_148 = (code *)0x0;
    uStack_140 = (undefined1 *)CONCAT35(uStack_140._5_3_,0x48b5725f);
    puStack_a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_a8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar10 = _UNK_013bbadf;
    uStack_b8 = 0x21;
    uStack_b0 = 0x1a;
    *(ulong *)((long)puStack_a8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_a8 + 0x12) = uVar10;
    uVar10 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_a8 = _DAT_013bbacd;
    puStack_a8[1] = uVar10;
    *(undefined1 *)((long)puStack_a8 + 0x1a) = 0;
    lVar6 = func_0x048b5060(lVar6,&uStack_b8);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_168) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar16);
        if (uStack_140._4_1_ != '\0') {
          if (uStack_140._4_1_ == '\x02') {
            (*pcStack_150)(5,auStack_168 + 8,puVar16);
          }
          else {
            uVar10 = auStack_168._8_8_;
            auStack_168._8_8_ = 0;
            *puVar16 = uVar10;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_150;
      *(code **)(lVar6 + 0x40) = pcStack_148;
      *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_140;
      *(char *)(lVar6 + 0x4c) = uStack_140._4_1_;
      pcVar7 = pcStack_148;
    }
    if ((uStack_b8 & 1) != 0) {
      func_0x0412a280(puStack_a8,uStack_b8 & 0xfffffffffffffffe);
      pcVar7 = pcStack_148;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_168 + 8);
    }
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_108);
    }
  }
  else {
    iVar4 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e2abc99;
  }
  uStack_98 = uStack_60;
  puStack_a8 = (undefined8 *)lStack_70;
  lStack_a0 = lStack_68;
  uStack_b8 = uStack_80;
  uStack_b0 = uStack_78;
  uStack_e8 = uStack_60;
  uStack_108 = uStack_80;
  uStack_100 = uStack_78;
  puStack_f8 = (undefined *)lStack_70;
  pcStack_f0 = (code *)lStack_68;
  uStack_e0 = 0x1e1bc4d500000004;
  if ((DAT_0f7488d8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7488d8), iVar4 != 0)) {
    func_0x0e1d5410(0xf7488c0);
    FUN_0410844d(&DAT_0f7488d8);
  }
  auStack_168._0_4_ = uStack_e0._4_4_;
  auStack_168._8_8_ = 0;
  uStack_158 = (long *)((ulong)uStack_158._4_4_ << 0x20);
  pcStack_150 = (code *)0x1;
  pcStack_148 = (code *)&SUB_048aead0;
  uStack_140 = &UNK_06063e30;
  puStack_138 = &UNK_0e2ed070;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x049057f0(&uStack_100,auStack_168);
  func_0x048aea50(auStack_168);
  lStack_38 = (long)pcStack_f0;
  uStack_30 = uStack_e8;
  uStack_48 = uStack_100;
  lStack_40 = (long)puStack_f8;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef474e0;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  auStack_168._0_4_ = _DAT_0f551bb4;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plVar8[3] = (long)puVar16;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  auStack_168._8_8_ = plVar8 + 3;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_158 = plVar8;
  func_0x048afd20(&uStack_48,auStack_168);
  plVar8 = uStack_158;
  if (uStack_158 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_158 + 1;
    lVar6 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_158 + 0x10))(uStack_158);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_c0 + 1;
    lVar6 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f7488d8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7488d8), iVar4 != 0)) {
    func_0x0e1d5410(0xf7488c0);
    FUN_0410844d(&DAT_0f7488d8);
  }
  if (uStack_e8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)((long)pcStack_f0 + 0x78) + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != (int)uStack_e8) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while ((undefined *)lVar6 != puStack_f8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
  }
  else {
    if (uStack_e8._4_4_ != 1) {
      if (uStack_e8._4_4_ == 0) {
        *(uint *)((long)pcStack_f0 + 0x18) = *(uint *)((long)pcStack_f0 + 0x18) | 0x20000;
      }
      goto LAB_0e2ac123;
    }
    piVar9 = *(int **)(*(long *)((long)pcStack_f0 + 0x78) + 0x48);
    iVar4 = *piVar9;
    while (iVar4 != (int)uStack_e8) {
      piVar9 = piVar9 + 0x1a;
      iVar4 = *piVar9;
    }
  }
  *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
LAB_0e2ac123:
  if ((DAT_0f7488d8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7488d8), iVar4 != 0)) {
    func_0x0e1d5410(0xf7488c0);
    FUN_0410844d(&DAT_0f7488d8);
  }
  auStack_168._0_4_ = 0xbf75c8f8;
  auStack_168._8_8_ = 0;
  uStack_158 = (long *)CONCAT44(uStack_158._4_4_,1);
  pcStack_150 = (code *)0x0;
  pcStack_148 = (code *)&UNK_0490fc00;
  uStack_140 = &SUB_048b06d0;
  puStack_138 = &UNK_0e2ed400;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x049057f0(&uStack_100,auStack_168);
  func_0x048aea50(auStack_168);
  lStack_38 = (long)pcStack_f0;
  uStack_30 = uStack_e8;
  uStack_48 = uStack_100;
  lStack_40 = (long)puStack_f8;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef474e0;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551cb0), iVar4 != 0)) {
    func_0x04905d10(0xf551c98);
    FUN_0410844d(&DAT_0f551cb0);
  }
  auStack_168._0_4_ = _DAT_0f551c9c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plVar8[3] = (long)puVar16;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  auStack_168._8_8_ = plVar8 + 3;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_158 = plVar8;
  func_0x048afd20(&uStack_48,auStack_168);
  plVar8 = uStack_158;
  if (uStack_158 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_158 + 1;
    lVar6 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_158 + 0x10))(uStack_158);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_c0 + 1;
    lVar6 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar8);
    }
  }
  uVar12 = uStack_108;
  iVar4 = (int)uStack_e0;
  uVar2 = uStack_e0._4_4_;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f40d248;
  plVar8[4] = -1;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 6) = 0xff;
  plVar8[3] = (long)&UNK_0f489570;
  plVar8[7] = 0x617263656e696d12;
  plVar8[8] = 0x7466;
  plVar8[9] = 0;
  *(undefined1 *)(plVar8 + 10) = 1;
  if (iVar4 == 4) {
    lVar6 = uVar12 + 0x18;
    uVar10 = func_0x0e1d5480(lVar6);
    lVar6 = FUN_048b1040(lVar6,uVar10,uVar2,1);
    if (lVar6 == 0) {
      auStack_168 = ZEXT816(0);
      func_0x048b10d0(auStack_168);
      lVar14 = *(long *)(auStack_168._0_8_ + 0x38);
      lVar6 = auStack_168._0_8_;
    }
    else {
      lVar14 = *(long *)(lVar6 + 0x38);
    }
    if (lVar14 != 0) goto LAB_0e2ac4c5;
    auStack_168 = ZEXT816(0);
    func_0x048b10d0(auStack_168);
    lVar3 = auStack_168._0_8_;
    while (lVar14 = lVar3, lVar14 != 0) {
LAB_0e2ac4c5:
      lVar6 = lVar14;
      lVar3 = *(long *)(lVar14 + 0x38);
      if (*(long *)(lVar14 + 0x38) == 0) {
        auStack_168 = ZEXT816(0);
        func_0x048b10d0(auStack_168);
        lVar3 = auStack_168._0_8_;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar4 != 1) {
      plVar11 = plVar8 + 1;
      LOCK();
      lVar6 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
      return;
    }
    lVar6 = uVar12 + 0x18;
    uVar10 = func_0x0e1d5480(lVar6);
    lVar6 = func_0x048b0c90(lVar6,uVar10,uVar2,1);
    if (lVar6 == 0) {
      auStack_168 = ZEXT816(0);
      func_0x048b0d20(auStack_168);
      lVar6 = auStack_168._0_8_;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar16[1] = 0xffffffffffffffff;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 0xff;
  *puVar16 = &UNK_0f4e3cf0;
  puVar16[4] = 0;
  puVar16[5] = plVar8 + 3;
  puVar16[6] = plVar8;
  *(undefined1 *)(puVar16 + 7) = 0;
  plVar8 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar16;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
