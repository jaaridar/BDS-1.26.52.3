/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe97f2e0 (ELF vaddr 0xe87f2e0)
 * Label: string:minecraft:overworld_generation_rules
 * Body:  [[0e97f2e0, 0e97f885] [0e97f890, 0e97f8d1] [0e97f8e0, 0e980053]]
 * Ghidra: FUN_0e97f2e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e97f2e0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [8];
  long *plStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  long *plStack_118;
  long *plStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  char cStack_b0;
  undefined7 uStack_af;
  long *plStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e134660();
  if ((DAT_0f766c60 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766c60), iVar4 != 0)) {
    func_0x0e9d1310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f766be0,0xf53dab8);
    func_0x0410844d(&DAT_0f766c60);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f766be0 + 4)) * 8);
  do {
    lVar15 = *plVar11;
    if (lVar15 == -1) goto LAB_0e97f360;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f766be0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e97f360:
    puVar6 = &DAT_0f766be0;
    if (iRam000000000f766c40 != -0x2b3da790) goto LAB_0e97f3cd;
LAB_0e97f38b:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e97f3cd;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar13 = lVar15 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e9d1aa0(&plStack_e0,param_1,lVar13,uVar10);
  }
  else {
    puVar6 = (undefined *)plVar11[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e97f38b;
LAB_0e97f3cd:
    func_0x0e9d1aa0(&plStack_e0,param_1,&UNK_011e86fb,0x11);
  }
  if (cStack_b0 == '\0') {
    iStack_b8 = 4;
    uStack_b4 = 0x1e1bc4d5;
    if (DAT_0f766c80 == '\0') {
      iVar4 = func_0x04108328(&DAT_0f766c80);
      if (iVar4 != 0) {
        func_0x0e9d1420();
        func_0x0410844d(&DAT_0f766c80);
      }
    }
    auStack_1b8._0_4_ = uStack_b4;
    uStack_1b0 = 0;
    uStack_1a8 = (undefined *)((ulong)uStack_1a8._4_4_ << 0x20);
    pcStack_1a0 = (code *)0x1;
    pcStack_198 = (code *)&SUB_048aead0;
    uStack_190 = &UNK_0e9d2780;
    puStack_188 = &UNK_0e9d2840;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x049057f0(&plStack_d8,auStack_1b8);
    func_0x048aea50(auStack_1b8);
    pcStack_148 = pcStack_c8;
    pcStack_140 = (code *)uStack_c0;
    auStack_158 = (undefined1  [8])plStack_d8;
    plStack_150 = plStack_d0;
    plStack_118 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plStack_118 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plStack_118 = (long)&UNK_0f4d3788;
    plStack_110 = (long *)0x0;
    pcStack_108 = (code *)CONCAT71(pcStack_108._1_7_,0xff);
    func_0x0e9d2600(auStack_1b8,auStack_158,&plStack_118);
    if (plStack_110 != (long *)0x0) {
      (**(code **)(*plStack_110 + 0x28))();
    }
    if (plStack_118 != (long *)0x0) {
      (**(code **)(*plStack_118 + 8))();
    }
    auStack_158 = (undefined1  [8])plStack_e0;
    plStack_150 = plStack_d8;
    pcStack_148 = (code *)plStack_d0;
    pcStack_140 = pcStack_c8;
    auStack_138._8_8_ = 0x1e1bc4d500000004;
    auStack_138._0_8_ = uStack_c0;
    if ((DAT_0f766c80 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766c80), iVar4 != 0)) {
      func_0x0e9d1420();
      func_0x0410844d(&DAT_0f766c80);
    }
    auStack_1b8._0_4_ = auStack_138._12_4_;
    uStack_1b0 = 0;
    uStack_1a8 = (undefined *)((ulong)uStack_1a8 & 0xffffffff00000000);
    pcStack_1a0 = (code *)0x1;
    pcStack_198 = (code *)&SUB_048aead0;
    uStack_190 = &UNK_0e9d6c10;
    puStack_188 = &UNK_0e9d6c20;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x049057f0(&plStack_150,auStack_1b8);
    func_0x048aea50(auStack_1b8);
    pcStack_108 = pcStack_140;
    pcStack_100 = (code *)auStack_138._0_8_;
    plStack_118 = plStack_150;
    plStack_110 = (long *)pcStack_148;
    plStack_68 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plStack_68 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plStack_68 = (long)&UNK_0f4b0fc8;
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)CONCAT71(plStack_58._1_7_,0xff);
    func_0x0e9d2600(auStack_1b8,&plStack_118,&plStack_68);
    if (plStack_60 != (long *)0x0) {
      (**(code **)(*plStack_60 + 0x28))();
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)(*plStack_68 + 8))();
    }
  }
  uStack_1b0 = 0x24;
  auStack_1b8 = (undefined1  [8])&DAT_01e366e0;
  uStack_1a8 = &UNK_013a829a;
  pcStack_1a0 = (code *)0x14;
  func_0x0470d9a0(auStack_158,&UNK_014c494c,0x10,0xdd,auStack_1b8);
  plVar11 = (long *)((ulong)auStack_158 >> 1 & 0x7f);
  pcVar9 = (code *)(auStack_158 + 1);
  if (((ulong)auStack_158 & 1) != 0) {
    plVar11 = plStack_150;
    pcVar9 = pcStack_148;
  }
  if ((DAT_0f766ee8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766ee8), iVar4 != 0)) {
    func_0x0e9d72f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f766e68,0xf53dab8);
    func_0x0410844d(&DAT_0f766ee8);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f766e68 + 4)) * 8);
  do {
    lVar15 = *plVar12;
    if (lVar15 == -1) goto LAB_0e97f751;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f766e68 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e97f751:
    puVar6 = &DAT_0f766e68;
    iVar4 = iRam000000000f766ec8;
  }
  else {
    puVar6 = (undefined *)plVar12[2];
    iVar4 = *(int *)(puVar6 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar15 = *(long *)(puVar6 + 0x68), lVar15 != 0)) {
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    pcVar9 = (code *)(lVar15 + 9);
    if (bVar16) {
      pcVar9 = (code *)*(long **)(lVar15 + 0x18);
    }
    plVar11 = (long *)(ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      plVar11 = *(long **)(lVar15 + 0x10);
    }
  }
  func_0x0e9d7ad0(&plStack_e0,param_1,pcVar9,plVar11);
  if (((ulong)auStack_158 & 1) != 0) {
    func_0x0412a280(pcStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_e0;
  if (cStack_b0 != '\0') {
    return;
  }
  if ((DAT_0f766ee8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766ee8), iVar4 != 0)) {
    func_0x0e9d72f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f766e68,0xf53dab8);
    func_0x0410844d(&DAT_0f766ee8);
  }
  plVar12 = (long *)(plVar11[3] +
                    (ulong)((int)((ulong)(plVar11[4] - plVar11[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f766e68 + 4)) * 8);
  do {
    lVar15 = *plVar12;
    if (lVar15 == -1) goto LAB_0e97f841;
    plVar12 = (long *)(plVar11[6] + lVar15 * 0x18);
  } while (*(uint *)(plVar11[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f766e68 + 4));
  if (plVar12 == (long *)plVar11[7]) {
LAB_0e97f841:
    puVar6 = &DAT_0f766e68;
  }
  else {
    puVar6 = (undefined *)plVar12[2];
  }
  for (pbVar7 = (byte *)plStack_e0[10]; pbVar7 != (byte *)plStack_e0[0xb]; pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e97f8ea;
    }
    else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e97f8ea:
      if ((bVar1 & 1) == 0) {
        pbVar14 = pbVar7 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar7 + 0x10);
      }
      auVar17[0] = -(*pbVar14 == DAT_014eaba0);
      auVar17[1] = -(pbVar14[1] == DAT_014eaba0._1_1_);
      auVar17[2] = -(pbVar14[2] == DAT_014eaba0._2_1_);
      auVar17[3] = -(pbVar14[3] == DAT_014eaba0._3_1_);
      auVar17[4] = -(pbVar14[4] == DAT_014eaba0._4_1_);
      auVar17[5] = -(pbVar14[5] == DAT_014eaba0._5_1_);
      auVar17[6] = -(pbVar14[6] == DAT_014eaba0._6_1_);
      auVar17[7] = -(pbVar14[7] == DAT_014eaba0._7_1_);
      auVar17[8] = -(pbVar14[8] == DAT_014eaba0._8_1_);
      auVar17[9] = -(pbVar14[9] == DAT_014eaba0._9_1_);
      auVar17[10] = -(pbVar14[10] == DAT_014eaba0._10_1_);
      auVar17[0xb] = -(pbVar14[0xb] == DAT_014eaba0._11_1_);
      auVar17[0xc] = -(pbVar14[0xc] == DAT_014eaba0._12_1_);
      auVar17[0xd] = -(pbVar14[0xd] == DAT_014eaba0._13_1_);
      auVar17[0xe] = -(pbVar14[0xe] == DAT_014eaba0._14_1_);
      auVar17[0xf] = -(pbVar14[0xf] == DAT_014eaba0._15_1_);
      auVar18[0] = -(pbVar14[10] == DAT_014e4ff0);
      auVar18[1] = -(pbVar14[0xb] == DAT_014e4ff0._1_1_);
      auVar18[2] = -(pbVar14[0xc] == DAT_014e4ff0._2_1_);
      auVar18[3] = -(pbVar14[0xd] == DAT_014e4ff0._3_1_);
      auVar18[4] = -(pbVar14[0xe] == DAT_014e4ff0._4_1_);
      auVar18[5] = -(pbVar14[0xf] == DAT_014e4ff0._5_1_);
      auVar18[6] = -(pbVar14[0x10] == DAT_014e4ff0._6_1_);
      auVar18[7] = -(pbVar14[0x11] == DAT_014e4ff0._7_1_);
      auVar18[8] = -(pbVar14[0x12] == DAT_014e4ff0._8_1_);
      auVar18[9] = -(pbVar14[0x13] == DAT_014e4ff0._9_1_);
      auVar18[10] = -(pbVar14[0x14] == DAT_014e4ff0._10_1_);
      auVar18[0xb] = -(pbVar14[0x15] == DAT_014e4ff0._11_1_);
      auVar18[0xc] = -(pbVar14[0x16] == DAT_014e4ff0._12_1_);
      auVar18[0xd] = -(pbVar14[0x17] == DAT_014e4ff0._13_1_);
      auVar18[0xe] = -(pbVar14[0x18] == DAT_014e4ff0._14_1_);
      auVar18[0xf] = -(pbVar14[0x19] == DAT_014e4ff0._15_1_);
      auVar18 = auVar18 & auVar17;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar7 != (byte *)plStack_e0[0xb]) {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 != _DAT_0f550ac4) goto LAB_0e97fb36;
  }
  uVar3 = uStack_b4;
  if (iStack_b8 == 0) {
    if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e97f99e;
    lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)func_0x048aead0(plVar11 + 3,0,uStack_b4);
    }
    auStack_1b8 = (undefined1  [8])func_0x048b0c90(plVar11 + 3,puVar6,uVar3,1);
    if (auStack_1b8 == (undefined1  [8])0x0) {
      _auStack_1b8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1b8);
      if (auStack_1b8 == (undefined1  [8])0x0) goto LAB_0e97f99e;
    }
    if ((*(int *)((long)auStack_1b8 + 0x50) == -0x45dcb126) &&
       (*(long *)((long)auStack_1b8 + 0x58) != 0)) {
      lVar15 = *(long *)((long)auStack_1b8 + 0x58) + 0x40;
    }
    else {
LAB_0e97f99e:
      lVar15 = 0;
    }
  }
  pcStack_148 = (code *)&UNK_0488e0b0;
  pcStack_140 = (code *)0x0;
  auStack_138._0_5_ = 0x48b5725f;
  auStack_158 = (undefined1  [8])0x0;
  _auStack_1b8 = (undefined1  [16])0x0;
  pcStack_1a0 = (code *)&UNK_0488e0b0;
  pcStack_198 = (code *)0x0;
  uStack_190 = (undefined *)CONCAT35(uStack_190._5_3_,0x48b5725f);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar2 = _UNK_013bbadf;
  plStack_118 = (long *)0x21;
  plStack_110 = (long *)0x1a;
  *(ulong *)((long)puVar8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar8 + 0x12) = uVar2;
  uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar8 = _DAT_013bbacd;
  puVar8[1] = uVar2;
  *(undefined1 *)((long)puVar8 + 0x1a) = 0;
  pcStack_108 = (code *)puVar8;
  lVar15 = func_0x048b5060(lVar15,&plStack_118);
  *(undefined8 *)(lVar15 + 0x20) = 0;
  if ((undefined1 *)(lVar15 + 0x20) == auStack_1b8) {
    pcVar9 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
      puVar8 = (undefined8 *)(lVar15 + 0x28);
      (**(code **)(lVar15 + 0x40))(puVar8);
      if (uStack_190._4_1_ != '\0') {
        if (uStack_190._4_1_ == '\x02') {
          (*pcStack_1a0)(5,auStack_1b8 + 8,puVar8);
        }
        else {
          uVar2 = uStack_1b0;
          uStack_1b0 = 0;
          *puVar8 = uVar2;
        }
      }
    }
    *(code **)(lVar15 + 0x38) = pcStack_1a0;
    *(code **)(lVar15 + 0x40) = pcStack_198;
    *(undefined4 *)(lVar15 + 0x48) = (undefined4)uStack_190;
    *(char *)(lVar15 + 0x4c) = uStack_190._4_1_;
    pcVar9 = pcStack_198;
  }
  if (((ulong)plStack_118 & 1) != 0) {
    func_0x0412a280(pcStack_108,(ulong)plStack_118 & 0xfffffffffffffffe);
    pcVar9 = pcStack_198;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_1b8 + 8);
  }
  if (pcStack_140 != (code *)0x0) {
    (*pcStack_140)(auStack_158);
  }
LAB_0e97fb36:
  uStack_e8 = CONCAT71(uStack_af,cStack_b0);
  uStack_40 = CONCAT44(uStack_b4,iStack_b8);
  uStack_48 = uStack_c0;
  plStack_58 = plStack_d0;
  pcStack_50 = pcStack_c8;
  plStack_68 = plStack_e0;
  plStack_60 = plStack_d8;
  uStack_f8 = uStack_c0;
  plStack_118 = plStack_e0;
  plStack_110 = plStack_d8;
  pcStack_108 = (code *)plStack_d0;
  pcStack_100 = pcStack_c8;
  uStack_f0 = 0x1e1bc4d500000004;
  if ((DAT_0f766f08 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766f08), iVar4 != 0)) {
    func_0x0e9d7400();
    func_0x0410844d(&DAT_0f766f08);
  }
  auStack_1b8._0_4_ = uStack_f0._4_4_;
  uStack_1b0 = 0;
  uStack_1a8 = (undefined *)((ulong)uStack_1a8 & 0xffffffff00000000);
  pcStack_1a0 = (code *)0x1;
  pcStack_198 = (code *)&SUB_048aead0;
  uStack_190 = &UNK_0e9d87b0;
  puStack_188 = &UNK_0e9d8870;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  func_0x049057f0(&plStack_110,auStack_1b8);
  func_0x048aea50(auStack_1b8);
  pcStack_148 = pcStack_100;
  pcStack_140 = (code *)uStack_f8;
  auStack_158 = (undefined1  [8])plStack_110;
  plStack_150 = (long *)pcStack_108;
  plStack_a8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plStack_a8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plStack_a8 = (long)&UNK_0f4d39a0;
  plStack_a0 = (long *)0x0;
  pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,0xff);
  func_0x0e9d8630(auStack_1b8,auStack_158,&plStack_a8);
  if (plStack_a0 != (long *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))();
  }
  if (plStack_a8 != (long *)0x0) {
    (**(code **)(*plStack_a8 + 8))();
  }
  auStack_158 = (undefined1  [8])plStack_118;
  plStack_150 = plStack_110;
  pcStack_148 = pcStack_108;
  pcStack_140 = pcStack_100;
  uStack_128 = uStack_e8;
  auStack_138._8_8_ = 0x1e1bc4d500000004;
  auStack_138._0_8_ = uStack_f8;
  if ((DAT_0f766f08 == '\0') && (iVar4 = func_0x04108328(&DAT_0f766f08), iVar4 != 0)) {
    func_0x0e9d7400();
    func_0x0410844d(&DAT_0f766f08);
  }
  auStack_1b8._0_4_ = auStack_138._12_4_;
  uStack_1b0 = 0;
  uStack_1a8 = (undefined *)((ulong)uStack_1a8 & 0xffffffff00000000);
  pcStack_1a0 = (code *)0x1;
  pcStack_198 = (code *)&SUB_048aead0;
  uStack_190 = &UNK_0e9d6c10;
  puStack_188 = &UNK_0e9dc720;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  func_0x049057f0(&plStack_150,auStack_1b8);
  func_0x048aea50(auStack_1b8);
  pcStack_98 = pcStack_140;
  uStack_90 = auStack_138._0_8_;
  plStack_a8 = plStack_150;
  plStack_a0 = (long *)pcStack_148;
  plStack_80 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plStack_80 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plStack_80 = (long)&UNK_0f4b0fc8;
  plStack_78 = (long *)0x0;
  uStack_70 = 0xff;
  func_0x0e9d8630(auStack_1b8,&plStack_a8,&plStack_80);
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x28))();
  }
  if (plStack_80 != (long *)0x0) {
    (**(code **)(*plStack_80 + 8))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
