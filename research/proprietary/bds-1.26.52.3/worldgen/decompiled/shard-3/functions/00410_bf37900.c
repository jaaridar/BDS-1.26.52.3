/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc037900 (ELF vaddr 0xbf37900)
 * Label: caller-of-callee
 * Body:  [[0c037900, 0c037ebc] [0c037ec0, 0c037f01] [0c037f10, 0c038afc]]
 * Ghidra: FUN_0c037900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c037900(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined *puVar11;
  byte *pbVar12;
  code *pcVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined4 uStack_240;
  undefined1 auStack_238 [16];
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  char cStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  code *pcStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  char cStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  func_0x0b6b7930();
  uStack_228 = uStack_228 & 0xffffffffffffff00;
  cStack_210 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_228 = *param_3;
    uStack_220 = 0;
    uVar16 = param_3[1];
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,uVar16 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_218 = 0;
    uVar17 = param_3[2];
    uStack_220 = uVar16;
    if ((uVar17 & 0x80000000000000) != 0) {
      lVar14 = *(long *)((uVar17 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,uVar17 & 0xff00ffffffffffff,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      uVar17 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_210 = '\x01';
    uStack_218 = uVar17;
  }
  lVar9 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar14 = lVar9 + 9;
    if (bVar19) {
      lVar14 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0c069d90(&uStack_208,param_1,lVar14,uVar16,1);
  }
  else {
    func_0x0c069d90(&uStack_208,param_1,0,0,1);
  }
  if (cStack_1d8 == '\0') {
    if ((DAT_0f6d3120 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3120), iVar6 != 0)) {
      func_0x0ee25020(0xf6d30f8,&DAT_0131a80d);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d30f8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3120);
    }
    uVar16 = (ulong)(DAT_0f6d3100 >> 1);
    lVar9 = 0xf6d3101;
    if ((DAT_0f6d3100 & 1) != 0) {
      uVar16 = _DAT_0f6d3108;
      lVar9 = _DAT_0f6d3110;
    }
    func_0x0c06a780(auStack_1b8,&uStack_208,lVar9,uVar16,0);
    pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar13 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar13 = &UNK_0f34df88;
    if (pcStack_1a0 != (code *)0x0) {
      lVar9 = *(long *)pcStack_1a0;
      pcStack_1a0 = pcVar13;
      (**(code **)(lVar9 + 8))();
      pcVar13 = pcStack_1a0;
    }
    pcStack_1a0 = pcVar13;
    uStack_290 = (undefined4)uStack_1a8;
    uStack_288 = 0;
    uStack_280 = 0;
    pcStack_278 = (code *)0x1;
    uStack_270 = 0;
    uStack_268 = &UNK_0c0802d0;
    puStack_260 = &SUB_048b06d0;
    puStack_258 = &UNK_0c07ff40;
    puStack_250 = &UNK_0c080390;
    puStack_248 = &UNK_0c080630;
    uStack_240 = 0;
    auStack_238 = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_1b8._8_8_,&uStack_290);
    uVar4 = auStack_238._8_8_;
    if ((long *)auStack_238._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_238._8_8_ + 8);
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_238._8_8_ + 0x10))(auStack_238._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)(auStack_1b8._8_8_ + 0x1c);
    if (iVar6 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1b8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(auStack_1b8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar9 = *(long *)(piVar10 + 0xc);
      while (lVar9 != *(long *)(auStack_1b8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar9 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1b8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(auStack_1b8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1b8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(auStack_1b8);
    func_0x048b0bc0(&pcStack_1a0);
  }
  if ((DAT_0f6d3120 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3120), iVar6 != 0)) {
    func_0x0ee25020(0xf6d30f8,&DAT_0131a80d);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d30f8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3120);
  }
  uVar16 = (ulong)(DAT_0f6d3100 >> 1);
  lVar9 = 0xf6d3101;
  if ((DAT_0f6d3100 & 1) != 0) {
    uVar16 = _DAT_0f6d3108;
    lVar9 = _DAT_0f6d3110;
  }
  if ((DAT_0f6d3880 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3880), iVar6 != 0)) {
    func_0x0c07f8a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3800,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3880);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6d3800 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_0c037dc1;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6d3800 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0c037dc1:
    puVar11 = &DAT_0f6d3800;
    iVar6 = iRam000000000f6d3860;
  }
  else {
    puVar11 = (undefined *)plVar8[2];
    iVar6 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar14 = *(long *)(puVar11 + 0x68), lVar14 != 0)) {
    bVar19 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar9 = lVar14 + 9;
    if (bVar19) {
      lVar9 = *(long *)(lVar14 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar14 + 0x10);
    }
  }
  func_0x0c080a80(&uStack_290,param_1,lVar9,uVar16);
  lVar9 = CONCAT44(uStack_28c,uStack_290);
  if ((DAT_0f6d3880 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3880), iVar6 != 0)) {
    func_0x0c07f8a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d3800,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3880);
  }
  plVar8 = (long *)(*(long *)(lVar9 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f6d3800 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_0c037e80;
    plVar8 = (long *)(*(long *)(lVar9 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6d3800 + 4));
  if (plVar8 == *(long **)(lVar9 + 0x38)) {
LAB_0c037e80:
    puVar11 = &DAT_0f6d3800;
  }
  else {
    puVar11 = (undefined *)plVar8[2];
  }
  pbVar3 = *(byte **)(CONCAT44(uStack_28c,uStack_290) + 0x58);
  for (pbVar12 = *(byte **)(CONCAT44(uStack_28c,uStack_290) + 0x50); pbVar12 != pbVar3;
      pbVar12 = pbVar12 + 0x38) {
    bVar2 = *pbVar12;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c037f1a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1a) {
LAB_0c037f1a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar12 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar12 + 0x10);
      }
      auVar20[0] = -(*pbVar15 == DAT_014eaba0);
      auVar20[1] = -(pbVar15[1] == DAT_014eaba0._1_1_);
      auVar20[2] = -(pbVar15[2] == DAT_014eaba0._2_1_);
      auVar20[3] = -(pbVar15[3] == DAT_014eaba0._3_1_);
      auVar20[4] = -(pbVar15[4] == DAT_014eaba0._4_1_);
      auVar20[5] = -(pbVar15[5] == DAT_014eaba0._5_1_);
      auVar20[6] = -(pbVar15[6] == DAT_014eaba0._6_1_);
      auVar20[7] = -(pbVar15[7] == DAT_014eaba0._7_1_);
      auVar20[8] = -(pbVar15[8] == DAT_014eaba0._8_1_);
      auVar20[9] = -(pbVar15[9] == DAT_014eaba0._9_1_);
      auVar20[10] = -(pbVar15[10] == DAT_014eaba0._10_1_);
      auVar20[0xb] = -(pbVar15[0xb] == DAT_014eaba0._11_1_);
      auVar20[0xc] = -(pbVar15[0xc] == DAT_014eaba0._12_1_);
      auVar20[0xd] = -(pbVar15[0xd] == DAT_014eaba0._13_1_);
      auVar20[0xe] = -(pbVar15[0xe] == DAT_014eaba0._14_1_);
      auVar20[0xf] = -(pbVar15[0xf] == DAT_014eaba0._15_1_);
      auVar21[0] = -(pbVar15[10] == DAT_014e4ff0);
      auVar21[1] = -(pbVar15[0xb] == DAT_014e4ff0._1_1_);
      auVar21[2] = -(pbVar15[0xc] == DAT_014e4ff0._2_1_);
      auVar21[3] = -(pbVar15[0xd] == DAT_014e4ff0._3_1_);
      auVar21[4] = -(pbVar15[0xe] == DAT_014e4ff0._4_1_);
      auVar21[5] = -(pbVar15[0xf] == DAT_014e4ff0._5_1_);
      auVar21[6] = -(pbVar15[0x10] == DAT_014e4ff0._6_1_);
      auVar21[7] = -(pbVar15[0x11] == DAT_014e4ff0._7_1_);
      auVar21[8] = -(pbVar15[0x12] == DAT_014e4ff0._8_1_);
      auVar21[9] = -(pbVar15[0x13] == DAT_014e4ff0._9_1_);
      auVar21[10] = -(pbVar15[0x14] == DAT_014e4ff0._10_1_);
      auVar21[0xb] = -(pbVar15[0x15] == DAT_014e4ff0._11_1_);
      auVar21[0xc] = -(pbVar15[0x16] == DAT_014e4ff0._12_1_);
      auVar21[0xd] = -(pbVar15[0x17] == DAT_014e4ff0._13_1_);
      auVar21[0xe] = -(pbVar15[0x18] == DAT_014e4ff0._14_1_);
      auVar21[0xf] = -(pbVar15[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar12 != pbVar3) {
    iVar6 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 != _DAT_0f550ac4) goto LAB_0c0381b0;
  }
  if ((int)uStack_268 == 0) {
    if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0c037fd3;
    lVar9 = *(long *)(puVar11 + 0x68) + 0x38;
  }
  else {
    uVar5 = uStack_268._4_4_;
    if (puVar11 == (undefined *)0x0) {
      puVar11 = (undefined *)func_0x048aead0(lVar9 + 0x18);
    }
    auStack_1b8._0_8_ = func_0x048b0c90(lVar9 + 0x18,puVar11,uVar5,1);
    if (auStack_1b8._0_8_ == 0) {
      auStack_1b8 = (undefined1  [16])0x0;
      FUN_048b0d20(auStack_1b8);
      if (auStack_1b8._0_8_ == 0) goto LAB_0c037fd3;
    }
    if ((*(int *)(auStack_1b8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_1b8._0_8_ + 0x58) != 0)) {
      lVar9 = *(long *)(auStack_1b8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0c037fd3:
      lVar9 = 0;
    }
  }
  puStack_1f8 = &UNK_0488e0b0;
  uStack_1e8 = 0x48b5725f;
  pcStack_1f0 = (code *)0x0;
  uStack_1e4 = 0;
  uStack_208 = 0;
  auStack_1b8 = (undefined1  [16])0x0;
  pcStack_1a0 = (code *)&UNK_0488e0b0;
  pcStack_198 = (code *)0x0;
  uStack_190 = (undefined *)CONCAT35(uStack_190._5_3_,0x48b5725f);
  puStack_1c0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_1c0 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013bbadf;
  uStack_1d0 = 0x21;
  uStack_1c8 = 0x1a;
  *(ulong *)((long)puStack_1c0 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_1c0 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_1c0 = _DAT_013bbacd;
  puStack_1c0[1] = uVar4;
  *(undefined1 *)((long)puStack_1c0 + 0x1a) = 0;
  lVar9 = func_0x048b5060(lVar9,&uStack_1d0);
  *(undefined8 *)(lVar9 + 0x20) = 0;
  if ((undefined1 *)(lVar9 + 0x20) == auStack_1b8) {
    pcVar13 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
      puVar18 = (undefined8 *)(lVar9 + 0x28);
      (**(code **)(lVar9 + 0x40))(puVar18);
      if (uStack_190._4_1_ != '\0') {
        if (uStack_190._4_1_ == '\x02') {
          (*pcStack_1a0)(5,auStack_1b8 + 8,puVar18);
        }
        else {
          uVar4 = auStack_1b8._8_8_;
          auStack_1b8._8_8_ = 0;
          *puVar18 = uVar4;
        }
      }
    }
    *(code **)(lVar9 + 0x38) = pcStack_1a0;
    *(code **)(lVar9 + 0x40) = pcStack_198;
    *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_190;
    *(char *)(lVar9 + 0x4c) = uStack_190._4_1_;
    pcVar13 = pcStack_198;
  }
  if ((uStack_1d0 & 1) != 0) {
    func_0x0412a280(puStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
    pcVar13 = pcStack_198;
  }
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(auStack_1b8 + 8);
  }
  if (pcStack_1f0 != (code *)0x0) {
    (*pcStack_1f0)(&uStack_208);
  }
LAB_0c0381b0:
  puStack_188 = puStack_260;
  uStack_e8 = CONCAT44(uStack_28c,uStack_290);
  uStack_1a8 = CONCAT44(uStack_27c,uStack_280);
  pcStack_198 = (code *)uStack_270;
  uStack_190 = uStack_268;
  pcStack_1a0 = pcStack_278;
  auStack_1b8._8_8_ = uStack_288;
  auStack_1b8._0_8_ = uStack_e8;
  pcStack_1f0 = (code *)((ulong)pcStack_1f0 & 0xffffffffffffff00);
  if (cStack_210 == '\x01') {
    uStack_208 = uStack_228;
    uStack_200 = 0;
    uVar16 = uStack_220;
    if ((uStack_220 & 0x80000000000000) != 0) {
      uVar16 = uStack_220 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar9 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puStack_1f8 = (undefined *)0x0;
    uVar17 = uStack_218;
    uStack_200 = uVar16;
    if ((uStack_218 & 0x80000000000000) != 0) {
      uVar16 = uStack_218 & 0xff00ffffffffffff;
      lVar14 = *(long *)(uVar16 - 8);
      lVar9 = lVar14 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        FUN_0eec74c0(lVar9,8);
      }
      *plVar8 = lVar14;
      func_0x0eee2f00(plVar8 + 1,uVar16,lVar14);
      *(undefined1 *)((long)plVar8 + lVar14 + 8) = 0;
      uVar17 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_1f0 = (code *)CONCAT71(pcStack_1f0._1_7_,1);
    uStack_e8 = auStack_1b8._0_8_;
    uStack_e0 = auStack_1b8._8_8_;
    uStack_d8 = uStack_1a8;
    pcStack_d0 = pcStack_1a0;
    uStack_c8 = pcStack_198;
    puStack_c0 = uStack_190;
    puStack_b8 = puStack_188;
    if ((uVar17 & 0x80000000000000) != 0) {
      puStack_1f8 = (undefined *)uVar17;
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar17 & 0xff00ffffffffffff) - 8);
    }
    puStack_1f8 = (undefined *)0x0;
    if ((uStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    puStack_b8 = puStack_260;
    uStack_c8 = uStack_270;
    puStack_c0 = uStack_268;
    pcStack_d0 = pcStack_278;
    uStack_e0 = uStack_288;
    uStack_d8 = uStack_1a8;
  }
  func_0x0c081600(auStack_1b8,&uStack_e8,&UNK_012e749d,0xb);
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar13 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar13 = &UNK_0f34e168;
  if (pcStack_1a0 != (code *)0x0) {
    lVar9 = *(long *)pcStack_1a0;
    pcStack_1a0 = pcVar13;
    (**(code **)(lVar9 + 8))();
    pcVar13 = pcStack_1a0;
  }
  pcStack_1a0 = pcVar13;
  uStack_290 = (undefined4)uStack_1a8;
  uStack_288 = 0;
  uStack_280 = 0;
  pcStack_278 = (code *)0x1;
  uStack_270 = 0;
  uStack_268 = &UNK_0c0829a0;
  puStack_260 = &SUB_048b06d0;
  puStack_258 = &UNK_0c082680;
  puStack_250 = &UNK_0c082a60;
  puStack_248 = &UNK_0c082bb0;
  uStack_240 = 0;
  auStack_238 = ZEXT816(0);
  FUN_048b05a0(auStack_1b8._8_8_,&uStack_290);
  uVar4 = auStack_238._8_8_;
  if ((long *)auStack_238._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_238._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_238._8_8_ + 0x10))(auStack_238._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0818b0(auStack_1b8);
  uStack_78 = puStack_b8._0_1_;
  uStack_88 = uStack_c8;
  puStack_80 = puStack_c0;
  uStack_98 = uStack_d8;
  pcStack_90 = pcStack_d0;
  uStack_a8 = uStack_e8;
  uStack_a0 = uStack_e0;
  func_0x048b0bc0(&pcStack_1a0);
  func_0x0c081600(auStack_1b8,&uStack_a8,&UNK_01422389,10);
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar13 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar13 = &UNK_0f34e168;
  if (pcStack_1a0 != (code *)0x0) {
    lVar9 = *(long *)pcStack_1a0;
    pcStack_1a0 = pcVar13;
    (**(code **)(lVar9 + 8))();
    pcVar13 = pcStack_1a0;
  }
  pcStack_1a0 = pcVar13;
  uStack_290 = (undefined4)uStack_1a8;
  uStack_288 = 0;
  uStack_280 = 0;
  pcStack_278 = (code *)0x1;
  uStack_270 = 0;
  uStack_268 = &UNK_0c0829a0;
  puStack_260 = &SUB_048b06d0;
  puStack_258 = &UNK_0c082680;
  puStack_250 = &UNK_0c083130;
  puStack_248 = &UNK_0c083280;
  uStack_240 = 0;
  auStack_238 = ZEXT816(0);
  FUN_048b05a0(auStack_1b8._8_8_,&uStack_290);
  uVar4 = auStack_238._8_8_;
  if ((long *)auStack_238._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_238._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_238._8_8_ + 0x10))(auStack_238._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0818b0(auStack_1b8);
  uStack_38 = uStack_78;
  uStack_48 = uStack_88;
  puStack_40 = puStack_80;
  uStack_58 = uStack_98;
  pcStack_50 = pcStack_90;
  uStack_68 = uStack_a8;
  uStack_60 = uStack_a0;
  func_0x048b0bc0(&pcStack_1a0);
  func_0x0c081600(auStack_1b8,&uStack_68,&UNK_012cca2b,0x13);
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar13 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar13 = &UNK_0f34e168;
  if (pcStack_1a0 != (code *)0x0) {
    lVar9 = *(long *)pcStack_1a0;
    pcStack_1a0 = pcVar13;
    (**(code **)(lVar9 + 8))();
    pcVar13 = pcStack_1a0;
  }
  pcStack_1a0 = pcVar13;
  uStack_290 = (undefined4)uStack_1a8;
  uStack_288 = 0;
  uStack_280 = 0;
  pcStack_278 = (code *)0x1;
  uStack_270 = 0;
  uStack_268 = &UNK_0c0829a0;
  puStack_260 = &SUB_048b06d0;
  puStack_258 = &UNK_0c082680;
  puStack_250 = &UNK_0c083460;
  puStack_248 = &UNK_0c0835b0;
  uStack_240 = 0;
  auStack_238 = ZEXT816(0);
  FUN_048b05a0(auStack_1b8._8_8_,&uStack_290);
  uVar4 = auStack_238._8_8_;
  if ((long *)auStack_238._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_238._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_238._8_8_ + 0x10))(auStack_238._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c0818b0(auStack_1b8);
  func_0x048b0bc0(&pcStack_1a0);
  if (cStack_210 == '\x01') {
    if ((uStack_218 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
    }
    uStack_218 = 0;
    if ((uStack_220 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
