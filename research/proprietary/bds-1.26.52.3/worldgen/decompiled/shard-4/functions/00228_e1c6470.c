/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2c6470 (ELF vaddr 0xe1c6470)
 * Label: caller-of-callee
 * Body:  [[0e2c6470, 0e2c6711] [0e2c6720, 0e2c7181]]
 * Ghidra: FUN_0e2c6470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2c6470(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 (*pauVar7) [16];
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  code *pcVar17;
  ulong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
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
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  char cStack_90;
  undefined7 uStack_8f;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puStack_88 = &UNK_013bea0a;
  uStack_80 = 10;
  func_0x0470d9a0(auStack_1a8,&UNK_01384326,0xc,0xd,&puStack_88);
  bVar19 = (auStack_1a8[0] & 1) != 0;
  puVar14 = auStack_1a8 + 1;
  if (bVar19) {
    puVar14 = (undefined1 *)uStack_198;
  }
  uVar13 = (ulong)(auStack_1a8[0] >> 1);
  if (bVar19) {
    uVar13 = auStack_1a8._8_8_;
  }
  if ((DAT_0f74e3e0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e3e0), iVar4 != 0)) {
    func_0x0e350430();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74e360,0xf53dab8);
    func_0x0410844d(&DAT_0f74e3e0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74e360 + 4)) * 8);
  do {
    lVar9 = *plVar11;
    if (lVar9 == -1) goto LAB_0e2c6541;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74e360 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2c6541:
    puVar6 = &DAT_0f74e360;
    iVar4 = iRam000000000f74e3c0;
  }
  else {
    puVar6 = (undefined *)plVar11[2];
    iVar4 = *(int *)(puVar6 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar9 = *(long *)(puVar6 + 0x68), lVar9 != 0)) {
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar14 = (undefined1 *)(lVar9 + 9);
    if (bVar19) {
      puVar14 = *(undefined1 **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  func_0x0e350a30(&puStack_c0,param_1,puVar14,uVar13);
  if ((auStack_1a8[0] & 1) != 0) {
    func_0x0412a280(uStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_90 != '\0') {
    return;
  }
  func_0x04134310(&bStack_d8,2);
  pauVar7 = (undefined1 (*) [16])func_0x0412f0e0(&bStack_d8,0,&UNK_013a12ea,10);
  puVar6 = puStack_c0;
  uStack_48 = *(undefined8 *)*pauVar7;
  uStack_40 = *(undefined8 *)(*pauVar7 + 8);
  uVar13 = *(ulong *)*pauVar7;
  uStack_150 = *(undefined8 *)pauVar7[1];
  *pauVar7 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar7[1] = 0;
  if ((DAT_0f74e3e0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e3e0), iVar4 != 0)) {
    func_0x0e350430();
    __cxa_atexit(&UNK_048ae800,&DAT_0f74e360,0xf53dab8);
    func_0x0410844d(&DAT_0f74e3e0);
  }
  uVar18 = uVar13 & 0xffffffffffffff00;
  plVar11 = (long *)(*(long *)(puVar6 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar6 + 0x20) - *(long *)(puVar6 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74e360 + 4)) * 8);
  do {
    lVar9 = *plVar11;
    if (lVar9 == -1) goto LAB_0e2c6690;
    plVar11 = (long *)(*(long *)(puVar6 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(puVar6 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74e360 + 4));
  if (plVar11 == *(long **)(puVar6 + 0x38)) {
LAB_0e2c6690:
    puVar16 = &DAT_0f74e360;
  }
  else {
    puVar16 = (undefined *)plVar11[2];
  }
  for (pbVar8 = *(byte **)(puStack_c0 + 0x50); pbVar8 != *(byte **)(puStack_c0 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0e2c672a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1d) {
LAB_0e2c672a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar8 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar8 + 0x10);
      }
      auVar20[0] = -(*pbVar15 == DAT_014e4030);
      auVar20[1] = -(pbVar15[1] == DAT_014e4030._1_1_);
      auVar20[2] = -(pbVar15[2] == DAT_014e4030._2_1_);
      auVar20[3] = -(pbVar15[3] == DAT_014e4030._3_1_);
      auVar20[4] = -(pbVar15[4] == DAT_014e4030._4_1_);
      auVar20[5] = -(pbVar15[5] == DAT_014e4030._5_1_);
      auVar20[6] = -(pbVar15[6] == DAT_014e4030._6_1_);
      auVar20[7] = -(pbVar15[7] == DAT_014e4030._7_1_);
      auVar20[8] = -(pbVar15[8] == DAT_014e4030._8_1_);
      auVar20[9] = -(pbVar15[9] == DAT_014e4030._9_1_);
      auVar20[10] = -(pbVar15[10] == DAT_014e4030._10_1_);
      auVar20[0xb] = -(pbVar15[0xb] == DAT_014e4030._11_1_);
      auVar20[0xc] = -(pbVar15[0xc] == DAT_014e4030._12_1_);
      auVar20[0xd] = -(pbVar15[0xd] == DAT_014e4030._13_1_);
      auVar20[0xe] = -(pbVar15[0xe] == DAT_014e4030._14_1_);
      auVar20[0xf] = -(pbVar15[0xf] == DAT_014e4030._15_1_);
      auVar21[0] = -(pbVar15[0xd] == DAT_014e1610);
      auVar21[1] = -(pbVar15[0xe] == DAT_014e1610._1_1_);
      auVar21[2] = -(pbVar15[0xf] == DAT_014e1610._2_1_);
      auVar21[3] = -(pbVar15[0x10] == DAT_014e1610._3_1_);
      auVar21[4] = -(pbVar15[0x11] == DAT_014e1610._4_1_);
      auVar21[5] = -(pbVar15[0x12] == DAT_014e1610._5_1_);
      auVar21[6] = -(pbVar15[0x13] == DAT_014e1610._6_1_);
      auVar21[7] = -(pbVar15[0x14] == DAT_014e1610._7_1_);
      auVar21[8] = -(pbVar15[0x15] == DAT_014e1610._8_1_);
      auVar21[9] = -(pbVar15[0x16] == DAT_014e1610._9_1_);
      auVar21[10] = -(pbVar15[0x17] == DAT_014e1610._10_1_);
      auVar21[0xb] = -(pbVar15[0x18] == DAT_014e1610._11_1_);
      auVar21[0xc] = -(pbVar15[0x19] == DAT_014e1610._12_1_);
      auVar21[0xd] = -(pbVar15[0x1a] == DAT_014e1610._13_1_);
      auVar21[0xe] = -(pbVar15[0x1b] == DAT_014e1610._14_1_);
      auVar21[0xf] = -(pbVar15[0x1c] == DAT_014e1610._15_1_);
      auVar21 = auVar21 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(puStack_c0 + 0x58)) {
LAB_0e2c6758:
    if (iStack_98 == 0) {
      if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e2c67e0;
      lVar9 = *(long *)(puVar16 + 0x68) + 0x38;
    }
    else {
      if (puVar16 == (undefined *)0x0) {
        puVar16 = (undefined *)func_0x048aead0(puVar6 + 0x18);
      }
      lVar9 = FUN_048b0c90(puVar6 + 0x18,puVar16,uStack_94,1);
      if (lVar9 == 0) {
        auStack_1a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1a8);
        lVar9 = auStack_1a8._0_8_;
        if (auStack_1a8._0_8_ == 0) goto LAB_0e2c67e0;
      }
      if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
        lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
      }
      else {
LAB_0e2c67e0:
        lVar9 = 0;
      }
    }
    uStack_148 = 0;
    puStack_138 = &UNK_048b4ab0;
    uStack_128 = 0xd33bd9c5;
    pcStack_130 = (code *)&UNK_048b49f0;
    uStack_124 = 1;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = uStack_48;
    puVar10[1] = uStack_40;
    puVar10[2] = uStack_150;
    *(undefined2 *)(puVar10 + 3) = 0x400;
    *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
    puVar10[6] = 0;
    pcStack_190 = (code *)&UNK_048b4ab0;
    pcStack_188 = (code *)&UNK_048b49f0;
    uStack_180 = (undefined *)CONCAT35(uStack_180._5_3_,0x1d33bd9c5);
    uStack_148 = 0;
    auStack_1a8._8_8_ = puVar10;
    auStack_1a8._0_8_ = &UNK_048b46e0;
    puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_014d987e;
    plStack_1c8 = (long *)0x21;
    plStack_1c0 = (long *)0x1d;
    *(ulong *)((long)puStack_1b8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)puStack_1b8 + 0x15) = uVar3;
    uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *puStack_1b8 = _DAT_014d9869;
    puStack_1b8[1] = uVar3;
    *(undefined1 *)((long)puStack_1b8 + 0x1d) = 0;
    lVar9 = func_0x048b5060(lVar9,&plStack_1c8);
    *(undefined **)(lVar9 + 0x20) = &UNK_048b46e0;
    pcVar17 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar9 + 0x20) != auStack_1a8) {
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
LAB_0e2c6952:
        uVar3 = auStack_1a8._8_8_;
        auStack_1a8._8_8_ = 0;
        *puVar10 = uVar3;
      }
      else {
        (**(code **)(lVar9 + 0x40))(puVar10);
        if (uStack_180._4_1_ != '\0') {
          if (uStack_180._4_1_ != '\x02') goto LAB_0e2c6952;
          (*pcStack_190)(5,auStack_1a8 + 8,puVar10);
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_190;
      *(code **)(lVar9 + 0x40) = pcStack_188;
      *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_180;
      *(char *)(lVar9 + 0x4c) = uStack_180._4_1_;
      pcVar17 = pcStack_188;
    }
    if (((ulong)plStack_1c8 & 1) != 0) {
      func_0x0412a280(puStack_1b8,(ulong)plStack_1c8 & 0xfffffffffffffffe);
      pcVar17 = pcStack_188;
    }
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(auStack_1a8 + 8);
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(&uStack_148);
    }
    uStack_150 = 0;
    uVar18 = 0;
    uVar13 = 0;
  }
  else {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = FUN_04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 == _DAT_0f550754) goto LAB_0e2c6758;
  }
  uStack_f8 = uStack_a0;
  uStack_e8 = CONCAT71(uStack_8f,cStack_90);
  lStack_108 = lStack_b0;
  lStack_100 = lStack_a8;
  puStack_118 = puStack_c0;
  uStack_110 = uStack_b8;
  uStack_f0 = 0x1e1bc4d500000004;
  if ((DAT_0f74e400 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e400), iVar4 != 0)) {
    func_0x0e350540();
    func_0x0410844d(&DAT_0f74e400);
  }
  auStack_1a8._0_4_ = uStack_f0._4_4_;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)((ulong)uStack_198._4_4_ << 0x20);
  pcStack_190 = (code *)0x3;
  pcStack_188 = (code *)&SUB_048aead0;
  uStack_180 = &UNK_0c0f6d10;
  puStack_178 = &UNK_0e351710;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_049057f0(&uStack_110,auStack_1a8);
  func_0x048aea50(auStack_1a8);
  puStack_138 = (undefined *)lStack_100;
  pcStack_130 = (code *)uStack_f8;
  uStack_148 = uStack_110;
  lStack_140 = lStack_108;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  plStack_1c0 = (long *)0x0;
  puStack_1b8 = (undefined8 *)CONCAT71(puStack_1b8._1_7_,0xff);
  plStack_1c8 = plVar11;
  func_0x0e351590(auStack_1a8,&uStack_148,&plStack_1c8);
  if (plStack_1c0 != (long *)0x0) {
    (**(code **)(*plStack_1c0 + 0x28))();
  }
  if (plStack_1c8 != (long *)0x0) {
    (**(code **)(*plStack_1c8 + 8))();
  }
  if ((DAT_0f74e400 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e400), iVar4 != 0)) {
    func_0x0e350540();
    func_0x0410844d(&DAT_0f74e400);
  }
  if (uStack_f8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_100 + 0x78) + 0x60);
    iVar4 = *piVar12;
    while (iVar4 != (int)uStack_f8) {
      piVar12 = piVar12 + 0x16;
      iVar4 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_108) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_f8._4_4_ != 1) {
      if (uStack_f8._4_4_ == 0) {
        *(uint *)(lStack_100 + 0x18) = *(uint *)(lStack_100 + 0x18) | 0x20000;
      }
      goto LAB_0e2c6bb3;
    }
    piVar12 = *(int **)(*(long *)(lStack_100 + 0x78) + 0x48);
    iVar4 = *piVar12;
    while (iVar4 != (int)uStack_f8) {
      piVar12 = piVar12 + 0x1a;
      iVar4 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
LAB_0e2c6bb3:
  if ((DAT_0f74e400 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e400), iVar4 != 0)) {
    func_0x0e350540();
    func_0x0410844d(&DAT_0f74e400);
  }
  auStack_1a8._0_4_ = 0xbf75c8f8;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)CONCAT44(uStack_198._4_4_,1);
  pcStack_190 = (code *)0x0;
  pcStack_188 = (code *)&SUB_048b2190;
  uStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e3522e0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_049057f0(&uStack_110,auStack_1a8);
  func_0x048aea50(auStack_1a8);
  puStack_138 = (undefined *)lStack_100;
  pcStack_130 = (code *)uStack_f8;
  uStack_148 = uStack_110;
  lStack_140 = lStack_108;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0ef44b00;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f551cb0), iVar4 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_1a8._0_4_ = _DAT_0f551c9c;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c98;
  plVar11[3] = (long)puVar10;
  *(undefined1 *)(plVar11 + 4) = 0xff;
  auStack_1a8._8_8_ = plVar11 + 3;
  plStack_1c8 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  uStack_198 = plVar11;
  func_0x048afd20(&uStack_148,auStack_1a8);
  plVar11 = uStack_198;
  if (uStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_198 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_198 + 0x10))(uStack_198);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar11);
    }
  }
  uStack_68 = uStack_f8;
  puStack_88 = puStack_118;
  uStack_80 = uStack_110;
  lStack_78 = lStack_108;
  lStack_70 = lStack_100;
  uStack_58 = uStack_e8;
  uStack_60 = 0x1e1bc4d500000004;
  if ((DAT_0f74e400 == '\0') && (iVar4 = FUN_04108328(&DAT_0f74e400), iVar4 != 0)) {
    func_0x0e350540();
    func_0x0410844d(&DAT_0f74e400);
  }
  auStack_1a8._0_4_ = uStack_60._4_4_;
  auStack_1a8._8_8_ = 0;
  uStack_198 = (long *)((ulong)uStack_198 & 0xffffffff00000000);
  pcStack_190 = (code *)0x1;
  pcStack_188 = (code *)&SUB_048aead0;
  uStack_180 = &UNK_04905970;
  puStack_178 = &UNK_0e352480;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  FUN_049057f0(&uStack_80,auStack_1a8);
  func_0x048aea50(auStack_1a8);
  puStack_138 = (undefined *)lStack_70;
  pcStack_130 = (code *)uStack_68;
  uStack_148 = uStack_80;
  lStack_140 = lStack_78;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  plStack_1c0 = (long *)0x0;
  puStack_1b8 = (undefined8 *)CONCAT71(puStack_1b8._1_7_,0xff);
  plStack_1c8 = plVar11;
  func_0x0e351590(auStack_1a8,&uStack_148,&plStack_1c8);
  if (plStack_1c0 != (long *)0x0) {
    (**(code **)(*plStack_1c0 + 0x28))();
  }
  if (plStack_1c8 != (long *)0x0) {
    (**(code **)(*plStack_1c8 + 8))();
  }
  if ((uVar13 & 1) != 0) {
    func_0x0412a280(uStack_150,uVar18 | (byte)uVar13 & 0xfe);
  }
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
