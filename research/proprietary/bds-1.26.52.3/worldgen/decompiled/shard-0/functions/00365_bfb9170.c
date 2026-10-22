/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0b9170 (ELF vaddr 0xbfb9170)
 * Label: caller-of-callee
 * Body:  [[0c0b9170, 0c0b976c] [0c0b9770, 0c0b97b1] [0c0b97c0, 0c0ba53e]]
 * Ghidra: FUN_0c0b9170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0b9170(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  byte *pbVar12;
  code *pcVar13;
  long *plVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_2b8 [8];
  ulong uStack_2b0;
  ulong uStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  undefined4 uStack_290;
  char cStack_28c;
  char cStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined1 auStack_228 [16];
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  char cStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  ulong auStack_1e0 [2];
  undefined *puStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
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
  undefined *puStack_80;
  undefined1 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_012fff42;
  *(ulong *)((long)puVar9 + 9) = CONCAT17(UNK_012fff41,_DAT_012fff3a);
  *(undefined8 *)((long)puVar9 + 0x11) = uVar4;
  uVar4 = CONCAT71(_DAT_012fff3a,UNK_012fff39);
  *puVar9 = _DAT_012fff31;
  puVar9[1] = uVar4;
  *(undefined1 *)((long)puVar9 + 0x19) = 0;
  uStack_218 = uStack_218 & 0xffffffffffffff00;
  cStack_200 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_218 = *param_3;
    uStack_210 = 0;
    uVar21 = param_3[1];
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar17 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar17 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar14 = lVar17;
      func_0x0eee2f00(plVar14 + 1,uVar21 & 0xff00ffffffffffff,lVar17);
      *(undefined1 *)((long)plVar14 + lVar17 + 8) = 0;
      uVar21 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_208 = 0;
    uVar19 = param_3[2];
    uStack_210 = uVar21;
    if ((uVar19 & 0x80000000000000) != 0) {
      lVar17 = *(long *)((uVar19 & 0xff00ffffffffffff) - 8);
      lVar10 = lVar17 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar14 = lVar17;
      func_0x0eee2f00(plVar14 + 1,uVar19 & 0xff00ffffffffffff,lVar17);
      *(undefined1 *)((long)plVar14 + lVar17 + 8) = 0;
      uVar19 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_200 = '\x01';
    uStack_208 = uVar19;
  }
  lVar10 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar17 = lVar10 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar10 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar21 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0c069d90(auStack_2b8,param_1,lVar17,uVar21,1);
  }
  else {
    func_0x0c069d90(auStack_2b8,param_1,0,0,1);
  }
  if (cStack_288 == '\0') {
    if ((DAT_0f6d4ec0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4ec0), iVar7 != 0)) {
      func_0x0ee25020(0xf6d4e98,&DAT_012fff31);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d4e98,0xf53dab8);
      func_0x0410844d(&DAT_0f6d4ec0);
    }
    uVar21 = (ulong)(DAT_0f6d4ea0 >> 1);
    lVar10 = 0xf6d4ea1;
    if ((DAT_0f6d4ea0 & 1) != 0) {
      uVar21 = _DAT_0f6d4ea8;
      lVar10 = _DAT_0f6d4eb0;
    }
    func_0x0c06a780(&lStack_1b8,auStack_2b8,lVar10,uVar21,0);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f351040;
    if (uStack_1a0 != (long *)0x0) {
      lVar10 = *uStack_1a0;
      uStack_1a0 = plVar14;
      (**(code **)(lVar10 + 8))();
      plVar14 = uStack_1a0;
    }
    uStack_1a0 = plVar14;
    uStack_280 = (undefined4)lStack_1a8;
    lStack_278 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x1;
    uStack_260 = 0;
    uStack_258 = &UNK_0c0ecc90;
    puStack_250 = &SUB_048b06d0;
    puStack_248 = &UNK_0c0ec900;
    puStack_240 = &UNK_0c0ecd50;
    puStack_238 = &UNK_0c0ecff0;
    uStack_230 = 0;
    auStack_228 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_1b0,&uStack_280);
    uVar4 = auStack_228._8_8_;
    if ((long *)auStack_228._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_228._8_8_ + 8);
      lVar10 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_228._8_8_ + 0x10))(auStack_228._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar7 = *(int *)(lStack_1b0 + 0x1c);
    if (iVar7 == 2) {
      piVar15 = *(int **)(*(long *)(*(long *)(lStack_1b0 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(lStack_1b0 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar10 = *(long *)(piVar15 + 0xc);
      while (lVar10 != *(long *)(lStack_1b0 + 8)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar10 = *(long *)(piVar15 + 0xc);
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar15 = *(int **)(*(long *)(*(long *)(lStack_1b0 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(lStack_1b0 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_1b0 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_1b8);
    FUN_048b0bc0(&uStack_1a0);
  }
  if ((DAT_0f6d4ec0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4ec0), iVar7 != 0)) {
    func_0x0ee25020(0xf6d4e98,&DAT_012fff31);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4e98,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4ec0);
  }
  uVar21 = (ulong)(DAT_0f6d4ea0 >> 1);
  lVar10 = 0xf6d4ea1;
  if ((DAT_0f6d4ea0 & 1) != 0) {
    uVar21 = _DAT_0f6d4ea8;
    lVar10 = _DAT_0f6d4eb0;
  }
  if ((DAT_0f6d5518 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d5518), iVar7 != 0)) {
    func_0x0c0ec260();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5498,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5518);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d5498 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_0c0b9671;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f6d5498 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0c0b9671:
    puVar11 = &DAT_0f6d5498;
    iVar7 = iRam000000000f6d54f8;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    iVar7 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar17 = *(long *)(puVar11 + 0x68), lVar17 != 0)) {
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar10 = lVar17 + 9;
    if (bVar22) {
      lVar10 = *(long *)(lVar17 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar21 = *(ulong *)(lVar17 + 0x10);
    }
  }
  func_0x0c0ed440(&uStack_280,param_1,lVar10,uVar21);
  lVar10 = CONCAT44(uStack_27c,uStack_280);
  if ((DAT_0f6d5518 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d5518), iVar7 != 0)) {
    func_0x0c0ec260();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d5498,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5518);
  }
  plVar14 = (long *)(*(long *)(lVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d5498 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_0c0b9730;
    plVar14 = (long *)(*(long *)(lVar10 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f6d5498 + 4));
  if (plVar14 == *(long **)(lVar10 + 0x38)) {
LAB_0c0b9730:
    puVar11 = &DAT_0f6d5498;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  pbVar3 = *(byte **)(CONCAT44(uStack_27c,uStack_280) + 0x58);
  for (pbVar12 = *(byte **)(CONCAT44(uStack_27c,uStack_280) + 0x50); pbVar12 != pbVar3;
      pbVar12 = pbVar12 + 0x38) {
    bVar2 = *pbVar12;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0b97ca;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1a) {
LAB_0c0b97ca:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar12 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar12 + 0x10);
      }
      auVar23[0] = -(*pbVar18 == DAT_014eaba0);
      auVar23[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar23[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar23[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar23[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar23[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar23[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar23[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar23[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar23[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar23[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar23[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar23[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar23[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar23[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar23[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar24[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar24[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar24[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar24[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar24[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar24[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar24[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar24[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar24[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar24[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar24[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar24[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar24[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar24[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar24[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar24[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar24 = auVar24 & auVar23;
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar12 == pbVar3) {
LAB_0c0b97f8:
    if ((int)uStack_258 == 0) {
      if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0c0b987a;
      lVar10 = *(long *)(puVar11 + 0x68) + 0x38;
    }
    else {
      uVar6 = uStack_258._4_4_;
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)func_0x048aead0(lVar10 + 0x18);
      }
      auStack_2b8 = (undefined1  [8])func_0x048b0c90(lVar10 + 0x18,puVar11,uVar6,1);
      if (auStack_2b8 == (undefined1  [8])0x0) {
        _auStack_2b8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2b8);
        if (auStack_2b8 == (undefined1  [8])0x0) goto LAB_0c0b987a;
      }
      if ((*(int *)((long)auStack_2b8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2b8 + 0x58) != 0)) {
        lVar10 = *(long *)((long)auStack_2b8 + 0x58) + 0x40;
      }
      else {
LAB_0c0b987a:
        lVar10 = 0;
      }
    }
    puStack_1d0 = &UNK_0488e0b0;
    uStack_1c0 = 0x48b5725f;
    pcStack_1c8 = (code *)0x0;
    uStack_1bc = 0;
    auStack_1e0[0] = 0;
    _auStack_2b8 = (undefined1  [16])0x0;
    pcStack_2a0 = (code *)&UNK_0488e0b0;
    pcStack_298 = (code *)0x0;
    uStack_290 = 0x48b5725f;
    cStack_28c = '\0';
    puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_1f8 = 0x21;
    uStack_1f0 = 0x1a;
    *(ulong *)((long)puStack_1e8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1e8 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1e8 = _DAT_013bbacd;
    puStack_1e8[1] = uVar4;
    *(undefined1 *)((long)puStack_1e8 + 0x1a) = 0;
    lVar10 = func_0x048b5060(lVar10,&uStack_1f8);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_2b8) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar20 = (ulong *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar20);
        if (cStack_28c != '\0') {
          if (cStack_28c == '\x02') {
            (*pcStack_2a0)(5,&uStack_2b0,puVar20);
          }
          else {
            uVar21 = uStack_2b0;
            uStack_2b0 = 0;
            *puVar20 = uVar21;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = pcStack_2a0;
      *(code **)(lVar10 + 0x40) = pcStack_298;
      *(undefined4 *)(lVar10 + 0x48) = uStack_290;
      *(char *)(lVar10 + 0x4c) = cStack_28c;
      pcVar13 = pcStack_298;
    }
    if ((uStack_1f8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      pcVar13 = pcStack_298;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&uStack_2b0);
    }
    if (pcStack_1c8 != (code *)0x0) {
      (*pcStack_1c8)(auStack_1e0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c0b97f8;
  }
  puStack_188 = puStack_250;
  lStack_1b8 = CONCAT44(uStack_27c,uStack_280);
  lStack_1a8 = CONCAT44(uStack_26c,uStack_270);
  uStack_198 = uStack_260;
  puStack_190 = uStack_258;
  uStack_1a0 = plStack_268;
  lStack_1b0 = lStack_278;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd49;
  _auStack_2b8 = auVar5 << 8;
  pcStack_2a0 = (code *)((ulong)pcStack_2a0 & 0xffffffffffffff00);
  if (cStack_200 == '\x01') {
    uStack_2b0 = 0;
    auStack_2b8 = (undefined1  [8])uStack_218;
    auVar23 = _auStack_2b8;
    uStack_2b0 = uStack_210;
    if ((uStack_210 & 0x80000000000000) != 0) {
      uVar21 = uStack_210 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar21 - 8);
      lVar10 = lVar17 + 9;
      _auStack_2b8 = auVar23;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar14 = lVar17;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar17);
      *(undefined1 *)((long)plVar14 + lVar17 + 8) = 0;
      uStack_2b0 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2a8 = 0;
    uVar21 = uStack_208;
    if ((uStack_208 & 0x80000000000000) != 0) {
      uVar21 = uStack_208 & 0xff00ffffffffffff;
      lVar17 = *(long *)(uVar21 - 8);
      lVar10 = lVar17 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
      if (lVar10 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar10,8);
      }
      *plVar14 = lVar17;
      func_0x0eee2f00(plVar14 + 1,uVar21,lVar17);
      *(undefined1 *)((long)plVar14 + lVar17 + 8) = 0;
      uVar21 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    uStack_2a8 = uVar21;
  }
  FUN_0412e5e0(auStack_1e0,puVar9,0x19);
  lStack_e8 = lStack_1b8;
  lStack_e0 = lStack_1b0;
  lStack_d8 = lStack_1a8;
  plStack_d0 = uStack_1a0;
  uStack_c8 = uStack_198;
  puStack_c0 = puStack_190;
  puStack_b8 = puStack_188;
  if ((auStack_1e0[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_1d0,auStack_1e0[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_2a0 == '\x01') {
    if ((uStack_2a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2a8 = 0;
    if ((uStack_2b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c0eda30(&lStack_1b8,lStack_e8 + 0x18);
  if (uStack_1a0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(lStack_1a8 + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_1a0) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar10 = *(long *)(piVar15 + 0xc);
    while (lVar10 != lStack_1b0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar10 = *(long *)(piVar15 + 0xc);
    }
LAB_0c0b9cdf:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_1a0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(lStack_1a8 + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_1a0) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0c0b9cdf;
    }
    if (uStack_1a0._4_4_ == 0) {
      *(uint *)(lStack_1a8 + 0x18) = *(uint *)(lStack_1a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c0ee000(&lStack_1b8,&lStack_e8,&UNK_0130e44a,5,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0c2710;
  if (uStack_1a0 != (long *)0x0) {
    lVar10 = *uStack_1a0;
    uStack_1a0 = plVar14;
    (**(code **)(lVar10 + 8))();
    plVar14 = uStack_1a0;
  }
  uStack_1a0 = plVar14;
  uStack_280 = (undefined4)lStack_1a8;
  lStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x1;
  uStack_260 = 0;
  uStack_258 = &UNK_072a3520;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &SUB_072a3240;
  puStack_240 = &UNK_0c0ee5c0;
  puStack_238 = &UNK_0c0ee720;
  uStack_230 = 0;
  auStack_228 = ZEXT816(0);
  func_0x048b05a0(lStack_1b0,&uStack_280);
  uVar4 = auStack_228._8_8_;
  if ((long *)auStack_228._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_228._8_8_ + 8);
    lVar10 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_228._8_8_ + 0x10))(auStack_228._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0ee2c0(&lStack_1b8);
  uStack_78 = puStack_b8._0_1_;
  uStack_88 = uStack_c8;
  puStack_80 = puStack_c0;
  lStack_98 = lStack_d8;
  plStack_90 = plStack_d0;
  lStack_a8 = lStack_e8;
  lStack_a0 = lStack_e0;
  FUN_048b0bc0(&uStack_1a0);
  func_0x0c0ee000(&lStack_1b8,&lStack_a8,&UNK_012a7b2f,0xe,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0c2788;
  if (uStack_1a0 != (long *)0x0) {
    lVar10 = *uStack_1a0;
    uStack_1a0 = plVar14;
    (**(code **)(lVar10 + 8))();
    plVar14 = uStack_1a0;
  }
  uStack_1a0 = plVar14;
  uStack_280 = (undefined4)lStack_1a8;
  lStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x1;
  uStack_260 = 0;
  uStack_258 = &UNK_072a4810;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &UNK_072a44f0;
  puStack_240 = &UNK_0c0ee900;
  puStack_238 = &UNK_0c0eea70;
  uStack_230 = 0;
  auStack_228 = ZEXT816(0);
  func_0x048b05a0(lStack_1b0,&uStack_280);
  uVar4 = auStack_228._8_8_;
  if ((long *)auStack_228._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_228._8_8_ + 8);
    lVar10 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_228._8_8_ + 0x10))(auStack_228._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0ee2c0(&lStack_1b8);
  uStack_38 = uStack_78;
  uStack_48 = uStack_88;
  puStack_40 = puStack_80;
  lStack_58 = lStack_98;
  plStack_50 = plStack_90;
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  FUN_048b0bc0(&uStack_1a0);
  func_0x0c0eda30(&lStack_1b8,lStack_68 + 0x18);
  if (uStack_1a0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(lStack_1a8 + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_1a0) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar10 = *(long *)(piVar15 + 0xc);
    while (lVar10 != lStack_1b0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar10 = *(long *)(piVar15 + 0xc);
    }
  }
  else {
    if (uStack_1a0._4_4_ != 1) {
      if (uStack_1a0._4_4_ == 0) {
        *(uint *)(lStack_1a8 + 0x18) = *(uint *)(lStack_1a8 + 0x18) | 0x40000;
      }
      goto LAB_0c0ba0e3;
    }
    piVar15 = *(int **)(*(long *)(lStack_1a8 + 0x78) + 0x48);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_1a0) {
      piVar15 = piVar15 + 0x1a;
      iVar7 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
LAB_0c0ba0e3:
  func_0x0c0ee000(&lStack_1b8,&lStack_68,&UNK_0125baf5,0xd,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0126a0;
  if (uStack_1a0 != (long *)0x0) {
    lVar10 = *uStack_1a0;
    uStack_1a0 = puVar16;
    (**(code **)(lVar10 + 8))();
    puVar16 = uStack_1a0;
  }
  uStack_1a0 = puVar16;
  uStack_280 = (undefined4)lStack_1a8;
  lStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x1;
  uStack_260 = 0;
  uStack_258 = &UNK_05daeda0;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &SUB_05daea90;
  puStack_240 = &UNK_0c0eec50;
  puStack_238 = &UNK_0c0eedb0;
  uStack_230 = 0;
  auStack_228 = ZEXT816(0);
  func_0x048b05a0(lStack_1b0,&uStack_280);
  uVar4 = auStack_228._8_8_;
  if ((long *)auStack_228._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_228._8_8_ + 8);
    lVar10 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_228._8_8_ + 0x10))(auStack_228._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0ee2c0(&lStack_1b8);
  FUN_048b0bc0(&uStack_1a0);
  if (cStack_200 == '\x01') {
    if ((uStack_208 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
    }
    uStack_208 = 0;
    if ((uStack_210 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
    }
  }
  thunk_FUN_0ee326a0(puVar9,0x20);
  return;
}



/* ---- referenced strings ----
 * 0x12fff31  minecraft:piercing_weapon
 * 0x12fff3a  :piercing_weapon
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
