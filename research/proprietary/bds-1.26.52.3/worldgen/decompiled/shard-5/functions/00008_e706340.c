/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe806340 (ELF vaddr 0xe706340)
 * Label: caller-of-callee
 * Body:  [[0e806340, 0e806410] [0e806420, 0e806462] [0e806470, 0e808c47]]
 * Ghidra: FUN_0e806340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e806340(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_1a8 [16];
  undefined1 uStack_198;
  undefined6 uStack_197;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined6 uStack_18f;
  undefined1 uStack_189;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  uint uStack_184;
  undefined4 uStack_180;
  char cStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  undefined1 uStack_178;
  undefined6 uStack_177;
  undefined1 uStack_171;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  uint uStack_16c;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined4 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined2 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar8 = func_0x0e163a60(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar15 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar14 = lVar8 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar8 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar15) {
      uVar10 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e867920(&lStack_68,param_1,lVar14,uVar10);
  }
  else {
    func_0x0e867920(&lStack_68,param_1,&UNK_0148d9b3,0x10);
  }
  if (cStack_38 != '\0') {
    return;
  }
  lVar14 = lStack_68 + 0x18;
  lVar8 = func_0x0e163a60(lVar14);
  for (pbVar11 = *(byte **)(lStack_68 + 0x50); pbVar11 != *(byte **)(lStack_68 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e80647a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e80647a:
      if ((bVar2 & 1) == 0) {
        pbVar12 = pbVar11 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar11 + 0x10);
      }
      auVar16[0] = -(*pbVar12 == DAT_014eaba0);
      auVar16[1] = -(pbVar12[1] == DAT_014eaba0._1_1_);
      auVar16[2] = -(pbVar12[2] == DAT_014eaba0._2_1_);
      auVar16[3] = -(pbVar12[3] == DAT_014eaba0._3_1_);
      auVar16[4] = -(pbVar12[4] == DAT_014eaba0._4_1_);
      auVar16[5] = -(pbVar12[5] == DAT_014eaba0._5_1_);
      auVar16[6] = -(pbVar12[6] == DAT_014eaba0._6_1_);
      auVar16[7] = -(pbVar12[7] == DAT_014eaba0._7_1_);
      auVar16[8] = -(pbVar12[8] == DAT_014eaba0._8_1_);
      auVar16[9] = -(pbVar12[9] == DAT_014eaba0._9_1_);
      auVar16[10] = -(pbVar12[10] == DAT_014eaba0._10_1_);
      auVar16[0xb] = -(pbVar12[0xb] == DAT_014eaba0._11_1_);
      auVar16[0xc] = -(pbVar12[0xc] == DAT_014eaba0._12_1_);
      auVar16[0xd] = -(pbVar12[0xd] == DAT_014eaba0._13_1_);
      auVar16[0xe] = -(pbVar12[0xe] == DAT_014eaba0._14_1_);
      auVar16[0xf] = -(pbVar12[0xf] == DAT_014eaba0._15_1_);
      auVar17[0] = -(pbVar12[10] == DAT_014e4ff0);
      auVar17[1] = -(pbVar12[0xb] == DAT_014e4ff0._1_1_);
      auVar17[2] = -(pbVar12[0xc] == DAT_014e4ff0._2_1_);
      auVar17[3] = -(pbVar12[0xd] == DAT_014e4ff0._3_1_);
      auVar17[4] = -(pbVar12[0xe] == DAT_014e4ff0._4_1_);
      auVar17[5] = -(pbVar12[0xf] == DAT_014e4ff0._5_1_);
      auVar17[6] = -(pbVar12[0x10] == DAT_014e4ff0._6_1_);
      auVar17[7] = -(pbVar12[0x11] == DAT_014e4ff0._7_1_);
      auVar17[8] = -(pbVar12[0x12] == DAT_014e4ff0._8_1_);
      auVar17[9] = -(pbVar12[0x13] == DAT_014e4ff0._9_1_);
      auVar17[10] = -(pbVar12[0x14] == DAT_014e4ff0._10_1_);
      auVar17[0xb] = -(pbVar12[0x15] == DAT_014e4ff0._11_1_);
      auVar17[0xc] = -(pbVar12[0x16] == DAT_014e4ff0._12_1_);
      auVar17[0xd] = -(pbVar12[0x17] == DAT_014e4ff0._13_1_);
      auVar17[0xe] = -(pbVar12[0x18] == DAT_014e4ff0._14_1_);
      auVar17[0xf] = -(pbVar12[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar11 != *(byte **)(lStack_68 + 0x58)) {
    iVar6 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar6 != _DAT_0f550ac4) goto LAB_0e8066c5;
  }
  if ((int)uStack_40 == 0) {
    if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
    goto LAB_0e806519;
    lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
  }
  else {
    auStack_1a8._0_8_ = func_0x048b0c90(lVar14,lVar8,uStack_40._4_4_,1);
    if (auStack_1a8._0_8_ == 0) {
      auStack_1a8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1a8);
      if (auStack_1a8._0_8_ == 0) goto LAB_0e806519;
    }
    if ((*(int *)(auStack_1a8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_1a8._0_8_ + 0x58) != 0)) {
      lVar8 = *(long *)(auStack_1a8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e806519:
      lVar8 = 0;
    }
  }
  puStack_e0 = &UNK_0488e0b0;
  pcStack_d8 = (code *)0x0;
  uStack_d0 = CONCAT35(uStack_d0._5_3_,0x48b5725f);
  uStack_f0 = 0;
  auStack_1a8 = (undefined1  [16])0x0;
  uStack_190 = 0xb0;
  uStack_18f = 0x488e0;
  uStack_189 = 0;
  uStack_188 = 0;
  uStack_187 = 0;
  uStack_186 = 0;
  uStack_185 = 0;
  uStack_184 = 0;
  uStack_180 = 0x48b5725f;
  cStack_17c = '\0';
  puStack_78 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_78 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_88 = 0x21;
  uStack_80 = 0x1a;
  *(ulong *)((long)puStack_78 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_78 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_78 = _DAT_013bbacd;
  puStack_78[1] = uVar3;
  *(undefined1 *)((long)puStack_78 + 0x1a) = 0;
  lVar8 = func_0x048b5060(lVar8,&uStack_88);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  if ((undefined1 *)(lVar8 + 0x20) == auStack_1a8) {
    pcVar9 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
      puVar13 = (undefined8 *)(lVar8 + 0x28);
      (**(code **)(lVar8 + 0x40))(puVar13);
      if (cStack_17c != '\0') {
        if (cStack_17c == '\x02') {
          (*(code *)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190)))(5,auStack_1a8 + 8,puVar13)
          ;
        }
        else {
          uVar3 = auStack_1a8._8_8_;
          auStack_1a8._8_8_ = 0;
          *puVar13 = uVar3;
        }
      }
    }
    pcVar9 = (code *)CONCAT44(uStack_184,
                              CONCAT13(uStack_185,
                                       CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188))));
    *(ulong *)(lVar8 + 0x38) = CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
    *(ulong *)(lVar8 + 0x40) =
         CONCAT44(uStack_184,
                  CONCAT13(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188))));
    *(undefined4 *)(lVar8 + 0x48) = uStack_180;
    *(char *)(lVar8 + 0x4c) = cStack_17c;
  }
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,uStack_88 & 0xfffffffffffffffe);
    pcVar9 = (code *)CONCAT44(uStack_184,
                              CONCAT13(uStack_185,
                                       CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188))));
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_1a8 + 8);
  }
  if (pcStack_d8 != (code *)0x0) {
    (*pcStack_d8)(&uStack_f0);
  }
LAB_0e8066c5:
  func_0x0e972740(param_1);
  uStack_40 = 0xc18aca4500000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdb78;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  uStack_198 = 0x22;
  uStack_197 = (undefined6)_DAT_01e365c0;
  uStack_191 = (undefined1)((ulong)_DAT_01e365c0 >> 0x30);
  uStack_190 = (undefined1)((ulong)_DAT_01e365c0 >> 0x38);
  uStack_18f = (undefined6)_UNK_01e365c8;
  uStack_189 = (undefined1)((ulong)_UNK_01e365c8 >> 0x30);
  uStack_188 = (undefined1)((ulong)_UNK_01e365c8 >> 0x38);
  uStack_187 = DAT_01e365d0;
  uStack_186 = 0;
  uStack_180._1_3_ = (undefined3)_DAT_01e365c0;
  uStack_180 = CONCAT31(uStack_180._1_3_,0x22);
  cStack_17c = (char)((ulong)_DAT_01e365c0 >> 0x18);
  uStack_17b = (undefined2)((ulong)_DAT_01e365c0 >> 0x20);
  uStack_16f = DAT_01e365d0;
  uStack_16e = 0;
  auStack_168 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_148 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  uStack_179 = uStack_191;
  uStack_178 = uStack_190;
  uStack_177 = uStack_18f;
  uStack_171 = uStack_189;
  uStack_170 = uStack_188;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e868c90;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e868970;
  puStack_b0 = &UNK_0e868cb0;
  puStack_a8 = &UNK_0e869380;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e9728f0(param_1);
  uStack_40 = 0x5ab564c700000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdc00;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _DAT_01e36620;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x29;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x24;
  uStack_18f = 0;
  uStack_189 = 0;
  *(undefined4 *)(puVar13 + 4) = _DAT_01e36620;
  uVar3 = _UNK_01e36618;
  puVar13[2] = _DAT_01e36610;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e36608;
  *puVar13 = _DAT_01e36600;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x24) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x29;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x24;
  uStack_177 = 0;
  uStack_171 = 0;
  *(undefined4 *)(puVar13 + 4) = uVar5;
  uVar3 = _UNK_01e36618;
  puVar13[2] = _DAT_01e36610;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e36608;
  *puVar13 = _DAT_01e36600;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x24) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e86a0c0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e869df0;
  puStack_b0 = &UNK_0e86a0e0;
  puStack_a8 = &UNK_0e86a8f0;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e972a50(param_1);
  uStack_40 = 0x8f67d81600000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdc88;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e36645;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x21;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x1d;
  uStack_18f = 0;
  uStack_189 = 0;
  *(ulong *)((long)puVar13 + 0xd) = CONCAT53(_UNK_01e36640,_DAT_01e3663d);
  *(undefined8 *)((long)puVar13 + 0x15) = uVar3;
  uVar3 = CONCAT35(_DAT_01e3663d,_UNK_01e36638);
  *puVar13 = _DAT_01e36630;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1d) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e36645;
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x21;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x1d;
  uStack_177 = 0;
  uStack_171 = 0;
  *(ulong *)((long)puVar13 + 0xd) = CONCAT53(_UNK_01e36640,_DAT_01e3663d);
  *(undefined8 *)((long)puVar13 + 0x15) = uVar3;
  uVar3 = CONCAT35(_DAT_01e3663d,_UNK_01e36638);
  *puVar13 = _DAT_01e36630;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1d) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e86bca0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e86b970;
  puStack_b0 = &UNK_0e86bcc0;
  puStack_a8 = &UNK_0e86c390;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e974df0(param_1);
  uStack_40 = 0xa8a54a600000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdd10;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x29;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x25;
  uStack_18f = 0;
  uStack_189 = 0;
  uVar4 = CONCAT53(_UNK_01e36670,_DAT_01e3666d);
  *(undefined8 *)((long)puVar13 + 0x1d) = uVar4;
  uVar3 = CONCAT35(_DAT_01e3666d,_UNK_01e36668);
  puVar13[2] = _DAT_01e36660;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e36658;
  *puVar13 = _DAT_01e36650;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x25) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x29;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x25;
  uStack_177 = 0;
  uStack_171 = 0;
  *(undefined8 *)((long)puVar13 + 0x1d) = uVar4;
  uVar3 = CONCAT35(_DAT_01e3666d,_UNK_01e36668);
  puVar13[2] = _DAT_01e36660;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e36658;
  *puVar13 = _DAT_01e36650;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x25) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e86d3a0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e86d080;
  puStack_b0 = &UNK_0e86d3c0;
  puStack_a8 = &UNK_0e86da90;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e975070(param_1);
  uStack_40 = 0xb67c67df00000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdd98;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _DAT_01e36700;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x29;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x24;
  uStack_18f = 0;
  uStack_189 = 0;
  *(undefined4 *)(puVar13 + 4) = _DAT_01e36700;
  uVar3 = _UNK_01e366f8;
  puVar13[2] = _DAT_01e366f0;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e366e8;
  *puVar13 = _DAT_01e366e0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x24) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x29;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x24;
  uStack_177 = 0;
  uStack_171 = 0;
  *(undefined4 *)(puVar13 + 4) = uVar5;
  uVar3 = _UNK_01e366f8;
  puVar13[2] = _DAT_01e366f0;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e366e8;
  *puVar13 = _DAT_01e366e0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x24) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e870740;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e8703f0;
  puStack_b0 = &UNK_0e870760;
  puStack_a8 = &UNK_0e870e30;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e975300(param_1);
  uStack_40 = 0xcd63b59200000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cde70;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e367c2;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x21;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x1a;
  uStack_18f = 0;
  uStack_189 = 0;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_01e367c0,_DAT_01e367ba);
  *(undefined8 *)((long)puVar13 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_01e367ba,_UNK_01e367b8);
  *puVar13 = _DAT_01e367b0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e367c2;
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x21;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x1a;
  uStack_177 = 0;
  uStack_171 = 0;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_01e367c0,_DAT_01e367ba);
  *(undefined8 *)((long)puVar13 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_01e367ba,_UNK_01e367b8);
  *puVar13 = _DAT_01e367b0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e871e20;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e871b00;
  puStack_b0 = &UNK_0e871e40;
  puStack_a8 = &UNK_0e872510;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e979fe0(param_1);
  uStack_40 = 0x3123fdc400000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdef8;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x29;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x26;
  uStack_18f = 0;
  uStack_189 = 0;
  uVar4 = CONCAT62(_UNK_01e36810,_DAT_01e3680e);
  *(undefined8 *)((long)puVar13 + 0x1e) = uVar4;
  uVar3 = CONCAT26(_DAT_01e3680e,_UNK_01e36808);
  puVar13[2] = _DAT_01e36800;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e367f8;
  *puVar13 = _DAT_01e367f0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x26) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x29;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x26;
  uStack_177 = 0;
  uStack_171 = 0;
  *(undefined8 *)((long)puVar13 + 0x1e) = uVar4;
  uVar3 = CONCAT26(_DAT_01e3680e,_UNK_01e36808);
  puVar13[2] = _DAT_01e36800;
  puVar13[3] = uVar3;
  uVar3 = _UNK_01e367f8;
  *puVar13 = _DAT_01e367f0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x26) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e874cd0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e8749b0;
  puStack_b0 = &UNK_0e874cf0;
  puStack_a8 = &UNK_0e8753c0;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e97c660(param_1);
  uStack_40 = 0x8e444d9f00000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdfc0;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  uStack_198 = 0x1c;
  uStack_197 = _DAT_01e36856;
  uStack_191 = (undefined1)_DAT_01e3685c;
  uStack_190 = (undefined1)((ushort)_DAT_01e3685c >> 8);
  uStack_18f = _UNK_01e3685e;
  uStack_189 = 0;
  uStack_180._1_3_ = (undefined3)_DAT_01e36856;
  uStack_180 = CONCAT31(uStack_180._1_3_,0x1c);
  cStack_17c = (char)((uint6)_DAT_01e36856 >> 0x18);
  uStack_17b = (undefined2)((uint6)_DAT_01e36856 >> 0x20);
  uStack_177 = _UNK_01e3685e;
  uStack_171 = 0;
  auStack_168 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_148 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  uStack_179 = uStack_191;
  uStack_178 = uStack_190;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e875ce0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0c8d8fa0;
  puStack_b0 = &UNK_0e875d00;
  puStack_a8 = &UNK_0e875f80;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e2cba70(param_1);
  uStack_40 = 0xb833a55600000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce048;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _DAT_01e13860;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x21;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x18;
  uStack_18f = 0;
  uStack_189 = 0;
  puVar13[2] = _DAT_01e13860;
  uVar3 = _UNK_01e13858;
  *puVar13 = _DAT_01e13850;
  puVar13[1] = uVar3;
  *(undefined1 *)(puVar13 + 3) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x21;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x18;
  uStack_177 = 0;
  uStack_171 = 0;
  puVar13[2] = uVar4;
  uVar3 = _UNK_01e13858;
  *puVar13 = _DAT_01e13850;
  puVar13[1] = uVar3;
  *(undefined1 *)(puVar13 + 3) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e876730;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e36b820;
  puStack_b0 = &UNK_0e876750;
  puStack_a8 = &UNK_0e876e20;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e89e140(param_1);
  uStack_40 = 0x5dc5e7300000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce0d0;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  uStack_198 = 0x24;
  uStack_197 = (undefined6)_DAT_01e34990;
  uStack_191 = (undefined1)((ulong)_DAT_01e34990 >> 0x30);
  uStack_190 = (undefined1)((ulong)_DAT_01e34990 >> 0x38);
  uStack_18f = (undefined6)_UNK_01e34998;
  uStack_189 = (undefined1)((ulong)_UNK_01e34998 >> 0x30);
  uStack_188 = (undefined1)((ulong)_UNK_01e34998 >> 0x38);
  uStack_187 = (undefined1)_DAT_01e349a0;
  uStack_186 = (undefined1)((ushort)_DAT_01e349a0 >> 8);
  uStack_185 = 0;
  uStack_180._1_3_ = (undefined3)_DAT_01e34990;
  uStack_180 = CONCAT31(uStack_180._1_3_,0x24);
  cStack_17c = (char)((ulong)_DAT_01e34990 >> 0x18);
  uStack_17b = (undefined2)((ulong)_DAT_01e34990 >> 0x20);
  uStack_16d = 0;
  auStack_168 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_148 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  uStack_179 = uStack_191;
  uStack_178 = uStack_190;
  uStack_177 = uStack_18f;
  uStack_171 = uStack_189;
  uStack_170 = uStack_188;
  uStack_16f = uStack_187;
  uStack_16e = uStack_186;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e877b50;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e877880;
  puStack_b0 = &UNK_0e877b70;
  puStack_a8 = &UNK_0e878380;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e89e220(param_1);
  uStack_40 = 0xe608830500000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce158;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  uStack_198 = 0x26;
  uStack_197 = (undefined6)_DAT_01e349b0;
  uStack_191 = (undefined1)((ulong)_DAT_01e349b0 >> 0x30);
  uStack_190 = (undefined1)((ulong)_DAT_01e349b0 >> 0x38);
  uStack_18f = (undefined6)_UNK_01e349b8;
  uStack_189 = (undefined1)((uint7)_UNK_01e349b8 >> 0x30);
  uStack_188 = (undefined1)_DAT_01e349bf;
  uStack_187 = (undefined1)((uint)_DAT_01e349bf >> 8);
  uStack_186 = (undefined1)((uint)_DAT_01e349bf >> 0x10);
  uStack_185 = (undefined1)((uint)_DAT_01e349bf >> 0x18);
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_180._1_3_ = (undefined3)_DAT_01e349b0;
  uStack_180 = CONCAT31(uStack_180._1_3_,0x26);
  cStack_17c = (char)((ulong)_DAT_01e349b0 >> 0x18);
  uStack_17b = (undefined2)((ulong)_DAT_01e349b0 >> 0x20);
  uStack_16c = uStack_16c & 0xffffff00;
  auStack_168 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_148 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  uStack_179 = uStack_191;
  uStack_178 = uStack_190;
  uStack_177 = uStack_18f;
  uStack_171 = uStack_189;
  uStack_170 = uStack_188;
  uStack_16f = uStack_187;
  uStack_16e = uStack_186;
  uStack_16d = uStack_185;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e8792f0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e878fd0;
  puStack_b0 = &UNK_0e879310;
  puStack_a8 = &UNK_0e8799e0;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e89e390(param_1);
  uStack_40 = 0x417119db00000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce1f0;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e349e2;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x21;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x1a;
  uStack_18f = 0;
  uStack_189 = 0;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_01e349e0,_DAT_01e349da);
  *(undefined8 *)((long)puVar13 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_01e349da,_UNK_01e349d8);
  *puVar13 = _DAT_01e349d0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e349e2;
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x21;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x1a;
  uStack_177 = 0;
  uStack_171 = 0;
  *(ulong *)((long)puVar13 + 10) = CONCAT26(_UNK_01e349e0,_DAT_01e349da);
  *(undefined8 *)((long)puVar13 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_01e349da,_UNK_01e349d8);
  *puVar13 = _DAT_01e349d0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x1a) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e87a6e0;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e87a410;
  puStack_b0 = &UNK_0e87a700;
  puStack_a8 = &UNK_0e87aef0;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  func_0x0e89e420(param_1);
  uStack_40 = 0xe6f8994100000003;
  func_0x0e163a60(lStack_68 + 0x18);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce278;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e34a01;
  uStack_188 = SUB81(puVar13,0);
  uStack_187 = (undefined1)((ulong)puVar13 >> 8);
  uStack_186 = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_185 = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_184 = (uint)((ulong)puVar13 >> 0x20);
  uStack_198 = 0x21;
  uStack_197 = 0;
  uStack_191 = 0;
  uStack_190 = 0x19;
  uStack_18f = 0;
  uStack_189 = 0;
  *(ulong *)((long)puVar13 + 9) = CONCAT17(UNK_01e34a00,_DAT_01e349f9);
  *(undefined8 *)((long)puVar13 + 0x11) = uVar3;
  uVar3 = CONCAT71(_DAT_01e349f9,UNK_01e349f8);
  *puVar13 = _DAT_01e349f0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x19) = 0;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01e34a01;
  uStack_170 = SUB81(puVar13,0);
  uStack_16f = (undefined1)((ulong)puVar13 >> 8);
  uStack_16e = (undefined1)((ulong)puVar13 >> 0x10);
  uStack_16d = (undefined1)((ulong)puVar13 >> 0x18);
  uStack_16c = (uint)((ulong)puVar13 >> 0x20);
  uStack_180 = 0x21;
  cStack_17c = 0;
  uStack_17b = 0;
  uStack_179 = 0;
  uStack_178 = 0x19;
  uStack_177 = 0;
  uStack_171 = 0;
  *(ulong *)((long)puVar13 + 9) = CONCAT17(UNK_01e34a00,_DAT_01e349f9);
  *(undefined8 *)((long)puVar13 + 0x11) = uVar3;
  uVar3 = CONCAT71(_DAT_01e349f9,UNK_01e349f8);
  *puVar13 = _DAT_01e349f0;
  puVar13[1] = uVar3;
  *(undefined1 *)((long)puVar13 + 0x19) = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_138 = 0x3f600000;
  FUN_048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    FUN_0410844d(&DAT_0f7490c0);
  }
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_40._4_4_);
  uStack_e8 = 0;
  puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffff00000000);
  pcStack_d8 = (code *)0x2;
  uStack_d0 = 1;
  puStack_c8 = &UNK_0e87c830;
  puStack_c0 = &UNK_07d98660;
  puStack_b8 = &SUB_0e87c400;
  puStack_b0 = &UNK_0e87c850;
  puStack_a8 = &UNK_0e87cf20;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  func_0x048b05a0(&uStack_60,&uStack_f0);
  uVar3 = auStack_98._8_8_;
  if ((long *)auStack_98._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_98._8_8_ + 8);
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_78 = (undefined8 *)uStack_50;
  uStack_70 = uStack_48;
  uStack_88 = uStack_60;
  uStack_80 = uStack_58;
  func_0x0e868210(&uStack_f0,&uStack_88,auStack_1a8);
  func_0x048b0bc0(auStack_1a8);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 * 0x1e13850  minecraft:replace_biomes
 * 0x1e13860  e_biomes
 * 0x1e365c0  minecraft:climate
 * 0x1e36600  minecraft:creature_spawn_probability
 * 0x1e36610  re_spawn_probability
 * 0x1e36620  lity
 * 0x1e36630  minecraft:mountain_parameters
 * 0x1e3663d  ntain_parameters
 * 0x1e36650  minecraft:multinoise_generation_rules
 * 0x1e36660  oise_generation_rules
 * 0x1e3666d  on_rules
 * 0x1e366e0  minecraft:overworld_generation_rules
 * 0x1e366f0  rld_generation_rules
 * 0x1e36700  ules
 * 0x1e367b0  minecraft:overworld_height
 * 0x1e367ba  overworld_height
 * 0x1e367f0  minecraft:surface_material_adjustments
 * 0x1e36800  e_material_adjustments
 * 0x1e3680e  ustments
 * 0x1e36856  minecraft:tags
 * 0x1e3685c  aft:tags
 */

/* ---- assembly ---- */
/* 0e806340 */  PUSH RBP
/* 0e806341 */  PUSH R15
/* 0e806343 */  PUSH R14
/* 0e806345 */  PUSH R13
/* 0e806347 */  PUSH R12
/* 0e806349 */  PUSH RBX
/* 0e80634a */  SUB RSP,0x178
/* 0e806351 */  MOV RBX,RDI
/* 0e806354 */  ADD RDI,0x18
/* 0e806358 */  CALL 0x0e163a60
/* 0e80635d */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e806364 */  JNZ 0x0e8063a8
/* 0e806366 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e80636a */  TEST RAX,RAX
/* 0e80636d */  JZ 0x0e8063a8
/* 0e80636f */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e806373 */  LEA RDX,[RAX + 0x9]
/* 0e806377 */  MOV ECX,ESI
/* 0e806379 */  SHR ECX,0x1
/* 0e80637b */  TEST SIL,0x1
/* 0e80637f */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e806384 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e806389 */  LEA RDI,[RSP + 0x140]
/* 0e806391 */  MOV RSI,RBX
/* 0e806394 */  CALL 0x0e867920
/* 0e806399 */  CMP byte ptr [RSP + 0x170],0x0
/* 0e8063a1 */  JZ 0x0e8063d2
/* 0e8063a3 */  JMP 0x0e80875d
/* 0e8063a8 */  LEA RDX,[0x148d9b3]
/* 0e8063af */  LEA RDI,[RSP + 0x140]
/* 0e8063b7 */  MOV ECX,0x10
/* 0e8063bc */  MOV RSI,RBX
/* 0e8063bf */  CALL 0x0e867920
/* 0e8063c4 */  CMP byte ptr [RSP + 0x170],0x0
/* 0e8063cc */  JNZ 0x0e80875d
/* 0e8063d2 */  MOV R14,qword ptr [RSP + 0x140]
/* 0e8063da */  ADD R14,0x18
/* 0e8063de */  MOV RDI,R14
/* 0e8063e1 */  CALL 0x0e163a60
/* 0e8063e6 */  MOV RDX,qword ptr [RSP + 0x140]
/* 0e8063ee */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8063f2 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8063f6 */  CMP RCX,RDX
/* 0e8063f9 */  JZ 0x0e806486
/* 0e8063ff */  MOVDQA XMM0,xmmword ptr [0x014e4ff0]
/* 0e806407 */  MOVDQA XMM1,xmmword ptr [0x014eaba0]
/* 0e80640f */  JMP 0x0e80644e
/* 0e806420 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e806424 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e806428 */  PCMPEQB XMM2,XMM1
/* 0e80642c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e806431 */  PCMPEQB XMM3,XMM0
/* 0e806435 */  PAND XMM3,XMM2
/* 0e806439 */  PMOVMSKB ESI,XMM3
/* 0e80643d */  CMP ESI,0xffff
/* 0e806443 */  JZ 0x0e806486
/* 0e806445 */  ADD RCX,0x38
/* 0e806449 */  CMP RCX,RDX
/* 0e80644c */  JZ 0x0e806486
/* 0e80644e */  MOVZX ESI,byte ptr [RCX]
/* 0e806451 */  TEST SIL,0x1
/* 0e806455 */  JZ 0x0e806470
/* 0e806457 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e80645b */  CMP RDI,0x1a
/* 0e80645f */  JNZ 0x0e806445
/* 0e806461 */  JMP 0x0e80647a
/* 0e806470 */  MOV EDI,ESI
/* 0e806472 */  SHR EDI,0x1
/* 0e806474 */  CMP RDI,0x1a
/* 0e806478 */  JNZ 0x0e806445
/* 0e80647a */  TEST SIL,0x1
/* 0e80647e */  JNZ 0x0e806420
/* 0e806480 */  LEA RSI,[RCX + 0x1]
/* 0e806484 */  JMP 0x0e806424
/* 0e806486 */  CMP RCX,RDX
/* 0e806489 */  JZ 0x0e8064a9
/* 0e80648b */  MOV EBP,dword ptr [RCX + 0x1c]
/* 0e80648e */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e806495 */  TEST CL,CL
/* 0e806497 */  JZ 0x0e808c0c
/* 0e80649d */  CMP EBP,dword ptr [0x0f550ac4]
/* 0e8064a3 */  JNZ 0x0e8066c5
/* 0e8064a9 */  CMP dword ptr [RSP + 0x168],0x0
/* 0e8064b1 */  JZ 0x0e806501
/* 0e8064b3 */  MOV EDX,dword ptr [RSP + 0x16c]
/* 0e8064ba */  MOV RDI,R14
/* 0e8064bd */  MOV RSI,RAX
/* 0e8064c0 */  MOV ECX,0x1
/* 0e8064c5 */  CALL 0x048b0c90
/* 0e8064ca */  TEST RAX,RAX
/* 0e8064cd */  JNZ 0x0e8064e9
/* 0e8064cf */  PXOR XMM0,XMM0
/* 0e8064d3 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e8064d8 */  MOV RDI,RSP
/* 0e8064db */  CALL 0x048b0d20
/* 0e8064e0 */  MOV RAX,qword ptr [RSP]
/* 0e8064e4 */  TEST RAX,RAX
/* 0e8064e7 */  JZ 0x0e806519
/* 0e8064e9 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8064f0 */  JNZ 0x0e806519
/* 0e8064f2 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e8064f6 */  TEST R14,R14
/* 0e8064f9 */  JZ 0x0e806519
/* 0e8064fb */  ADD R14,0x40
/* 0e8064ff */  JMP 0x0e80651c
/* 0e806501 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e806508 */  JNZ 0x0e806519
/* 0e80650a */  MOV R14,qword ptr [RAX + 0x68]
/* 0e80650e */  TEST R14,R14
/* 0e806511 */  JZ 0x0e806519
/* 0e806513 */  ADD R14,0x38
/* 0e806517 */  JMP 0x0e80651c
/* 0e806519 */  XOR R14D,R14D
/* 0e80651c */  LEA RAX,[0x488e0b0]
/* 0e806523 */  MOV qword ptr [RSP + 0xc8],RAX
/* 0e80652b */  MOV dword ptr [RSP + 0xd8],0x48b5725f
/* 0e806536 */  MOV qword ptr [RSP + 0xd0],0x0
/* 0e806542 */  MOV byte ptr [RSP + 0xdc],0x0
/* 0e80654a */  MOV qword ptr [RSP + 0xb8],0x0
/* 0e806556 */  PXOR XMM0,XMM0
/* 0e80655a */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e80655f */  MOV qword ptr [RSP + 0x18],RAX
/* 0e806564 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e80656d */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e806575 */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e80657a */  LEA RDI,[0xf5463b0]
/* 0e806581 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806588 */  MOV ESI,0x20
/* 0e80658d */  CALL qword ptr [RAX + 0x10]
/* 0e806590 */  MOV R15,RAX
/* 0e806593 */  TEST RAX,RAX
/* 0e806596 */  JZ 0x0e80897e
/* 0e80659c */  MOV qword ptr [RSP + 0x130],R15
/* 0e8065a4 */  MOV qword ptr [RSP + 0x120],0x21
/* 0e8065b0 */  MOV qword ptr [RSP + 0x128],0x1a
/* 0e8065bc */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8065c3 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e8065c8 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8065d0 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e8065d5 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e8065da */  LEA RSI,[RSP + 0x120]
/* 0e8065e2 */  MOV RDI,R14
/* 0e8065e5 */  CALL 0x048b5060
/* 0e8065ea */  MOV R15,RAX
/* 0e8065ed */  LEA R14,[RSP + 0x8]
/* 0e8065f2 */  ADD RAX,0x20
/* 0e8065f6 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e8065fe */  MOV RCX,RSP
/* 0e806601 */  CMP RAX,RCX
/* 0e806604 */  JZ 0x0e80663a
/* 0e806606 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e80660a */  TEST RAX,RAX
/* 0e80660d */  JZ 0x0e80665a
/* 0e80660f */  MOV R12,R15
/* 0e806612 */  ADD R12,0x28
/* 0e806616 */  MOV RDI,R12
/* 0e806619 */  CALL RAX
/* 0e80661b */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e806620 */  TEST EAX,EAX
/* 0e806622 */  JZ 0x0e80665a
/* 0e806624 */  CMP EAX,0x2
/* 0e806627 */  JNZ 0x0e806648
/* 0e806629 */  MOV EDI,0x5
/* 0e80662e */  MOV RSI,R14
/* 0e806631 */  MOV RDX,R12
/* 0e806634 */  CALL qword ptr [RSP + 0x18]
/* 0e806638 */  JMP 0x0e80665a
/* 0e80663a */  XOR EAX,EAX
/* 0e80663c */  TEST byte ptr [RSP + 0x120],0x1
/* 0e806644 */  JNZ 0x0e806686
/* 0e806646 */  JMP 0x0e8066a4
/* 0e806648 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e80664d */  MOV qword ptr [RSP + 0x8],0x0
/* 0e806656 */  MOV qword ptr [R12],RAX
/* 0e80665a */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e80665f */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e806665 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e80666b */  MOV ECX,dword ptr [RSP + 0x28]
/* 0e80666f */  MOV dword ptr [R15 + 0x48],ECX
/* 0e806673 */  MOVZX ECX,byte ptr [RSP + 0x2c]
/* 0e806678 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e80667c */  TEST byte ptr [RSP + 0x120],0x1
/* 0e806684 */  JZ 0x0e8066a4
/* 0e806686 */  MOV RSI,qword ptr [RSP + 0x120]
/* 0e80668e */  MOV RDI,qword ptr [RSP + 0x130]
/* 0e806696 */  AND RSI,-0x2
/* 0e80669a */  CALL 0x0412a280
/* 0e80669f */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8066a4 */  TEST RAX,RAX
/* 0e8066a7 */  JZ 0x0e8066ae
/* 0e8066a9 */  MOV RDI,R14
/* 0e8066ac */  CALL RAX
/* 0e8066ae */  MOV RAX,qword ptr [RSP + 0xd0]
/* 0e8066b6 */  TEST RAX,RAX
/* 0e8066b9 */  JZ 0x0e8066c5
/* 0e8066bb */  LEA RDI,[RSP + 0xb8]
/* 0e8066c3 */  CALL RAX
/* 0e8066c5 */  MOV RDI,RBX
/* 0e8066c8 */  CALL 0x0e972740
/* 0e8066cd */  MOV RAX,-0x3e7535bafffffffd
/* 0e8066d7 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e8066df */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e8066e7 */  ADD RDI,0x18
/* 0e8066eb */  CALL 0x0e163a60
/* 0e8066f0 */  LEA RDI,[0xf5463b0]
/* 0e8066f7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8066fe */  MOV ESI,0x8
/* 0e806703 */  CALL qword ptr [RAX + 0x10]
/* 0e806706 */  MOV R14,RAX
/* 0e806709 */  TEST RAX,RAX
/* 0e80670c */  JZ 0x0e80876f
/* 0e806712 */  LEA RAX,[0xf4cdb78]
/* 0e806719 */  MOV qword ptr [R14],RAX
/* 0e80671c */  MOV qword ptr [RSP],R14
/* 0e806720 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e806729 */  MOV byte ptr [RSP + 0x10],0x22
/* 0e80672e */  MOVDQA XMM0,xmmword ptr [0x01e365c0]
/* 0e806736 */  MOVDQU xmmword ptr [RSP + 0x11],XMM0
/* 0e80673c */  MOVZX EAX,byte ptr [0x01e365d0]
/* 0e806743 */  MOV byte ptr [RSP + 0x21],AL
/* 0e806747 */  MOV byte ptr [RSP + 0x22],0x0
/* 0e80674c */  MOV byte ptr [RSP + 0x28],0x22
/* 0e806751 */  MOVDQU xmmword ptr [RSP + 0x29],XMM0
/* 0e806757 */  MOV byte ptr [RSP + 0x39],AL
/* 0e80675b */  MOV byte ptr [RSP + 0x3a],0x0
/* 0e806760 */  LEA RDI,[RSP + 0x40]
/* 0e806765 */  PXOR XMM0,XMM0
/* 0e806769 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e80676f */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e806775 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e80677b */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e806783 */  MOV ESI,0x8
/* 0e806788 */  CALL 0x048afb10
/* 0e80678d */  PXOR XMM0,XMM0
/* 0e806791 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e80679a */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e8067a3 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e8067a9 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e8067b3 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e8067bb */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e8067c3 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e8067cb */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e8067d2 */  TEST AL,AL
/* 0e8067d4 */  JZ 0x0e80898f
/* 0e8067da */  LEA R14,[RSP + 0x148]
/* 0e8067e2 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e8067e9 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e8067f0 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e8067fc */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e806807 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e806813 */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e80681f */  LEA RAX,[0xe868c90]
/* 0e806826 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e80682e */  LEA R12,[0x7d98660]
/* 0e806835 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e80683d */  LEA RAX,[0xe868970]
/* 0e806844 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e80684c */  LEA RAX,[0xe868cb0]
/* 0e806853 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e80685b */  LEA RAX,[0xe869380]
/* 0e806862 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e80686a */  MOV dword ptr [RSP + 0x108],0x0
/* 0e806875 */  PXOR XMM0,XMM0
/* 0e806879 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e806882 */  LEA RSI,[RSP + 0xb8]
/* 0e80688a */  MOV RDI,R14
/* 0e80688d */  CALL 0x048b05a0
/* 0e806892 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e80689a */  TEST R15,R15
/* 0e80689d */  JZ 0x0e8068c2
/* 0e80689f */  MOV RAX,-0x1
/* 0e8068a6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8068ac */  TEST RAX,RAX
/* 0e8068af */  JNZ 0x0e8068c2
/* 0e8068b1 */  MOV RAX,qword ptr [R15]
/* 0e8068b4 */  MOV RDI,R15
/* 0e8068b7 */  CALL qword ptr [RAX + 0x10]
/* 0e8068ba */  MOV RDI,R15
/* 0e8068bd */  CALL 0x0412c2d0
/* 0e8068c2 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e8068c7 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e8068cd */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e8068d6 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e8068df */  LEA RDI,[RSP + 0xb8]
/* 0e8068e7 */  LEA RSI,[RSP + 0x120]
/* 0e8068ef */  MOV RDX,RSP
/* 0e8068f2 */  CALL 0x0e868210
/* 0e8068f7 */  MOV RDI,RSP
/* 0e8068fa */  CALL 0x048b0bc0
/* 0e8068ff */  MOV RDI,RBX
/* 0e806902 */  CALL 0x0e9728f0
/* 0e806907 */  MOV RAX,0x5ab564c700000003
/* 0e806911 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e806919 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e806921 */  ADD RDI,0x18
/* 0e806925 */  CALL 0x0e163a60
/* 0e80692a */  LEA RDI,[0xf5463b0]
/* 0e806931 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806938 */  MOV ESI,0x8
/* 0e80693d */  CALL qword ptr [RAX + 0x10]
/* 0e806940 */  MOV R15,RAX
/* 0e806943 */  TEST RAX,RAX
/* 0e806946 */  JZ 0x0e808780
/* 0e80694c */  LEA RAX,[0xf4cdc00]
/* 0e806953 */  MOV qword ptr [R15],RAX
/* 0e806956 */  MOV qword ptr [RSP],R15
/* 0e80695a */  MOV qword ptr [RSP + 0x8],0x0
/* 0e806963 */  LEA RDI,[0xf5463b0]
/* 0e80696a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806971 */  MOV ESI,0x28
/* 0e806976 */  CALL qword ptr [RAX + 0x10]
/* 0e806979 */  MOV R15,RAX
/* 0e80697c */  TEST RAX,RAX
/* 0e80697f */  JZ 0x0e808791
/* 0e806985 */  MOV qword ptr [RSP + 0x20],R15
/* 0e80698a */  MOV qword ptr [RSP + 0x10],0x29
/* 0e806993 */  MOV qword ptr [RSP + 0x18],0x24
/* 0e80699c */  MOV EBP,dword ptr [0x01e36620]
/* 0e8069a2 */  MOV dword ptr [R15 + 0x20],EBP
/* 0e8069a6 */  MOVAPS XMM0,xmmword ptr [0x01e36610]
/* 0e8069ad */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e8069b2 */  MOVDQA XMM0,xmmword ptr [0x01e36600]
/* 0e8069ba */  MOVDQU xmmword ptr [R15],XMM0
/* 0e8069bf */  MOV byte ptr [R15 + 0x24],0x0
/* 0e8069c4 */  LEA RDI,[0xf5463b0]
/* 0e8069cb */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8069d2 */  MOV ESI,0x28
/* 0e8069d7 */  CALL qword ptr [RAX + 0x10]
/* 0e8069da */  MOV R15,RAX
/* 0e8069dd */  TEST RAX,RAX
/* 0e8069e0 */  JZ 0x0e8087a2
/* 0e8069e6 */  MOV qword ptr [RSP + 0x38],R15
/* 0e8069eb */  MOV qword ptr [RSP + 0x28],0x29
/* 0e8069f4 */  MOV qword ptr [RSP + 0x30],0x24
/* 0e8069fd */  MOV dword ptr [R15 + 0x20],EBP
/* 0e806a01 */  MOVAPS XMM0,xmmword ptr [0x01e36610]
/* 0e806a08 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e806a0d */  MOVDQA XMM0,xmmword ptr [0x01e36600]
/* 0e806a15 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e806a1a */  MOV byte ptr [R15 + 0x24],0x0
/* 0e806a1f */  LEA RDI,[RSP + 0x40]
/* 0e806a24 */  PXOR XMM0,XMM0
/* 0e806a28 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e806a2e */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e806a34 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e806a3a */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e806a42 */  MOV ESI,0x8
/* 0e806a47 */  CALL 0x048afb10
/* 0e806a4c */  PXOR XMM0,XMM0
/* 0e806a50 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e806a59 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e806a62 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e806a68 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e806a72 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e806a7a */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e806a82 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e806a8a */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e806a91 */  TEST AL,AL
/* 0e806a93 */  JZ 0x0e8089c0
/* 0e806a99 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e806aa0 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e806aa7 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e806ab3 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e806abe */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e806aca */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e806ad6 */  LEA RAX,[0xe86a0c0]
/* 0e806add */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e806ae5 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e806aed */  LEA RAX,[0xe869df0]
/* 0e806af4 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e806afc */  LEA RAX,[0xe86a0e0]
/* 0e806b03 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e806b0b */  LEA RAX,[0xe86a8f0]
/* 0e806b12 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e806b1a */  MOV dword ptr [RSP + 0x108],0x0
/* 0e806b25 */  PXOR XMM0,XMM0
/* 0e806b29 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e806b32 */  LEA RSI,[RSP + 0xb8]
/* 0e806b3a */  MOV RDI,R14
/* 0e806b3d */  CALL 0x048b05a0
/* 0e806b42 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e806b4a */  TEST R15,R15
/* 0e806b4d */  JZ 0x0e806b72
/* 0e806b4f */  MOV RAX,-0x1
/* 0e806b56 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e806b5c */  TEST RAX,RAX
/* 0e806b5f */  JNZ 0x0e806b72
/* 0e806b61 */  MOV RAX,qword ptr [R15]
/* 0e806b64 */  MOV RDI,R15
/* 0e806b67 */  CALL qword ptr [RAX + 0x10]
/* 0e806b6a */  MOV RDI,R15
/* 0e806b6d */  CALL 0x0412c2d0
/* 0e806b72 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e806b77 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e806b7d */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e806b86 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e806b8f */  LEA RDI,[RSP + 0xb8]
/* 0e806b97 */  LEA RSI,[RSP + 0x120]
/* 0e806b9f */  MOV RDX,RSP
/* 0e806ba2 */  CALL 0x0e868210
/* 0e806ba7 */  MOV RDI,RSP
/* 0e806baa */  CALL 0x048b0bc0
/* 0e806baf */  MOV RDI,RBX
/* 0e806bb2 */  CALL 0x0e972a50
/* 0e806bb7 */  MOV RAX,-0x709827e9fffffffd
/* 0e806bc1 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e806bc9 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e806bd1 */  ADD RDI,0x18
/* 0e806bd5 */  CALL 0x0e163a60
/* 0e806bda */  LEA RDI,[0xf5463b0]
/* 0e806be1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806be8 */  MOV ESI,0x8
/* 0e806bed */  CALL qword ptr [RAX + 0x10]
/* 0e806bf0 */  MOV R15,RAX
/* 0e806bf3 */  TEST RAX,RAX
/* 0e806bf6 */  JZ 0x0e8087b3
/* 0e806bfc */  LEA RAX,[0xf4cdc88]
/* 0e806c03 */  MOV qword ptr [R15],RAX
/* 0e806c06 */  MOV qword ptr [RSP],R15
/* 0e806c0a */  MOV qword ptr [RSP + 0x8],0x0
/* 0e806c13 */  LEA RDI,[0xf5463b0]
/* 0e806c1a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806c21 */  MOV ESI,0x20
/* 0e806c26 */  CALL qword ptr [RAX + 0x10]
/* 0e806c29 */  MOV R15,RAX
/* 0e806c2c */  TEST RAX,RAX
/* 0e806c2f */  JZ 0x0e8087c4
/* 0e806c35 */  MOV qword ptr [RSP + 0x20],R15
/* 0e806c3a */  MOV qword ptr [RSP + 0x10],0x21
/* 0e806c43 */  MOV qword ptr [RSP + 0x18],0x1d
/* 0e806c4c */  MOVUPS XMM0,xmmword ptr [0x01e3663d]
/* 0e806c53 */  MOVUPS xmmword ptr [R15 + 0xd],XMM0
/* 0e806c58 */  MOVDQA XMM0,xmmword ptr [0x01e36630]
/* 0e806c60 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e806c65 */  MOV byte ptr [R15 + 0x1d],0x0
/* 0e806c6a */  LEA RDI,[0xf5463b0]
/* 0e806c71 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806c78 */  MOV ESI,0x20
/* 0e806c7d */  CALL qword ptr [RAX + 0x10]
/* 0e806c80 */  MOV R15,RAX
/* 0e806c83 */  TEST RAX,RAX
/* 0e806c86 */  JZ 0x0e8087d5
/* 0e806c8c */  MOV qword ptr [RSP + 0x38],R15
/* 0e806c91 */  MOV qword ptr [RSP + 0x28],0x21
/* 0e806c9a */  MOV qword ptr [RSP + 0x30],0x1d
/* 0e806ca3 */  MOVUPS XMM0,xmmword ptr [0x01e3663d]
/* 0e806caa */  MOVUPS xmmword ptr [R15 + 0xd],XMM0
/* 0e806caf */  MOVDQA XMM0,xmmword ptr [0x01e36630]
/* 0e806cb7 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e806cbc */  MOV byte ptr [R15 + 0x1d],0x0
/* 0e806cc1 */  LEA RDI,[RSP + 0x40]
/* 0e806cc6 */  PXOR XMM0,XMM0
/* 0e806cca */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e806cd0 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e806cd6 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e806cdc */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e806ce4 */  MOV ESI,0x8
/* 0e806ce9 */  CALL 0x048afb10
/* 0e806cee */  PXOR XMM0,XMM0
/* 0e806cf2 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e806cfb */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e806d04 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e806d0a */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e806d14 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e806d1c */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e806d24 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e806d2c */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e806d33 */  TEST AL,AL
/* 0e806d35 */  JZ 0x0e8089f1
/* 0e806d3b */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e806d42 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e806d49 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e806d55 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e806d60 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e806d6c */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e806d78 */  LEA RAX,[0xe86bca0]
/* 0e806d7f */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e806d87 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e806d8f */  LEA RAX,[0xe86b970]
/* 0e806d96 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e806d9e */  LEA RAX,[0xe86bcc0]
/* 0e806da5 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e806dad */  LEA RAX,[0xe86c390]
/* 0e806db4 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e806dbc */  MOV dword ptr [RSP + 0x108],0x0
/* 0e806dc7 */  PXOR XMM0,XMM0
/* 0e806dcb */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e806dd4 */  LEA RSI,[RSP + 0xb8]
/* 0e806ddc */  MOV RDI,R14
/* 0e806ddf */  CALL 0x048b05a0
/* 0e806de4 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e806dec */  TEST R15,R15
/* 0e806def */  JZ 0x0e806e14
/* 0e806df1 */  MOV RAX,-0x1
/* 0e806df8 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e806dfe */  TEST RAX,RAX
/* 0e806e01 */  JNZ 0x0e806e14
/* 0e806e03 */  MOV RAX,qword ptr [R15]
/* 0e806e06 */  MOV RDI,R15
/* 0e806e09 */  CALL qword ptr [RAX + 0x10]
/* 0e806e0c */  MOV RDI,R15
/* 0e806e0f */  CALL 0x0412c2d0
/* 0e806e14 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e806e19 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e806e1f */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e806e28 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e806e31 */  LEA RDI,[RSP + 0xb8]
/* 0e806e39 */  LEA RSI,[RSP + 0x120]
/* 0e806e41 */  MOV RDX,RSP
/* 0e806e44 */  CALL 0x0e868210
/* 0e806e49 */  MOV RDI,RSP
/* 0e806e4c */  CALL 0x048b0bc0
/* 0e806e51 */  MOV RDI,RBX
/* 0e806e54 */  CALL 0x0e974df0
/* 0e806e59 */  MOV RAX,0xa8a54a600000003
/* 0e806e63 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e806e6b */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e806e73 */  ADD RDI,0x18
/* 0e806e77 */  CALL 0x0e163a60
/* 0e806e7c */  LEA RDI,[0xf5463b0]
/* 0e806e83 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806e8a */  MOV ESI,0x8
/* 0e806e8f */  CALL qword ptr [RAX + 0x10]
/* 0e806e92 */  MOV R15,RAX
/* 0e806e95 */  TEST RAX,RAX
/* 0e806e98 */  JZ 0x0e8087e6
/* 0e806e9e */  LEA RAX,[0xf4cdd10]
/* 0e806ea5 */  MOV qword ptr [R15],RAX
/* 0e806ea8 */  MOV qword ptr [RSP],R15
/* 0e806eac */  MOV qword ptr [RSP + 0x8],0x0
/* 0e806eb5 */  LEA RDI,[0xf5463b0]
/* 0e806ebc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806ec3 */  MOV ESI,0x28
/* 0e806ec8 */  CALL qword ptr [RAX + 0x10]
/* 0e806ecb */  MOV R15,RAX
/* 0e806ece */  TEST RAX,RAX
/* 0e806ed1 */  JZ 0x0e8087f7
/* 0e806ed7 */  MOV qword ptr [RSP + 0x20],R15
/* 0e806edc */  MOV qword ptr [RSP + 0x10],0x29
/* 0e806ee5 */  MOV qword ptr [RSP + 0x18],0x25
/* 0e806eee */  MOV R13,qword ptr [0x01e3666d]
/* 0e806ef5 */  MOV qword ptr [R15 + 0x1d],R13
/* 0e806ef9 */  MOVAPS XMM0,xmmword ptr [0x01e36660]
/* 0e806f00 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e806f05 */  MOVDQA XMM0,xmmword ptr [0x01e36650]
/* 0e806f0d */  MOVDQU xmmword ptr [R15],XMM0
/* 0e806f12 */  MOV byte ptr [R15 + 0x25],0x0
/* 0e806f17 */  LEA RDI,[0xf5463b0]
/* 0e806f1e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e806f25 */  MOV ESI,0x28
/* 0e806f2a */  CALL qword ptr [RAX + 0x10]
/* 0e806f2d */  MOV R15,RAX
/* 0e806f30 */  TEST RAX,RAX
/* 0e806f33 */  JZ 0x0e808808
/* 0e806f39 */  MOV qword ptr [RSP + 0x38],R15
/* 0e806f3e */  MOV qword ptr [RSP + 0x28],0x29
/* 0e806f47 */  MOV qword ptr [RSP + 0x30],0x25
/* 0e806f50 */  MOV qword ptr [R15 + 0x1d],R13
/* 0e806f54 */  MOVAPS XMM0,xmmword ptr [0x01e36660]
/* 0e806f5b */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e806f60 */  MOVDQA XMM0,xmmword ptr [0x01e36650]
/* 0e806f68 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e806f6d */  MOV byte ptr [R15 + 0x25],0x0
/* 0e806f72 */  LEA RDI,[RSP + 0x40]
/* 0e806f77 */  PXOR XMM0,XMM0
/* 0e806f7b */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e806f81 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e806f87 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e806f8d */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e806f95 */  MOV ESI,0x8
/* 0e806f9a */  CALL 0x048afb10
/* 0e806f9f */  PXOR XMM0,XMM0
/* 0e806fa3 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e806fac */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e806fb5 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e806fbb */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e806fc5 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e806fcd */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e806fd5 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e806fdd */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e806fe4 */  TEST AL,AL
/* 0e806fe6 */  JZ 0x0e808a22
/* 0e806fec */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e806ff3 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e806ffa */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807006 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807011 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e80701d */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e807029 */  LEA RAX,[0xe86d3a0]
/* 0e807030 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e807038 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807040 */  LEA RAX,[0xe86d080]
/* 0e807047 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e80704f */  LEA RAX,[0xe86d3c0]
/* 0e807056 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e80705e */  LEA RAX,[0xe86da90]
/* 0e807065 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e80706d */  MOV dword ptr [RSP + 0x108],0x0
/* 0e807078 */  PXOR XMM0,XMM0
/* 0e80707c */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807085 */  LEA RSI,[RSP + 0xb8]
/* 0e80708d */  MOV RDI,R14
/* 0e807090 */  CALL 0x048b05a0
/* 0e807095 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e80709d */  TEST R15,R15
/* 0e8070a0 */  JZ 0x0e8070c5
/* 0e8070a2 */  MOV RAX,-0x1
/* 0e8070a9 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8070af */  TEST RAX,RAX
/* 0e8070b2 */  JNZ 0x0e8070c5
/* 0e8070b4 */  MOV RAX,qword ptr [R15]
/* 0e8070b7 */  MOV RDI,R15
/* 0e8070ba */  CALL qword ptr [RAX + 0x10]
/* 0e8070bd */  MOV RDI,R15
/* 0e8070c0 */  CALL 0x0412c2d0
/* 0e8070c5 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e8070ca */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e8070d0 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e8070d9 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e8070e2 */  LEA RDI,[RSP + 0xb8]
/* 0e8070ea */  LEA RSI,[RSP + 0x120]
/* 0e8070f2 */  MOV RDX,RSP
/* 0e8070f5 */  CALL 0x0e868210
/* 0e8070fa */  MOV RDI,RSP
/* 0e8070fd */  CALL 0x048b0bc0
/* 0e807102 */  MOV RDI,RBX
/* 0e807105 */  CALL 0x0e975070
/* 0e80710a */  MOV RAX,-0x49839820fffffffd
/* 0e807114 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e80711c */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e807124 */  ADD RDI,0x18
/* 0e807128 */  CALL 0x0e163a60
/* 0e80712d */  LEA RDI,[0xf5463b0]
/* 0e807134 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e80713b */  MOV ESI,0x8
/* 0e807140 */  CALL qword ptr [RAX + 0x10]
/* 0e807143 */  MOV R15,RAX
/* 0e807146 */  TEST RAX,RAX
/* 0e807149 */  JZ 0x0e808819
/* 0e80714f */  LEA RAX,[0xf4cdd98]
/* 0e807156 */  MOV qword ptr [R15],RAX
/* 0e807159 */  MOV qword ptr [RSP],R15
/* 0e80715d */  MOV qword ptr [RSP + 0x8],0x0
/* 0e807166 */  LEA RDI,[0xf5463b0]
/* 0e80716d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807174 */  MOV ESI,0x28
/* 0e807179 */  CALL qword ptr [RAX + 0x10]
/* 0e80717c */  MOV R15,RAX
/* 0e80717f */  TEST RAX,RAX
/* 0e807182 */  JZ 0x0e80882a
/* 0e807188 */  MOV qword ptr [RSP + 0x20],R15
/* 0e80718d */  MOV qword ptr [RSP + 0x10],0x29
/* 0e807196 */  MOV qword ptr [RSP + 0x18],0x24
/* 0e80719f */  MOV EBP,dword ptr [0x01e36700]
/* 0e8071a5 */  MOV dword ptr [R15 + 0x20],EBP
/* 0e8071a9 */  MOVAPS XMM0,xmmword ptr [0x01e366f0]
/* 0e8071b0 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e8071b5 */  MOVDQA XMM0,xmmword ptr [0x01e366e0]
/* 0e8071bd */  MOVDQU xmmword ptr [R15],XMM0
/* 0e8071c2 */  MOV byte ptr [R15 + 0x24],0x0
/* 0e8071c7 */  LEA RDI,[0xf5463b0]
/* 0e8071ce */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8071d5 */  MOV ESI,0x28
/* 0e8071da */  CALL qword ptr [RAX + 0x10]
/* 0e8071dd */  MOV R15,RAX
/* 0e8071e0 */  TEST RAX,RAX
/* 0e8071e3 */  JZ 0x0e80883b
/* 0e8071e9 */  MOV qword ptr [RSP + 0x38],R15
/* 0e8071ee */  MOV qword ptr [RSP + 0x28],0x29
/* 0e8071f7 */  MOV qword ptr [RSP + 0x30],0x24
/* 0e807200 */  MOV dword ptr [R15 + 0x20],EBP
/* 0e807204 */  MOVAPS XMM0,xmmword ptr [0x01e366f0]
/* 0e80720b */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e807210 */  MOVDQA XMM0,xmmword ptr [0x01e366e0]
/* 0e807218 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e80721d */  MOV byte ptr [R15 + 0x24],0x0
/* 0e807222 */  LEA RDI,[RSP + 0x40]
/* 0e807227 */  PXOR XMM0,XMM0
/* 0e80722b */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e807231 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e807237 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e80723d */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e807245 */  MOV ESI,0x8
/* 0e80724a */  CALL 0x048afb10
/* 0e80724f */  PXOR XMM0,XMM0
/* 0e807253 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e80725c */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e807265 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e80726b */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e807275 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e80727d */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e807285 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e80728d */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e807294 */  TEST AL,AL
/* 0e807296 */  JZ 0x0e808a53
/* 0e80729c */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e8072a3 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e8072aa */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e8072b6 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e8072c1 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e8072cd */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e8072d9 */  LEA RAX,[0xe870740]
/* 0e8072e0 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e8072e8 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e8072f0 */  LEA RAX,[0xe8703f0]
/* 0e8072f7 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e8072ff */  LEA RAX,[0xe870760]
/* 0e807306 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e80730e */  LEA RAX,[0xe870e30]
/* 0e807315 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e80731d */  MOV dword ptr [RSP + 0x108],0x0
/* 0e807328 */  PXOR XMM0,XMM0
/* 0e80732c */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807335 */  LEA RSI,[RSP + 0xb8]
/* 0e80733d */  MOV RDI,R14
/* 0e807340 */  CALL 0x048b05a0
/* 0e807345 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e80734d */  TEST R15,R15
/* 0e807350 */  JZ 0x0e807375
/* 0e807352 */  MOV RAX,-0x1
/* 0e807359 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e80735f */  TEST RAX,RAX
/* 0e807362 */  JNZ 0x0e807375
/* 0e807364 */  MOV RAX,qword ptr [R15]
/* 0e807367 */  MOV RDI,R15
/* 0e80736a */  CALL qword ptr [RAX + 0x10]
/* 0e80736d */  MOV RDI,R15
/* 0e807370 */  CALL 0x0412c2d0
/* 0e807375 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e80737a */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e807380 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e807389 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e807392 */  LEA RDI,[RSP + 0xb8]
/* 0e80739a */  LEA RSI,[RSP + 0x120]
/* 0e8073a2 */  MOV RDX,RSP
/* 0e8073a5 */  CALL 0x0e868210
/* 0e8073aa */  MOV RDI,RSP
/* 0e8073ad */  CALL 0x048b0bc0
/* 0e8073b2 */  MOV RDI,RBX
/* 0e8073b5 */  CALL 0x0e975300
/* 0e8073ba */  MOV RAX,-0x329c4a6dfffffffd
/* 0e8073c4 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e8073cc */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e8073d4 */  ADD RDI,0x18
/* 0e8073d8 */  CALL 0x0e163a60
/* 0e8073dd */  LEA RDI,[0xf5463b0]
/* 0e8073e4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8073eb */  MOV ESI,0x8
/* 0e8073f0 */  CALL qword ptr [RAX + 0x10]
/* 0e8073f3 */  MOV R15,RAX
/* 0e8073f6 */  TEST RAX,RAX
/* 0e8073f9 */  JZ 0x0e80884c
/* 0e8073ff */  LEA RAX,[0xf4cde70]
/* 0e807406 */  MOV qword ptr [R15],RAX
/* 0e807409 */  MOV qword ptr [RSP],R15
/* 0e80740d */  MOV qword ptr [RSP + 0x8],0x0
/* 0e807416 */  LEA RDI,[0xf5463b0]
/* 0e80741d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807424 */  MOV ESI,0x20
/* 0e807429 */  CALL qword ptr [RAX + 0x10]
/* 0e80742c */  MOV R15,RAX
/* 0e80742f */  TEST RAX,RAX
/* 0e807432 */  JZ 0x0e80885d
/* 0e807438 */  MOV qword ptr [RSP + 0x20],R15
/* 0e80743d */  MOV qword ptr [RSP + 0x10],0x21
/* 0e807446 */  MOV qword ptr [RSP + 0x18],0x1a
/* 0e80744f */  MOVUPS XMM0,xmmword ptr [0x01e367ba]
/* 0e807456 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e80745b */  MOVDQA XMM0,xmmword ptr [0x01e367b0]
/* 0e807463 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e807468 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e80746d */  LEA RDI,[0xf5463b0]
/* 0e807474 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e80747b */  MOV ESI,0x20
/* 0e807480 */  CALL qword ptr [RAX + 0x10]
/* 0e807483 */  MOV R15,RAX
/* 0e807486 */  TEST RAX,RAX
/* 0e807489 */  JZ 0x0e80886e
/* 0e80748f */  MOV qword ptr [RSP + 0x38],R15
/* 0e807494 */  MOV qword ptr [RSP + 0x28],0x21
/* 0e80749d */  MOV qword ptr [RSP + 0x30],0x1a
/* 0e8074a6 */  MOVUPS XMM0,xmmword ptr [0x01e367ba]
/* 0e8074ad */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e8074b2 */  MOVDQA XMM0,xmmword ptr [0x01e367b0]
/* 0e8074ba */  MOVDQU xmmword ptr [R15],XMM0
/* 0e8074bf */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e8074c4 */  LEA RDI,[RSP + 0x40]
/* 0e8074c9 */  PXOR XMM0,XMM0
/* 0e8074cd */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8074d3 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e8074d9 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e8074df */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e8074e7 */  MOV ESI,0x8
/* 0e8074ec */  CALL 0x048afb10
/* 0e8074f1 */  PXOR XMM0,XMM0
/* 0e8074f5 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e8074fe */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e807507 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e80750d */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e807517 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e80751f */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e807527 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e80752f */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e807536 */  TEST AL,AL
/* 0e807538 */  JZ 0x0e808a84
/* 0e80753e */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e807545 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e80754c */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807558 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807563 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e80756f */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e80757b */  LEA RAX,[0xe871e20]
/* 0e807582 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e80758a */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807592 */  LEA RAX,[0xe871b00]
/* 0e807599 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e8075a1 */  LEA RAX,[0xe871e40]
/* 0e8075a8 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e8075b0 */  LEA RAX,[0xe872510]
/* 0e8075b7 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e8075bf */  MOV dword ptr [RSP + 0x108],0x0
/* 0e8075ca */  PXOR XMM0,XMM0
/* 0e8075ce */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e8075d7 */  LEA RSI,[RSP + 0xb8]
/* 0e8075df */  MOV RDI,R14
/* 0e8075e2 */  CALL 0x048b05a0
/* 0e8075e7 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e8075ef */  TEST R15,R15
/* 0e8075f2 */  JZ 0x0e807617
/* 0e8075f4 */  MOV RAX,-0x1
/* 0e8075fb */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e807601 */  TEST RAX,RAX
/* 0e807604 */  JNZ 0x0e807617
/* 0e807606 */  MOV RAX,qword ptr [R15]
/* 0e807609 */  MOV RDI,R15
/* 0e80760c */  CALL qword ptr [RAX + 0x10]
/* 0e80760f */  MOV RDI,R15
/* 0e807612 */  CALL 0x0412c2d0
/* 0e807617 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e80761c */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e807622 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e80762b */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e807634 */  LEA RDI,[RSP + 0xb8]
/* 0e80763c */  LEA RSI,[RSP + 0x120]
/* 0e807644 */  MOV RDX,RSP
/* 0e807647 */  CALL 0x0e868210
/* 0e80764c */  MOV RDI,RSP
/* 0e80764f */  CALL 0x048b0bc0
/* 0e807654 */  MOV RDI,RBX
/* 0e807657 */  CALL 0x0e979fe0
/* 0e80765c */  MOV RAX,0x3123fdc400000003
/* 0e807666 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e80766e */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e807676 */  ADD RDI,0x18
/* 0e80767a */  CALL 0x0e163a60
/* 0e80767f */  LEA RDI,[0xf5463b0]
/* 0e807686 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e80768d */  MOV ESI,0x8
/* 0e807692 */  CALL qword ptr [RAX + 0x10]
/* 0e807695 */  MOV R15,RAX
/* 0e807698 */  TEST RAX,RAX
/* 0e80769b */  JZ 0x0e80887f
/* 0e8076a1 */  LEA RAX,[0xf4cdef8]
/* 0e8076a8 */  MOV qword ptr [R15],RAX
/* 0e8076ab */  MOV qword ptr [RSP],R15
/* 0e8076af */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8076b8 */  LEA RDI,[0xf5463b0]
/* 0e8076bf */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8076c6 */  MOV ESI,0x28
/* 0e8076cb */  CALL qword ptr [RAX + 0x10]
/* 0e8076ce */  MOV R15,RAX
/* 0e8076d1 */  TEST RAX,RAX
/* 0e8076d4 */  JZ 0x0e808890
/* 0e8076da */  MOV qword ptr [RSP + 0x20],R15
/* 0e8076df */  MOV qword ptr [RSP + 0x10],0x29
/* 0e8076e8 */  MOV qword ptr [RSP + 0x18],0x26
/* 0e8076f1 */  MOV R13,qword ptr [0x01e3680e]
/* 0e8076f8 */  MOV qword ptr [R15 + 0x1e],R13
/* 0e8076fc */  MOVAPS XMM0,xmmword ptr [0x01e36800]
/* 0e807703 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e807708 */  MOVDQA XMM0,xmmword ptr [0x01e367f0]
/* 0e807710 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e807715 */  MOV byte ptr [R15 + 0x26],0x0
/* 0e80771a */  LEA RDI,[0xf5463b0]
/* 0e807721 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807728 */  MOV ESI,0x28
/* 0e80772d */  CALL qword ptr [RAX + 0x10]
/* 0e807730 */  MOV R15,RAX
/* 0e807733 */  TEST RAX,RAX
/* 0e807736 */  JZ 0x0e8088a1
/* 0e80773c */  MOV qword ptr [RSP + 0x38],R15
/* 0e807741 */  MOV qword ptr [RSP + 0x28],0x29
/* 0e80774a */  MOV qword ptr [RSP + 0x30],0x26
/* 0e807753 */  MOV qword ptr [R15 + 0x1e],R13
/* 0e807757 */  MOVAPS XMM0,xmmword ptr [0x01e36800]
/* 0e80775e */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e807763 */  MOVDQA XMM0,xmmword ptr [0x01e367f0]
/* 0e80776b */  MOVDQU xmmword ptr [R15],XMM0
/* 0e807770 */  MOV byte ptr [R15 + 0x26],0x0
/* 0e807775 */  LEA RDI,[RSP + 0x40]
/* 0e80777a */  PXOR XMM0,XMM0
/* 0e80777e */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e807784 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e80778a */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e807790 */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e807798 */  MOV ESI,0x8
/* 0e80779d */  CALL 0x048afb10
/* 0e8077a2 */  PXOR XMM0,XMM0
/* 0e8077a6 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e8077af */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e8077b8 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e8077be */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e8077c8 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e8077d0 */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e8077d8 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e8077e0 */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e8077e7 */  TEST AL,AL
/* 0e8077e9 */  JZ 0x0e808ab5
/* 0e8077ef */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e8077f6 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e8077fd */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807809 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807814 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e807820 */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e80782c */  LEA RAX,[0xe874cd0]
/* 0e807833 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e80783b */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807843 */  LEA RAX,[0xe8749b0]
/* 0e80784a */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e807852 */  LEA RAX,[0xe874cf0]
/* 0e807859 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e807861 */  LEA RAX,[0xe8753c0]
/* 0e807868 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e807870 */  MOV dword ptr [RSP + 0x108],0x0
/* 0e80787b */  PXOR XMM0,XMM0
/* 0e80787f */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807888 */  LEA RSI,[RSP + 0xb8]
/* 0e807890 */  MOV RDI,R14
/* 0e807893 */  CALL 0x048b05a0
/* 0e807898 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e8078a0 */  TEST R15,R15
/* 0e8078a3 */  JZ 0x0e8078c8
/* 0e8078a5 */  MOV RAX,-0x1
/* 0e8078ac */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8078b2 */  TEST RAX,RAX
/* 0e8078b5 */  JNZ 0x0e8078c8
/* 0e8078b7 */  MOV RAX,qword ptr [R15]
/* 0e8078ba */  MOV RDI,R15
/* 0e8078bd */  CALL qword ptr [RAX + 0x10]
/* 0e8078c0 */  MOV RDI,R15
/* 0e8078c3 */  CALL 0x0412c2d0
/* 0e8078c8 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e8078cd */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e8078d3 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e8078dc */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e8078e5 */  LEA RDI,[RSP + 0xb8]
/* 0e8078ed */  LEA RSI,[RSP + 0x120]
/* 0e8078f5 */  MOV RDX,RSP
/* 0e8078f8 */  CALL 0x0e868210
/* 0e8078fd */  MOV RDI,RSP
/* 0e807900 */  CALL 0x048b0bc0
/* 0e807905 */  MOV RDI,RBX
/* 0e807908 */  CALL 0x0e97c660
/* 0e80790d */  MOV RAX,-0x71bbb260fffffffd
/* 0e807917 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e80791f */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e807927 */  ADD RDI,0x18
/* 0e80792b */  CALL 0x0e163a60
/* 0e807930 */  LEA RDI,[0xf5463b0]
/* 0e807937 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e80793e */  MOV ESI,0x8
/* 0e807943 */  CALL qword ptr [RAX + 0x10]
/* 0e807946 */  MOV R15,RAX
/* 0e807949 */  TEST RAX,RAX
/* 0e80794c */  JZ 0x0e8088b2
/* 0e807952 */  LEA RAX,[0xf4cdfc0]
/* 0e807959 */  MOV qword ptr [R15],RAX
/* 0e80795c */  MOV qword ptr [RSP],R15
/* 0e807960 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e807969 */  MOV byte ptr [RSP + 0x10],0x1c
/* 0e80796e */  MOV RAX,qword ptr [0x01e36856]
/* 0e807975 */  MOV qword ptr [RSP + 0x11],RAX
/* 0e80797a */  MOV RCX,qword ptr [0x01e3685c]
/* 0e807981 */  MOV qword ptr [RSP + 0x17],RCX
/* 0e807986 */  MOV byte ptr [RSP + 0x1f],0x0
/* 0e80798b */  MOV byte ptr [RSP + 0x28],0x1c
/* 0e807990 */  MOV qword ptr [RSP + 0x29],RAX
/* 0e807995 */  MOV qword ptr [RSP + 0x2f],RCX
/* 0e80799a */  MOV byte ptr [RSP + 0x37],0x0
/* 0e80799f */  LEA RDI,[RSP + 0x40]
/* 0e8079a4 */  PXOR XMM0,XMM0
/* 0e8079a8 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e8079ae */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e8079b4 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8079ba */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e8079c2 */  MOV ESI,0x8
/* 0e8079c7 */  CALL 0x048afb10
/* 0e8079cc */  PXOR XMM0,XMM0
/* 0e8079d0 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e8079d9 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e8079e2 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e8079e8 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e8079f2 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e8079fa */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e807a02 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e807a0a */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e807a11 */  TEST AL,AL
/* 0e807a13 */  JZ 0x0e808ae6
/* 0e807a19 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e807a20 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e807a27 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807a33 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807a3e */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e807a4a */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e807a56 */  LEA RAX,[0xe875ce0]
/* 0e807a5d */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e807a65 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807a6d */  LEA RAX,[0xc8d8fa0]
/* 0e807a74 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e807a7c */  LEA RAX,[0xe875d00]
/* 0e807a83 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e807a8b */  LEA RAX,[0xe875f80]
/* 0e807a92 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e807a9a */  MOV dword ptr [RSP + 0x108],0x0
/* 0e807aa5 */  PXOR XMM0,XMM0
/* 0e807aa9 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807ab2 */  LEA RSI,[RSP + 0xb8]
/* 0e807aba */  MOV RDI,R14
/* 0e807abd */  CALL 0x048b05a0
/* 0e807ac2 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e807aca */  TEST R15,R15
/* 0e807acd */  JZ 0x0e807af2
/* 0e807acf */  MOV RAX,-0x1
/* 0e807ad6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e807adc */  TEST RAX,RAX
/* 0e807adf */  JNZ 0x0e807af2
/* 0e807ae1 */  MOV RAX,qword ptr [R15]
/* 0e807ae4 */  MOV RDI,R15
/* 0e807ae7 */  CALL qword ptr [RAX + 0x10]
/* 0e807aea */  MOV RDI,R15
/* 0e807aed */  CALL 0x0412c2d0
/* 0e807af2 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e807af7 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e807afd */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e807b06 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e807b0f */  LEA RDI,[RSP + 0xb8]
/* 0e807b17 */  LEA RSI,[RSP + 0x120]
/* 0e807b1f */  MOV RDX,RSP
/* 0e807b22 */  CALL 0x0e868210
/* 0e807b27 */  MOV RDI,RSP
/* 0e807b2a */  CALL 0x048b0bc0
/* 0e807b2f */  MOV RDI,RBX
/* 0e807b32 */  CALL 0x0e2cba70
/* 0e807b37 */  MOV RAX,-0x47cc5aa9fffffffd
/* 0e807b41 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e807b49 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e807b51 */  ADD RDI,0x18
/* 0e807b55 */  CALL 0x0e163a60
/* 0e807b5a */  LEA RDI,[0xf5463b0]
/* 0e807b61 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807b68 */  MOV ESI,0x8
/* 0e807b6d */  CALL qword ptr [RAX + 0x10]
/* 0e807b70 */  MOV R15,RAX
/* 0e807b73 */  TEST RAX,RAX
/* 0e807b76 */  JZ 0x0e8088c3
/* 0e807b7c */  LEA RAX,[0xf4ce048]
/* 0e807b83 */  MOV qword ptr [R15],RAX
/* 0e807b86 */  MOV qword ptr [RSP],R15
/* 0e807b8a */  MOV qword ptr [RSP + 0x8],0x0
/* 0e807b93 */  LEA RDI,[0xf5463b0]
/* 0e807b9a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807ba1 */  MOV ESI,0x20
/* 0e807ba6 */  CALL qword ptr [RAX + 0x10]
/* 0e807ba9 */  MOV R15,RAX
/* 0e807bac */  TEST RAX,RAX
/* 0e807baf */  JZ 0x0e8088d4
/* 0e807bb5 */  MOV qword ptr [RSP + 0x20],R15
/* 0e807bba */  MOV qword ptr [RSP + 0x10],0x21
/* 0e807bc3 */  MOV qword ptr [RSP + 0x18],0x18
/* 0e807bcc */  MOV R13,qword ptr [0x01e13860]
/* 0e807bd3 */  MOV qword ptr [R15 + 0x10],R13
/* 0e807bd7 */  MOVDQA XMM0,xmmword ptr [0x01e13850]
/* 0e807bdf */  MOVDQU xmmword ptr [R15],XMM0
/* 0e807be4 */  MOV byte ptr [R15 + 0x18],0x0
/* 0e807be9 */  LEA RDI,[0xf5463b0]
/* 0e807bf0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807bf7 */  MOV ESI,0x20
/* 0e807bfc */  CALL qword ptr [RAX + 0x10]
/* 0e807bff */  MOV R15,RAX
/* 0e807c02 */  TEST RAX,RAX
/* 0e807c05 */  JZ 0x0e8088e5
/* 0e807c0b */  MOV qword ptr [RSP + 0x38],R15
/* 0e807c10 */  MOV qword ptr [RSP + 0x28],0x21
/* 0e807c19 */  MOV qword ptr [RSP + 0x30],0x18
/* 0e807c22 */  MOV qword ptr [R15 + 0x10],R13
/* 0e807c26 */  MOVDQA XMM0,xmmword ptr [0x01e13850]
/* 0e807c2e */  MOVDQU xmmword ptr [R15],XMM0
/* 0e807c33 */  MOV byte ptr [R15 + 0x18],0x0
/* 0e807c38 */  LEA RDI,[RSP + 0x40]
/* 0e807c3d */  PXOR XMM0,XMM0
/* 0e807c41 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e807c47 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e807c4d */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e807c53 */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e807c5b */  MOV ESI,0x8
/* 0e807c60 */  CALL 0x048afb10
/* 0e807c65 */  PXOR XMM0,XMM0
/* 0e807c69 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e807c72 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e807c7b */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e807c81 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e807c8b */  MOV byte ptr [RSP + 0xac],0x0
/* 0e807c93 */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e807c9b */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e807ca3 */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e807caa */  TEST AL,AL
/* 0e807cac */  JZ 0x0e808b17
/* 0e807cb2 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e807cb9 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e807cc0 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807ccc */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807cd7 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e807ce3 */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e807cef */  LEA RAX,[0xe876730]
/* 0e807cf6 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e807cfe */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807d06 */  LEA RAX,[0xe36b820]
/* 0e807d0d */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e807d15 */  LEA RAX,[0xe876750]
/* 0e807d1c */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e807d24 */  LEA RAX,[0xe876e20]
/* 0e807d2b */  MOV qword ptr [RSP + 0x100],RAX
/* 0e807d33 */  MOV dword ptr [RSP + 0x108],0x0
/* 0e807d3e */  PXOR XMM0,XMM0
/* 0e807d42 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807d4b */  LEA RSI,[RSP + 0xb8]
/* 0e807d53 */  MOV RDI,R14
/* 0e807d56 */  CALL 0x048b05a0
/* 0e807d5b */  MOV R15,qword ptr [RSP + 0x118]
/* 0e807d63 */  TEST R15,R15
/* 0e807d66 */  JZ 0x0e807d8b
/* 0e807d68 */  MOV RAX,-0x1
/* 0e807d6f */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e807d75 */  TEST RAX,RAX
/* 0e807d78 */  JNZ 0x0e807d8b
/* 0e807d7a */  MOV RAX,qword ptr [R15]
/* 0e807d7d */  MOV RDI,R15
/* 0e807d80 */  CALL qword ptr [RAX + 0x10]
/* 0e807d83 */  MOV RDI,R15
/* 0e807d86 */  CALL 0x0412c2d0
/* 0e807d8b */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e807d90 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e807d96 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e807d9f */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e807da8 */  LEA RDI,[RSP + 0xb8]
/* 0e807db0 */  LEA RSI,[RSP + 0x120]
/* 0e807db8 */  MOV RDX,RSP
/* 0e807dbb */  CALL 0x0e868210
/* 0e807dc0 */  MOV RDI,RSP
/* 0e807dc3 */  CALL 0x048b0bc0
/* 0e807dc8 */  MOV RDI,RBX
/* 0e807dcb */  CALL 0x0e89e140
/* 0e807dd0 */  MOV RAX,0x5dc5e7300000003
/* 0e807dda */  MOV qword ptr [RSP + 0x168],RAX
/* 0e807de2 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e807dea */  ADD RDI,0x18
/* 0e807dee */  CALL 0x0e163a60
/* 0e807df3 */  LEA RDI,[0xf5463b0]
/* 0e807dfa */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e807e01 */  MOV ESI,0x8
/* 0e807e06 */  CALL qword ptr [RAX + 0x10]
/* 0e807e09 */  MOV R15,RAX
/* 0e807e0c */  TEST RAX,RAX
/* 0e807e0f */  JZ 0x0e8088f6
/* 0e807e15 */  LEA RAX,[0xf4ce0d0]
/* 0e807e1c */  MOV qword ptr [R15],RAX
/* 0e807e1f */  MOV qword ptr [RSP],R15
/* 0e807e23 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e807e2c */  MOV byte ptr [RSP + 0x10],0x24
/* 0e807e31 */  MOVDQA XMM0,xmmword ptr [0x01e34990]
/* 0e807e39 */  MOVDQU xmmword ptr [RSP + 0x11],XMM0
/* 0e807e3f */  MOVZX EAX,word ptr [0x01e349a0]
/* 0e807e46 */  MOV word ptr [RSP + 0x21],AX
/* 0e807e4b */  MOV byte ptr [RSP + 0x23],0x0
/* 0e807e50 */  MOV byte ptr [RSP + 0x28],0x24
/* 0e807e55 */  MOVDQU xmmword ptr [RSP + 0x29],XMM0
/* 0e807e5b */  MOV word ptr [RSP + 0x39],AX
/* 0e807e60 */  MOV byte ptr [RSP + 0x3b],0x0
/* 0e807e65 */  LEA RDI,[RSP + 0x40]
/* 0e807e6a */  PXOR XMM0,XMM0
/* 0e807e6e */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e807e74 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e807e7a */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e807e80 */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e807e88 */  MOV ESI,0x8
/* 0e807e8d */  CALL 0x048afb10
/* 0e807e92 */  PXOR XMM0,XMM0
/* 0e807e96 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e807e9f */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e807ea8 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e807eae */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e807eb8 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e807ec0 */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e807ec8 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e807ed0 */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e807ed7 */  TEST AL,AL
/* 0e807ed9 */  JZ 0x0e808b48
/* 0e807edf */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e807ee6 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e807eed */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e807ef9 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e807f04 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e807f10 */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e807f1c */  LEA RAX,[0xe877b50]
/* 0e807f23 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e807f2b */  MOV qword ptr [RSP + 0xe8],R12
/* 0e807f33 */  LEA RAX,[0xe877880]
/* 0e807f3a */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e807f42 */  LEA RAX,[0xe877b70]
/* 0e807f49 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e807f51 */  LEA RAX,[0xe878380]
/* 0e807f58 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e807f60 */  MOV dword ptr [RSP + 0x108],0x0
/* 0e807f6b */  PXOR XMM0,XMM0
/* 0e807f6f */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e807f78 */  LEA RSI,[RSP + 0xb8]
/* 0e807f80 */  MOV RDI,R14
/* 0e807f83 */  CALL 0x048b05a0
/* 0e807f88 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e807f90 */  TEST R15,R15
/* 0e807f93 */  JZ 0x0e807fb8
/* 0e807f95 */  MOV RAX,-0x1
/* 0e807f9c */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e807fa2 */  TEST RAX,RAX
/* 0e807fa5 */  JNZ 0x0e807fb8
/* 0e807fa7 */  MOV RAX,qword ptr [R15]
/* 0e807faa */  MOV RDI,R15
/* 0e807fad */  CALL qword ptr [RAX + 0x10]
/* 0e807fb0 */  MOV RDI,R15
/* 0e807fb3 */  CALL 0x0412c2d0
/* 0e807fb8 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e807fbd */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e807fc3 */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e807fcc */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e807fd5 */  LEA RDI,[RSP + 0xb8]
/* 0e807fdd */  LEA RSI,[RSP + 0x120]
/* 0e807fe5 */  MOV RDX,RSP
/* 0e807fe8 */  CALL 0x0e868210
/* 0e807fed */  MOV RDI,RSP
/* 0e807ff0 */  CALL 0x048b0bc0
/* 0e807ff5 */  MOV RDI,RBX
/* 0e807ff8 */  CALL 0x0e89e220
/* 0e807ffd */  MOV RAX,-0x19f77cfafffffffd
/* 0e808007 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e80800f */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e808017 */  ADD RDI,0x18
/* 0e80801b */  CALL 0x0e163a60
/* 0e808020 */  LEA RDI,[0xf5463b0]
/* 0e808027 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e80802e */  MOV ESI,0x8
/* 0e808033 */  CALL qword ptr [RAX + 0x10]
/* 0e808036 */  MOV R15,RAX
/* 0e808039 */  TEST RAX,RAX
/* 0e80803c */  JZ 0x0e808907
/* 0e808042 */  LEA RAX,[0xf4ce158]
/* 0e808049 */  MOV qword ptr [R15],RAX
/* 0e80804c */  MOV qword ptr [RSP],R15
/* 0e808050 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e808059 */  MOV byte ptr [RSP + 0x10],0x26
/* 0e80805e */  MOVDQA XMM0,xmmword ptr [0x01e349b0]
/* 0e808066 */  MOVDQU xmmword ptr [RSP + 0x11],XMM0
/* 0e80806c */  MOV EAX,dword ptr [0x01e349bf]
/* 0e808072 */  MOV dword ptr [RSP + 0x20],EAX
/* 0e808076 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e80807b */  MOV byte ptr [RSP + 0x28],0x26
/* 0e808080 */  MOVDQU xmmword ptr [RSP + 0x29],XMM0
/* 0e808086 */  MOV dword ptr [RSP + 0x38],EAX
/* 0e80808a */  MOV byte ptr [RSP + 0x3c],0x0
/* 0e80808f */  LEA RDI,[RSP + 0x40]
/* 0e808094 */  PXOR XMM0,XMM0
/* 0e808098 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e80809e */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e8080a4 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8080aa */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e8080b2 */  MOV ESI,0x8
/* 0e8080b7 */  CALL 0x048afb10
/* 0e8080bc */  PXOR XMM0,XMM0
/* 0e8080c0 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e8080c9 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e8080d2 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e8080d8 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e8080e2 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e8080ea */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e8080f2 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e8080fa */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e808101 */  TEST AL,AL
/* 0e808103 */  JZ 0x0e808b79
/* 0e808109 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e808110 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e808117 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e808123 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e80812e */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e80813a */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e808146 */  LEA RAX,[0xe8792f0]
/* 0e80814d */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e808155 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e80815d */  LEA RAX,[0xe878fd0]
/* 0e808164 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e80816c */  LEA RAX,[0xe879310]
/* 0e808173 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e80817b */  LEA RAX,[0xe8799e0]
/* 0e808182 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e80818a */  MOV dword ptr [RSP + 0x108],0x0
/* 0e808195 */  PXOR XMM0,XMM0
/* 0e808199 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e8081a2 */  LEA RSI,[RSP + 0xb8]
/* 0e8081aa */  MOV RDI,R14
/* 0e8081ad */  CALL 0x048b05a0
/* 0e8081b2 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e8081ba */  TEST R15,R15
/* 0e8081bd */  JZ 0x0e8081e2
/* 0e8081bf */  MOV RAX,-0x1
/* 0e8081c6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8081cc */  TEST RAX,RAX
/* 0e8081cf */  JNZ 0x0e8081e2
/* 0e8081d1 */  MOV RAX,qword ptr [R15]
/* 0e8081d4 */  MOV RDI,R15
/* 0e8081d7 */  CALL qword ptr [RAX + 0x10]
/* 0e8081da */  MOV RDI,R15
/* 0e8081dd */  CALL 0x0412c2d0
/* 0e8081e2 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e8081e7 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e8081ed */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e8081f6 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e8081ff */  LEA RDI,[RSP + 0xb8]
/* 0e808207 */  LEA RSI,[RSP + 0x120]
/* 0e80820f */  MOV RDX,RSP
/* 0e808212 */  CALL 0x0e868210
/* 0e808217 */  MOV RDI,RSP
/* 0e80821a */  CALL 0x048b0bc0
/* 0e80821f */  MOV RDI,RBX
/* 0e808222 */  CALL 0x0e89e390
/* 0e808227 */  MOV RAX,0x417119db00000003
/* 0e808231 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e808239 */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e808241 */  ADD RDI,0x18
/* 0e808245 */  CALL 0x0e163a60
/* 0e80824a */  LEA RDI,[0xf5463b0]
/* 0e808251 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e808258 */  MOV ESI,0x8
/* 0e80825d */  CALL qword ptr [RAX + 0x10]
/* 0e808260 */  MOV R15,RAX
/* 0e808263 */  TEST RAX,RAX
/* 0e808266 */  JZ 0x0e808918
/* 0e80826c */  LEA RAX,[0xf4ce1f0]
/* 0e808273 */  MOV qword ptr [R15],RAX
/* 0e808276 */  MOV qword ptr [RSP],R15
/* 0e80827a */  MOV qword ptr [RSP + 0x8],0x0
/* 0e808283 */  LEA RDI,[0xf5463b0]
/* 0e80828a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e808291 */  MOV ESI,0x20
/* 0e808296 */  CALL qword ptr [RAX + 0x10]
/* 0e808299 */  MOV R15,RAX
/* 0e80829c */  TEST RAX,RAX
/* 0e80829f */  JZ 0x0e808929
/* 0e8082a5 */  MOV qword ptr [RSP + 0x20],R15
/* 0e8082aa */  MOV qword ptr [RSP + 0x10],0x21
/* 0e8082b3 */  MOV qword ptr [RSP + 0x18],0x1a
/* 0e8082bc */  MOVUPS XMM0,xmmword ptr [0x01e349da]
/* 0e8082c3 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e8082c8 */  MOVDQA XMM0,xmmword ptr [0x01e349d0]
/* 0e8082d0 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e8082d5 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e8082da */  LEA RDI,[0xf5463b0]
/* 0e8082e1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8082e8 */  MOV ESI,0x20
/* 0e8082ed */  CALL qword ptr [RAX + 0x10]
/* 0e8082f0 */  MOV R15,RAX
/* 0e8082f3 */  TEST RAX,RAX
/* 0e8082f6 */  JZ 0x0e80893a
/* 0e8082fc */  MOV qword ptr [RSP + 0x38],R15
/* 0e808301 */  MOV qword ptr [RSP + 0x28],0x21
/* 0e80830a */  MOV qword ptr [RSP + 0x30],0x1a
/* 0e808313 */  MOVUPS XMM0,xmmword ptr [0x01e349da]
/* 0e80831a */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e80831f */  MOVDQA XMM0,xmmword ptr [0x01e349d0]
/* 0e808327 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e80832c */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e808331 */  LEA RDI,[RSP + 0x40]
/* 0e808336 */  PXOR XMM0,XMM0
/* 0e80833a */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e808340 */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e808346 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e80834c */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e808354 */  MOV ESI,0x8
/* 0e808359 */  CALL 0x048afb10
/* 0e80835e */  PXOR XMM0,XMM0
/* 0e808362 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e80836b */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e808374 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e80837a */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e808384 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e80838c */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e808394 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e80839c */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e8083a3 */  TEST AL,AL
/* 0e8083a5 */  JZ 0x0e808baa
/* 0e8083ab */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e8083b2 */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e8083b9 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e8083c5 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e8083d0 */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e8083dc */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e8083e8 */  LEA RAX,[0xe87a6e0]
/* 0e8083ef */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e8083f7 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e8083ff */  LEA RAX,[0xe87a410]
/* 0e808406 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e80840e */  LEA RAX,[0xe87a700]
/* 0e808415 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e80841d */  LEA RAX,[0xe87aef0]
/* 0e808424 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e80842c */  MOV dword ptr [RSP + 0x108],0x0
/* 0e808437 */  PXOR XMM0,XMM0
/* 0e80843b */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e808444 */  LEA RSI,[RSP + 0xb8]
/* 0e80844c */  MOV RDI,R14
/* 0e80844f */  CALL 0x048b05a0
/* 0e808454 */  MOV R15,qword ptr [RSP + 0x118]
/* 0e80845c */  TEST R15,R15
/* 0e80845f */  JZ 0x0e808484
/* 0e808461 */  MOV RAX,-0x1
/* 0e808468 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e80846e */  TEST RAX,RAX
/* 0e808471 */  JNZ 0x0e808484
/* 0e808473 */  MOV RAX,qword ptr [R15]
/* 0e808476 */  MOV RDI,R15
/* 0e808479 */  CALL qword ptr [RAX + 0x10]
/* 0e80847c */  MOV RDI,R15
/* 0e80847f */  CALL 0x0412c2d0
/* 0e808484 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e808489 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e80848f */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e808498 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e8084a1 */  LEA RDI,[RSP + 0xb8]
/* 0e8084a9 */  LEA RSI,[RSP + 0x120]
/* 0e8084b1 */  MOV RDX,RSP
/* 0e8084b4 */  CALL 0x0e868210
/* 0e8084b9 */  MOV RDI,RSP
/* 0e8084bc */  CALL 0x048b0bc0
/* 0e8084c1 */  MOV RDI,RBX
/* 0e8084c4 */  CALL 0x0e89e420
/* 0e8084c9 */  MOV RAX,-0x190766befffffffd
/* 0e8084d3 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e8084db */  MOV RDI,qword ptr [RSP + 0x140]
/* 0e8084e3 */  ADD RDI,0x18
/* 0e8084e7 */  CALL 0x0e163a60
/* 0e8084ec */  LEA RDI,[0xf5463b0]
/* 0e8084f3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8084fa */  MOV ESI,0x8
/* 0e8084ff */  CALL qword ptr [RAX + 0x10]
/* 0e808502 */  MOV RBX,RAX
/* 0e808505 */  TEST RAX,RAX
/* 0e808508 */  JZ 0x0e80894b
/* 0e80850e */  LEA RAX,[0xf4ce278]
/* 0e808515 */  MOV qword ptr [RBX],RAX
/* 0e808518 */  MOV qword ptr [RSP],RBX
/* 0e80851c */  MOV qword ptr [RSP + 0x8],0x0
/* 0e808525 */  LEA RDI,[0xf5463b0]
/* 0e80852c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e808533 */  MOV ESI,0x20
/* 0e808538 */  CALL qword ptr [RAX + 0x10]
/* 0e80853b */  MOV RBX,RAX
/* 0e80853e */  TEST RAX,RAX
/* 0e808541 */  JZ 0x0e80895c
/* 0e808547 */  MOV qword ptr [RSP + 0x20],RBX
/* 0e80854c */  MOV qword ptr [RSP + 0x10],0x21
/* 0e808555 */  MOV qword ptr [RSP + 0x18],0x19
/* 0e80855e */  MOVUPS XMM0,xmmword ptr [0x01e349f9]
/* 0e808565 */  MOVUPS xmmword ptr [RBX + 0x9],XMM0
/* 0e808569 */  MOVDQA XMM0,xmmword ptr [0x01e349f0]
/* 0e808571 */  MOVDQU xmmword ptr [RBX],XMM0
/* 0e808575 */  MOV byte ptr [RBX + 0x19],0x0
/* 0e808579 */  LEA RDI,[0xf5463b0]
/* 0e808580 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e808587 */  MOV ESI,0x20
/* 0e80858c */  CALL qword ptr [RAX + 0x10]
/* 0e80858f */  MOV RBX,RAX
/* 0e808592 */  TEST RAX,RAX
/* 0e808595 */  JZ 0x0e80896d
/* 0e80859b */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8085a0 */  MOV qword ptr [RSP + 0x28],0x21
/* 0e8085a9 */  MOV qword ptr [RSP + 0x30],0x19
/* 0e8085b2 */  MOVUPS XMM0,xmmword ptr [0x01e349f9]
/* 0e8085b9 */  MOVUPS xmmword ptr [RBX + 0x9],XMM0
/* 0e8085bd */  MOVDQA XMM0,xmmword ptr [0x01e349f0]
/* 0e8085c5 */  MOVDQU xmmword ptr [RBX],XMM0
/* 0e8085c9 */  MOV byte ptr [RBX + 0x19],0x0
/* 0e8085cd */  LEA RDI,[RSP + 0x40]
/* 0e8085d2 */  PXOR XMM0,XMM0
/* 0e8085d6 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8085dc */  MOVDQU xmmword ptr [RSP + 0x50],XMM0
/* 0e8085e2 */  MOVDQU xmmword ptr [RSP + 0x40],XMM0
/* 0e8085e8 */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e8085f0 */  MOV ESI,0x8
/* 0e8085f5 */  CALL 0x048afb10
/* 0e8085fa */  PXOR XMM0,XMM0
/* 0e8085fe */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e808607 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e808610 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e808616 */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e808620 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e808628 */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e808630 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e808638 */  MOVZX EAX,byte ptr [0x0f7490c0]
/* 0e80863f */  TEST AL,AL
/* 0e808641 */  JZ 0x0e808bdb
/* 0e808647 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e80864e */  MOV dword ptr [RSP + 0xb8],EAX
/* 0e808655 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0e808661 */  MOV dword ptr [RSP + 0xc8],0x0
/* 0e80866c */  MOV qword ptr [RSP + 0xd0],0x2
/* 0e808678 */  MOV qword ptr [RSP + 0xd8],0x1
/* 0e808684 */  LEA RAX,[0xe87c830]
/* 0e80868b */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e808693 */  MOV qword ptr [RSP + 0xe8],R12
/* 0e80869b */  LEA RAX,[0xe87c400]
/* 0e8086a2 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0e8086aa */  LEA RAX,[0xe87c850]
/* 0e8086b1 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0e8086b9 */  LEA RAX,[0xe87cf20]
/* 0e8086c0 */  MOV qword ptr [RSP + 0x100],RAX
/* 0e8086c8 */  MOV dword ptr [RSP + 0x108],0x0
/* 0e8086d3 */  PXOR XMM0,XMM0
/* 0e8086d7 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e8086e0 */  LEA RSI,[RSP + 0xb8]
/* 0e8086e8 */  MOV RDI,R14
/* 0e8086eb */  CALL 0x048b05a0
/* 0e8086f0 */  MOV RBX,qword ptr [RSP + 0x118]
/* 0e8086f8 */  TEST RBX,RBX
/* 0e8086fb */  JZ 0x0e808720
/* 0e8086fd */  MOV RAX,-0x1
/* 0e808704 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0e80870a */  TEST RAX,RAX
/* 0e80870d */  JNZ 0x0e808720
/* 0e80870f */  MOV RAX,qword ptr [RBX]
/* 0e808712 */  MOV RDI,RBX
/* 0e808715 */  CALL qword ptr [RAX + 0x10]
/* 0e808718 */  MOV RDI,RBX
/* 0e80871b */  CALL 0x0412c2d0
/* 0e808720 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e808725 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e80872b */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e808734 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e80873d */  LEA RDI,[RSP + 0xb8]
/* 0e808745 */  LEA RSI,[RSP + 0x120]
/* 0e80874d */  MOV RDX,RSP
/* 0e808750 */  CALL 0x0e868210
/* 0e808755 */  MOV RDI,RSP
/* 0e808758 */  CALL 0x048b0bc0
/* 0e80875d */  ADD RSP,0x178
/* 0e808764 */  POP RBX
/* 0e808765 */  POP R12
/* 0e808767 */  POP R13
/* 0e808769 */  POP R14
/* 0e80876b */  POP R15
/* 0e80876d */  POP RBP
/* 0e80876e */  RET
/* 0e80876f */  MOV EDI,0x8
/* 0e808774 */  XOR ESI,ESI
/* 0e808776 */  CALL 0x0eec74c0
/* 0e80877b */  JMP 0x0e806712
/* 0e808780 */  MOV EDI,0x8
/* 0e808785 */  XOR ESI,ESI
/* 0e808787 */  CALL 0x0eec74c0
/* 0e80878c */  JMP 0x0e80694c
/* 0e808791 */  MOV EDI,0x28
/* 0e808796 */  XOR ESI,ESI
/* 0e808798 */  CALL 0x0eec74c0
/* 0e80879d */  JMP 0x0e806985
/* 0e8087a2 */  MOV EDI,0x28
/* 0e8087a7 */  XOR ESI,ESI
/* 0e8087a9 */  CALL 0x0eec74c0
/* 0e8087ae */  JMP 0x0e8069e6
/* 0e8087b3 */  MOV EDI,0x8
/* 0e8087b8 */  XOR ESI,ESI
/* 0e8087ba */  CALL 0x0eec74c0
/* 0e8087bf */  JMP 0x0e806bfc
/* 0e8087c4 */  MOV EDI,0x20
/* 0e8087c9 */  XOR ESI,ESI
/* 0e8087cb */  CALL 0x0eec74c0
/* 0e8087d0 */  JMP 0x0e806c35
/* 0e8087d5 */  MOV EDI,0x20
/* 0e8087da */  XOR ESI,ESI
/* 0e8087dc */  CALL 0x0eec74c0
/* 0e8087e1 */  JMP 0x0e806c8c
/* 0e8087e6 */  MOV EDI,0x8
/* 0e8087eb */  XOR ESI,ESI
/* 0e8087ed */  CALL 0x0eec74c0
/* 0e8087f2 */  JMP 0x0e806e9e
/* 0e8087f7 */  MOV EDI,0x28
/* 0e8087fc */  XOR ESI,ESI
/* 0e8087fe */  CALL 0x0eec74c0
/* 0e808803 */  JMP 0x0e806ed7
/* 0e808808 */  MOV EDI,0x28
/* 0e80880d */  XOR ESI,ESI
/* 0e80880f */  CALL 0x0eec74c0
/* 0e808814 */  JMP 0x0e806f39
/* 0e808819 */  MOV EDI,0x8
/* 0e80881e */  XOR ESI,ESI
/* 0e808820 */  CALL 0x0eec74c0
/* 0e808825 */  JMP 0x0e80714f
/* 0e80882a */  MOV EDI,0x28
/* 0e80882f */  XOR ESI,ESI
/* 0e808831 */  CALL 0x0eec74c0
/* 0e808836 */  JMP 0x0e807188
/* 0e80883b */  MOV EDI,0x28
/* 0e808840 */  XOR ESI,ESI
/* 0e808842 */  CALL 0x0eec74c0
/* 0e808847 */  JMP 0x0e8071e9
/* 0e80884c */  MOV EDI,0x8
/* 0e808851 */  XOR ESI,ESI
/* 0e808853 */  CALL 0x0eec74c0
/* 0e808858 */  JMP 0x0e8073ff
/* 0e80885d */  MOV EDI,0x20
/* 0e808862 */  XOR ESI,ESI
/* 0e808864 */  CALL 0x0eec74c0
/* 0e808869 */  JMP 0x0e807438
/* 0e80886e */  MOV EDI,0x20
/* 0e808873 */  XOR ESI,ESI
/* 0e808875 */  CALL 0x0eec74c0
/* 0e80887a */  JMP 0x0e80748f
/* 0e80887f */  MOV EDI,0x8
/* 0e808884 */  XOR ESI,ESI
/* 0e808886 */  CALL 0x0eec74c0
/* 0e80888b */  JMP 0x0e8076a1
/* 0e808890 */  MOV EDI,0x28
/* 0e808895 */  XOR ESI,ESI
/* 0e808897 */  CALL 0x0eec74c0
/* 0e80889c */  JMP 0x0e8076da
/* 0e8088a1 */  MOV EDI,0x28
/* 0e8088a6 */  XOR ESI,ESI
/* 0e8088a8 */  CALL 0x0eec74c0
/* 0e8088ad */  JMP 0x0e80773c
/* 0e8088b2 */  MOV EDI,0x8
/* 0e8088b7 */  XOR ESI,ESI
/* 0e8088b9 */  CALL 0x0eec74c0
/* 0e8088be */  JMP 0x0e807952
/* 0e8088c3 */  MOV EDI,0x8
/* 0e8088c8 */  XOR ESI,ESI
/* 0e8088ca */  CALL 0x0eec74c0
/* 0e8088cf */  JMP 0x0e807b7c
/* 0e8088d4 */  MOV EDI,0x20
/* 0e8088d9 */  XOR ESI,ESI
/* 0e8088db */  CALL 0x0eec74c0
/* 0e8088e0 */  JMP 0x0e807bb5
/* 0e8088e5 */  MOV EDI,0x20
/* 0e8088ea */  XOR ESI,ESI
/* 0e8088ec */  CALL 0x0eec74c0
/* 0e8088f1 */  JMP 0x0e807c0b
/* 0e8088f6 */  MOV EDI,0x8
/* 0e8088fb */  XOR ESI,ESI
/* 0e8088fd */  CALL 0x0eec74c0
/* 0e808902 */  JMP 0x0e807e15
/* 0e808907 */  MOV EDI,0x8
/* 0e80890c */  XOR ESI,ESI
/* 0e80890e */  CALL 0x0eec74c0
/* 0e808913 */  JMP 0x0e808042
/* 0e808918 */  MOV EDI,0x8
/* 0e80891d */  XOR ESI,ESI
/* 0e80891f */  CALL 0x0eec74c0
/* 0e808924 */  JMP 0x0e80826c
/* 0e808929 */  MOV EDI,0x20
/* 0e80892e */  XOR ESI,ESI
/* 0e808930 */  CALL 0x0eec74c0
/* 0e808935 */  JMP 0x0e8082a5
/* 0e80893a */  MOV EDI,0x20
/* 0e80893f */  XOR ESI,ESI
/* 0e808941 */  CALL 0x0eec74c0
/* 0e808946 */  JMP 0x0e8082fc
/* 0e80894b */  MOV EDI,0x8
/* 0e808950 */  XOR ESI,ESI
/* 0e808952 */  CALL 0x0eec74c0
/* 0e808957 */  JMP 0x0e80850e
/* 0e80895c */  MOV EDI,0x20
/* 0e808961 */  XOR ESI,ESI
/* 0e808963 */  CALL 0x0eec74c0
/* 0e808968 */  JMP 0x0e808547
/* 0e80896d */  MOV EDI,0x20
/* 0e808972 */  XOR ESI,ESI
/* 0e808974 */  CALL 0x0eec74c0
/* 0e808979 */  JMP 0x0e80859b
/* 0e80897e */  MOV EDI,0x20
/* 0e808983 */  XOR ESI,ESI
/* 0e808985 */  CALL 0x0eec74c0
/* 0e80898a */  JMP 0x0e80659c
/* 0e80898f */  LEA RDI,[0xf7490c0]
/* 0e808996 */  CALL 0x04108328
/* 0e80899b */  TEST EAX,EAX
/* 0e80899d */  JZ 0x0e8067da
/* 0e8089a3 */  LEA RDI,[0xf7490a8]
/* 0e8089aa */  CALL 0x0e163b50
/* 0e8089af */  LEA RDI,[0xf7490c0]
/* 0e8089b6 */  CALL 0x0410844d
/* 0e8089bb */  JMP 0x0e8067da
/* 0e8089c0 */  LEA RDI,[0xf7490c0]
/* 0e8089c7 */  CALL 0x04108328
/* 0e8089cc */  TEST EAX,EAX
/* 0e8089ce */  JZ 0x0e806a99
/* 0e8089d4 */  LEA RDI,[0xf7490a8]
/* 0e8089db */  CALL 0x0e163b50
/* 0e8089e0 */  LEA RDI,[0xf7490c0]
/* 0e8089e7 */  CALL 0x0410844d
/* 0e8089ec */  JMP 0x0e806a99
/* 0e8089f1 */  LEA RDI,[0xf7490c0]
/* 0e8089f8 */  CALL 0x04108328
/* 0e8089fd */  TEST EAX,EAX
/* 0e8089ff */  JZ 0x0e806d3b
/* 0e808a05 */  LEA RDI,[0xf7490a8]
/* 0e808a0c */  CALL 0x0e163b50
/* 0e808a11 */  LEA RDI,[0xf7490c0]
/* 0e808a18 */  CALL 0x0410844d
/* 0e808a1d */  JMP 0x0e806d3b
/* 0e808a22 */  LEA RDI,[0xf7490c0]
/* 0e808a29 */  CALL 0x04108328
/* 0e808a2e */  TEST EAX,EAX
/* 0e808a30 */  JZ 0x0e806fec
/* 0e808a36 */  LEA RDI,[0xf7490a8]
/* 0e808a3d */  CALL 0x0e163b50
/* 0e808a42 */  LEA RDI,[0xf7490c0]
/* 0e808a49 */  CALL 0x0410844d
/* 0e808a4e */  JMP 0x0e806fec
/* 0e808a53 */  LEA RDI,[0xf7490c0]
/* 0e808a5a */  CALL 0x04108328
/* 0e808a5f */  TEST EAX,EAX
/* 0e808a61 */  JZ 0x0e80729c
/* 0e808a67 */  LEA RDI,[0xf7490a8]
/* 0e808a6e */  CALL 0x0e163b50
/* 0e808a73 */  LEA RDI,[0xf7490c0]
/* 0e808a7a */  CALL 0x0410844d
/* 0e808a7f */  JMP 0x0e80729c
/* 0e808a84 */  LEA RDI,[0xf7490c0]
/* 0e808a8b */  CALL 0x04108328
/* 0e808a90 */  TEST EAX,EAX
/* 0e808a92 */  JZ 0x0e80753e
/* 0e808a98 */  LEA RDI,[0xf7490a8]
/* 0e808a9f */  CALL 0x0e163b50
/* 0e808aa4 */  LEA RDI,[0xf7490c0]
/* 0e808aab */  CALL 0x0410844d
/* 0e808ab0 */  JMP 0x0e80753e
/* 0e808ab5 */  LEA RDI,[0xf7490c0]
/* 0e808abc */  CALL 0x04108328
/* 0e808ac1 */  TEST EAX,EAX
/* 0e808ac3 */  JZ 0x0e8077ef
/* 0e808ac9 */  LEA RDI,[0xf7490a8]
/* 0e808ad0 */  CALL 0x0e163b50
/* 0e808ad5 */  LEA RDI,[0xf7490c0]
/* 0e808adc */  CALL 0x0410844d
/* 0e808ae1 */  JMP 0x0e8077ef
/* 0e808ae6 */  LEA RDI,[0xf7490c0]
/* 0e808aed */  CALL 0x04108328
/* 0e808af2 */  TEST EAX,EAX
/* 0e808af4 */  JZ 0x0e807a19
/* 0e808afa */  LEA RDI,[0xf7490a8]
/* 0e808b01 */  CALL 0x0e163b50
/* 0e808b06 */  LEA RDI,[0xf7490c0]
/* 0e808b0d */  CALL 0x0410844d
/* 0e808b12 */  JMP 0x0e807a19
/* 0e808b17 */  LEA RDI,[0xf7490c0]
/* 0e808b1e */  CALL 0x04108328
/* 0e808b23 */  TEST EAX,EAX
/* 0e808b25 */  JZ 0x0e807cb2
/* 0e808b2b */  LEA RDI,[0xf7490a8]
/* 0e808b32 */  CALL 0x0e163b50
/* 0e808b37 */  LEA RDI,[0xf7490c0]
/* 0e808b3e */  CALL 0x0410844d
/* 0e808b43 */  JMP 0x0e807cb2
/* 0e808b48 */  LEA RDI,[0xf7490c0]
/* 0e808b4f */  CALL 0x04108328
/* 0e808b54 */  TEST EAX,EAX
/* 0e808b56 */  JZ 0x0e807edf
/* 0e808b5c */  LEA RDI,[0xf7490a8]
/* 0e808b63 */  CALL 0x0e163b50
/* 0e808b68 */  LEA RDI,[0xf7490c0]
/* 0e808b6f */  CALL 0x0410844d
/* 0e808b74 */  JMP 0x0e807edf
/* 0e808b79 */  LEA RDI,[0xf7490c0]
/* 0e808b80 */  CALL 0x04108328
/* 0e808b85 */  TEST EAX,EAX
/* 0e808b87 */  JZ 0x0e808109
/* 0e808b8d */  LEA RDI,[0xf7490a8]
/* 0e808b94 */  CALL 0x0e163b50
/* 0e808b99 */  LEA RDI,[0xf7490c0]
/* 0e808ba0 */  CALL 0x0410844d
/* 0e808ba5 */  JMP 0x0e808109
/* 0e808baa */  LEA RDI,[0xf7490c0]
/* 0e808bb1 */  CALL 0x04108328
/* 0e808bb6 */  TEST EAX,EAX
/* 0e808bb8 */  JZ 0x0e8083ab
/* 0e808bbe */  LEA RDI,[0xf7490a8]
/* 0e808bc5 */  CALL 0x0e163b50
/* 0e808bca */  LEA RDI,[0xf7490c0]
/* 0e808bd1 */  CALL 0x0410844d
/* 0e808bd6 */  JMP 0x0e8083ab
/* 0e808bdb */  LEA RDI,[0xf7490c0]
/* 0e808be2 */  CALL 0x04108328
/* 0e808be7 */  TEST EAX,EAX
/* 0e808be9 */  JZ 0x0e808647
/* 0e808bef */  LEA RDI,[0xf7490a8]
/* 0e808bf6 */  CALL 0x0e163b50
/* 0e808bfb */  LEA RDI,[0xf7490c0]
/* 0e808c02 */  CALL 0x0410844d
/* 0e808c07 */  JMP 0x0e808647
/* 0e808c0c */  LEA RDI,[0xf550ad8]
/* 0e808c13 */  MOV R15,RAX
/* 0e808c16 */  CALL 0x04108328
/* 0e808c1b */  MOV ECX,EAX
/* 0e808c1d */  MOV RAX,R15
/* 0e808c20 */  TEST ECX,ECX
/* 0e808c22 */  JZ 0x0e80649d
/* 0e808c28 */  LEA RDI,[0xf550ac0]
/* 0e808c2f */  CALL 0x0488e120
/* 0e808c34 */  LEA RDI,[0xf550ad8]
/* 0e808c3b */  CALL 0x0410844d
/* 0e808c40 */  MOV RAX,R15
/* 0e808c43 */  JMP 0x0e80649d
