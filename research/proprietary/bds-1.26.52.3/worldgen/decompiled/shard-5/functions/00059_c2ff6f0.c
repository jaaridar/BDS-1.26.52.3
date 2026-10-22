/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc3ff6f0 (ELF vaddr 0xc2ff6f0)
 * Label: caller-of-callee
 * Body:  [[0c3ff6f0, 0c3ffc4d] [0c3ffc50, 0c3ffc92] [0c3ffca0, 0c400751] [0c400760, 0c400880] [0c400890, 0c400c1c]]
 * Ghidra: FUN_0c3ff6f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c3ff6f0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  int *piVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_248 [8];
  long *plStack_240;
  ulong uStack_238;
  code *pcStack_230;
  code *pcStack_228;
  undefined4 uStack_220;
  char cStack_21c;
  char cStack_218;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  char cStack_1f0;
  undefined1 auStack_1e8 [16];
  ulong uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined2 uStack_197;
  undefined1 uStack_195;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  long lStack_180;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  uint uStack_110;
  undefined4 uStack_10c;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong auStack_90 [2];
  undefined *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar17 = _UNK_013007f6;
  puVar11[0xc] = _DAT_013007ee;
  puVar11[0xd] = uVar17;
  uVar17 = _UNK_013007e6;
  puVar11[10] = _DAT_013007de;
  puVar11[0xb] = uVar17;
  uVar17 = _UNK_013007d6;
  puVar11[8] = _DAT_013007ce;
  puVar11[9] = uVar17;
  uVar17 = _UNK_013007c6;
  puVar11[6] = _DAT_013007be;
  puVar11[7] = uVar17;
  uVar17 = _UNK_013007b6;
  puVar11[4] = _DAT_013007ae;
  puVar11[5] = uVar17;
  uVar17 = _UNK_013007a6;
  puVar11[2] = _DAT_0130079e;
  puVar11[3] = uVar17;
  uVar17 = _UNK_01300796;
  *puVar11 = _DAT_0130078e;
  puVar11[1] = uVar17;
  puVar11[0xe] = 0x2e746e656e6f706d;
  *(undefined1 *)(puVar11 + 0xf) = 0;
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f0 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_208 = *param_3;
    uStack_200 = 0;
    uVar19 = param_3[1];
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar14 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar14;
      func_0x0eee2f00(plVar12 + 1,uVar19 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar12 + lVar14 + 8) = 0;
      uVar19 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f8 = 0;
    uVar20 = param_3[2];
    uStack_200 = uVar19;
    if ((uVar20 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar14 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar14;
      func_0x0eee2f00(plVar12 + 1,uVar20 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar12 + lVar14 + 8) = 0;
      uVar20 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1f0 = '\x01';
    uStack_1f8 = uVar20;
  }
  lVar13 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar23 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar14 = lVar13 + 9;
    if (bVar23) {
      lVar14 = *(long *)(lVar13 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar23) {
      uVar19 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0c069d90(auStack_248,param_1,lVar14,uVar19,1);
  }
  else {
    func_0x0c069d90(auStack_248,param_1,0,0,1);
  }
  if (cStack_218 == '\0') {
    uStack_100._4_4_ = (uint)((ulong)uStack_100 >> 0x20);
    if ((DAT_0f6e1918 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6e1918), iVar9 != 0)) {
      func_0x0ee25020(0xf6e18f0,&DAT_01489c47);
      func_0x0eee2f40(&UNK_048c16a0,0xf6e18f0,0xf53dab8);
      FUN_0410844d(&DAT_0f6e1918);
    }
    uVar19 = (ulong)(DAT_0f6e18f8 >> 1);
    lVar13 = 0xf6e18f9;
    if ((DAT_0f6e18f8 & 1) != 0) {
      uVar19 = _DAT_0f6e1900;
      lVar13 = _DAT_0f6e1908;
    }
    func_0x0c06a780(auStack_1e8,auStack_248,lVar13,uVar19,0);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f368298;
    uVar17 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar21;
    if ((long *)uVar17 != (long *)0x0) {
      (**(code **)(*(long *)uVar17 + 8))();
    }
    uStack_110 = (uint)uStack_1d8;
    plStack_108 = (long *)0x0;
    uStack_100 = (long *)((ulong)uStack_100._4_4_ << 0x20);
    uStack_f8 = 1;
    uStack_f0 = 0;
    uStack_e8 = &UNK_0c41d590;
    puStack_e0 = &SUB_048b06d0;
    puStack_d8 = &UNK_0c41d2b0;
    puStack_d0 = &UNK_0c41d650;
    puStack_c8 = &UNK_0c41d8f0;
    uStack_c0 = 0;
    auStack_b8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_110);
    uVar17 = auStack_b8._8_8_;
    if ((long *)auStack_b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_b8._8_8_ + 8);
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*(long *)auStack_b8._8_8_ + 0x10))(auStack_b8._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    iVar9 = *(int *)(auStack_1e8._8_8_ + 0x1c);
    if (iVar9 == 2) {
      piVar16 = *(int **)(*(long *)(*(long *)(auStack_1e8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar9 = *piVar16;
      while (iVar9 != *(int *)(auStack_1e8._8_8_ + 0x18)) {
        piVar16 = piVar16 + 0x16;
        iVar9 = *piVar16;
      }
      lVar13 = *(long *)(piVar16 + 0xc);
      while (lVar13 != *(long *)(auStack_1e8._8_8_ + 8)) {
        piVar16 = *(int **)(piVar16 + 0xe);
        lVar13 = *(long *)(piVar16 + 0xc);
      }
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar16 = *(int **)(*(long *)(*(long *)(auStack_1e8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar9 = *piVar16;
      while (iVar9 != *(int *)(auStack_1e8._8_8_ + 0x18)) {
        piVar16 = piVar16 + 0x1a;
        iVar9 = *piVar16;
      }
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1e8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(auStack_1e8);
    func_0x048b0bc0(auStack_1d0);
  }
  if ((DAT_0f6e1918 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6e1918), iVar9 != 0)) {
    func_0x0ee25020(0xf6e18f0,&DAT_01489c47);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e18f0,0xf53dab8);
    FUN_0410844d(&DAT_0f6e1918);
  }
  uVar19 = (ulong)(DAT_0f6e18f8 >> 1);
  lVar13 = 0xf6e18f9;
  if ((DAT_0f6e18f8 & 1) != 0) {
    uVar19 = _DAT_0f6e1900;
    lVar13 = _DAT_0f6e1908;
  }
  lVar14 = func_0x0c24cb00(param_1 + 0x18);
  if ((*(int *)(lVar14 + 0x60) == -0x2b3da790) && (lVar14 = *(long *)(lVar14 + 0x68), lVar14 != 0))
  {
    bVar23 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar23) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar23) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
  }
  func_0x0c41dd40(&uStack_110,param_1,lVar13,uVar19);
  lVar14 = CONCAT44(uStack_10c,uStack_110) + 0x18;
  lVar13 = func_0x0c24cb00(lVar14);
  pbVar4 = *(byte **)(CONCAT44(uStack_10c,uStack_110) + 0x58);
  for (pbVar18 = *(byte **)(CONCAT44(uStack_10c,uStack_110) + 0x50); pbVar18 != pbVar4;
      pbVar18 = pbVar18 + 0x38) {
    bVar3 = *pbVar18;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c3ffcaa;
    }
    else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0c3ffcaa:
      if ((bVar3 & 1) == 0) {
        pbVar22 = pbVar18 + 1;
      }
      else {
        pbVar22 = *(byte **)(pbVar18 + 0x10);
      }
      auVar24[0] = -(*pbVar22 == DAT_014eaba0);
      auVar24[1] = -(pbVar22[1] == DAT_014eaba0._1_1_);
      auVar24[2] = -(pbVar22[2] == DAT_014eaba0._2_1_);
      auVar24[3] = -(pbVar22[3] == DAT_014eaba0._3_1_);
      auVar24[4] = -(pbVar22[4] == DAT_014eaba0._4_1_);
      auVar24[5] = -(pbVar22[5] == DAT_014eaba0._5_1_);
      auVar24[6] = -(pbVar22[6] == DAT_014eaba0._6_1_);
      auVar24[7] = -(pbVar22[7] == DAT_014eaba0._7_1_);
      auVar24[8] = -(pbVar22[8] == DAT_014eaba0._8_1_);
      auVar24[9] = -(pbVar22[9] == DAT_014eaba0._9_1_);
      auVar24[10] = -(pbVar22[10] == DAT_014eaba0._10_1_);
      auVar24[0xb] = -(pbVar22[0xb] == DAT_014eaba0._11_1_);
      auVar24[0xc] = -(pbVar22[0xc] == DAT_014eaba0._12_1_);
      auVar24[0xd] = -(pbVar22[0xd] == DAT_014eaba0._13_1_);
      auVar24[0xe] = -(pbVar22[0xe] == DAT_014eaba0._14_1_);
      auVar24[0xf] = -(pbVar22[0xf] == DAT_014eaba0._15_1_);
      auVar25[0] = -(pbVar22[10] == DAT_014e4ff0);
      auVar25[1] = -(pbVar22[0xb] == DAT_014e4ff0._1_1_);
      auVar25[2] = -(pbVar22[0xc] == DAT_014e4ff0._2_1_);
      auVar25[3] = -(pbVar22[0xd] == DAT_014e4ff0._3_1_);
      auVar25[4] = -(pbVar22[0xe] == DAT_014e4ff0._4_1_);
      auVar25[5] = -(pbVar22[0xf] == DAT_014e4ff0._5_1_);
      auVar25[6] = -(pbVar22[0x10] == DAT_014e4ff0._6_1_);
      auVar25[7] = -(pbVar22[0x11] == DAT_014e4ff0._7_1_);
      auVar25[8] = -(pbVar22[0x12] == DAT_014e4ff0._8_1_);
      auVar25[9] = -(pbVar22[0x13] == DAT_014e4ff0._9_1_);
      auVar25[10] = -(pbVar22[0x14] == DAT_014e4ff0._10_1_);
      auVar25[0xb] = -(pbVar22[0x15] == DAT_014e4ff0._11_1_);
      auVar25[0xc] = -(pbVar22[0x16] == DAT_014e4ff0._12_1_);
      auVar25[0xd] = -(pbVar22[0x17] == DAT_014e4ff0._13_1_);
      auVar25[0xe] = -(pbVar22[0x18] == DAT_014e4ff0._14_1_);
      auVar25[0xf] = -(pbVar22[0x19] == DAT_014e4ff0._15_1_);
      auVar25 = auVar25 & auVar24;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar18 == pbVar4) {
LAB_0c3ffcd9:
    if ((int)uStack_e8 == 0) {
      if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
      goto LAB_0c3ffd4d;
      lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
    }
    else {
      auStack_248 = (undefined1  [8])func_0x048b0c90(lVar14,lVar13,uStack_e8._4_4_,1);
      if (auStack_248 == (undefined1  [8])0x0) {
        _auStack_248 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_248);
        if (auStack_248 == (undefined1  [8])0x0) goto LAB_0c3ffd4d;
      }
      if ((*(int *)((long)auStack_248 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_248 + 0x58) != 0)) {
        lVar13 = *(long *)((long)auStack_248 + 0x58) + 0x40;
      }
      else {
LAB_0c3ffd4d:
        lVar13 = 0;
      }
    }
    puStack_80 = &UNK_0488e0b0;
    uStack_70 = 0x48b5725f;
    pcStack_78 = (code *)0x0;
    uStack_6c = 0;
    auStack_90[0] = 0;
    _auStack_248 = (undefined1  [16])0x0;
    pcStack_230 = (code *)&UNK_0488e0b0;
    pcStack_228 = (code *)0x0;
    uStack_220 = 0x48b5725f;
    cStack_21c = '\0';
    puStack_98 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_98 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar17 = _UNK_013bbadf;
    uStack_a8 = 0x21;
    uStack_a0 = 0x1a;
    *(ulong *)((long)puStack_98 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_98 + 0x12) = uVar17;
    uVar17 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_98 = _DAT_013bbacd;
    puStack_98[1] = uVar17;
    *(undefined1 *)((long)puStack_98 + 0x1a) = 0;
    lVar13 = func_0x048b5060(lVar13,&uStack_a8);
    *(undefined8 *)(lVar13 + 0x20) = 0;
    if ((undefined1 *)(lVar13 + 0x20) == auStack_248) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar13 + 0x40) != (code *)0x0) {
        puVar21 = (undefined8 *)(lVar13 + 0x28);
        (**(code **)(lVar13 + 0x40))(puVar21);
        if (cStack_21c != '\0') {
          if (cStack_21c == '\x02') {
            (*pcStack_230)(5,&plStack_240,puVar21);
          }
          else {
            plVar12 = plStack_240;
            plStack_240 = (long *)0x0;
            *puVar21 = plVar12;
          }
        }
      }
      *(code **)(lVar13 + 0x38) = pcStack_230;
      *(code **)(lVar13 + 0x40) = pcStack_228;
      *(undefined4 *)(lVar13 + 0x48) = uStack_220;
      *(char *)(lVar13 + 0x4c) = cStack_21c;
      pcVar15 = pcStack_228;
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x0412a280(puStack_98,uStack_a8 & 0xfffffffffffffffe);
      pcVar15 = pcStack_228;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(&plStack_240);
    }
    if (pcStack_78 != (code *)0x0) {
      (*pcStack_78)(auStack_90);
    }
  }
  else {
    iVar9 = *(int *)(pbVar18 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0c3ffcd9;
  }
  auStack_1e8._0_8_ = CONCAT44(uStack_10c,uStack_110);
  auStack_1c0._0_8_ = uStack_e8;
  auStack_1c0._8_8_ = puStack_e0;
  uStack_1d8 = (ulong)uStack_100;
  auStack_1d0._8_8_ = uStack_f0;
  auStack_1d0._0_8_ = uStack_f8;
  auStack_1e8._8_8_ = plStack_108;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffdb9;
  _auStack_248 = auVar5 << 8;
  pcStack_230 = (code *)((ulong)pcStack_230 & 0xffffffffffffff00);
  if (cStack_1f0 == '\x01') {
    plStack_240 = (long *)0x0;
    auStack_248 = (undefined1  [8])uStack_208;
    auVar24 = _auStack_248;
    plStack_240 = (long *)uStack_200;
    if ((uStack_200 & 0x80000000000000) != 0) {
      uVar19 = uStack_200 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar19 - 8);
      lVar13 = lVar14 + 9;
      _auStack_248 = auVar24;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar14;
      func_0x0eee2f00(plVar12 + 1,uVar19,lVar14);
      *(undefined1 *)((long)plVar12 + lVar14 + 8) = 0;
      plStack_240 = (long *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_238 = 0;
    uVar19 = uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar19 = uStack_1f8 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar19 - 8);
      lVar13 = lVar14 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar12 = lVar14;
      func_0x0eee2f00(plVar12 + 1,uVar19,lVar14);
      *(undefined1 *)((long)plVar12 + lVar14 + 8) = 0;
      uVar19 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_230 = (code *)CONCAT71(pcStack_230._1_7_,1);
    uStack_238 = uVar19;
  }
  func_0x0412e5e0(auStack_90,puVar11,0x78);
  lStack_68 = auStack_1e8._0_8_;
  lStack_60 = auStack_1e8._8_8_;
  uStack_58 = uStack_1d8;
  uStack_50 = auStack_1d0._0_8_;
  uStack_48 = auStack_1d0._8_8_;
  uStack_40 = (undefined *)auStack_1c0._0_8_;
  puStack_38 = (undefined1 *)auStack_1c0._8_8_;
  if ((auStack_90[0] & 1) != 0) {
    func_0x0412a280(puStack_80,auStack_90[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_230 == '\x01') {
    if ((uStack_238 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
    }
    uStack_238 = 0;
    if (((ulong)plStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_240 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c41e280(auStack_1e8,lStack_68 + 0x18);
  if (auStack_1d0._4_4_ == 2) {
    piVar16 = *(int **)(*(long *)(uStack_1d8 + 0x78) + 0x60);
    iVar9 = *piVar16;
    while (iVar9 != auStack_1d0._0_4_) {
      piVar16 = piVar16 + 0x16;
      iVar9 = *piVar16;
    }
    lVar13 = *(long *)(piVar16 + 0xc);
    while (lVar13 != auStack_1e8._8_8_) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar13 = *(long *)(piVar16 + 0xc);
    }
LAB_0c4001cf:
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else {
    if (auStack_1d0._4_4_ == 1) {
      piVar16 = *(int **)(*(long *)(uStack_1d8 + 0x78) + 0x48);
      iVar9 = *piVar16;
      while (iVar9 != auStack_1d0._0_4_) {
        piVar16 = piVar16 + 0x1a;
        iVar9 = *piVar16;
      }
      goto LAB_0c4001cf;
    }
    if (auStack_1d0._4_4_ == 0) {
      *(uint *)(uStack_1d8 + 0x18) = *(uint *)(uStack_1d8 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f6dd1b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6dd1b0), iVar9 != 0)) {
    func_0x0c24ca90(0xf6dd198);
    FUN_0410844d(&DAT_0f6dd1b0);
  }
  uStack_40 = (undefined *)0x1d01080300000001;
  lVar13 = lStack_68 + 0x18;
  auStack_1e8._0_8_ = func_0x0c24cb00(lVar13);
  auStack_1e8._8_8_ = lVar13;
  func_0x0ed621a0(auStack_1e8,uStack_40._4_4_);
  auStack_1e8._0_2_ = 0x10;
  auStack_1e8._8_8_ = &lStack_60;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uStack_40._4_4_);
  auStack_1d0 = ZEXT816(0);
  auStack_1c0 = ZEXT816(0);
  lStack_1b0 = 0;
  uStack_1a8 = 0x24;
  uStack_1a7 = (undefined7)_DAT_012e7e4e;
  uStack_1a0 = (undefined1)((ulong)_DAT_012e7e4e >> 0x38);
  uStack_19f = (undefined7)_UNK_012e7e56;
  uStack_198 = (undefined1)((ulong)_UNK_012e7e56 >> 0x38);
  uStack_197 = 0x7374;
  uStack_195 = 0;
  auStack_190 = ZEXT816(0);
  lStack_180 = 0;
  auStack_178 = ZEXT816(0);
  lStack_168 = 0;
  uStack_160 = 0x3f600000;
  FUN_048afb10(auStack_190,8);
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  auStack_158 = (undefined1  [16])0x0;
  uStack_128 = 0xff00;
  uStack_124 = uStack_124 & 0xffffff00;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_11c = 0;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0ef46ce8;
  uVar17 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar21;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  uStack_110 = (uint)uStack_1d8;
  plStack_108 = (long *)0x0;
  uStack_100 = (long *)((ulong)uStack_100 & 0xffffffff00000000);
  uStack_f8 = 1;
  uStack_f0 = 0;
  uStack_e8 = &UNK_0490ce30;
  puStack_e0 = &SUB_048b06d0;
  puStack_d8 = &SUB_0490cb20;
  puStack_d0 = &UNK_0c41e640;
  puStack_c8 = &UNK_0c41e7a0;
  uStack_c0 = 0;
  auStack_b8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_110);
  uVar17 = auStack_b8._8_8_;
  if ((long *)auStack_b8._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_b8._8_8_ + 8);
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*(long *)auStack_b8._8_8_ + 0x10))(auStack_b8._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  uVar17 = auStack_1e8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  uStack_110 = _DAT_0f550a0c;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar12 + 1) = (undefined1  [16])0x0;
  *plVar12 = (long)&UNK_0ef439d0;
  plStack_108 = plVar12 + 3;
  uVar6 = auStack_1d0._0_8_;
  uVar7 = auStack_1d0._8_8_;
  auStack_1d0 = (undefined1  [16])0x0;
  plVar12[3] = uVar6;
  plVar12[4] = uVar7;
  plVar12[7] = lStack_1b0;
  plVar12[5] = auStack_1c0._0_8_;
  plVar12[6] = auStack_1c0._8_8_;
  auStack_1c0 = (undefined1  [16])0x0;
  lStack_1b0 = 0;
  plVar12[10] = CONCAT44(uStack_194,CONCAT13(uStack_195,CONCAT21(uStack_197,uStack_198)));
  plVar12[8] = CONCAT71(uStack_1a7,uStack_1a8);
  plVar12[9] = CONCAT71(uStack_19f,uStack_1a0);
  uStack_1a8 = 0;
  uStack_1a7 = 0;
  uStack_1a0 = 0;
  uStack_19f = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  plVar12[0xb] = auStack_190._0_8_;
  plVar12[0xc] = auStack_190._8_8_;
  plVar12[0xd] = lStack_180;
  auStack_190 = (undefined1  [16])0x0;
  lStack_180 = 0;
  plVar12[0xe] = auStack_178._0_8_;
  plVar12[0xf] = auStack_178._8_8_;
  plVar12[0x10] = lStack_168;
  auStack_178 = (undefined1  [16])0x0;
  lStack_168 = 0;
  *(undefined4 *)(plVar12 + 0x11) = uStack_160;
  plVar12[0x12] = auStack_158._0_8_;
  plVar12[0x13] = auStack_158._8_8_;
  plVar12[0x14] = lStack_148;
  auStack_158 = (undefined1  [16])0x0;
  lStack_148 = 0;
  plVar12[0x17] = lStack_130;
  plVar12[0x15] = lStack_140;
  plVar12[0x16] = lStack_138;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
  plVar12[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
  _auStack_248 = (undefined1  [16])0x0;
  uStack_100 = plVar12;
  func_0x048afd20(uVar17,&uStack_110);
  plVar12 = uStack_100;
  if (uStack_100 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_100 + 1;
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_100 + 0x10))(uStack_100);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_240 + 1;
    lVar13 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar12);
    }
  }
  lVar14 = lStack_68;
  lVar13 = *(long *)(uVar17 + 0x10);
  iVar9 = *(int *)(uVar17 + 0x1c);
  if (iVar9 == 2) {
    piVar16 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar9 = *piVar16;
    while (iVar9 != *(int *)(uVar17 + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar9 = *piVar16;
    }
    for (; *(long *)(piVar16 + 0xc) != *(long *)(uVar17 + 8); piVar16 = *(int **)(piVar16 + 0xe)) {
    }
LAB_0c40076a:
    piVar16[4] = piVar16[4] | auStack_1e8._0_4_ << 0x10;
  }
  else {
    if (iVar9 == 1) {
      piVar16 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
      iVar9 = *piVar16;
      while (iVar9 != *(int *)(uVar17 + 0x18)) {
        piVar16 = piVar16 + 0x1a;
        iVar9 = *piVar16;
      }
      goto LAB_0c40076a;
    }
    if (iVar9 == 0) {
      *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | auStack_1e8._0_4_ << 0x10;
    }
  }
  iVar9 = (int)uStack_40;
  uVar8 = uStack_40._4_4_;
  func_0x048b0bc0(auStack_1d0);
  if (iVar9 == 4) {
    lVar14 = lVar14 + 0x18;
    uVar17 = func_0x0c24cb00(lVar14);
    lVar13 = FUN_048b1040(lVar14,uVar17,uVar8,1);
    if (lVar13 == 0) {
      auStack_1e8 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_1e8);
      lVar14 = *(long *)(auStack_1e8._0_8_ + 0x38);
      lVar13 = auStack_1e8._0_8_;
      if (lVar14 == 0) goto LAB_0c40085c;
LAB_0c40087a:
      do {
        lVar13 = lVar14;
        lVar14 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_1e8);
          lVar14 = auStack_1e8._0_8_;
        }
      } while (lVar14 != 0);
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) != 0) goto LAB_0c40087a;
LAB_0c40085c:
      auStack_1e8 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_1e8);
      lVar14 = auStack_1e8._0_8_;
      if (auStack_1e8._0_8_ != 0) goto LAB_0c40087a;
    }
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar9 != 1) goto LAB_0c40092a;
    lVar14 = lVar14 + 0x18;
    uVar17 = func_0x0c24cb00(lVar14);
    lVar13 = func_0x048b0c90(lVar14,uVar17,uVar8,1);
    if (lVar13 == 0) {
      auStack_1e8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1e8);
      lVar13 = auStack_1e8._0_8_;
    }
    lVar13 = *(long *)(lVar13 + 0x58);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar21[1] = 0xffffffffffffffff;
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 0xff;
  *puVar21 = &UNK_0f0edc68;
  uVar17 = _UNK_014e24c8;
  puVar21[4] = _DAT_014e24c0;
  puVar21[5] = uVar17;
  *(undefined1 (*) [16])(puVar21 + 6) = (undefined1  [16])0x0;
  plVar12 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar21;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
LAB_0c40092a:
  auStack_1e8._0_4_ = 1;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x40);
  auStack_1d0._8_4_ = 0xc;
  func_0x0470d9a0(&uStack_110,&UNK_011fe6b3,0x66,0x111,auStack_1e8);
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,CONCAT44(uStack_10c,uStack_110) & 0xfffffffffffffffe);
  }
  if (cStack_1f0 == '\x01') {
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f8 = 0;
    if ((uStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    uStack_200 = 0;
  }
  func_0x0412a280(puVar11,0x80);
  return;
}



/* ---- referenced strings ----
 * 0x12e7e4e  num_viewable_slots
 * 0x130078e  [EXPERIMENTAL] Adds bundle-specific interactions and tooltip to the item. Requires a "minecraft:
 * 0x130079e  dds bundle-specific interactions and tooltip to the item. Requires a "minecraft:storage_item" co
 * 0x13007ae  fic interactions and tooltip to the item. Requires a "minecraft:storage_item" component.
 * 0x13007be   and tooltip to the item. Requires a "minecraft:storage_item" component.
 * 0x13007ce  the item. Requires a "minecraft:storage_item" component.
 * 0x13007de  es a "minecraft:storage_item" component.
 * 0x13007ee  storage_item" component.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
