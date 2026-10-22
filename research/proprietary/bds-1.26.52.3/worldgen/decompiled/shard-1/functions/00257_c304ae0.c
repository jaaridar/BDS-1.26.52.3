/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc404ae0 (ELF vaddr 0xc304ae0)
 * Label: caller-of-callee
 * Body:  [[0c404ae0, 0c40501e] [0c405020, 0c405062] [0c405070, 0c405b36] [0c405b40, 0c405df5]]
 * Ghidra: FUN_0c404ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c404ae0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong *puVar18;
  byte *pbVar19;
  ulong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_2c8 [8];
  ulong uStack_2c0;
  ulong uStack_2b8;
  code *pcStack_2b0;
  code *pcStack_2a8;
  undefined4 uStack_2a0;
  char cStack_29c;
  char cStack_298;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  char cStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  long lStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined4 uStack_218;
  undefined1 auStack_210 [16];
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 *puStack_1b8;
  ulong auStack_110 [2];
  undefined *puStack_100;
  code *pcStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar15 = _UNK_011c9bd0;
  *(ulong *)((long)puVar8 + 0x2f) = CONCAT71(_UNK_011c9bc9,DAT_011c9bc8);
  *(undefined8 *)((long)puVar8 + 0x37) = uVar15;
  uVar15 = CONCAT17(DAT_011c9bc8,_UNK_011c9bc1);
  puVar8[4] = _DAT_011c9bb9;
  puVar8[5] = uVar15;
  uVar15 = _UNK_011c9bb1;
  puVar8[2] = _DAT_011c9ba9;
  puVar8[3] = uVar15;
  uVar15 = _UNK_011c9ba1;
  *puVar8 = _DAT_011c9b99;
  puVar8[1] = uVar15;
  *(undefined1 *)((long)puVar8 + 0x3f) = 0;
  uStack_288 = uStack_288 & 0xffffffffffffff00;
  cStack_270 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_288 = *param_3;
    uStack_280 = 0;
    uVar20 = param_3[1];
    if ((uVar20 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar20 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar20 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_278 = 0;
    uVar17 = param_3[2];
    uStack_280 = uVar20;
    if ((uVar17 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar17 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar17 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar17 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_270 = '\x01';
    uStack_278 = uVar17;
  }
  lVar10 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar21 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar11 = lVar10 + 9;
    if (bVar21) {
      lVar11 = *(long *)(lVar10 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0c069d90(auStack_2c8,param_1,lVar11,uVar20,1);
  }
  else {
    func_0x0c069d90(auStack_2c8,param_1,0,0,1);
  }
  if (cStack_298 == '\0') {
    if ((DAT_0f6e1978 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e1978), iVar6 != 0)) {
      func_0x0ee25020(0xf6e1950,&UNK_01422d14);
      func_0x0eee2f40(&UNK_048c16a0,0xf6e1950,0xf53dab8);
      func_0x0410844d(&DAT_0f6e1978);
    }
    uVar20 = (ulong)(DAT_0f6e1958 >> 1);
    lVar10 = 0xf6e1959;
    if ((DAT_0f6e1958 & 1) != 0) {
      uVar20 = _DAT_0f6e1960;
      lVar10 = _DAT_0f6e1968;
    }
    func_0x0c06a780(&lStack_1e8,auStack_2c8,lVar10,uVar20,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f368628;
    if (uStack_1d0 != (long *)0x0) {
      lVar10 = *uStack_1d0;
      uStack_1d0 = plVar9;
      (**(code **)(lVar10 + 8))();
      plVar9 = uStack_1d0;
    }
    uStack_1d0 = plVar9;
    uStack_268 = (undefined4)lStack_1d8;
    lStack_260 = 0;
    uStack_258 = 0;
    plStack_250 = (long *)0x1;
    uStack_248 = 0;
    uStack_240 = &UNK_0c425520;
    puStack_238 = &SUB_048b06d0;
    puStack_230 = &UNK_0c425240;
    puStack_228 = &UNK_0c4255e0;
    puStack_220 = &UNK_0c425850;
    uStack_218 = 0;
    auStack_210 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_1e0,&uStack_268);
    uVar15 = auStack_210._8_8_;
    if ((long *)auStack_210._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_210._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
        func_0x0412c2d0(uVar15);
      }
    }
    iVar6 = *(int *)(lStack_1e0 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_1e0 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_1e0 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar10 = *(long *)(piVar13 + 0xc);
      while (lVar10 != *(long *)(lStack_1e0 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar10 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_1e0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_1e0 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_1e0 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_1e8);
    func_0x048b0bc0(&uStack_1d0);
  }
  if ((DAT_0f6e1978 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6e1978), iVar6 != 0)) {
    func_0x0ee25020(0xf6e1950,&UNK_01422d14);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e1950,0xf53dab8);
    func_0x0410844d(&DAT_0f6e1978);
  }
  uVar20 = (ulong)(DAT_0f6e1958 >> 1);
  lVar10 = 0xf6e1959;
  if ((DAT_0f6e1958 & 1) != 0) {
    uVar20 = _DAT_0f6e1960;
    lVar10 = _DAT_0f6e1968;
  }
  lVar11 = func_0x0c25d180(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar21 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar10 = lVar11 + 9;
    if (bVar21) {
      lVar10 = *(long *)(lVar11 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0c425ca0(&uStack_268,param_1,lVar10,uVar20);
  lVar11 = CONCAT44(uStack_264,uStack_268) + 0x18;
  lVar10 = func_0x0c25d180(lVar11);
  pbVar3 = *(byte **)(CONCAT44(uStack_264,uStack_268) + 0x58);
  for (pbVar16 = *(byte **)(CONCAT44(uStack_264,uStack_268) + 0x50); pbVar16 != pbVar3;
      pbVar16 = pbVar16 + 0x38) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c40507a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0c40507a:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar16 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar16 + 0x10);
      }
      auVar22[0] = -(*pbVar19 == DAT_014eaba0);
      auVar22[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar19[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar16 == pbVar3) {
LAB_0c4050a9:
    if ((int)uStack_240 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0c40511d;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_2c8 = (undefined1  [8])func_0x048b0c90(lVar11,lVar10,uStack_240._4_4_,1);
      if (auStack_2c8 == (undefined1  [8])0x0) {
        _auStack_2c8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2c8);
        if (auStack_2c8 == (undefined1  [8])0x0) goto LAB_0c40511d;
      }
      if ((*(int *)((long)auStack_2c8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2c8 + 0x58) != 0)) {
        lVar10 = *(long *)((long)auStack_2c8 + 0x58) + 0x40;
      }
      else {
LAB_0c40511d:
        lVar10 = 0;
      }
    }
    puStack_100 = &UNK_0488e0b0;
    uStack_f0 = 0x48b5725f;
    pcStack_f8 = (code *)0x0;
    uStack_ec = 0;
    auStack_110[0] = 0;
    _auStack_2c8 = (undefined1  [16])0x0;
    pcStack_2b0 = (code *)&UNK_0488e0b0;
    pcStack_2a8 = (code *)0x0;
    uStack_2a0 = 0x48b5725f;
    cStack_29c = '\0';
    puStack_1f0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1f0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_013bbadf;
    uStack_200 = 0x21;
    uStack_1f8 = 0x1a;
    *(ulong *)((long)puStack_1f0 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1f0 + 0x12) = uVar15;
    uVar15 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1f0 = _DAT_013bbacd;
    puStack_1f0[1] = uVar15;
    *(undefined1 *)((long)puStack_1f0 + 0x1a) = 0;
    lVar10 = func_0x048b5060(lVar10,&uStack_200);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_2c8) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar18 = (ulong *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar18);
        if (cStack_29c != '\0') {
          if (cStack_29c == '\x02') {
            (*pcStack_2b0)(5,&uStack_2c0,puVar18);
          }
          else {
            uVar20 = uStack_2c0;
            uStack_2c0 = 0;
            *puVar18 = uVar20;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = pcStack_2b0;
      *(code **)(lVar10 + 0x40) = pcStack_2a8;
      *(undefined4 *)(lVar10 + 0x48) = uStack_2a0;
      *(char *)(lVar10 + 0x4c) = cStack_29c;
      pcVar12 = pcStack_2a8;
    }
    if ((uStack_200 & 1) != 0) {
      func_0x0412a280(puStack_1f0,uStack_200 & 0xfffffffffffffffe);
      pcVar12 = pcStack_2a8;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(&uStack_2c0);
    }
    if (pcStack_f8 != (code *)0x0) {
      (*pcStack_f8)(auStack_110);
    }
  }
  else {
    iVar6 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c4050a9;
  }
  puStack_1b8 = puStack_238;
  lStack_1e8 = CONCAT44(uStack_264,uStack_268);
  lStack_1d8 = CONCAT44(uStack_254,uStack_258);
  uStack_1c8 = uStack_248;
  puStack_1c0 = uStack_240;
  uStack_1d0 = plStack_250;
  lStack_1e0 = lStack_260;
  auVar4[0xf] = 0;
  auVar4._0_15_ = stack0xfffffffffffffd39;
  _auStack_2c8 = auVar4 << 8;
  pcStack_2b0 = (code *)((ulong)pcStack_2b0 & 0xffffffffffffff00);
  if (cStack_270 == '\x01') {
    uStack_2c0 = 0;
    auStack_2c8 = (undefined1  [8])uStack_288;
    auVar22 = _auStack_2c8;
    uStack_2c0 = uStack_280;
    if ((uStack_280 & 0x80000000000000) != 0) {
      uVar20 = uStack_280 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar20 - 8);
      lVar10 = lVar11 + 9;
      _auStack_2c8 = auVar22;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar20,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uStack_2c0 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2b8 = 0;
    uVar20 = uStack_278;
    if ((uStack_278 & 0x80000000000000) != 0) {
      uVar20 = uStack_278 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar20 - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar20,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar20 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_2b0 = (code *)CONCAT71(pcStack_2b0._1_7_,1);
    uStack_2b8 = uVar20;
  }
  func_0x0412e5e0(auStack_110,puVar8,0x3f);
  lStack_e8 = lStack_1e8;
  lStack_e0 = lStack_1e0;
  lStack_d8 = lStack_1d8;
  plStack_d0 = uStack_1d0;
  uStack_c8 = uStack_1c8;
  puStack_c0 = puStack_1c0;
  puStack_b8 = puStack_1b8;
  if ((auStack_110[0] & 1) != 0) {
    func_0x0412a280(puStack_100,auStack_110[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_2b0 == '\x01') {
    if ((uStack_2b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2b8 = 0;
    if ((uStack_2c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c4261e0(&lStack_1e8,lStack_e8 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_1d0) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_1e0) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_0c40557f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != (int)uStack_1d0) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0c40557f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)(lStack_1d8 + 0x18) = *(uint *)(lStack_1d8 + 0x18) | 0x40000;
    }
  }
  func_0x0c426590(&lStack_1e8,&lStack_e8,&UNK_011fe71a,0xb);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f2ba8e0;
  if (uStack_1d0 != (long *)0x0) {
    lVar10 = *uStack_1d0;
    uStack_1d0 = plVar9;
    (**(code **)(lVar10 + 8))();
    plVar9 = uStack_1d0;
  }
  uStack_1d0 = plVar9;
  uStack_268 = (undefined4)lStack_1d8;
  lStack_260 = 0;
  uStack_258 = 0;
  plStack_250 = (long *)0x1;
  uStack_248 = 0;
  uStack_240 = &UNK_0c0a1440;
  puStack_238 = &SUB_048b06d0;
  puStack_230 = &UNK_0b5ad7b0;
  puStack_228 = &UNK_0c426a80;
  puStack_220 = &UNK_0c426c70;
  uStack_218 = 0;
  auStack_210 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_268);
  uVar15 = auStack_210._8_8_;
  if ((long *)auStack_210._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_210._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
      func_0x0412c2d0(uVar15);
    }
  }
  func_0x0c426780(&lStack_1e8);
  uStack_38 = puStack_b8._0_1_;
  uStack_48 = uStack_c8;
  puStack_40 = puStack_c0;
  lStack_58 = lStack_d8;
  plStack_50 = plStack_d0;
  lStack_68 = lStack_e8;
  lStack_60 = lStack_e0;
  func_0x048b0bc0(&uStack_1d0);
  lStack_a8 = lStack_68;
  lStack_a0 = lStack_60;
  lStack_98 = lStack_58;
  plStack_90 = plStack_50;
  uStack_88 = uStack_48;
  uStack_80 = puStack_40;
  uStack_78 = CONCAT71(uStack_37,uStack_38);
  func_0x0c4261e0(&lStack_1e8,lStack_68 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_1d0) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_1e0) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_0c40583f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != (int)uStack_1d0) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0c40583f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)(lStack_1d8 + 0x18) = *(uint *)(lStack_1d8 + 0x18) | 0x40000;
    }
  }
  func_0x0c426590(&lStack_1e8,&lStack_a8,&UNK_011fdda1,0x11);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f0126a0;
  if (uStack_1d0 != (long *)0x0) {
    lVar10 = *uStack_1d0;
    uStack_1d0 = puVar14;
    (**(code **)(lVar10 + 8))();
    puVar14 = uStack_1d0;
  }
  uStack_1d0 = puVar14;
  uStack_268 = (undefined4)lStack_1d8;
  lStack_260 = 0;
  uStack_258 = 0;
  plStack_250 = (long *)0x1;
  uStack_248 = 0;
  uStack_240 = &UNK_05daeda0;
  puStack_238 = &SUB_048b06d0;
  puStack_230 = &UNK_05daea90;
  puStack_228 = &UNK_0c426e50;
  puStack_220 = &UNK_0c426fb0;
  uStack_218 = 0;
  auStack_210 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_268);
  uVar15 = auStack_210._8_8_;
  if ((long *)auStack_210._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_210._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
      func_0x0412c2d0(uVar15);
    }
  }
  func_0x0c426780(&lStack_1e8);
  lVar10 = lStack_a8;
  iVar6 = (int)uStack_80;
  uVar5 = uStack_80._4_4_;
  func_0x048b0bc0(&uStack_1d0);
  if (iVar6 == 4) {
    lVar10 = lVar10 + 0x18;
    uVar15 = func_0x0c25d180(lVar10);
    lVar10 = func_0x048b1040(lVar10,uVar15,uVar5,1);
    if (lVar10 == 0) {
      lStack_1e8 = 0;
      lStack_1e0 = 0;
      FUN_048b10d0(&lStack_1e8);
      lVar11 = *(long *)(lStack_1e8 + 0x38);
      lVar10 = lStack_1e8;
      if (lVar11 == 0) goto LAB_0c405b08;
LAB_0c405b2d:
      do {
        lVar10 = lVar11;
        lVar11 = *(long *)(lVar10 + 0x38);
        if (*(long *)(lVar10 + 0x38) == 0) {
          lStack_1e8 = 0;
          lStack_1e0 = 0;
          FUN_048b10d0(&lStack_1e8);
          lVar11 = lStack_1e8;
        }
      } while (lVar11 != 0);
    }
    else {
      lVar11 = *(long *)(lVar10 + 0x38);
      if (*(long *)(lVar10 + 0x38) != 0) goto LAB_0c405b2d;
LAB_0c405b08:
      lStack_1e8 = 0;
      lStack_1e0 = 0;
      FUN_048b10d0(&lStack_1e8);
      lVar11 = lStack_1e8;
      if (lStack_1e8 != 0) goto LAB_0c405b2d;
    }
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar6 != 1) goto LAB_0c405bdd;
    lVar10 = lVar10 + 0x18;
    uVar15 = func_0x0c25d180(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar15,uVar5,1);
    if (lVar10 == 0) {
      lStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b0d20(&lStack_1e8);
      lVar10 = lStack_1e8;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar14[1] = 0xffffffffffffffff;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 0xff;
  *puVar14 = &UNK_0f0edc68;
  uVar15 = _DAT_014f0550;
  puVar14[4] = 0;
  puVar14[5] = uVar15;
  puVar14[6] = 0;
  puVar14[7] = 0;
  plVar9 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar14;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
LAB_0c405bdd:
  if (cStack_270 == '\x01') {
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    if ((uStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_280 & 0xff00ffffffffffff) - 8);
    }
    uStack_280 = 0;
  }
  func_0x0412a280(puVar8,0x40);
  return;
}



/* ---- referenced strings ----
 * 0x11c9b99  Event trigger for when the item has completed its use duration.
 * 0x11c9ba9  r when the item has completed its use duration.
 * 0x11c9bb9  has completed its use duration.
 * 0x11c9bc8  ts use duration.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
