/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0b7bd0 (ELF vaddr 0xbfb7bd0)
 * Label: caller-of-callee
 * Body:  [[0c0b7bd0, 0c0b8114] [0c0b8120, 0c0b8162] [0c0b8170, 0c0b8c21] [0c0b8c30, 0c0b8ebb]]
 * Ghidra: FUN_0c0b7bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0b7bd0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_238 [8];
  long *plStack_230;
  ulong uStack_228;
  code *pcStack_220;
  code *pcStack_218;
  undefined4 uStack_210;
  char cStack_20c;
  char cStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  char cStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  long *plStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined2 uStack_12f;
  undefined5 uStack_12d;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 uStack_ac;
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
  
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x70,0);
  }
  uVar5 = _UNK_0143dd68;
  *(ulong *)((long)puVar9 + 0x5a) = CONCAT26(_UNK_0143dd66,_DAT_0143dd60);
  *(undefined8 *)((long)puVar9 + 0x62) = uVar5;
  uVar5 = CONCAT62(_DAT_0143dd60,_UNK_0143dd5e);
  puVar9[10] = _DAT_0143dd56;
  puVar9[0xb] = uVar5;
  uVar5 = _UNK_0143dd4e;
  puVar9[8] = _DAT_0143dd46;
  puVar9[9] = uVar5;
  uVar5 = _UNK_0143dd3e;
  puVar9[6] = _DAT_0143dd36;
  puVar9[7] = uVar5;
  uVar5 = _UNK_0143dd2e;
  puVar9[4] = _DAT_0143dd26;
  puVar9[5] = uVar5;
  uVar5 = _UNK_0143dd1e;
  puVar9[2] = _DAT_0143dd16;
  puVar9[3] = uVar5;
  uVar5 = _UNK_0143dd0e;
  *puVar9 = _DAT_0143dd06;
  puVar9[1] = uVar5;
  *(undefined1 *)((long)puVar9 + 0x6a) = 0;
  uStack_200 = uStack_200 & 0xffffffffffffff00;
  cStack_1e8 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_200 = *param_3;
    uStack_1f8 = 0;
    uVar17 = param_3[1];
    if ((uVar17 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar17 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar17 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f0 = 0;
    uVar18 = param_3[2];
    uStack_1f8 = uVar17;
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1e8 = '\x01';
    uStack_1f0 = uVar18;
  }
  lVar11 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar21 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar12 = lVar11 + 9;
    if (bVar21) {
      lVar12 = *(long *)(lVar11 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c069d90(auStack_238,param_1,lVar12,uVar17,1);
  }
  else {
    func_0x0c069d90(auStack_238,param_1,0,0,1);
  }
  if (cStack_208 == '\0') {
    uStack_1d0._4_4_ = (uint)((ulong)uStack_1d0 >> 0x20);
    if ((DAT_0f6d4e90 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d4e90), iVar7 != 0)) {
      func_0x0ee25020(0xf6d4e68,&UNK_014d9816);
      __cxa_atexit(&UNK_048c16a0,0xf6d4e68,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4e90);
    }
    uVar17 = (ulong)(DAT_0f6d4e70 >> 1);
    lVar11 = 0xf6d4e71;
    if ((DAT_0f6d4e70 & 1) != 0) {
      uVar17 = _DAT_0f6d4e78;
      lVar11 = _DAT_0f6d4e80;
    }
    func_0x0c06a780(&lStack_178,auStack_238,lVar11,uVar17,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f350f08;
    if (uStack_160 != (long *)0x0) {
      lVar11 = *uStack_160;
      uStack_160 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_160;
    }
    uStack_160 = plVar10;
    uStack_1e0 = (undefined4)uStack_168;
    plStack_1d8 = (long *)0x0;
    uStack_1d0 = (long *)((ulong)uStack_1d0._4_4_ << 0x20);
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    uStack_1b8 = &UNK_0c0e9f90;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &UNK_0c0e9cb0;
    puStack_1a0 = &UNK_0c0ea050;
    puStack_198 = &UNK_0c0ea2c0;
    uStack_190 = 0;
    auStack_188 = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_170,&uStack_1e0);
    uVar5 = auStack_188._8_8_;
    if ((long *)auStack_188._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_188._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    iVar7 = *(int *)((long)plStack_170 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_170 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_170 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar11 = *(long *)(piVar14 + 0xc);
      while (lVar11 != *(long *)((long)plStack_170 + 8)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar11 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_170 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_170 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_170 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_178);
    func_0x048b0bc0(&uStack_160);
  }
  if ((DAT_0f6d4e90 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d4e90), iVar7 != 0)) {
    func_0x0ee25020(0xf6d4e68,&UNK_014d9816);
    __cxa_atexit(&UNK_048c16a0,0xf6d4e68,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4e90);
  }
  uVar17 = (ulong)(DAT_0f6d4e70 >> 1);
  lVar11 = 0xf6d4e71;
  if ((DAT_0f6d4e70 & 1) != 0) {
    uVar17 = _DAT_0f6d4e78;
    lVar11 = _DAT_0f6d4e80;
  }
  lVar12 = func_0x0c0e9530(param_1 + 0x18);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar11 = lVar12 + 9;
    if (bVar21) {
      lVar11 = *(long *)(lVar12 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar12 + 0x10);
    }
  }
  func_0x0c0ea710(&uStack_1e0,param_1,lVar11,uVar17);
  lVar12 = CONCAT44(uStack_1dc,uStack_1e0) + 0x18;
  lVar11 = func_0x0c0e9530(lVar12);
  pbVar4 = *(byte **)(CONCAT44(uStack_1dc,uStack_1e0) + 0x58);
  for (pbVar16 = *(byte **)(CONCAT44(uStack_1dc,uStack_1e0) + 0x50); pbVar16 != pbVar4;
      pbVar16 = pbVar16 + 0x38) {
    bVar3 = *pbVar16;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c0b817a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0c0b817a:
      if ((bVar3 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar16 + 0x10);
      }
      auVar22[0] = -(*pbVar20 == DAT_014eaba0);
      auVar22[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
      auVar23 = auVar23 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == pbVar4) {
LAB_0c0b81a9:
    if ((int)uStack_1b8 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0c0b821d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_238 = (undefined1  [8])FUN_048b0c90(lVar12,lVar11,uStack_1b8._4_4_,1);
      if (auStack_238 == (undefined1  [8])0x0) {
        _auStack_238 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_238);
        if (auStack_238 == (undefined1  [8])0x0) goto LAB_0c0b821d;
      }
      if ((*(int *)((long)auStack_238 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_238 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_238 + 0x58) + 0x40;
      }
      else {
LAB_0c0b821d:
        lVar11 = 0;
      }
    }
    puStack_80 = &UNK_0488e0b0;
    uStack_70 = 0x48b5725f;
    pcStack_78 = (code *)0x0;
    uStack_6c = 0;
    auStack_90[0] = 0;
    _auStack_238 = (undefined1  [16])0x0;
    pcStack_220 = (code *)&UNK_0488e0b0;
    pcStack_218 = (code *)0x0;
    uStack_210 = 0x48b5725f;
    cStack_20c = '\0';
    puStack_98 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_98 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    uStack_a8 = 0x21;
    uStack_a0 = 0x1a;
    *(ulong *)((long)puStack_98 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_98 + 0x12) = uVar5;
    uVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_98 = _DAT_013bbacd;
    puStack_98[1] = uVar5;
    *(undefined1 *)((long)puStack_98 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_a8);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_238) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar19);
        if (cStack_20c != '\0') {
          if (cStack_20c == '\x02') {
            (*pcStack_220)(5,&plStack_230,puVar19);
          }
          else {
            plVar10 = plStack_230;
            plStack_230 = (long *)0x0;
            *puVar19 = plVar10;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_220;
      *(code **)(lVar11 + 0x40) = pcStack_218;
      *(undefined4 *)(lVar11 + 0x48) = uStack_210;
      *(char *)(lVar11 + 0x4c) = cStack_20c;
      pcVar13 = pcStack_218;
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x0412a280(puStack_98,uStack_a8 & 0xfffffffffffffffe);
      pcVar13 = pcStack_218;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&plStack_230);
    }
    if (pcStack_78 != (code *)0x0) {
      (*pcStack_78)(auStack_90);
    }
  }
  else {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c0b81a9;
  }
  puStack_148 = puStack_1b0;
  lStack_178 = CONCAT44(uStack_1dc,uStack_1e0);
  lStack_158 = uStack_1c0;
  puStack_150 = uStack_1b8;
  uStack_168 = (ulong)uStack_1d0;
  uStack_160 = (long *)uStack_1c8;
  plStack_170 = plStack_1d8;
  auVar6[0xf] = 0;
  auVar6._0_15_ = stack0xfffffffffffffdc9;
  _auStack_238 = auVar6 << 8;
  pcStack_220 = (code *)((ulong)pcStack_220 & 0xffffffffffffff00);
  if (cStack_1e8 == '\x01') {
    plStack_230 = (long *)0x0;
    auStack_238 = (undefined1  [8])uStack_200;
    auVar22 = _auStack_238;
    plStack_230 = (long *)uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar17 = uStack_1f8 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar17 - 8);
      lVar11 = lVar12 + 9;
      _auStack_238 = auVar22;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      plStack_230 = (long *)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_228 = 0;
    uVar17 = uStack_1f0;
    if ((uStack_1f0 & 0x80000000000000) != 0) {
      uVar17 = uStack_1f0 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar17 - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar17 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_220 = (code *)CONCAT71(pcStack_220._1_7_,1);
    uStack_228 = uVar17;
  }
  func_0x0412e5e0(auStack_90,puVar9,0x6a);
  lStack_68 = lStack_178;
  lStack_60 = (long)plStack_170;
  uStack_58 = uStack_168;
  uStack_50 = uStack_160;
  uStack_48 = lStack_158;
  uStack_40 = puStack_150;
  puStack_38 = puStack_148;
  if ((auStack_90[0] & 1) != 0) {
    func_0x0412a280(puStack_80,auStack_90[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_220 == '\x01') {
    if ((uStack_228 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
    }
    uStack_228 = 0;
    if (((ulong)plStack_230 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_230 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c0eac50(&lStack_178,lStack_68 + 0x18);
  if (uStack_160._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(uStack_168 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)uStack_160) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while ((long *)lVar11 != plStack_170) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
LAB_0c0b869f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_160._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)(uStack_168 + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)uStack_160) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0c0b869f;
    }
    if (uStack_160._4_4_ == 0) {
      *(uint *)(uStack_168 + 0x18) = *(uint *)(uStack_168 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f6d6e10 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d6e10), iVar7 != 0)) {
    func_0x0c0e94c0(0xf6d6df8);
    func_0x0410844d(&DAT_0f6d6e10);
  }
  uStack_40 = (undefined *)0x1ea39e2400000001;
  lVar11 = lStack_68 + 0x18;
  lStack_178 = func_0x0c0e9530(lVar11);
  plStack_170 = (long *)lVar11;
  func_0x0ed621a0(&lStack_178,uStack_40._4_4_);
  plStack_170 = &lStack_60;
  lStack_178 = CONCAT62(lStack_178._2_6_,0x10);
  uStack_168 = CONCAT44(uStack_168._4_4_,uStack_40._4_4_);
  uStack_160 = (long *)0x0;
  lStack_158 = 0;
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined1 *)0x0;
  lStack_140 = 0;
  uStack_138 = 0x12;
  uStack_137 = 0x5f6573755f6e6f;
  uStack_130 = 0x6f;
  uStack_12f = 0x6e;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0x3f600000;
  func_0x048afb10(&lStack_120,8);
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_b8 = 0xff00;
  uStack_b4 = uStack_b4 & 0xffffff00;
  uStack_b0 = uStack_b0 & 0xffffff00;
  uStack_ac = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f2ba8e0;
  if (uStack_160 != (long *)0x0) {
    lVar11 = *uStack_160;
    uStack_160 = puVar19;
    (**(code **)(lVar11 + 8))();
    puVar19 = uStack_160;
  }
  uStack_160 = puVar19;
  uStack_1e0 = (undefined4)uStack_168;
  plStack_1d8 = (long *)0x0;
  uStack_1d0 = (long *)((ulong)uStack_1d0 & 0xffffffff00000000);
  uStack_1c8 = 1;
  uStack_1c0 = 0;
  uStack_1b8 = &UNK_0c0a1440;
  puStack_1b0 = &SUB_048b06d0;
  puStack_1a8 = &SUB_0b5ad7b0;
  puStack_1a0 = &UNK_0c0eb000;
  puStack_198 = &UNK_0c0eb1f0;
  uStack_190 = 0;
  auStack_188 = ZEXT816(0);
  func_0x048b05a0(plStack_170,&uStack_1e0);
  uVar5 = auStack_188._8_8_;
  if ((long *)auStack_188._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_188._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  plVar10 = plStack_170;
  if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_1e0 = _DAT_0f550a0c;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar11 = lStack_158;
  puVar19 = uStack_160;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0ef439d0;
  plStack_1d8 = plVar15 + 3;
  uStack_160 = (long *)0x0;
  lStack_158 = 0;
  plVar15[3] = (long)puVar19;
  plVar15[4] = lVar11;
  plVar15[7] = lStack_140;
  plVar15[5] = (long)puStack_150;
  plVar15[6] = (long)puStack_148;
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined1 *)0x0;
  lStack_140 = 0;
  plVar15[10] = lStack_128;
  plVar15[8] = CONCAT71(uStack_137,uStack_138);
  plVar15[9] = CONCAT53(uStack_12d,CONCAT21(uStack_12f,uStack_130));
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_12d = 0;
  lStack_128 = 0;
  plVar15[0xb] = lStack_120;
  plVar15[0xc] = lStack_118;
  plVar15[0xd] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar15[0xe] = lStack_108;
  plVar15[0xf] = lStack_100;
  plVar15[0x10] = lStack_f8;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  *(undefined4 *)(plVar15 + 0x11) = uStack_f0;
  plVar15[0x12] = lStack_e8;
  plVar15[0x13] = lStack_e0;
  plVar15[0x14] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plVar15[0x17] = lStack_c0;
  plVar15[0x15] = lStack_d0;
  plVar15[0x16] = lStack_c8;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_ac,CONCAT43(uStack_b0,uStack_b4._1_3_));
  plVar15[0x18] = CONCAT44(uStack_b4,CONCAT22(uStack_b6,uStack_b8));
  _auStack_238 = ZEXT816(0);
  uStack_1d0 = plVar15;
  func_0x048afd20(plVar10,&uStack_1e0);
  plVar15 = uStack_1d0;
  if (uStack_1d0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_1d0 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_1d0 + 0x10))(uStack_1d0);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_230;
  if (plStack_230 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_230 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_230 + 0x10))(plStack_230);
      func_0x0412c2d0(plVar15);
    }
  }
  lVar11 = plVar10[2];
  iVar7 = *(int *)((long)plVar10 + 0x1c);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)plVar10[3]) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != plVar10[1]; piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)lStack_178 << 0x10;
      }
      func_0x048b0bc0(&uStack_160);
      goto joined_r0x0c0b8c47;
    }
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
    iVar7 = *piVar14;
    while (iVar7 != (int)plVar10[3]) {
      piVar14 = piVar14 + 0x1a;
      iVar7 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | (int)lStack_178 << 0x10;
  func_0x048b0bc0(&uStack_160);
joined_r0x0c0b8c47:
  if (cStack_1e8 == '\x01') {
    if ((uStack_1f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f0 = 0;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar9,0x70);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x143dd06  The on_use_on item component allows you to receive an event when the item is used on a block in 
 * 0x143dd16  em component allows you to receive an event when the item is used on a block in the world.
 * 0x143dd26  ows you to receive an event when the item is used on a block in the world.
 * 0x143dd36  ve an event when the item is used on a block in the world.
 * 0x143dd46   the item is used on a block in the world.
 * 0x143dd56  d on a block in the world.
 * 0x143dd60  ck in the world.
 * 0x14eaba0  [cereal:document
 */
