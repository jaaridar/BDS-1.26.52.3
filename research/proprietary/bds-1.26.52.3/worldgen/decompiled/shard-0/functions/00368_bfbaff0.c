/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0baff0 (ELF vaddr 0xbfbaff0)
 * Label: caller-of-callee
 * Body:  [[0c0baff0, 0c0bb53e] [0c0bb540, 0c0bb582] [0c0bb590, 0c0bbfff]]
 * Ghidra: FUN_0c0baff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0baff0(long param_1,undefined8 param_2,ulong *param_3)

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
  undefined1 auStack_278 [8];
  ulong uStack_270;
  ulong uStack_268;
  code *pcStack_260;
  code *pcStack_258;
  undefined4 uStack_250;
  char cStack_24c;
  char cStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  char cStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [16];
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  ulong auStack_1a0 [2];
  undefined *puStack_190;
  code *pcStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  func_0x0c0bcb30();
  func_0x0c6ec470(param_1);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar4 = _UNK_01217c31;
  puVar8[6] = _DAT_01217c29;
  puVar8[7] = uVar4;
  uVar4 = _UNK_01217c21;
  puVar8[4] = _DAT_01217c19;
  puVar8[5] = uVar4;
  uVar4 = _UNK_01217c11;
  puVar8[2] = _DAT_01217c09;
  puVar8[3] = uVar4;
  uVar4 = _UNK_01217c01;
  *puVar8 = _DAT_01217bf9;
  puVar8[1] = uVar4;
  *(undefined4 *)((long)puVar8 + 0x3f) = 0x2e646573;
  *(undefined1 *)((long)puVar8 + 0x43) = 0;
  uStack_240 = uStack_240 & 0xffffffffffffff00;
  cStack_228 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_240 = *param_3;
    uStack_238 = 0;
    uVar19 = param_3[1];
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      func_0x0eee2f00(plVar9 + 1,uVar19 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar19 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_230 = 0;
    uVar16 = param_3[2];
    uStack_238 = uVar19;
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar11 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      func_0x0eee2f00(plVar9 + 1,uVar16 & 0xff00ffffffffffff,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar16 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_228 = '\x01';
    uStack_230 = uVar16;
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
    func_0x0c069d90(auStack_278,param_1,lVar11,uVar19,1);
  }
  else {
    func_0x0c069d90(auStack_278,param_1,0,0,1);
  }
  if (cStack_248 == '\0') {
    if ((DAT_0f6d4ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4ef0), iVar6 != 0)) {
      func_0x0ee25020(0xf6d4ec8,&DAT_013bbc08);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4ec8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4ef0);
    }
    uVar19 = (ulong)(DAT_0f6d4ed0 >> 1);
    lVar10 = 0xf6d4ed1;
    if ((DAT_0f6d4ed0 & 1) != 0) {
      uVar19 = _DAT_0f6d4ed8;
      lVar10 = _DAT_0f6d4ee0;
    }
    func_0x0c06a780(&lStack_178,auStack_278,lVar10,uVar19,0);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f351320;
    if (uStack_160 != (long *)0x0) {
      lVar10 = *uStack_160;
      uStack_160 = plVar9;
      (**(code **)(lVar10 + 8))();
      plVar9 = uStack_160;
    }
    uStack_160 = plVar9;
    uStack_220 = (undefined4)lStack_168;
    lStack_218 = 0;
    uStack_210 = 0;
    plStack_208 = (long *)0x1;
    uStack_200 = 0;
    uStack_1f8 = &UNK_0c0f9400;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0c0f9120;
    puStack_1e0 = &UNK_0c0f94c0;
    puStack_1d8 = &UNK_0c0f9730;
    uStack_1d0 = 0;
    auStack_1c8 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_170,&uStack_220);
    uVar4 = auStack_1c8._8_8_;
    if ((long *)auStack_1c8._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_1c8._8_8_ + 8);
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_1c8._8_8_ + 0x10))(auStack_1c8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)(lStack_170 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_170 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_170 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar10 = *(long *)(piVar13 + 0xc);
      while (lVar10 != *(long *)(lStack_170 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar10 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(lStack_170 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(lStack_170 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_170 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_178);
    FUN_048b0bc0(&uStack_160);
  }
  if ((DAT_0f6d4ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d4ef0), iVar6 != 0)) {
    func_0x0ee25020(0xf6d4ec8,&DAT_013bbc08);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4ec8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4ef0);
  }
  uVar19 = (ulong)(DAT_0f6d4ed0 >> 1);
  lVar10 = 0xf6d4ed1;
  if ((DAT_0f6d4ed0 & 1) != 0) {
    uVar19 = _DAT_0f6d4ed8;
    lVar10 = _DAT_0f6d4ee0;
  }
  lVar11 = func_0x0c0f89b0(param_1 + 0x18);
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
  func_0x0c0f9b80(&uStack_220,param_1,lVar10,uVar19);
  lVar11 = CONCAT44(uStack_21c,uStack_220) + 0x18;
  lVar10 = func_0x0c0f89b0(lVar11);
  pbVar3 = *(byte **)(CONCAT44(uStack_21c,uStack_220) + 0x58);
  for (pbVar15 = *(byte **)(CONCAT44(uStack_21c,uStack_220) + 0x50); pbVar15 != pbVar3;
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0bb59a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0c0bb59a:
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
LAB_0c0bb5c9:
    if ((int)uStack_1f8 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0c0bb63d;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_278 = (undefined1  [8])func_0x048b0c90(lVar11,lVar10,uStack_1f8._4_4_,1);
      if (auStack_278 == (undefined1  [8])0x0) {
        _auStack_278 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_278);
        if (auStack_278 == (undefined1  [8])0x0) goto LAB_0c0bb63d;
      }
      if ((*(int *)((long)auStack_278 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_278 + 0x58) != 0)) {
        lVar10 = *(long *)((long)auStack_278 + 0x58) + 0x40;
      }
      else {
LAB_0c0bb63d:
        lVar10 = 0;
      }
    }
    puStack_190 = &UNK_0488e0b0;
    uStack_180 = 0x48b5725f;
    pcStack_188 = (code *)0x0;
    uStack_17c = 0;
    auStack_1a0[0] = 0;
    _auStack_278 = (undefined1  [16])0x0;
    pcStack_260 = (code *)&UNK_0488e0b0;
    pcStack_258 = (code *)0x0;
    uStack_250 = 0x48b5725f;
    cStack_24c = '\0';
    puStack_1a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1a8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_1b8 = 0x21;
    uStack_1b0 = 0x1a;
    *(ulong *)((long)puStack_1a8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1a8 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1a8 = _DAT_013bbacd;
    puStack_1a8[1] = uVar4;
    *(undefined1 *)((long)puStack_1a8 + 0x1a) = 0;
    lVar10 = func_0x048b5060(lVar10,&uStack_1b8);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_278) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar17 = (ulong *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar17);
        if (cStack_24c != '\0') {
          if (cStack_24c == '\x02') {
            (*pcStack_260)(5,&uStack_270,puVar17);
          }
          else {
            uVar19 = uStack_270;
            uStack_270 = 0;
            *puVar17 = uVar19;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = pcStack_260;
      *(code **)(lVar10 + 0x40) = pcStack_258;
      *(undefined4 *)(lVar10 + 0x48) = uStack_250;
      *(char *)(lVar10 + 0x4c) = cStack_24c;
      pcVar12 = pcStack_258;
    }
    if ((uStack_1b8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
      pcVar12 = pcStack_258;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(&uStack_270);
    }
    if (pcStack_188 != (code *)0x0) {
      (*pcStack_188)(auStack_1a0);
    }
  }
  else {
    iVar6 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c0bb5c9;
  }
  puStack_148 = puStack_1f0;
  lStack_178 = CONCAT44(uStack_21c,uStack_220);
  lStack_168 = CONCAT44(uStack_20c,uStack_210);
  uStack_158 = uStack_200;
  puStack_150 = uStack_1f8;
  uStack_160 = plStack_208;
  lStack_170 = lStack_218;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd89;
  _auStack_278 = auVar5 << 8;
  pcStack_260 = (code *)((ulong)pcStack_260 & 0xffffffffffffff00);
  if (cStack_228 == '\x01') {
    uStack_270 = 0;
    auStack_278 = (undefined1  [8])uStack_240;
    auVar21 = _auStack_278;
    uStack_270 = uStack_238;
    if ((uStack_238 & 0x80000000000000) != 0) {
      uVar19 = uStack_238 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar19 - 8);
      lVar10 = lVar11 + 9;
      _auStack_278 = auVar21;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      func_0x0eee2f00(plVar9 + 1,uVar19,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uStack_270 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_268 = 0;
    uVar19 = uStack_230;
    if ((uStack_230 & 0x80000000000000) != 0) {
      uVar19 = uStack_230 & 0xff00ffffffffffff;
      lVar11 = *(long *)(uVar19 - 8);
      lVar10 = lVar11 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar9 = lVar11;
      func_0x0eee2f00(plVar9 + 1,uVar19,lVar11);
      *(undefined1 *)((long)plVar9 + lVar11 + 8) = 0;
      uVar19 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_260 = (code *)CONCAT71(pcStack_260._1_7_,1);
    uStack_268 = uVar19;
  }
  FUN_0412e5e0(auStack_1a0,puVar8,0x43);
  lStack_a8 = lStack_178;
  lStack_a0 = lStack_170;
  lStack_98 = lStack_168;
  plStack_90 = uStack_160;
  uStack_88 = uStack_158;
  puStack_80 = puStack_150;
  puStack_78 = puStack_148;
  if ((auStack_1a0[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_190,auStack_1a0[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_260 == '\x01') {
    if ((uStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
    }
    uStack_268 = 0;
    if ((uStack_270 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c0fa480(&lStack_178,&lStack_a8,&UNK_01447599,5,1);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f351458;
  if (uStack_160 != (long *)0x0) {
    lVar10 = *uStack_160;
    uStack_160 = plVar9;
    (**(code **)(lVar10 + 8))();
    plVar9 = uStack_160;
  }
  uStack_160 = plVar9;
  uStack_220 = (undefined4)lStack_168;
  lStack_218 = 0;
  uStack_210 = 0;
  plStack_208 = (long *)0x1;
  uStack_200 = 0;
  uStack_1f8 = &UNK_0c0fab90;
  puStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &SUB_0c0f51d0;
  puStack_1e0 = &UNK_0c0faba0;
  puStack_1d8 = &UNK_0c0fad70;
  uStack_1d0 = 0;
  auStack_1c8 = ZEXT816(0);
  func_0x048b05a0(lStack_170,&uStack_220);
  uVar4 = auStack_1c8._8_8_;
  if ((long *)auStack_1c8._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_1c8._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_1c8._8_8_ + 0x10))(auStack_1c8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0fa660(&lStack_178);
  uStack_38 = puStack_78._0_1_;
  uStack_48 = uStack_88;
  puStack_40 = puStack_80;
  lStack_58 = lStack_98;
  plStack_50 = plStack_90;
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  FUN_048b0bc0(&uStack_160);
  func_0x0c0fa0c0(&lStack_178,lStack_68 + 0x18);
  if (uStack_160._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(lStack_168 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_160) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_170) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_160._4_4_ != 1) {
      if (uStack_160._4_4_ == 0) {
        *(uint *)(lStack_168 + 0x18) = *(uint *)(lStack_168 + 0x18) | 0x40000;
      }
      goto LAB_0c0bbc43;
    }
    piVar13 = *(int **)(*(long *)(lStack_168 + 0x78) + 0x48);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_160) {
      piVar13 = piVar13 + 0x1a;
      iVar6 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
LAB_0c0bbc43:
  func_0x0c0fa480(&lStack_178,&lStack_68,&UNK_0124e1e1,6,0x10);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f353348;
  if (uStack_160 != (long *)0x0) {
    lVar10 = *uStack_160;
    uStack_160 = puVar14;
    (**(code **)(lVar10 + 8))();
    puVar14 = uStack_160;
  }
  uStack_160 = puVar14;
  uStack_220 = (undefined4)lStack_168;
  lStack_218 = 0;
  uStack_210 = 0;
  plStack_208 = (long *)0x1;
  uStack_200 = 0;
  uStack_1f8 = &UNK_0c0f3360;
  puStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &UNK_08f1fdc0;
  puStack_1e0 = &UNK_0c0fb1e0;
  puStack_1d8 = &UNK_0c0fb500;
  uStack_1d0 = 0;
  auStack_1c8 = ZEXT816(0);
  func_0x048b05a0(lStack_170,&uStack_220);
  uVar4 = auStack_1c8._8_8_;
  if ((long *)auStack_1c8._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_1c8._8_8_ + 8);
    lVar10 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_1c8._8_8_ + 0x10))(auStack_1c8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0fa660(&lStack_178);
  FUN_048b0bc0(&uStack_160);
  if (cStack_228 == '\x01') {
    if ((uStack_230 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
    }
    uStack_230 = 0;
    if ((uStack_238 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
    }
  }
  thunk_FUN_0ee326a0(puVar8,0x48);
  return;
}



/* ---- referenced strings ----
 * 0x1217bf9  Items with the block_placer component will place a block when used.
 * 0x1217c09  lock_placer component will place a block when used.
 * 0x1217c19  onent will place a block when used.
 * 0x1217c29   a block when used.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
