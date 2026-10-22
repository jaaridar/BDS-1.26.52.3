/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe806340 (ELF vaddr 0xe706340)
 * Label: string:minecraft:climate
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
      func_0x0410844d(&DAT_0f550ad8);
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
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(8,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdc00;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
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
    FUN_0eec74c0(0x28,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdc88;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(0x20,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdd10;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
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
    FUN_0eec74c0(0x28,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdd98;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
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
    FUN_0eec74c0(0x28,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cde70;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(0x20,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4cdef8;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
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
    FUN_0eec74c0(0x28,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce048;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(0x20,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce1f0;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(0x20,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
    FUN_0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4ce278;
  auStack_1a8._8_8_ = 0;
  auStack_1a8._0_8_ = puVar13;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
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
    FUN_0eec74c0(0x20,0);
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
  func_0x048afb10(auStack_168,8);
  auStack_110 = (undefined1  [16])0x0;
  auStack_120 = (undefined1  [16])0x0;
  auStack_130 = (undefined1  [16])0x0;
  uStack_100 = 0xff00;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if ((DAT_0f7490c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7490c0), iVar6 != 0)) {
    func_0x0e163b50(0xf7490a8);
    func_0x0410844d(&DAT_0f7490c0);
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
