/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc02c9b0 (ELF vaddr 0xbf2c9b0)
 * Label: caller-of-callee
 * Body:  [[0c02c9b0, 0c02cefd] [0c02cf00, 0c02cf42] [0c02cf50, 0c02dc11] [0c02dc20, 0c02df38]]
 * Ghidra: FUN_0c02c9b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c02c9b0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
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
  undefined1 auStack_288 [8];
  long *plStack_280;
  ulong uStack_278;
  code *pcStack_270;
  code *pcStack_268;
  undefined4 uStack_260;
  char cStack_25c;
  char cStack_258;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  char cStack_230;
  long lStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined2 uStack_168;
  undefined2 uStack_166;
  uint uStack_164;
  uint uStack_160;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  ulong auStack_d0 [2];
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  uVar4 = _UNK_013d4fa8;
  puVar9[10] = _DAT_013d4fa0;
  puVar9[0xb] = uVar4;
  uVar4 = _UNK_013d4f98;
  puVar9[8] = _DAT_013d4f90;
  puVar9[9] = uVar4;
  uVar4 = _UNK_013d4f88;
  puVar9[6] = _DAT_013d4f80;
  puVar9[7] = uVar4;
  uVar4 = _UNK_013d4f78;
  puVar9[4] = _DAT_013d4f70;
  puVar9[5] = uVar4;
  uVar4 = _UNK_013d4f68;
  puVar9[2] = _DAT_013d4f60;
  puVar9[3] = uVar4;
  uVar4 = _UNK_013d4f58;
  *puVar9 = _DAT_013d4f50;
  puVar9[1] = uVar4;
  *(undefined8 *)((long)puVar9 + 0x5d) = 0x646c726f77206568;
  *(undefined1 *)((long)puVar9 + 0x65) = 0;
  uStack_248 = uStack_248 & 0xffffffffffffff00;
  cStack_230 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_248 = *param_3;
    uStack_240 = 0;
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
    uStack_238 = 0;
    uVar18 = param_3[2];
    uStack_240 = uVar17;
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
    cStack_230 = '\x01';
    uStack_238 = uVar18;
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
    func_0x0c069d90(auStack_288,param_1,lVar12,uVar17,1);
  }
  else {
    func_0x0c069d90(auStack_288,param_1,0,0,1);
  }
  if (cStack_258 == '\0') {
    uStack_148._4_4_ = (uint)((ulong)uStack_148 >> 0x20);
    uStack_158._4_4_ = (undefined4)((ulong)uStack_158 >> 0x20);
    if ((DAT_0f6d3000 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d3000), iVar7 != 0)) {
      func_0x0ee25020(0xf6d2fd8,&DAT_014a4777);
      __cxa_atexit(&UNK_048c16a0,0xf6d2fd8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3000);
    }
    uVar17 = (ulong)(DAT_0f6d2fe0 >> 1);
    lVar11 = 0xf6d2fe1;
    if ((DAT_0f6d2fe0 & 1) != 0) {
      uVar17 = _DAT_0f6d2fe8;
      lVar11 = _DAT_0f6d2ff0;
    }
    func_0x0c06a780(&lStack_228,auStack_288,lVar11,uVar17,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f34d7a8;
    if (uStack_210 != (long *)0x0) {
      lVar11 = *uStack_210;
      uStack_210 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_210;
    }
    uStack_210 = plVar10;
    uStack_158 = CONCAT44(uStack_158._4_4_,plStack_218._0_4_);
    plStack_150 = (long *)0x0;
    uStack_148 = (long *)((ulong)uStack_148._4_4_ << 0x20);
    uStack_140 = 1;
    uStack_138 = 0;
    uStack_130 = &UNK_0c06c480;
    puStack_128 = &SUB_048b06d0;
    puStack_120 = &UNK_0c06c1a0;
    puStack_118 = &UNK_0c06c540;
    puStack_110 = &UNK_0c06c7e0;
    uStack_108 = 0;
    auStack_100._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_220,&uStack_158);
    uVar4 = auStack_100._8_8_;
    if ((long *)auStack_100._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_100._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_100._8_8_ + 0x10))(auStack_100._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar7 = *(int *)((long)plStack_220 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_220 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_220 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar11 = *(long *)(piVar14 + 0xc);
      while (lVar11 != *(long *)((long)plStack_220 + 8)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar11 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_220 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_220 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_220 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_228);
    func_0x048b0bc0(&uStack_210);
  }
  if ((DAT_0f6d3000 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d3000), iVar7 != 0)) {
    func_0x0ee25020(0xf6d2fd8,&DAT_014a4777);
    __cxa_atexit(&UNK_048c16a0,0xf6d2fd8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3000);
  }
  uVar17 = (ulong)(DAT_0f6d2fe0 >> 1);
  lVar11 = 0xf6d2fe1;
  if ((DAT_0f6d2fe0 & 1) != 0) {
    uVar17 = _DAT_0f6d2fe8;
    lVar11 = _DAT_0f6d2ff0;
  }
  lVar12 = func_0x0c06ba30(param_1 + 0x18);
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
  func_0x0c06cea0(&uStack_158,param_1,lVar11,uVar17);
  lVar12 = uStack_158 + 0x18;
  lVar11 = func_0x0c06ba30(lVar12);
  for (pbVar16 = *(byte **)(uStack_158 + 0x50); pbVar16 != *(byte **)(uStack_158 + 0x58);
      pbVar16 = pbVar16 + 0x38) {
    bVar3 = *pbVar16;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c02cf5a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0c02cf5a:
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
  if (pbVar16 == *(byte **)(uStack_158 + 0x58)) {
LAB_0c02cf89:
    if ((int)uStack_130 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0c02cffd;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_288 = (undefined1  [8])FUN_048b0c90(lVar12,lVar11,uStack_130._4_4_,1);
      if (auStack_288 == (undefined1  [8])0x0) {
        _auStack_288 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_288);
        if (auStack_288 == (undefined1  [8])0x0) goto LAB_0c02cffd;
      }
      if ((*(int *)((long)auStack_288 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_288 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_288 + 0x58) + 0x40;
      }
      else {
LAB_0c02cffd:
        lVar11 = 0;
      }
    }
    puStack_c0 = &UNK_0488e0b0;
    uStack_b0 = 0x48b5725f;
    pcStack_b8 = (code *)0x0;
    uStack_ac = 0;
    auStack_d0[0] = 0;
    _auStack_288 = (undefined1  [16])0x0;
    pcStack_270 = (code *)&UNK_0488e0b0;
    pcStack_268 = (code *)0x0;
    uStack_260 = 0x48b5725f;
    cStack_25c = '\0';
    puStack_d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_d8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_e8 = 0x21;
    uStack_e0 = 0x1a;
    *(ulong *)((long)puStack_d8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_d8 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_d8 = _DAT_013bbacd;
    puStack_d8[1] = uVar4;
    *(undefined1 *)((long)puStack_d8 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_e8);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_288) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar19);
        if (cStack_25c != '\0') {
          if (cStack_25c == '\x02') {
            (*pcStack_270)(5,&plStack_280,puVar19);
          }
          else {
            plVar10 = plStack_280;
            plStack_280 = (long *)0x0;
            *puVar19 = plVar10;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_270;
      *(code **)(lVar11 + 0x40) = pcStack_268;
      *(undefined4 *)(lVar11 + 0x48) = uStack_260;
      *(char *)(lVar11 + 0x4c) = cStack_25c;
      pcVar13 = pcStack_268;
    }
    if ((uStack_e8 & 1) != 0) {
      func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
      pcVar13 = pcStack_268;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&plStack_280);
    }
    if (pcStack_b8 != (code *)0x0) {
      (*pcStack_b8)(auStack_d0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c02cf89;
  }
  puStack_1f8 = puStack_128;
  puStack_208 = (undefined1 *)uStack_138;
  puStack_200 = uStack_130;
  plStack_218 = uStack_148;
  uStack_210 = (long *)uStack_140;
  lStack_228 = uStack_158;
  plStack_220 = plStack_150;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd79;
  _auStack_288 = auVar5 << 8;
  pcStack_270 = (code *)((ulong)pcStack_270 & 0xffffffffffffff00);
  if (cStack_230 == '\x01') {
    plStack_280 = (long *)0x0;
    auStack_288 = (undefined1  [8])uStack_248;
    auVar22 = _auStack_288;
    plStack_280 = (long *)uStack_240;
    if ((uStack_240 & 0x80000000000000) != 0) {
      uVar17 = uStack_240 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar17 - 8);
      lVar11 = lVar12 + 9;
      _auStack_288 = auVar22;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      plStack_280 = (long *)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_278 = 0;
    uVar17 = uStack_238;
    if ((uStack_238 & 0x80000000000000) != 0) {
      uVar17 = uStack_238 & 0xff00ffffffffffff;
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
    pcStack_270 = (code *)CONCAT71(pcStack_270._1_7_,1);
    uStack_278 = uVar17;
  }
  func_0x0412e5e0(auStack_d0,puVar9,0x65);
  lStack_a8 = lStack_228;
  lStack_a0 = (long)plStack_220;
  uStack_98 = (ulong)plStack_218;
  uStack_90 = (ulong)uStack_210;
  uStack_88 = puStack_208;
  uStack_80 = puStack_200;
  puStack_78 = puStack_1f8;
  if ((auStack_d0[0] & 1) != 0) {
    func_0x0412a280(puStack_c0,auStack_d0[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_270 == '\x01') {
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    if (((ulong)plStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_280 & 0xff00ffffffffffff) - 8);
    }
  }
  uStack_80 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f6d4368 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d4368), iVar7 != 0)) {
    func_0x0c06b9c0(0xf6d4350);
    func_0x0410844d(&DAT_0f6d4368);
  }
  lStack_228 = CONCAT44(lStack_228._4_4_,uStack_80._4_4_);
  plStack_220 = (long *)0x0;
  plStack_218 = (long *)((ulong)plStack_218 & 0xffffffff00000000);
  uStack_210 = (long *)0x1;
  puStack_208 = &SUB_048aead0;
  puStack_200 = &UNK_079523d0;
  puStack_1f8 = &UNK_0c06d7a0;
  lStack_1f0 = 0;
  uStack_1e8 = (ulong)uStack_1e8._4_4_ << 0x20;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  FUN_049057f0(&lStack_a0,&lStack_228);
  func_0x048aea50(&lStack_228);
  uStack_148 = (long *)uStack_90;
  uStack_140 = uStack_88;
  uStack_158 = lStack_a0;
  plStack_150 = (long *)uStack_98;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0ef46ef8;
  if ((DAT_0f551bc8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f551bc8), iVar7 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_228 = CONCAT44(lStack_228._4_4_,_DAT_0f551bb4);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  plStack_220 = plVar10 + 3;
  plVar10[3] = (long)puVar19;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  _auStack_288 = ZEXT816(0);
  plStack_218 = plVar10;
  func_0x048afd20(&uStack_158,&lStack_228);
  plVar10 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_218 + 1;
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_280 + 1;
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar10);
    }
  }
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  uStack_58 = uStack_98;
  uStack_50 = uStack_90;
  uStack_48 = uStack_88;
  uStack_40 = uStack_80;
  puStack_38 = puStack_78;
  func_0x0c06d3e0(&lStack_228,lStack_a8 + 0x18);
  if (uStack_210._4_4_ == 2) {
    piVar14 = *(int **)(plStack_218[0xf] + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)uStack_210) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    plVar10 = *(long **)(piVar14 + 0xc);
    while (plVar10 != plStack_220) {
      piVar14 = *(int **)(piVar14 + 0xe);
      plVar10 = *(long **)(piVar14 + 0xc);
    }
LAB_0c02d69f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_210._4_4_ == 1) {
      piVar14 = *(int **)(plStack_218[0xf] + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)uStack_210) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0c02d69f;
    }
    if (uStack_210._4_4_ == 0) {
      *(uint *)(plStack_218 + 3) = *(uint *)(plStack_218 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6d4368 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6d4368), iVar7 != 0)) {
    func_0x0c06b9c0(0xf6d4350);
    func_0x0410844d(&DAT_0f6d4368);
  }
  uStack_40 = 0x425ed3ca00000001;
  lVar11 = lStack_68 + 0x18;
  lStack_228 = func_0x0c06ba30(lVar11);
  plStack_220 = (long *)lVar11;
  func_0x0ed621a0(&lStack_228,uStack_40._4_4_);
  plStack_220 = &lStack_60;
  lStack_228 = CONCAT62(lStack_228._2_6_,0x10);
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,uStack_40._4_4_);
  uStack_210 = (long *)0x0;
  puStack_208 = (undefined1 *)0x0;
  puStack_200 = (undefined *)0x0;
  puStack_1f8 = (undefined1 *)0x0;
  lStack_1f0 = 0;
  uStack_1e8 = CONCAT17(uStack_1e8._7_1_,0x65756c61760a);
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0x3f600000;
  func_0x048afb10(&lStack_1d0,8);
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_168 = 0xff00;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_160 = uStack_160 & 0xffffff00;
  uStack_15c = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0ef46ef8;
  if (uStack_210 != (long *)0x0) {
    lVar11 = *uStack_210;
    uStack_210 = puVar19;
    (**(code **)(lVar11 + 8))();
    puVar19 = uStack_210;
  }
  uStack_210 = puVar19;
  uStack_158 = CONCAT44(uStack_158._4_4_,plStack_218._0_4_);
  plStack_150 = (long *)0x0;
  uStack_148 = (long *)((ulong)uStack_148 & 0xffffffff00000000);
  uStack_140 = 1;
  uStack_138 = 0;
  uStack_130 = &UNK_04906f70;
  puStack_128 = &SUB_048b06d0;
  puStack_120 = &SUB_04906c50;
  puStack_118 = &UNK_0c06d990;
  puStack_110 = &UNK_0c06daf0;
  uStack_108 = 0;
  auStack_100._0_16_ = ZEXT816(0);
  func_0x048b05a0(plStack_220,&uStack_158);
  uVar4 = auStack_100._8_8_;
  if ((long *)auStack_100._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_100._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_100._8_8_ + 0x10))(auStack_100._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  plVar10 = plStack_220;
  if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_158 = CONCAT44(uStack_158._4_4_,_DAT_0f550a0c);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  puVar6 = puStack_208;
  puVar19 = uStack_210;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0ef439d0;
  plStack_150 = plVar15 + 3;
  uStack_210 = (long *)0x0;
  puStack_208 = (undefined1 *)0x0;
  plVar15[3] = (long)puVar19;
  plVar15[4] = (long)puVar6;
  plVar15[7] = lStack_1f0;
  plVar15[5] = (long)puStack_200;
  plVar15[6] = (long)puStack_1f8;
  puStack_200 = (undefined *)0x0;
  puStack_1f8 = (undefined1 *)0x0;
  lStack_1f0 = 0;
  plVar15[10] = lStack_1d8;
  plVar15[8] = uStack_1e8;
  plVar15[9] = lStack_1e0;
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  plVar15[0xb] = lStack_1d0;
  plVar15[0xc] = lStack_1c8;
  plVar15[0xd] = lStack_1c0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plVar15[0xe] = lStack_1b8;
  plVar15[0xf] = lStack_1b0;
  plVar15[0x10] = lStack_1a8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  *(undefined4 *)(plVar15 + 0x11) = uStack_1a0;
  plVar15[0x12] = lStack_198;
  plVar15[0x13] = lStack_190;
  plVar15[0x14] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar15[0x17] = lStack_170;
  plVar15[0x15] = lStack_180;
  plVar15[0x16] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_15c,CONCAT43(uStack_160,uStack_164._1_3_));
  plVar15[0x18] = CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
  _auStack_288 = ZEXT816(0);
  uStack_148 = plVar15;
  func_0x048afd20(plVar10,&uStack_158);
  plVar15 = uStack_148;
  if (uStack_148 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_148 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_148 + 0x10))(uStack_148);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
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
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)lStack_228 << 0x10;
      }
      func_0x048b0bc0(&uStack_210);
      goto joined_r0x0c02dc37;
    }
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
    iVar7 = *piVar14;
    while (iVar7 != (int)plVar10[3]) {
      piVar14 = piVar14 + 0x1a;
      iVar7 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | (int)lStack_228 << 0x10;
  func_0x048b0bc0(&uStack_210);
joined_r0x0c02dc37:
  if (cStack_230 == '\x01') {
    if ((uStack_238 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
    }
    uStack_238 = 0;
    if ((uStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_240 & 0xff00ffffffffffff) - 8);
    }
    uStack_240 = 0;
  }
  func_0x0412a280(puVar9,0x68);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13d4f50  Should_despawn component determines if the item should eventually despawn while floating in the 
 * 0x13d4f60  omponent determines if the item should eventually despawn while floating in the world
 * 0x13d4f70  nes if the item should eventually despawn while floating in the world
 * 0x13d4f80  should eventually despawn while floating in the world
 * 0x13d4f90  y despawn while floating in the world
 * 0x13d4fa0  floating in the world
 * 0x14eaba0  [cereal:document
 */
