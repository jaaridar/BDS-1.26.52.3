/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9b7040 (ELF vaddr 0xe8b7040)
 * Label: caller-of-callee
 * Body:  [[0e9b7040, 0e9b710c] [0e9b7110, 0e9b7152] [0e9b7160, 0e9b78c1] [0e9b78d0, 0e9b79dc] [0e9b79e0, 0e9b7b5f]]
 * Ghidra: FUN_0e9b7040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9b7040(long param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_218 [16];
  undefined4 uStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined2 uStack_1c7;
  undefined5 uStack_1c5;
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
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  char cStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar8 = func_0x0c4be2e0(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eb50510(&uStack_a0,param_1,lVar15,uVar12);
  }
  else {
    func_0x0eb50510(&uStack_a0,param_1,&DAT_013d53c0,0x1b);
  }
  if (cStack_70 != '\0') {
    return;
  }
  lVar15 = uStack_a0 + 0x18;
  lVar8 = func_0x0c4be2e0(lVar15);
  for (pbVar13 = *(byte **)(uStack_a0 + 0x50); pbVar13 != *(byte **)(uStack_a0 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar2 = *pbVar13;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e9b716a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0e9b716a:
      if ((bVar2 & 1) == 0) {
        pbVar16 = pbVar13 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar13 + 0x10);
      }
      auVar19[0] = -(*pbVar16 == DAT_014eaba0);
      auVar19[1] = -(pbVar16[1] == DAT_014eaba0._1_1_);
      auVar19[2] = -(pbVar16[2] == DAT_014eaba0._2_1_);
      auVar19[3] = -(pbVar16[3] == DAT_014eaba0._3_1_);
      auVar19[4] = -(pbVar16[4] == DAT_014eaba0._4_1_);
      auVar19[5] = -(pbVar16[5] == DAT_014eaba0._5_1_);
      auVar19[6] = -(pbVar16[6] == DAT_014eaba0._6_1_);
      auVar19[7] = -(pbVar16[7] == DAT_014eaba0._7_1_);
      auVar19[8] = -(pbVar16[8] == DAT_014eaba0._8_1_);
      auVar19[9] = -(pbVar16[9] == DAT_014eaba0._9_1_);
      auVar19[10] = -(pbVar16[10] == DAT_014eaba0._10_1_);
      auVar19[0xb] = -(pbVar16[0xb] == DAT_014eaba0._11_1_);
      auVar19[0xc] = -(pbVar16[0xc] == DAT_014eaba0._12_1_);
      auVar19[0xd] = -(pbVar16[0xd] == DAT_014eaba0._13_1_);
      auVar19[0xe] = -(pbVar16[0xe] == DAT_014eaba0._14_1_);
      auVar19[0xf] = -(pbVar16[0xf] == DAT_014eaba0._15_1_);
      auVar20[0] = -(pbVar16[10] == DAT_014e4ff0);
      auVar20[1] = -(pbVar16[0xb] == DAT_014e4ff0._1_1_);
      auVar20[2] = -(pbVar16[0xc] == DAT_014e4ff0._2_1_);
      auVar20[3] = -(pbVar16[0xd] == DAT_014e4ff0._3_1_);
      auVar20[4] = -(pbVar16[0xe] == DAT_014e4ff0._4_1_);
      auVar20[5] = -(pbVar16[0xf] == DAT_014e4ff0._5_1_);
      auVar20[6] = -(pbVar16[0x10] == DAT_014e4ff0._6_1_);
      auVar20[7] = -(pbVar16[0x11] == DAT_014e4ff0._7_1_);
      auVar20[8] = -(pbVar16[0x12] == DAT_014e4ff0._8_1_);
      auVar20[9] = -(pbVar16[0x13] == DAT_014e4ff0._9_1_);
      auVar20[10] = -(pbVar16[0x14] == DAT_014e4ff0._10_1_);
      auVar20[0xb] = -(pbVar16[0x15] == DAT_014e4ff0._11_1_);
      auVar20[0xc] = -(pbVar16[0x16] == DAT_014e4ff0._12_1_);
      auVar20[0xd] = -(pbVar16[0x17] == DAT_014e4ff0._13_1_);
      auVar20[0xe] = -(pbVar16[0x18] == DAT_014e4ff0._14_1_);
      auVar20[0xf] = -(pbVar16[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar13 == *(byte **)(uStack_a0 + 0x58)) {
LAB_0e9b7199:
    if (iStack_78 == 0) {
      if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
      goto LAB_0e9b7209;
      lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
    }
    else {
      auStack_218._0_8_ = func_0x048b0c90(lVar15,lVar8,uStack_74,1);
      if (auStack_218._0_8_ == 0) {
        auStack_218 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_218);
        if (auStack_218._0_8_ == 0) goto LAB_0e9b7209;
      }
      if ((*(int *)(auStack_218._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_218._0_8_ + 0x58) != 0)) {
        lVar8 = *(long *)(auStack_218._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e9b7209:
        lVar8 = 0;
      }
    }
    plStack_f8 = (long *)&UNK_0488e0b0;
    pcStack_f0 = (code *)0x0;
    uStack_e8 = CONCAT35(uStack_e8._5_3_,0x48b5725f);
    uStack_108 = 0;
    auStack_218 = (undefined1  [16])0x0;
    pcStack_200 = (code *)&UNK_0488e0b0;
    pcStack_1f8 = (code *)0x0;
    uStack_1f0 = CONCAT35(uStack_1f0._5_3_,0x48b5725f);
    puStack_138 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_138 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar11 = _UNK_013bbadf;
    uStack_148 = 0x21;
    uStack_140 = 0x1a;
    *(ulong *)((long)puStack_138 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_138 + 0x12) = uVar11;
    uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_138 = _DAT_013bbacd;
    puStack_138[1] = uVar11;
    *(undefined1 *)((long)puStack_138 + 0x1a) = 0;
    lVar8 = func_0x048b5060(lVar8,&uStack_148);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if ((undefined1 *)(lVar8 + 0x20) == auStack_218) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
        puVar17 = (undefined8 *)(lVar8 + 0x28);
        (**(code **)(lVar8 + 0x40))(puVar17);
        if (uStack_1f0._4_1_ != '\0') {
          if (uStack_1f0._4_1_ == '\x02') {
            (*pcStack_200)(5,auStack_218 + 8,puVar17);
          }
          else {
            uVar11 = auStack_218._8_8_;
            auStack_218._8_8_ = 0;
            *puVar17 = uVar11;
          }
        }
      }
      *(code **)(lVar8 + 0x38) = pcStack_200;
      *(code **)(lVar8 + 0x40) = pcStack_1f8;
      *(undefined4 *)(lVar8 + 0x48) = (undefined4)uStack_1f0;
      *(char *)(lVar8 + 0x4c) = uStack_1f0._4_1_;
      pcVar9 = pcStack_1f8;
    }
    if ((uStack_148 & 1) != 0) {
      func_0x0412a280(puStack_138,uStack_148 & 0xfffffffffffffffe);
      pcVar9 = pcStack_1f8;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_218 + 8);
    }
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_108);
    }
  }
  else {
    iVar6 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e9b7199;
  }
  uStack_38 = uStack_80;
  uStack_48 = uStack_90;
  uStack_40 = uStack_88;
  uStack_58 = uStack_a0;
  uStack_50 = uStack_98;
  uStack_148 = uStack_a0;
  uStack_140 = uStack_98;
  puStack_138 = (undefined8 *)uStack_90;
  uStack_130 = uStack_88;
  uStack_128 = uStack_80;
  if ((DAT_0f6e68d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e68d0), iVar6 != 0)) {
    func_0x0c4be270(0xf6e68b8);
    func_0x0410844d(&DAT_0f6e68d0);
  }
  uStack_120 = 0xc13819a100000001;
  lVar8 = uStack_148 + 0x18;
  auStack_218._0_8_ = func_0x0c4be2e0(lVar8);
  auStack_218._8_8_ = lVar8;
  func_0x0ed621a0(auStack_218,uStack_120._4_4_);
  auStack_218._0_2_ = 1;
  auStack_218._8_8_ = &uStack_140;
  uStack_208 = uStack_120._4_4_;
  pcStack_200 = (code *)0x0;
  pcStack_1f8 = (code *)0x0;
  uStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0x22;
  uStack_1d7 = (undefined7)_DAT_012ed447;
  uStack_1d0 = (undefined1)((ulong)_DAT_012ed447 >> 0x38);
  uStack_1cf = (undefined7)_UNK_012ed44f;
  uStack_1c8 = (undefined1)((ulong)_UNK_012ed44f >> 0x38);
  uStack_1c7 = 0x73;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  uStack_190 = 0x3f600000;
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
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0ef474e0;
  if (pcStack_200 != (code *)0x0) {
    lVar8 = *(long *)pcStack_200;
    pcStack_200 = pcVar9;
    (**(code **)(lVar8 + 8))();
    pcVar9 = pcStack_200;
  }
  pcStack_200 = pcVar9;
  uStack_108 = CONCAT44(uStack_108._4_4_,uStack_208);
  plStack_100 = (long *)0x0;
  plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
  pcStack_f0 = (code *)0x1;
  uStack_e8 = 0;
  puStack_e0 = &UNK_049119f0;
  puStack_d8 = &SUB_048b06d0;
  puStack_d0 = &UNK_0490fc00;
  puStack_c8 = &UNK_0eb50dc0;
  puStack_c0 = &UNK_0eb50fc0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  FUN_048b05a0(auStack_218._8_8_,&uStack_108);
  plVar10 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      func_0x0412c2d0(plVar10);
    }
  }
  uVar11 = auStack_218._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_108 = CONCAT44(uStack_108._4_4_,_DAT_0f550a0c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  pcVar3 = pcStack_1f8;
  pcVar9 = pcStack_200;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_100 = plVar10 + 3;
  pcStack_200 = (code *)0x0;
  pcStack_1f8 = (code *)0x0;
  plVar10[3] = (long)pcVar9;
  plVar10[4] = (long)pcVar3;
  plVar10[7] = lStack_1e0;
  plVar10[5] = uStack_1f0;
  plVar10[6] = lStack_1e8;
  uStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  plVar10[10] = CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8));
  plVar10[8] = CONCAT71(uStack_1d7,uStack_1d8);
  plVar10[9] = CONCAT71(uStack_1cf,uStack_1d0);
  uStack_1d8 = 0;
  uStack_1d7 = 0;
  uStack_1d0 = 0;
  uStack_1cf = 0;
  uStack_1c8 = 0;
  uStack_1c7 = 0;
  uStack_1c5 = 0;
  plVar10[0xb] = lStack_1c0;
  plVar10[0xc] = lStack_1b8;
  plVar10[0xd] = lStack_1b0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  plVar10[0xe] = lStack_1a8;
  plVar10[0xf] = lStack_1a0;
  plVar10[0x10] = lStack_198;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_190;
  plVar10[0x12] = lStack_188;
  plVar10[0x13] = lStack_180;
  plVar10[0x14] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar10[0x17] = lStack_160;
  plVar10[0x15] = lStack_170;
  plVar10[0x16] = lStack_168;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_14c,CONCAT43(uStack_150,uStack_154._1_3_));
  plVar10[0x18] = CONCAT44(uStack_154,CONCAT22(uStack_156,uStack_158));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  plStack_f8 = plVar10;
  func_0x048afd20(uVar11,&uStack_108);
  plVar10 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar10);
    }
  }
  uVar12 = uStack_148;
  lVar8 = *(long *)(uVar11 + 0x10);
  iVar6 = *(int *)(uVar11 + 0x1c);
  if (iVar6 == 2) {
    piVar14 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar6 = *piVar14;
    while (iVar6 != *(int *)(uVar11 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar6 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(uVar11 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | auStack_218._0_4_ << 0x10;
      }
      goto LAB_0e9b78dd;
    }
    piVar14 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar6 = *piVar14;
    while (iVar6 != *(int *)(uVar11 + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar6 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | auStack_218._0_4_ << 0x10;
LAB_0e9b78dd:
  iVar6 = (int)uStack_120;
  uVar4 = uStack_120._4_4_;
  func_0x048b0bc0(&pcStack_200);
  if (iVar6 == 4) {
    lVar8 = uVar12 + 0x18;
    uVar11 = func_0x0c4be2e0(lVar8);
    lVar8 = func_0x048b1040(lVar8,uVar11,uVar4,1);
    if (lVar8 == 0) {
      auStack_218 = ZEXT816(0);
      func_0x048b10d0(auStack_218);
      lVar15 = *(long *)(auStack_218._0_8_ + 0x38);
      lVar8 = auStack_218._0_8_;
    }
    else {
      lVar15 = *(long *)(lVar8 + 0x38);
    }
    if (lVar15 != 0) goto LAB_0e9b79e5;
    auStack_218 = ZEXT816(0);
    func_0x048b10d0(auStack_218);
    lVar5 = auStack_218._0_8_;
    while (lVar15 = lVar5, lVar15 != 0) {
LAB_0e9b79e5:
      lVar8 = lVar15;
      lVar5 = *(long *)(lVar15 + 0x38);
      if (*(long *)(lVar15 + 0x38) == 0) {
        auStack_218 = ZEXT816(0);
        func_0x048b10d0(auStack_218);
        lVar5 = auStack_218._0_8_;
      }
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar6 != 1) {
      return;
    }
    lVar8 = uVar12 + 0x18;
    uVar11 = func_0x0c4be2e0(lVar8);
    lVar8 = func_0x048b0c90(lVar8,uVar11,uVar4,1);
    if (lVar8 == 0) {
      auStack_218 = ZEXT816(0);
      FUN_048b0d20(auStack_218);
      lVar8 = auStack_218._0_8_;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  puVar17[1] = 0xffffffffffffffff;
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 0xff;
  *puVar17 = &UNK_0f4e3cf0;
  puVar17[4] = 1;
  puVar17[5] = 0;
  puVar17[6] = 0;
  *(undefined1 *)(puVar17 + 7) = 0;
  plVar10 = *(long **)(lVar8 + 8);
  *(undefined8 **)(lVar8 + 8) = puVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x12ed447  absorbable_causes
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
