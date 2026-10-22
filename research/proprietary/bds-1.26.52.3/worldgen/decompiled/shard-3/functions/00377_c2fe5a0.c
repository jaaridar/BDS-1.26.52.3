/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc3fe5a0 (ELF vaddr 0xc2fe5a0)
 * Label: caller-of-callee
 * Body:  [[0c3fe5a0, 0c3fec01] [0c3fec10, 0c3ff2bd]]
 * Ghidra: FUN_0c3fe5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c3fe5a0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined *puVar11;
  byte *pbVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [16];
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  ulong auStack_138 [2];
  undefined *puStack_128;
  code *pcStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  char cStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long *aplStack_e8 [2];
  int iStack_d8;
  undefined4 uStack_d4;
  
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  uVar3 = _UNK_011adfb7;
  *(ulong *)((long)puVar8 + 0x49) = CONCAT17(UNK_011adfb6,_DAT_011adfaf);
  *(undefined8 *)((long)puVar8 + 0x51) = uVar3;
  uVar3 = CONCAT71(_DAT_011adfaf,UNK_011adfae);
  puVar8[8] = _DAT_011adfa6;
  puVar8[9] = uVar3;
  uVar3 = _UNK_011adf9e;
  puVar8[6] = _DAT_011adf96;
  puVar8[7] = uVar3;
  uVar3 = _UNK_011adf8e;
  puVar8[4] = _DAT_011adf86;
  puVar8[5] = uVar3;
  uVar3 = _UNK_011adf7e;
  puVar8[2] = _DAT_011adf76;
  puVar8[3] = uVar3;
  uVar3 = _UNK_011adf6e;
  *puVar8 = _DAT_011adf66;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x59) = 0;
  uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
  bVar5 = false;
  if ((char)param_3[3] == '\x01') {
    uStack_1d8 = *param_3;
    uStack_1d0 = param_3[1];
    if ((uStack_1d0 & 0x80000000000000) != 0) {
      lVar15 = *(long *)((uStack_1d0 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar15 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar14 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar14 = lVar15;
      func_0x0eee2f00(plVar14 + 1,uStack_1d0 & 0xff00ffffffffffff,lVar15);
      *(undefined1 *)((long)plVar14 + lVar15 + 8) = 0;
      uStack_1d0 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1c8 = param_3[2];
    if ((uStack_1c8 & 0x80000000000000) != 0) {
      lVar15 = *(long *)((uStack_1c8 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar15 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar14 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar14 = lVar15;
      func_0x0eee2f00(plVar14 + 1,uStack_1c8 & 0xff00ffffffffffff,lVar15);
      *(undefined1 *)((long)plVar14 + lVar15 + 8) = 0;
      uStack_1c8 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    bVar5 = true;
  }
  lVar9 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar15 = lVar9 + 9;
    if (bVar19) {
      lVar15 = *(long *)(lVar9 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar18 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0c069d90(auStack_138,param_1,lVar15,uVar18,1);
  }
  else {
    func_0x0c069d90(auStack_138,param_1,0,0,1);
  }
  if (cStack_108 == '\0') {
    uStack_1a8._4_4_ = (uint)(uStack_1a8 >> 0x20);
    if ((DAT_0f6e18e8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e18e8), iVar6 != 0)) {
      func_0x0ee25020(0xf6e18c0,&UNK_014bec3c);
      func_0x0eee2f40(&UNK_048c16a0,0xf6e18c0,0xf53dab8);
      func_0x0410844d(&DAT_0f6e18e8);
    }
    uVar18 = (ulong)(DAT_0f6e18c8 >> 1);
    lVar9 = 0xf6e18c9;
    if ((DAT_0f6e18c8 & 1) != 0) {
      uVar18 = _DAT_0f6e18d0;
      lVar9 = _DAT_0f6e18d8;
    }
    func_0x0c06a780(&lStack_100,auStack_138,lVar9,uVar18,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f367ed0;
    if (aplStack_e8[0] != (long *)0x0) {
      lVar9 = *aplStack_e8[0];
      aplStack_e8[0] = plVar14;
      (**(code **)(lVar9 + 8))();
      plVar14 = aplStack_e8[0];
    }
    aplStack_e8[0] = plVar14;
    auStack_1b8._0_4_ = uStack_f0;
    uStack_1b0 = 0;
    uStack_1a8 = (ulong)uStack_1a8._4_4_ << 0x20;
    pcStack_1a0 = (code *)0x1;
    pcStack_198 = (code *)0x0;
    uStack_190 = &UNK_0c41a5b0;
    puStack_188 = &SUB_048b06d0;
    puStack_180 = &UNK_0c41a220;
    puStack_178 = &UNK_0c41a670;
    puStack_170 = &UNK_0c41a8e0;
    uStack_168 = 0;
    auStack_160 = (undefined1  [16])0x0;
    FUN_048b05a0(lStack_f8,auStack_1b8);
    uVar3 = auStack_160._8_8_;
    if ((long *)auStack_160._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_160._8_8_ + 8);
      lVar9 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_160._8_8_ + 0x10))(auStack_160._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar6 = *(int *)(lStack_f8 + 0x1c);
    if (iVar6 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(lStack_f8 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(lStack_f8 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar9 = *(long *)(piVar10 + 0xc);
      while (lVar9 != *(long *)(lStack_f8 + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar9 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(lStack_f8 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(lStack_f8 + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_f8 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_100);
    func_0x048b0bc0(aplStack_e8);
  }
  if ((DAT_0f6e18e8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e18e8), iVar6 != 0)) {
    func_0x0ee25020(0xf6e18c0,&UNK_014bec3c);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e18c0,0xf53dab8);
    func_0x0410844d(&DAT_0f6e18e8);
  }
  uVar18 = (ulong)(DAT_0f6e18c8 >> 1);
  lVar9 = 0xf6e18c9;
  if ((DAT_0f6e18c8 & 1) != 0) {
    uVar18 = _DAT_0f6e18d0;
    lVar9 = _DAT_0f6e18d8;
  }
  if ((DAT_0f6e2850 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e2850), iVar6 != 0)) {
    func_0x0c419be0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6e27d0,0xf53dab8);
    func_0x0410844d(&DAT_0f6e2850);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6e27d0 + 4)) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_0c3feac1;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6e27d0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0c3feac1:
    puVar11 = &DAT_0f6e27d0;
    iVar6 = iRam000000000f6e2830;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    iVar6 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar15 = *(long *)(puVar11 + 0x68), lVar15 != 0)) {
    bVar19 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar9 = lVar15 + 9;
    if (bVar19) {
      lVar9 = *(long *)(lVar15 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar19) {
      uVar18 = *(ulong *)(lVar15 + 0x10);
    }
  }
  func_0x0c41ad30(&lStack_100,param_1,lVar9,uVar18);
  lVar9 = lStack_100;
  if ((DAT_0f6e2850 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e2850), iVar6 != 0)) {
    func_0x0c419be0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6e27d0,0xf53dab8);
    func_0x0410844d(&DAT_0f6e2850);
  }
  plVar14 = (long *)(*(long *)(lVar9 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f6e27d0 + 4)) * 8);
  do {
    lVar15 = *plVar14;
    if (lVar15 == -1) goto LAB_0c3feb80;
    plVar14 = (long *)(*(long *)(lVar9 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6e27d0 + 4));
  if (plVar14 == *(long **)(lVar9 + 0x38)) {
LAB_0c3feb80:
    puVar11 = &DAT_0f6e27d0;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  for (pbVar12 = *(byte **)(lStack_100 + 0x50); pbVar12 != *(byte **)(lStack_100 + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar2 = *pbVar12;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c3fec1a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1a) {
LAB_0c3fec1a:
      if ((bVar2 & 1) == 0) {
        pbVar16 = pbVar12 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar12 + 0x10);
      }
      auVar20[0] = -(*pbVar16 == DAT_014eaba0);
      auVar20[1] = -(pbVar16[1] == DAT_014eaba0._1_1_);
      auVar20[2] = -(pbVar16[2] == DAT_014eaba0._2_1_);
      auVar20[3] = -(pbVar16[3] == DAT_014eaba0._3_1_);
      auVar20[4] = -(pbVar16[4] == DAT_014eaba0._4_1_);
      auVar20[5] = -(pbVar16[5] == DAT_014eaba0._5_1_);
      auVar20[6] = -(pbVar16[6] == DAT_014eaba0._6_1_);
      auVar20[7] = -(pbVar16[7] == DAT_014eaba0._7_1_);
      auVar20[8] = -(pbVar16[8] == DAT_014eaba0._8_1_);
      auVar20[9] = -(pbVar16[9] == DAT_014eaba0._9_1_);
      auVar20[10] = -(pbVar16[10] == DAT_014eaba0._10_1_);
      auVar20[0xb] = -(pbVar16[0xb] == DAT_014eaba0._11_1_);
      auVar20[0xc] = -(pbVar16[0xc] == DAT_014eaba0._12_1_);
      auVar20[0xd] = -(pbVar16[0xd] == DAT_014eaba0._13_1_);
      auVar20[0xe] = -(pbVar16[0xe] == DAT_014eaba0._14_1_);
      auVar20[0xf] = -(pbVar16[0xf] == DAT_014eaba0._15_1_);
      auVar21[0] = -(pbVar16[10] == DAT_014e4ff0);
      auVar21[1] = -(pbVar16[0xb] == DAT_014e4ff0._1_1_);
      auVar21[2] = -(pbVar16[0xc] == DAT_014e4ff0._2_1_);
      auVar21[3] = -(pbVar16[0xd] == DAT_014e4ff0._3_1_);
      auVar21[4] = -(pbVar16[0xe] == DAT_014e4ff0._4_1_);
      auVar21[5] = -(pbVar16[0xf] == DAT_014e4ff0._5_1_);
      auVar21[6] = -(pbVar16[0x10] == DAT_014e4ff0._6_1_);
      auVar21[7] = -(pbVar16[0x11] == DAT_014e4ff0._7_1_);
      auVar21[8] = -(pbVar16[0x12] == DAT_014e4ff0._8_1_);
      auVar21[9] = -(pbVar16[0x13] == DAT_014e4ff0._9_1_);
      auVar21[10] = -(pbVar16[0x14] == DAT_014e4ff0._10_1_);
      auVar21[0xb] = -(pbVar16[0x15] == DAT_014e4ff0._11_1_);
      auVar21[0xc] = -(pbVar16[0x16] == DAT_014e4ff0._12_1_);
      auVar21[0xd] = -(pbVar16[0x17] == DAT_014e4ff0._13_1_);
      auVar21[0xe] = -(pbVar16[0x18] == DAT_014e4ff0._14_1_);
      auVar21[0xf] = -(pbVar16[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar12 != *(byte **)(lStack_100 + 0x58)) {
    iVar6 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 != _DAT_0f550ac4) goto LAB_0c3fee7b;
  }
  if (iStack_d8 == 0) {
    if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0c3fecd0;
    lVar9 = *(long *)(puVar11 + 0x68) + 0x38;
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      puVar11 = (undefined *)func_0x048aead0(lVar9 + 0x18);
    }
    auStack_1b8 = (undefined1  [8])func_0x048b0c90(lVar9 + 0x18,puVar11,uStack_d4,1);
    if (auStack_1b8 == (undefined1  [8])0x0) {
      _auStack_1b8 = (undefined1  [16])0x0;
      FUN_048b0d20(auStack_1b8);
      if (auStack_1b8 == (undefined1  [8])0x0) goto LAB_0c3fecd0;
    }
    if ((*(int *)((long)auStack_1b8 + 0x50) == -0x45dcb126) &&
       (*(long *)((long)auStack_1b8 + 0x58) != 0)) {
      lVar9 = *(long *)((long)auStack_1b8 + 0x58) + 0x40;
    }
    else {
LAB_0c3fecd0:
      lVar9 = 0;
    }
  }
  puStack_128 = &UNK_0488e0b0;
  uStack_118 = 0x48b5725f;
  pcStack_120 = (code *)0x0;
  uStack_114 = 0;
  auStack_138[0] = 0;
  _auStack_1b8 = (undefined1  [16])0x0;
  pcStack_1a0 = (code *)&UNK_0488e0b0;
  pcStack_198 = (code *)0x0;
  uStack_190 = (undefined *)CONCAT35(uStack_190._5_3_,0x48b5725f);
  puStack_140 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_140 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_150 = 0x21;
  uStack_148 = 0x1a;
  *(ulong *)((long)puStack_140 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_140 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_140 = _DAT_013bbacd;
  puStack_140[1] = uVar3;
  *(undefined1 *)((long)puStack_140 + 0x1a) = 0;
  lVar9 = func_0x048b5060(lVar9,&uStack_150);
  *(undefined8 *)(lVar9 + 0x20) = 0;
  if ((undefined1 *)(lVar9 + 0x20) == auStack_1b8) {
    pcVar13 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
      puVar17 = (ulong *)(lVar9 + 0x28);
      (**(code **)(lVar9 + 0x40))(puVar17);
      if (uStack_190._4_1_ != '\0') {
        if (uStack_190._4_1_ == '\x02') {
          (*pcStack_1a0)(5,&uStack_1b0,puVar17);
        }
        else {
          uVar18 = uStack_1b0;
          uStack_1b0 = 0;
          *puVar17 = uVar18;
        }
      }
    }
    *(code **)(lVar9 + 0x38) = pcStack_1a0;
    *(code **)(lVar9 + 0x40) = pcStack_198;
    *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_190;
    *(char *)(lVar9 + 0x4c) = uStack_190._4_1_;
    pcVar13 = pcStack_198;
  }
  if ((uStack_150 & 1) != 0) {
    func_0x0412a280(puStack_140,uStack_150 & 0xfffffffffffffffe);
    pcVar13 = pcStack_198;
  }
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(&uStack_1b0);
  }
  if (pcStack_120 != (code *)0x0) {
    (*pcStack_120)(auStack_138);
  }
LAB_0c3fee7b:
  auVar4[0xf] = 0;
  auVar4._0_15_ = stack0xfffffffffffffe49;
  _auStack_1b8 = auVar4 << 8;
  pcStack_1a0 = (code *)((ulong)pcStack_1a0 & 0xffffffffffffff00);
  if (bVar5) {
    uStack_1b0 = 0;
    auStack_1b8 = (undefined1  [8])uStack_1d8;
    auVar20 = _auStack_1b8;
    uStack_1b0 = uStack_1d0;
    if ((uStack_1d0 & 0x80000000000000) != 0) {
      lVar15 = *(long *)((uStack_1d0 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar15 + 9;
      _auStack_1b8 = auVar20;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar14 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar14 = lVar15;
      func_0x0eee2f00(plVar14 + 1,uStack_1d0 & 0xff00ffffffffffff,lVar15);
      *(undefined1 *)((long)plVar14 + lVar15 + 8) = 0;
      uStack_1b0 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1a8 = 0;
    uVar18 = uStack_1c8;
    if ((uStack_1c8 & 0x80000000000000) != 0) {
      lVar15 = *(long *)((uStack_1c8 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar15 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar14 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar14 = lVar15;
      func_0x0eee2f00(plVar14 + 1,uStack_1c8 & 0xff00ffffffffffff,lVar15);
      *(undefined1 *)((long)plVar14 + lVar15 + 8) = 0;
      uVar18 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_1a0 = (code *)CONCAT71(pcStack_1a0._1_7_,1);
    uStack_1a8 = uVar18;
  }
  func_0x0412e5e0(auStack_138,puVar8,0x59);
  if ((auStack_138[0] & 1) != 0) {
    func_0x0412a280(puStack_128,auStack_138[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_1a0 == '\x01') {
    if ((uStack_1a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1a8 = 0;
    if ((uStack_1b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b0 & 0xff00ffffffffffff) - 8);
    }
  }
  if (bVar5) {
    if ((uStack_1c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c8 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_1d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d0 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar8,0x60);
  return;
}



/* ---- referenced strings ----
 * 0x11adf66  The armor item component determines the amount of protection you have in your armor item.
 * 0x11adf76  omponent determines the amount of protection you have in your armor item.
 * 0x11adf86  nes the amount of protection you have in your armor item.
 * 0x11adf96  f protection you have in your armor item.
 * 0x11adfa6   have in your armor item.
 * 0x11adfaf  your armor item.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
