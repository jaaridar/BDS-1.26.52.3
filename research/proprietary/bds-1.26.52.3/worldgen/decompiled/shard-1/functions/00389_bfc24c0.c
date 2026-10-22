/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0c24c0 (ELF vaddr 0xbfc24c0)
 * Label: caller-of-callee
 * Body:  [[0c0c24c0, 0c0c2a0e] [0c0c2a10, 0c0c2a52] [0c0c2a60, 0c0c3860]]
 * Ghidra: FUN_0c0c24c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0c24c0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong *puVar17;
  byte *pbVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_2f8 [8];
  ulong uStack_2f0;
  ulong uStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  char cStack_2cc;
  char cStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined4 uStack_270;
  undefined1 auStack_268 [16];
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  char cStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  ulong auStack_150 [2];
  undefined *puStack_140;
  code *pcStack_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  func_0x0b6b7930();
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar4 = _UNK_012e761f;
  *(ulong *)((long)puVar8 + 0x2b) = CONCAT35(_UNK_012e761c,_DAT_012e7617);
  *(undefined8 *)((long)puVar8 + 0x33) = uVar4;
  uVar4 = CONCAT53(_DAT_012e7617,_UNK_012e7614);
  puVar8[4] = _DAT_012e760c;
  puVar8[5] = uVar4;
  uVar4 = _UNK_012e7604;
  puVar8[2] = _DAT_012e75fc;
  puVar8[3] = uVar4;
  uVar4 = _UNK_012e75f4;
  *puVar8 = _DAT_012e75ec;
  puVar8[1] = uVar4;
  *(undefined1 *)((long)puVar8 + 0x3b) = 0;
  uStack_258 = uStack_258 & 0xffffffffffffff00;
  cStack_240 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_258 = *param_3;
    uStack_250 = 0;
    uVar19 = param_3[1];
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar19 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar19 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_248 = 0;
    uVar16 = param_3[2];
    uStack_250 = uVar19;
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar16 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar16 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_240 = '\x01';
    uStack_248 = uVar16;
  }
  lVar10 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar20 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar11 = lVar10 + 9;
    if (bVar20) {
      lVar11 = *(long *)(lVar10 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar20) {
      uVar19 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0c069d90(auStack_2f8,param_1,lVar11,uVar19,1);
  }
  else {
    func_0x0c069d90(auStack_2f8,param_1,0,0,1);
  }
  if (cStack_2c8 == '\0') {
    if ((DAT_0f6d4f80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4f80), iVar6 != 0)) {
      func_0x0ee25020(0xf6d4f58,&DAT_01489283);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4f58,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4f80);
    }
    uVar19 = (ulong)(DAT_0f6d4f60 >> 1);
    lVar10 = 0xf6d4f61;
    if ((DAT_0f6d4f60 & 1) != 0) {
      uVar19 = _DAT_0f6d4f68;
      lVar10 = _DAT_0f6d4f70;
    }
    func_0x0c06a780(&lStack_238,auStack_2f8,lVar10,uVar19,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f351910;
    if (uStack_220 != (long *)0x0) {
      lVar10 = *uStack_220;
      uStack_220 = plVar9;
      (**(code **)(lVar10 + 8))();
      plVar9 = uStack_220;
    }
    uStack_220 = plVar9;
    uStack_2c0 = (undefined4)lStack_228;
    lStack_2b8 = 0;
    uStack_2b0 = 0;
    plStack_2a8 = (long *)0x1;
    uStack_2a0 = 0;
    uStack_298 = &UNK_0c108620;
    puStack_290 = &SUB_048b06d0;
    puStack_288 = &UNK_0c108340;
    puStack_280 = &UNK_0c1086e0;
    puStack_278 = &UNK_0c108980;
    uStack_270 = 0;
    auStack_268 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_230,&uStack_2c0);
    uVar4 = auStack_268._8_8_;
    if ((long *)auStack_268._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_268._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_268._8_8_ + 0x10))(auStack_268._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)(lStack_230 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_230 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_230 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar10 = *(long *)(piVar13 + 0xc);
      while (lVar10 != *(long *)(lStack_230 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar10 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_230 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_230 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_230 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_238);
    func_0x048b0bc0(&uStack_220);
  }
  if ((DAT_0f6d4f80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4f80), iVar6 != 0)) {
    func_0x0ee25020(0xf6d4f58,&DAT_01489283);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4f58,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4f80);
  }
  uVar19 = (ulong)(DAT_0f6d4f60 >> 1);
  lVar10 = 0xf6d4f61;
  if ((DAT_0f6d4f60 & 1) != 0) {
    uVar19 = _DAT_0f6d4f68;
    lVar10 = _DAT_0f6d4f70;
  }
  lVar11 = func_0x0c107bc0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar10 = lVar11 + 9;
    if (bVar20) {
      lVar10 = *(long *)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0c108dd0(&uStack_2c0,param_1,lVar10,uVar19);
  lVar11 = CONCAT44(uStack_2bc,uStack_2c0) + 0x18;
  lVar10 = func_0x0c107bc0(lVar11);
  pbVar3 = *(byte **)(CONCAT44(uStack_2bc,uStack_2c0) + 0x58);
  for (pbVar15 = *(byte **)(CONCAT44(uStack_2bc,uStack_2c0) + 0x50); pbVar15 != pbVar3;
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0c2a6a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0c0c2a6a:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar15 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar15 + 0x10);
      }
      auVar21[0] = -(*pbVar18 == DAT_014eaba0);
      auVar21[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar21[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar21[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar21[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar21[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar21[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar21[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar21[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar21[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar21[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar21[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar21[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar21[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar21[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar21[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == pbVar3) {
LAB_0c0c2a99:
    if ((int)uStack_298 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0c0c2b07;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_2f8 = (undefined1  [8])func_0x048b0c90(lVar11,lVar10,uStack_298._4_4_,1);
      if (auStack_2f8 == (undefined1  [8])0x0) {
        _auStack_2f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2f8);
        if (auStack_2f8 == (undefined1  [8])0x0) goto LAB_0c0c2b07;
      }
      if ((*(int *)((long)auStack_2f8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2f8 + 0x58) != 0)) {
        lVar10 = *(long *)((long)auStack_2f8 + 0x58) + 0x40;
      }
      else {
LAB_0c0c2b07:
        lVar10 = 0;
      }
    }
    puStack_140 = &UNK_0488e0b0;
    uStack_130 = 0x48b5725f;
    pcStack_138 = (code *)0x0;
    uStack_12c = 0;
    auStack_150[0] = 0;
    _auStack_2f8 = (undefined1  [16])0x0;
    pcStack_2e0 = (code *)&UNK_0488e0b0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = 0x48b5725f;
    cStack_2cc = '\0';
    puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_158 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_168 = 0x21;
    uStack_160 = 0x1a;
    *(ulong *)((long)puStack_158 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_158 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_158 = _DAT_013bbacd;
    puStack_158[1] = uVar4;
    *(undefined1 *)((long)puStack_158 + 0x1a) = 0;
    lVar10 = func_0x048b5060(lVar10,&uStack_168);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_2f8) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar17 = (ulong *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar17);
        if (cStack_2cc != '\0') {
          if (cStack_2cc == '\x02') {
            (*pcStack_2e0)(5,&uStack_2f0,puVar17);
          }
          else {
            uVar19 = uStack_2f0;
            uStack_2f0 = 0;
            *puVar17 = uVar19;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = pcStack_2e0;
      *(code **)(lVar10 + 0x40) = pcStack_2d8;
      *(undefined4 *)(lVar10 + 0x48) = uStack_2d0;
      *(char *)(lVar10 + 0x4c) = cStack_2cc;
      pcVar12 = pcStack_2d8;
    }
    if ((uStack_168 & 1) != 0) {
      func_0x0412a280(puStack_158,uStack_168 & 0xfffffffffffffffe);
      pcVar12 = pcStack_2d8;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(&uStack_2f0);
    }
    if (pcStack_138 != (code *)0x0) {
      (*pcStack_138)(auStack_150);
    }
  }
  else {
    iVar6 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c0c2a99;
  }
  puStack_208 = puStack_290;
  lStack_238 = CONCAT44(uStack_2bc,uStack_2c0);
  lStack_228 = CONCAT44(uStack_2ac,uStack_2b0);
  uStack_218 = uStack_2a0;
  puStack_210 = uStack_298;
  uStack_220 = plStack_2a8;
  lStack_230 = lStack_2b8;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd09;
  _auStack_2f8 = auVar5 << 8;
  pcStack_2e0 = (code *)((ulong)pcStack_2e0 & 0xffffffffffffff00);
  if (cStack_240 == '\x01') {
    uStack_2f0 = 0;
    auStack_2f8 = (undefined1  [8])uStack_258;
    auVar21 = _auStack_2f8;
    uStack_2f0 = uStack_250;
    if ((uStack_250 & 0x80000000000000) != 0) {
      uVar19 = uStack_250 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar19 - 8);
      lVar10 = lVar11 + 9;
      _auStack_2f8 = auVar21;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar19,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uStack_2f0 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e8 = 0;
    uVar19 = uStack_248;
    if ((uStack_248 & 0x80000000000000) != 0) {
      uVar19 = uStack_248 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar19 - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      memcpy(plVar9 + 1,uVar19,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar19 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_2e0 = (code *)CONCAT71(pcStack_2e0._1_7_,1);
    uStack_2e8 = uVar19;
  }
  func_0x0412e5e0(auStack_150,puVar8,0x3b);
  lStack_128 = lStack_238;
  lStack_120 = lStack_230;
  lStack_118 = lStack_228;
  plStack_110 = uStack_220;
  uStack_108 = uStack_218;
  puStack_100 = puStack_210;
  puStack_f8 = puStack_208;
  if ((auStack_150[0] & 1) != 0) {
    func_0x0412a280(puStack_140,auStack_150[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_2e0 == '\x01') {
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e8 = 0;
    if ((uStack_2f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c109310(&lStack_238,lStack_128 + 0x18);
  if (uStack_220._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_220) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_230) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_0c0c2f6f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_220._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != (int)uStack_220) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0c0c2f6f;
    }
    if (uStack_220._4_4_ == 0) {
      *(uint *)(lStack_228 + 0x18) = *(uint *)(lStack_228 + 0x18) | 0x40000;
    }
  }
  func_0x0c1096e0(&lStack_238,&lStack_128,&UNK_01483087,0xb);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f11ce58;
  if (uStack_220 != (long *)0x0) {
    lVar10 = *uStack_220;
    uStack_220 = plVar9;
    (**(code **)(lVar10 + 8))();
    plVar9 = uStack_220;
  }
  uStack_220 = plVar9;
  uStack_2c0 = (undefined4)lStack_228;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x1;
  uStack_2a0 = 0;
  uStack_298 = &UNK_0850b8c0;
  puStack_290 = &SUB_048b06d0;
  puStack_288 = &SUB_0850b5b0;
  puStack_280 = &UNK_0c109bd0;
  puStack_278 = &UNK_0c109e10;
  uStack_270 = 0;
  auStack_268 = ZEXT816(0);
  func_0x048b05a0(lStack_230,&uStack_2c0);
  uVar4 = auStack_268._8_8_;
  if ((long *)auStack_268._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_268._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_268._8_8_ + 0x10))(auStack_268._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c1098d0(&lStack_238);
  uStack_78 = puStack_f8._0_1_;
  uStack_88 = uStack_108;
  puStack_80 = puStack_100;
  lStack_98 = lStack_118;
  plStack_90 = plStack_110;
  lStack_a8 = lStack_128;
  lStack_a0 = lStack_120;
  func_0x048b0bc0(&uStack_220);
  lStack_e8 = lStack_a8;
  lStack_e0 = lStack_a0;
  lStack_d8 = lStack_98;
  plStack_d0 = plStack_90;
  uStack_c8 = uStack_88;
  puStack_c0 = puStack_80;
  uStack_b8 = CONCAT71(uStack_77,uStack_78);
  func_0x0c109310(&lStack_238,lStack_a8 + 0x18);
  if (uStack_220._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_220) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_230) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_0c0c321f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_220._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != (int)uStack_220) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0c0c321f;
    }
    if (uStack_220._4_4_ == 0) {
      *(uint *)(lStack_228 + 0x18) = *(uint *)(lStack_228 + 0x18) | 0x40000;
    }
  }
  func_0x0c1096e0(&lStack_238,&lStack_e8,&UNK_01222e20,8);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0126a0;
  if (uStack_220 != (long *)0x0) {
    lVar10 = *uStack_220;
    uStack_220 = plVar9;
    (**(code **)(lVar10 + 8))();
    plVar9 = uStack_220;
  }
  uStack_220 = plVar9;
  uStack_2c0 = (undefined4)lStack_228;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x1;
  uStack_2a0 = 0;
  uStack_298 = &UNK_05daeda0;
  puStack_290 = &SUB_048b06d0;
  puStack_288 = &UNK_05daea90;
  puStack_280 = &UNK_0c109ff0;
  puStack_278 = &UNK_0c10a150;
  uStack_270 = 0;
  auStack_268 = ZEXT816(0);
  func_0x048b05a0(lStack_230,&uStack_2c0);
  uVar4 = auStack_268._8_8_;
  if ((long *)auStack_268._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_268._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_268._8_8_ + 0x10))(auStack_268._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c1098d0(&lStack_238);
  uStack_38 = (undefined1)uStack_b8;
  uStack_48 = uStack_c8;
  puStack_40 = puStack_c0;
  lStack_58 = lStack_d8;
  plStack_50 = plStack_d0;
  lStack_68 = lStack_e8;
  lStack_60 = lStack_e0;
  func_0x048b0bc0(&uStack_220);
  func_0x0c109310(&lStack_238,lStack_68 + 0x18);
  if (uStack_220._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_220) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_230) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_220._4_4_ != 1) {
      if (uStack_220._4_4_ == 0) {
        *(uint *)(lStack_228 + 0x18) = *(uint *)(lStack_228 + 0x18) | 0x40000;
      }
      goto LAB_0c0c3493;
    }
    piVar13 = *(int **)(*(long *)(lStack_228 + 0x78) + 0x48);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_220) {
      piVar13 = piVar13 + 0x1a;
      iVar6 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
LAB_0c0c3493:
  func_0x0c1096e0(&lStack_238,&lStack_68,&UNK_01335c74,0x11);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0ef46ce8;
  if (uStack_220 != (long *)0x0) {
    lVar10 = *uStack_220;
    uStack_220 = puVar14;
    (**(code **)(lVar10 + 8))();
    puVar14 = uStack_220;
  }
  uStack_220 = puVar14;
  uStack_2c0 = (undefined4)lStack_228;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x1;
  uStack_2a0 = 0;
  uStack_298 = &UNK_0490ce30;
  puStack_290 = &SUB_048b06d0;
  puStack_288 = &SUB_0490cb20;
  puStack_280 = &UNK_0c10a330;
  puStack_278 = &UNK_0c10a490;
  uStack_270 = 0;
  auStack_268 = ZEXT816(0);
  func_0x048b05a0(lStack_230,&uStack_2c0);
  uVar4 = auStack_268._8_8_;
  if ((long *)auStack_268._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_268._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_268._8_8_ + 0x10))(auStack_268._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c1098d0(&lStack_238);
  func_0x048b0bc0(&uStack_220);
  if (cStack_240 == '\x01') {
    if ((uStack_248 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_248 & 0xff00ffffffffffff) - 8);
    }
    uStack_248 = 0;
    if ((uStack_250 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar8,0x40);
  return;
}



/* ---- referenced strings ----
 * 0x12e75ec  Record Item Component. Used by record items to play music. 
 * 0x12e75fc  onent. Used by record items to play music. 
 * 0x12e760c  ecord items to play music. 
 * 0x12e7617   to play music. 
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
