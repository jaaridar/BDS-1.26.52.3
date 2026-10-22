/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc02fab0 (ELF vaddr 0xbf2fab0)
 * Label: caller-of-callee
 * Body:  [[0c02fab0, 0c0300ec] [0c0300f0, 0c030131] [0c030140, 0c030ae5] [0c030af0, 0c03169c]]
 * Ghidra: FUN_0c02fab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c02fab0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  byte *pbVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long *plStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined4 uStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [8];
  ulong uStack_2f0;
  ulong uStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  char cStack_2cc;
  char cStack_2c8;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  char cStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  ulong auStack_1a8 [2];
  undefined *puStack_198;
  code *pcStack_190;
  undefined4 uStack_188;
  undefined1 uStack_184;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  int iStack_158;
  undefined4 uStack_154;
  undefined1 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  uVar4 = _UNK_013eee50;
  puVar10[10] = _DAT_013eee48;
  puVar10[0xb] = uVar4;
  uVar4 = _UNK_013eee40;
  puVar10[8] = _DAT_013eee38;
  puVar10[9] = uVar4;
  uVar4 = _UNK_013eee30;
  puVar10[6] = _DAT_013eee28;
  puVar10[7] = uVar4;
  uVar4 = _UNK_013eee20;
  puVar10[4] = _DAT_013eee18;
  puVar10[5] = uVar4;
  uVar4 = _UNK_013eee10;
  puVar10[2] = _DAT_013eee08;
  puVar10[3] = uVar4;
  uVar4 = _UNK_013eee00;
  *puVar10 = _DAT_013eedf8;
  puVar10[1] = uVar4;
  *(undefined4 *)((long)puVar10 + 0x5f) = 0x2e6d6574;
  *(undefined1 *)((long)puVar10 + 99) = 0;
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  cStack_2a0 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_2b8 = *param_3;
    uStack_2b0 = 0;
    uVar21 = param_3[1];
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar16 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar16 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar16;
      func_0x0eee2f00(plVar11 + 1,uVar21 & 0xff00ffffffffffff,lVar16);
      *(undefined1 *)((long)plVar11 + lVar16 + 8) = 0;
      uVar21 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2a8 = 0;
    uVar22 = param_3[2];
    uStack_2b0 = uVar21;
    if ((uVar22 & 0x80000000000000) != 0) {
      lVar16 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar16 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar16;
      func_0x0eee2f00(plVar11 + 1,uVar22 & 0xff00ffffffffffff,lVar16);
      *(undefined1 *)((long)plVar11 + lVar16 + 8) = 0;
      uVar22 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_2a0 = '\x01';
    uStack_2a8 = uVar22;
  }
  lVar12 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar24 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar16 = lVar12 + 9;
    if (bVar24) {
      lVar16 = *(long *)(lVar12 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c069d90(auStack_2f8,param_1,lVar16,uVar21,1);
  }
  else {
    func_0x0c069d90(auStack_2f8,param_1,0,0,1);
  }
  if (cStack_2c8 == '\0') {
    if ((DAT_0f6d3060 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3060), iVar8 != 0)) {
      func_0x0ee25020(0xf6d3038,&DAT_01408619);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d3038,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3060);
    }
    uVar21 = (ulong)(DAT_0f6d3040 >> 1);
    lVar12 = 0xf6d3041;
    if ((DAT_0f6d3040 & 1) != 0) {
      uVar21 = _DAT_0f6d3048;
      lVar12 = _DAT_0f6d3050;
    }
    func_0x0c06a780(&lStack_298,auStack_2f8,lVar12,uVar21,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f34da18;
    if (uStack_280 != (long *)0x0) {
      lVar12 = *uStack_280;
      uStack_280 = plVar11;
      (**(code **)(lVar12 + 8))();
      plVar11 = uStack_280;
    }
    uStack_280 = plVar11;
    uStack_360 = (undefined4)lStack_288;
    lStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x1;
    uStack_340 = 0;
    uStack_338 = &UNK_0c072440;
    puStack_330 = &SUB_048b06d0;
    puStack_328 = &UNK_0c0720b0;
    puStack_320 = &UNK_0c072500;
    puStack_318 = &UNK_0c0727a0;
    uStack_310 = 0;
    auStack_308 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_290,&uStack_360);
    uVar4 = auStack_308._8_8_;
    if ((long *)auStack_308._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_308._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_308._8_8_ + 0x10))(auStack_308._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(lStack_290 + 0x1c);
    if (iVar8 == 2) {
      piVar19 = *(int **)(*(long *)(*(long *)(lStack_290 + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar19;
      while (iVar8 != *(int *)(lStack_290 + 0x18)) {
        piVar19 = piVar19 + 0x16;
        iVar8 = *piVar19;
      }
      lVar12 = *(long *)(piVar19 + 0xc);
      while (lVar12 != *(long *)(lStack_290 + 8)) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar12 = *(long *)(piVar19 + 0xc);
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar19 = *(int **)(*(long *)(*(long *)(lStack_290 + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar19;
      while (iVar8 != *(int *)(lStack_290 + 0x18)) {
        piVar19 = piVar19 + 0x1a;
        iVar8 = *piVar19;
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_290 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_298);
    FUN_048b0bc0(&uStack_280);
  }
  if ((DAT_0f6d3060 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d3060), iVar8 != 0)) {
    func_0x0ee25020(0xf6d3038,&DAT_01408619);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3038,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3060);
  }
  uVar21 = (ulong)(DAT_0f6d3040 >> 1);
  lVar12 = 0xf6d3041;
  if ((DAT_0f6d3040 & 1) != 0) {
    uVar21 = _DAT_0f6d3048;
    lVar12 = _DAT_0f6d3050;
  }
  if ((DAT_0f6d34e8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d34e8), iVar8 != 0)) {
    func_0x0c071a00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3468,0xf53dab8);
    func_0x0410844d(&DAT_0f6d34e8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d3468 + 4)) * 8);
  do {
    lVar16 = *plVar11;
    if (lVar16 == -1) goto LAB_0c02fff1;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6d3468 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0c02fff1:
    puVar13 = &DAT_0f6d3468;
    iVar8 = iRam000000000f6d34c8;
  }
  else {
    puVar13 = (undefined *)plVar11[2];
    iVar8 = *(int *)(puVar13 + 0x60);
  }
  if ((iVar8 == -0x2b3da790) && (lVar16 = *(long *)(puVar13 + 0x68), lVar16 != 0)) {
    bVar24 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar12 = lVar16 + 9;
    if (bVar24) {
      lVar12 = *(long *)(lVar16 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar16 + 0x10);
    }
  }
  func_0x0c072bf0(&uStack_360,param_1,lVar12,uVar21);
  lVar12 = CONCAT44(uStack_35c,uStack_360);
  if ((DAT_0f6d34e8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6d34e8), iVar8 != 0)) {
    func_0x0c071a00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3468,0xf53dab8);
    func_0x0410844d(&DAT_0f6d34e8);
  }
  plVar11 = (long *)(*(long *)(lVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d3468 + 4)) * 8);
  do {
    lVar16 = *plVar11;
    if (lVar16 == -1) goto LAB_0c0300b0;
    plVar11 = (long *)(*(long *)(lVar12 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6d3468 + 4));
  if (plVar11 == *(long **)(lVar12 + 0x38)) {
LAB_0c0300b0:
    puVar13 = &DAT_0f6d3468;
  }
  else {
    puVar13 = (undefined *)plVar11[2];
  }
  pbVar3 = *(byte **)(CONCAT44(uStack_35c,uStack_360) + 0x58);
  for (pbVar14 = *(byte **)(CONCAT44(uStack_35c,uStack_360) + 0x50); pbVar14 != pbVar3;
      pbVar14 = pbVar14 + 0x38) {
    bVar2 = *pbVar14;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c03014a;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0c03014a:
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar14 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar14 + 0x10);
      }
      auVar25[0] = -(*pbVar20 == DAT_014eaba0);
      auVar25[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar25[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar25[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar25[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar25[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar25[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar25[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar25[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar25[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar25[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar25[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar25[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar25[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar25[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar25[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar26[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar26[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar26[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar26[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar26[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar26[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar26[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar26[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar26[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar26[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar26[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar26[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar26[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar26[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar26[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar26[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
      auVar26 = auVar26 & auVar25;
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == pbVar3) {
LAB_0c030178:
    if ((int)uStack_338 == 0) {
      if (((puVar13 == (undefined *)0x0) || (*(int *)(puVar13 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar13 + 0x68) == 0)) goto LAB_0c030203;
      lVar12 = *(long *)(puVar13 + 0x68) + 0x38;
    }
    else {
      uVar6 = uStack_338._4_4_;
      if (puVar13 == (undefined *)0x0) {
        puVar13 = (undefined *)func_0x048aead0(lVar12 + 0x18);
      }
      auStack_2f8 = (undefined1  [8])func_0x048b0c90(lVar12 + 0x18,puVar13,uVar6,1);
      if (auStack_2f8 == (undefined1  [8])0x0) {
        _auStack_2f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2f8);
        if (auStack_2f8 == (undefined1  [8])0x0) goto LAB_0c030203;
      }
      if ((*(int *)((long)auStack_2f8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2f8 + 0x58) != 0)) {
        lVar12 = *(long *)((long)auStack_2f8 + 0x58) + 0x40;
      }
      else {
LAB_0c030203:
        lVar12 = 0;
      }
    }
    puStack_198 = &UNK_0488e0b0;
    uStack_188 = 0x48b5725f;
    pcStack_190 = (code *)0x0;
    uStack_184 = 0;
    auStack_1a8[0] = 0;
    _auStack_2f8 = (undefined1  [16])0x0;
    pcStack_2e0 = (code *)&UNK_0488e0b0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = 0x48b5725f;
    cStack_2cc = '\0';
    puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_1c8 = 0x21;
    uStack_1c0 = 0x1a;
    *(ulong *)((long)puStack_1b8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1b8 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1b8 = _DAT_013bbacd;
    puStack_1b8[1] = uVar4;
    *(undefined1 *)((long)puStack_1b8 + 0x1a) = 0;
    lVar12 = func_0x048b5060(lVar12,&uStack_1c8);
    *(undefined8 *)(lVar12 + 0x20) = 0;
    if ((undefined1 *)(lVar12 + 0x20) == auStack_2f8) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar12 + 0x40) != (code *)0x0) {
        puVar23 = (ulong *)(lVar12 + 0x28);
        (**(code **)(lVar12 + 0x40))(puVar23);
        if (cStack_2cc != '\0') {
          if (cStack_2cc == '\x02') {
            (*pcStack_2e0)(5,&uStack_2f0,puVar23);
          }
          else {
            uVar21 = uStack_2f0;
            uStack_2f0 = 0;
            *puVar23 = uVar21;
          }
        }
      }
      *(code **)(lVar12 + 0x38) = pcStack_2e0;
      *(code **)(lVar12 + 0x40) = pcStack_2d8;
      *(undefined4 *)(lVar12 + 0x48) = uStack_2d0;
      *(char *)(lVar12 + 0x4c) = cStack_2cc;
      pcVar15 = pcStack_2d8;
    }
    if ((uStack_1c8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
      pcVar15 = pcStack_2d8;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(&uStack_2f0);
    }
    if (pcStack_190 != (code *)0x0) {
      (*pcStack_190)(auStack_1a8);
    }
  }
  else {
    iVar8 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0c030178;
  }
  puStack_268 = puStack_330;
  lStack_298 = CONCAT44(uStack_35c,uStack_360);
  lStack_288 = CONCAT44(uStack_34c,uStack_350);
  uStack_278 = uStack_340;
  puStack_270 = uStack_338;
  uStack_280 = plStack_348;
  lStack_290 = lStack_358;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd09;
  _auStack_2f8 = auVar5 << 8;
  pcStack_2e0 = (code *)((ulong)pcStack_2e0 & 0xffffffffffffff00);
  if (cStack_2a0 == '\x01') {
    uStack_2f0 = 0;
    auStack_2f8 = (undefined1  [8])uStack_2b8;
    auVar25 = _auStack_2f8;
    uStack_2f0 = uStack_2b0;
    if ((uStack_2b0 & 0x80000000000000) != 0) {
      uVar21 = uStack_2b0 & 0xff00ffffffffffff;
      lVar16 = *(long *)(uVar21 - 8);
      lVar12 = lVar16 + 9;
      _auStack_2f8 = auVar25;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar16;
      func_0x0eee2f00(plVar11 + 1,uVar21,lVar16);
      *(undefined1 *)((long)plVar11 + lVar16 + 8) = 0;
      uStack_2f0 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2e8 = 0;
    uVar21 = uStack_2a8;
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      uVar21 = uStack_2a8 & 0xff00ffffffffffff;
      lVar16 = *(long *)(uVar21 - 8);
      lVar12 = lVar16 + 9;
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar11 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar11 = lVar16;
      func_0x0eee2f00(plVar11 + 1,uVar21,lVar16);
      *(undefined1 *)((long)plVar11 + lVar16 + 8) = 0;
      uVar21 = (ulong)(plVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_2e0 = (code *)CONCAT71(pcStack_2e0._1_7_,1);
    uStack_2e8 = uVar21;
  }
  FUN_0412e5e0(auStack_1a8,puVar10,99);
  lStack_148 = lStack_298;
  lStack_140 = lStack_290;
  lStack_138 = lStack_288;
  plStack_130 = uStack_280;
  uStack_128 = uStack_278;
  uStack_120 = puStack_270;
  puStack_118 = puStack_268;
  if ((auStack_1a8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_198,auStack_1a8[0] & 0xfffffffffffffffe);
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
  func_0x0c0731e0(&lStack_298,lStack_148 + 0x18);
  if (uStack_280._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x60);
    iVar8 = *piVar19;
    while (iVar8 != (int)uStack_280) {
      piVar19 = piVar19 + 0x16;
      iVar8 = *piVar19;
    }
    lVar12 = *(long *)(piVar19 + 0xc);
    while (lVar12 != lStack_290) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar12 = *(long *)(piVar19 + 0xc);
    }
LAB_0c0306df:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack_280._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x48);
      iVar8 = *piVar19;
      while (iVar8 != (int)uStack_280) {
        piVar19 = piVar19 + 0x1a;
        iVar8 = *piVar19;
      }
      goto LAB_0c0306df;
    }
    if (uStack_280._4_4_ == 0) {
      *(uint *)(lStack_288 + 0x18) = *(uint *)(lStack_288 + 0x18) | 0x40000;
    }
  }
  func_0x0c0737c0(&lStack_298,&lStack_148,&UNK_01386170,9);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ce8;
  if (uStack_280 != (long *)0x0) {
    lVar12 = *uStack_280;
    uStack_280 = plVar11;
    (**(code **)(lVar12 + 8))();
    plVar11 = uStack_280;
  }
  uStack_280 = plVar11;
  uStack_360 = (undefined4)lStack_288;
  lStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x1;
  uStack_340 = 0;
  uStack_338 = &UNK_0490ce30;
  puStack_330 = &SUB_048b06d0;
  puStack_328 = &SUB_0490cb20;
  puStack_320 = &UNK_0c073dd0;
  puStack_318 = &UNK_0c073f30;
  uStack_310 = 0;
  auStack_308 = ZEXT816(0);
  func_0x048b05a0(lStack_290,&uStack_360);
  uVar4 = auStack_308._8_8_;
  if ((long *)auStack_308._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_308._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_308._8_8_ + 0x10))(auStack_308._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c073ad0(&lStack_298);
  lVar12 = lStack_148;
  lStack_88 = lStack_140;
  lStack_80 = lStack_138;
  plStack_78 = plStack_130;
  uStack_70 = uStack_128;
  iVar8 = (int)uStack_120;
  uVar6 = uStack_120._4_4_;
  uVar7 = puStack_118._0_1_;
  FUN_048b0bc0(&uStack_280);
  if (iVar8 == 4) {
    if ((DAT_0f6d34e8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d34e8), iVar9 != 0)) {
      func_0x0c071a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3468,0xf53dab8);
      func_0x0410844d(&DAT_0f6d34e8);
    }
    plVar11 = (long *)(*(long *)(lVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d3468 + 4)) * 8);
    do {
      lVar16 = *plVar11;
      if (lVar16 == -1) goto LAB_0c030968;
      plVar11 = (long *)(*(long *)(lVar12 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6d3468 + 4)
            );
    if (plVar11 == *(long **)(lVar12 + 0x38)) {
LAB_0c030968:
      puVar13 = &DAT_0f6d3468;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    lVar16 = func_0x048b1040(lVar12 + 0x18,puVar13,uVar6,1);
    if (lVar16 == 0) {
      lStack_298 = 0;
      lStack_290 = 0;
      func_0x048b10d0(&lStack_298);
      lVar18 = *(long *)(lStack_298 + 0x38);
      lVar16 = lStack_298;
      if (lVar18 == 0) goto LAB_0c030ab7;
LAB_0c030adc:
      do {
        lVar16 = lVar18;
        lVar18 = *(long *)(lVar16 + 0x38);
        if (*(long *)(lVar16 + 0x38) == 0) {
          lStack_298 = 0;
          lStack_290 = 0;
          func_0x048b10d0(&lStack_298);
          lVar18 = lStack_298;
        }
      } while (lVar18 != 0);
    }
    else {
      lVar18 = *(long *)(lVar16 + 0x38);
      if (*(long *)(lVar16 + 0x38) != 0) goto LAB_0c030adc;
LAB_0c030ab7:
      lStack_298 = 0;
      lStack_290 = 0;
      func_0x048b10d0(&lStack_298);
      lVar18 = lStack_298;
      if (lStack_298 != 0) goto LAB_0c030adc;
    }
    lVar16 = *(long *)(lVar16 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0c030b44:
    puVar17[1] = 0xffffffffffffffff;
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 0xff;
    *puVar17 = &UNK_0f0edc68;
    uVar4 = _UNK_014e1e38;
    puVar17[4] = _DAT_014e1e30;
    puVar17[5] = uVar4;
    puVar17[6] = 0;
    *(undefined2 *)(puVar17 + 7) = 0;
    *(undefined4 *)((long)puVar17 + 0x3a) = 0;
    *(undefined2 *)((long)puVar17 + 0x3e) = 0;
    plVar11 = *(long **)(lVar16 + 8);
    *(undefined8 **)(lVar16 + 8) = puVar17;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
  else if (iVar8 == 1) {
    if ((DAT_0f6d34e8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d34e8), iVar9 != 0)) {
      func_0x0c071a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3468,0xf53dab8);
      func_0x0410844d(&DAT_0f6d34e8);
    }
    plVar11 = (long *)(*(long *)(lVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d3468 + 4)) * 8);
    do {
      lVar16 = *plVar11;
      if (lVar16 == -1) goto LAB_0c0308e8;
      plVar11 = (long *)(*(long *)(lVar12 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6d3468 + 4)
            );
    if (plVar11 == *(long **)(lVar12 + 0x38)) {
LAB_0c0308e8:
      puVar13 = &DAT_0f6d3468;
    }
    else {
      puVar13 = (undefined *)plVar11[2];
    }
    lVar16 = func_0x048b0c90(lVar12 + 0x18,puVar13,uVar6,1);
    if (lVar16 == 0) {
      lStack_298 = 0;
      lStack_290 = 0;
      func_0x048b0d20(&lStack_298);
      lVar16 = lStack_298;
    }
    lVar16 = *(long *)(lVar16 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0c030b44;
  }
  plStack_168 = plStack_78;
  uStack_160 = uStack_70;
  lStack_178 = lStack_88;
  lStack_170 = lStack_80;
  lStack_180 = lVar12;
  iStack_158 = iVar8;
  uStack_154 = uVar6;
  uStack_150 = uVar7;
  func_0x0c0731e0(&lStack_298,lVar12 + 0x18);
  if (uStack_280._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x60);
    iVar8 = *piVar19;
    while (iVar8 != (int)uStack_280) {
      piVar19 = piVar19 + 0x16;
      iVar8 = *piVar19;
    }
    lVar12 = *(long *)(piVar19 + 0xc);
    while (lVar12 != lStack_290) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar12 = *(long *)(piVar19 + 0xc);
    }
LAB_0c030c7f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack_280._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x48);
      iVar8 = *piVar19;
      while (iVar8 != (int)uStack_280) {
        piVar19 = piVar19 + 0x1a;
        iVar8 = *piVar19;
      }
      goto LAB_0c030c7f;
    }
    if (uStack_280._4_4_ == 0) {
      *(uint *)(lStack_288 + 0x18) = *(uint *)(lStack_288 + 0x18) | 0x40000;
    }
  }
  func_0x0c0737c0(&lStack_298,&lStack_180,&UNK_0131a7f2,0x1a);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_280 != (long *)0x0) {
    lVar12 = *uStack_280;
    uStack_280 = plVar11;
    (**(code **)(lVar12 + 8))();
    plVar11 = uStack_280;
  }
  uStack_280 = plVar11;
  uStack_360 = (undefined4)lStack_288;
  lStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x1;
  uStack_340 = 0;
  uStack_338 = &UNK_04906f70;
  puStack_330 = &SUB_048b06d0;
  puStack_328 = &SUB_04906c50;
  puStack_320 = &UNK_0c074110;
  puStack_318 = &UNK_0c074270;
  uStack_310 = 0;
  auStack_308 = ZEXT816(0);
  func_0x048b05a0(lStack_290,&uStack_360);
  uVar4 = auStack_308._8_8_;
  if ((long *)auStack_308._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_308._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_308._8_8_ + 0x10))(auStack_308._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c073ad0(&lStack_298);
  uStack_98 = uStack_150;
  uStack_a0 = CONCAT44(uStack_154,iStack_158);
  uStack_a8 = uStack_160;
  lStack_b8 = lStack_170;
  plStack_b0 = plStack_168;
  lStack_c8 = lStack_180;
  lStack_c0 = lStack_178;
  FUN_048b0bc0(&uStack_280);
  lStack_108 = lStack_c8;
  lStack_100 = lStack_c0;
  lStack_f8 = lStack_b8;
  plStack_f0 = plStack_b0;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  uStack_d8 = CONCAT71(uStack_97,uStack_98);
  func_0x0c0731e0(&lStack_298,lStack_c8 + 0x18);
  if (uStack_280._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x60);
    iVar8 = *piVar19;
    while (iVar8 != (int)uStack_280) {
      piVar19 = piVar19 + 0x16;
      iVar8 = *piVar19;
    }
    lVar12 = *(long *)(piVar19 + 0xc);
    while (lVar12 != lStack_290) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar12 = *(long *)(piVar19 + 0xc);
    }
LAB_0c030f1f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack_280._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x48);
      iVar8 = *piVar19;
      while (iVar8 != (int)uStack_280) {
        piVar19 = piVar19 + 0x1a;
        iVar8 = *piVar19;
      }
      goto LAB_0c030f1f;
    }
    if (uStack_280._4_4_ == 0) {
      *(uint *)(lStack_288 + 0x18) = *(uint *)(lStack_288 + 0x18) | 0x40000;
    }
  }
  func_0x0c0737c0(&lStack_298,&lStack_108,&UNK_0129a658,0xc);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f34fd10;
  if (uStack_280 != (long *)0x0) {
    lVar12 = *uStack_280;
    uStack_280 = plVar11;
    (**(code **)(lVar12 + 8))();
    plVar11 = uStack_280;
  }
  uStack_280 = plVar11;
  uStack_360 = (undefined4)lStack_288;
  lStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x1;
  uStack_340 = 0;
  uStack_338 = &UNK_0c075880;
  puStack_330 = &SUB_048b06d0;
  puStack_328 = &UNK_08f16290;
  puStack_320 = &UNK_0c075890;
  puStack_318 = &UNK_0c075bb0;
  uStack_310 = 0;
  auStack_308 = ZEXT816(0);
  func_0x048b05a0(lStack_290,&uStack_360);
  uVar4 = auStack_308._8_8_;
  if ((long *)auStack_308._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_308._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_308._8_8_ + 0x10))(auStack_308._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c073ad0(&lStack_298);
  uStack_38 = (undefined1)uStack_d8;
  uStack_48 = uStack_e8;
  uStack_40 = uStack_e0;
  lStack_58 = lStack_f8;
  plStack_50 = plStack_f0;
  lStack_68 = lStack_108;
  lStack_60 = lStack_100;
  FUN_048b0bc0(&uStack_280);
  func_0x0c0731e0(&lStack_298,lStack_68 + 0x18);
  if (uStack_280._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x60);
    iVar8 = *piVar19;
    while (iVar8 != (int)uStack_280) {
      piVar19 = piVar19 + 0x16;
      iVar8 = *piVar19;
    }
    lVar12 = *(long *)(piVar19 + 0xc);
    while (lVar12 != lStack_290) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar12 = *(long *)(piVar19 + 0xc);
    }
  }
  else {
    if (uStack_280._4_4_ != 1) {
      if (uStack_280._4_4_ == 0) {
        *(uint *)(lStack_288 + 0x18) = *(uint *)(lStack_288 + 0x18) | 0x40000;
      }
      goto LAB_0c031173;
    }
    piVar19 = *(int **)(*(long *)(lStack_288 + 0x78) + 0x48);
    iVar8 = *piVar19;
    while (iVar8 != (int)uStack_280) {
      piVar19 = piVar19 + 0x1a;
      iVar8 = *piVar19;
    }
  }
  *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
LAB_0c031173:
  func_0x0c0737c0(&lStack_298,&lStack_68,&UNK_012ffeae,0xd);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f34fd10;
  if (uStack_280 != (long *)0x0) {
    lVar12 = *uStack_280;
    uStack_280 = puVar17;
    (**(code **)(lVar12 + 8))();
    puVar17 = uStack_280;
  }
  uStack_280 = puVar17;
  uStack_360 = (undefined4)lStack_288;
  lStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x1;
  uStack_340 = 0;
  uStack_338 = &UNK_0c075880;
  puStack_330 = &SUB_048b06d0;
  puStack_328 = &UNK_08f16290;
  puStack_320 = &UNK_0c076020;
  puStack_318 = &UNK_0c076340;
  uStack_310 = 0;
  auStack_308 = ZEXT816(0);
  func_0x048b05a0(lStack_290,&uStack_360);
  uVar4 = auStack_308._8_8_;
  if ((long *)auStack_308._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_308._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_308._8_8_ + 0x10))(auStack_308._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c073ad0(&lStack_298);
  FUN_048b0bc0(&uStack_280);
  if (cStack_2a0 == '\x01') {
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2a8 = 0;
    if ((uStack_2b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_2b0 = 0;
  }
  thunk_FUN_0ee326a0(puVar10,0x68);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13eedf8  [EXPERIMENTAL] Storage Items can be used by other components to store other items within this it
 * 0x13eee08  torage Items can be used by other components to store other items within this item.
 * 0x13eee18   be used by other components to store other items within this item.
 * 0x13eee28  r components to store other items within this item.
 * 0x13eee38  store other items within this item.
 * 0x13eee48  s within this item.
 * 0x14eaba0  [cereal:document
 */
