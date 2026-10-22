/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb9b740 (ELF vaddr 0xea9b740)
 * Label: caller-of-callee
 * Body:  [[0eb9b740, 0eb9b80c] [0eb9b810, 0eb9b852] [0eb9b860, 0eb9c184]]
 * Ghidra: FUN_0eb9b740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb9b740(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  char cStack_60;
  undefined7 uStack_5f;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = func_0x0c4ccd10(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar15 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar15) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0ec76870(&plStack_90,param_1,lVar12,uVar10);
  }
  else {
    func_0x0ec76870(&plStack_90,param_1,&DAT_0129a9ee,0x19);
  }
  if (cStack_60 != '\0') {
    return;
  }
  plVar9 = plStack_90 + 3;
  lVar6 = func_0x0c4ccd10(plVar9);
  for (pbVar11 = (byte *)plStack_90[10]; pbVar11 != (byte *)plStack_90[0xb];
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eb9b86a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0eb9b86a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar11 + 0x10);
      }
      auVar16[0] = -(*pbVar13 == DAT_014eaba0);
      auVar16[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar16[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar16[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar16[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar16[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar16[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar16[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar16[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar16[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar16[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar16[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar16[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar16[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar16[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar16[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar17[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar17[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar17[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar17[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar17[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar17[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar17[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar17[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar17[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar17[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar17[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar17[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar17[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar17[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar17[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar17[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
      auVar17 = auVar17 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar11 == (byte *)plStack_90[0xb]) {
LAB_0eb9b899:
    if (iStack_68 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0eb9b909;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_1a8._0_8_ = func_0x048b0c90(plVar9,lVar6,uStack_64,1);
      if (auStack_1a8._0_8_ == 0) {
        auStack_1a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1a8);
        if (auStack_1a8._0_8_ == 0) goto LAB_0eb9b909;
      }
      if ((*(int *)(auStack_1a8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1a8._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_1a8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eb9b909:
        lVar6 = 0;
      }
    }
    plStack_138 = (long *)&UNK_0488e0b0;
    pcStack_130 = (code *)0x0;
    uStack_128 = CONCAT35(uStack_128._5_3_,0x48b5725f);
    plStack_148 = (long *)0x0;
    auStack_1a8 = (undefined1  [16])0x0;
    pcStack_190 = (code *)&UNK_0488e0b0;
    pcStack_188 = (code *)0x0;
    uStack_180 = (undefined *)CONCAT35(uStack_180._5_3_,0x48b5725f);
    plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    plStack_c8 = (long *)0x21;
    plStack_c0 = (long *)0x1a;
    *(ulong *)((long)plStack_b8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plStack_b8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plStack_b8 = _DAT_013bbacd;
    plStack_b8[1] = uVar3;
    *(undefined1 *)((long)plStack_b8 + 0x1a) = 0;
    lVar6 = FUN_048b5060(lVar6,&plStack_c8);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_1a8) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar14);
        if (uStack_180._4_1_ != '\0') {
          if (uStack_180._4_1_ == '\x02') {
            (*pcStack_190)(5,auStack_1a8 + 8,puVar14);
          }
          else {
            uVar3 = auStack_1a8._8_8_;
            auStack_1a8._8_8_ = 0;
            *puVar14 = uVar3;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_190;
      *(code **)(lVar6 + 0x40) = pcStack_188;
      *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_180;
      *(char *)(lVar6 + 0x4c) = uStack_180._4_1_;
      pcVar7 = pcStack_188;
    }
    if (((ulong)plStack_c8 & 1) != 0) {
      func_0x0412a280(plStack_b8,(ulong)plStack_c8 & 0xfffffffffffffffe);
      pcVar7 = pcStack_188;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_1a8 + 8);
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(&plStack_148);
    }
  }
  else {
    iVar4 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0eb9b899;
  }
  uStack_98 = CONCAT71(uStack_5f,cStack_60);
  uStack_38 = uStack_70;
  plStack_48 = plStack_80;
  lStack_40 = lStack_78;
  plStack_58 = plStack_90;
  plStack_50 = plStack_88;
  uStack_a8 = uStack_70;
  plStack_c8 = plStack_90;
  plStack_c0 = plStack_88;
  plStack_b8 = plStack_80;
  lStack_b0 = lStack_78;
  uStack_a0 = 0x1e1bc4d500000004;
  if ((DAT_0f6e7398 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7398), iVar4 != 0)) {
    func_0x0c4ccca0(0xf6e7380);
    func_0x0410844d(&DAT_0f6e7398);
  }
  auStack_1a8._0_4_ = uStack_a0._4_4_;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)((ulong)uStack_198._4_4_ << 0x20);
  pcStack_190 = (code *)0x1;
  pcStack_188 = (code *)&SUB_048aead0;
  uStack_180 = &UNK_079523d0;
  puStack_178 = &UNK_0ec772b0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  func_0x049057f0(&plStack_c0,auStack_1a8);
  FUN_048aea50(auStack_1a8);
  plStack_138 = (long *)lStack_b0;
  pcStack_130 = (code *)uStack_a8;
  plStack_148 = plStack_c0;
  plStack_140 = plStack_b8;
  plStack_e8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plStack_e8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plStack_e8 = (long)&UNK_0ef46ef8;
  plStack_e0 = (long *)0x0;
  lStack_d8 = CONCAT71(lStack_d8._1_7_,0xff);
  func_0x0ec77130(auStack_1a8,&plStack_148,&plStack_e8);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x28))();
  }
  if (plStack_e8 != (long *)0x0) {
    (**(code **)(*plStack_e8 + 8))();
  }
  uStack_128 = uStack_a8;
  plStack_148 = plStack_c8;
  plStack_140 = plStack_c0;
  plStack_138 = plStack_b8;
  pcStack_130 = (code *)lStack_b0;
  uStack_118 = uStack_98;
  uStack_120 = 0x1e1bc4d500000004;
  if ((DAT_0f6e7398 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7398), iVar4 != 0)) {
    func_0x0c4ccca0(0xf6e7380);
    func_0x0410844d(&DAT_0f6e7398);
  }
  auStack_1a8._0_4_ = uStack_120._4_4_;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)((ulong)uStack_198 & 0xffffffff00000000);
  pcStack_190 = (code *)0x1;
  pcStack_188 = (code *)&SUB_048aead0;
  uStack_180 = &UNK_048b3f30;
  puStack_178 = &UNK_0ec774a0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  func_0x049057f0(&plStack_140,auStack_1a8);
  FUN_048aea50(auStack_1a8);
  lStack_d8 = (long)pcStack_130;
  uStack_d0 = uStack_128;
  plStack_e8 = plStack_140;
  plStack_e0 = plStack_138;
  plStack_108 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plStack_108 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plStack_108 = (long)&UNK_0ef44b00;
  plStack_100 = (long *)0x0;
  uStack_f8 = 0xff;
  func_0x0ec77130(auStack_1a8,&plStack_e8,&plStack_108);
  if (plStack_100 != (long *)0x0) {
    (**(code **)(*plStack_100 + 0x28))();
  }
  if (plStack_108 != (long *)0x0) {
    (**(code **)(*plStack_108 + 8))();
  }
  if ((DAT_0f6e7398 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7398), iVar4 != 0)) {
    func_0x0c4ccca0(0xf6e7380);
    func_0x0410844d(&DAT_0f6e7398);
  }
  if (uStack_128._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)pcStack_130 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != (int)uStack_128) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    plVar9 = *(long **)(piVar8 + 0xc);
    while (plVar9 != plStack_138) {
      piVar8 = *(int **)(piVar8 + 0xe);
      plVar9 = *(long **)(piVar8 + 0xc);
    }
  }
  else {
    if (uStack_128._4_4_ != 1) {
      if (uStack_128._4_4_ == 0) {
        *(uint *)((long)pcStack_130 + 0x18) = *(uint *)((long)pcStack_130 + 0x18) | 0x20000;
      }
      goto LAB_0eb9be03;
    }
    piVar8 = *(int **)(*(long *)((long)pcStack_130 + 0x78) + 0x48);
    iVar4 = *piVar8;
    while (iVar4 != (int)uStack_128) {
      piVar8 = piVar8 + 0x1a;
      iVar4 = *piVar8;
    }
  }
  *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
LAB_0eb9be03:
  if ((DAT_0f6e7398 == '\0') && (iVar4 = func_0x04108328(&DAT_0f6e7398), iVar4 != 0)) {
    func_0x0c4ccca0(0xf6e7380);
    func_0x0410844d(&DAT_0f6e7398);
  }
  auStack_1a8._0_4_ = 0xbf75c8f8;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)((ulong)uStack_198 & 0xffffffff00000000);
  pcStack_190 = (code *)0x0;
  pcStack_188 = (code *)&SUB_048b2190;
  uStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0ec77790;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  func_0x049057f0(&plStack_140,auStack_1a8);
  FUN_048aea50(auStack_1a8);
  lStack_d8 = (long)pcStack_130;
  uStack_d0 = uStack_128;
  plStack_e8 = plStack_140;
  plStack_e0 = plStack_138;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0ef44b00;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551cb0), iVar4 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_1a8._0_4_ = _DAT_0f551c9c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c98;
  plVar9[3] = (long)puVar14;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  auStack_1a8._8_8_ = plVar9 + 3;
  plStack_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  uStack_198 = plVar9;
  FUN_048afd20(&plStack_e8,auStack_1a8);
  plVar9 = uStack_198;
  if (uStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_198 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_198 + 0x10))(uStack_198);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      FUN_0412c2d0(plVar9);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
