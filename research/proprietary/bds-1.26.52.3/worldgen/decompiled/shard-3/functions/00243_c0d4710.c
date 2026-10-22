/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc1d4710 (ELF vaddr 0xc0d4710)
 * Label: caller-of-callee
 * Body:  [[0c1d4710, 0c1d4f27] [0c1d4f30, 0c1d4f71] [0c1d4f80, 0c1d5e09] [0c1d5e10, 0c1d680b] [0c1d6810, 0c1d6851] [0c1d6860, 0c1d76b9] [0c1d76c0, 0c1d8aae]]
 * Ghidra: FUN_0c1d4710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c1d4710(long param_1,ulong *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  code *pcVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  byte *pbVar21;
  undefined *puVar22;
  ulong unaff_R12;
  long lVar23;
  ulong uVar24;
  ulong unaff_R13;
  ulong *puVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  code *pcStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined1 *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined8 *puStack_3e0;
  undefined1 auStack_3d8 [16];
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 auStack_308 [4];
  undefined2 uStack_304;
  undefined1 auStack_302 [2];
  ulong uStack_300;
  ulong uStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  int iStack_2e0;
  uint uStack_2dc;
  char cStack_2d8;
  undefined7 uStack_2d7;
  undefined4 uStack_2c8;
  undefined2 uStack_2c4;
  undefined1 uStack_2c2;
  long lStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  long *plStack_2a8;
  code *pcStack_2a0;
  ulong *puStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long *plStack_278;
  char cStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  char cStack_250;
  long lStack_248;
  ulong uStack_240;
  ulong uStack_238;
  long *plStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  char cStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  code *pcStack_190;
  undefined4 uStack_188;
  undefined1 uStack_184;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long *plStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 uStack_148;
  undefined4 uStack_147;
  undefined3 uStack_143;
  ulong uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long *plStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f0 = '\0';
  uVar24 = param_2[3];
  lStack_2c0 = param_1;
  puStack_290 = param_2;
  if ((char)uVar24 == '\x01') {
    uStack_208 = *param_2;
    uStack_200 = 0;
    unaff_R13 = param_2[1];
    if ((unaff_R13 & 0x80000000000000) != 0) {
      lVar13 = *(long *)((unaff_R13 & 0xff00ffffffffffff) - 8);
      lVar23 = lVar13 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
      if (lVar23 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar23,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,unaff_R13 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      unaff_R13 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f8 = 0;
    unaff_R12 = puStack_290[2];
    uStack_200 = unaff_R13;
    if ((unaff_R12 & 0x80000000000000) != 0) {
      lVar13 = *(long *)((unaff_R12 & 0xff00ffffffffffff) - 8);
      lVar23 = lVar13 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
      if (lVar23 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar23,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,unaff_R12 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      unaff_R12 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1f0 = '\x01';
    uStack_1f8 = unaff_R12;
  }
  func_0x0bf59010(lStack_2c0);
  puStack_3e0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_3e0 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  lVar23 = lStack_2c0;
  uVar5 = _UNK_013ef23c;
  puStack_3e0[6] = _DAT_013ef234;
  puStack_3e0[7] = uVar5;
  uVar5 = _UNK_013ef22c;
  puStack_3e0[4] = _DAT_013ef224;
  puStack_3e0[5] = uVar5;
  uVar5 = _UNK_013ef21c;
  puStack_3e0[2] = _DAT_013ef214;
  puStack_3e0[3] = uVar5;
  uVar5 = _UNK_013ef20c;
  *puStack_3e0 = _DAT_013ef204;
  puStack_3e0[1] = uVar5;
  *(undefined4 *)((long)puStack_3e0 + 0x3f) = 0x2e726579;
  *(undefined1 *)((long)puStack_3e0 + 0x43) = 0;
  uStack_268 = uStack_268 & 0xffffffffffffff00;
  cStack_250 = '\0';
  if ((char)uVar24 != '\0') {
    uStack_268 = uStack_208;
    uStack_260 = 0;
    if ((unaff_R13 & 0x80000000000000) != 0) {
      lVar19 = *(long *)((unaff_R13 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar12 = lVar19;
      func_0x0eee2f00(plVar12 + 1,unaff_R13 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar12 + lVar19 + 8) = 0;
      unaff_R13 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_258 = 0;
    uStack_260 = unaff_R13;
    if ((unaff_R12 & 0x80000000000000) != 0) {
      lVar19 = *(long *)((unaff_R12 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar12 = lVar19;
      func_0x0eee2f00(plVar12 + 1,unaff_R12 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar12 + lVar19 + 8) = 0;
      unaff_R12 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_250 = '\x01';
    uStack_258 = unaff_R12;
  }
  puVar16 = puStack_3e0;
  lVar13 = func_0x0c068ba0(lVar23 + 0x18);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar26 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0c069d90(auStack_308,lVar23,lVar19,uVar24,1);
  }
  else {
    func_0x0c069d90(auStack_308,lVar23,0,0,1);
  }
  if (cStack_2d8 == '\0') {
    uStack_438._4_4_ = (uint)((ulong)uStack_438 >> 0x20);
    uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
    if ((DAT_0f6d72b8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d72b8), iVar10 != 0)) {
      func_0x0ee25020(0xf6d7290,&UNK_01281248);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d7290,0xf53dab8);
      func_0x0410844d(&DAT_0f6d72b8);
      puVar16 = puStack_3e0;
    }
    uVar24 = (ulong)(DAT_0f6d7298 >> 1);
    lVar23 = 0xf6d7299;
    if ((DAT_0f6d7298 & 1) != 0) {
      uVar24 = _DAT_0f6d72a0;
      lVar23 = _DAT_0f6d72a8;
    }
    func_0x0c06a780(auStack_3d8,auStack_308,lVar23,uVar24,0);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f360178;
    if (uStack_3c0 != (code *)0x0) {
      lVar23 = *(long *)uStack_3c0;
      uStack_3c0 = (code *)plVar12;
      (**(code **)(lVar23 + 8))();
      plVar12 = (long *)uStack_3c0;
    }
    uStack_3c0 = (code *)plVar12;
    uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
    uStack_440 = 0;
    uStack_438 = (undefined *)((ulong)uStack_438._4_4_ << 0x20);
    pcStack_430 = (code *)0x1;
    pcStack_428 = (code *)0x0;
    uStack_420 = &UNK_0c35f110;
    puStack_418 = &SUB_048b06d0;
    puStack_410 = &UNK_0c35ed80;
    puStack_408 = &UNK_0c35f1d0;
    puStack_400 = &UNK_0c35f440;
    uStack_3f8 = 0;
    auStack_3f0 = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
    uVar5 = auStack_3f0._8_8_;
    if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_3f0._8_8_ + 8);
      lVar23 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    iVar10 = *(int *)(auStack_3d8._8_8_ + 0x1c);
    if (iVar10 == 2) {
      piVar20 = *(int **)(*(long *)(*(long *)(auStack_3d8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != *(int *)(auStack_3d8._8_8_ + 0x18)) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      lVar23 = *(long *)(piVar20 + 0xc);
      while (lVar23 != *(long *)(auStack_3d8._8_8_ + 8)) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar23 = *(long *)(piVar20 + 0xc);
      }
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else if (iVar10 == 1) {
      piVar20 = *(int **)(*(long *)(*(long *)(auStack_3d8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != *(int *)(auStack_3d8._8_8_ + 0x18)) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else if (iVar10 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_3d8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(auStack_3d8);
    func_0x048b0bc0(&uStack_3c0);
  }
  if ((DAT_0f6d72b8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d72b8), iVar10 != 0)) {
    func_0x0ee25020(0xf6d7290,&UNK_01281248);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7290,0xf53dab8);
    func_0x0410844d(&DAT_0f6d72b8);
    puVar16 = puStack_3e0;
  }
  uVar24 = (ulong)(DAT_0f6d7298 >> 1);
  lVar23 = 0xf6d7299;
  if ((DAT_0f6d7298 & 1) != 0) {
    uVar24 = _DAT_0f6d72a0;
    lVar23 = _DAT_0f6d72a8;
  }
  if ((DAT_0f6db720 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6db720), iVar10 != 0)) {
    func_0x0c35e6d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6db6a0,0xf53dab8);
    func_0x0410844d(&DAT_0f6db720);
  }
  plVar12 = (long *)(*(long *)(lStack_2c0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_2c0 + 0x20) -
                                         *(long *)(lStack_2c0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f6db6a0 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0c1d4de1;
    plVar12 = (long *)(*(long *)(lStack_2c0 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_2c0 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f6db6a0 + 4));
  if (plVar12 == *(long **)(lStack_2c0 + 0x38)) {
LAB_0c1d4de1:
    puVar14 = &DAT_0f6db6a0;
    iVar10 = iRam000000000f6db700;
  }
  else {
    puVar14 = (undefined *)plVar12[2];
    iVar10 = *(int *)(puVar14 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar13 = *(long *)(puVar14 + 0x68), lVar13 != 0)) {
    bVar26 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar23 = lVar13 + 9;
    if (bVar26) {
      lVar23 = *(long *)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
  }
  func_0x0c35f890(&uStack_448,lStack_2c0,lVar23,uVar24);
  lVar23 = uStack_448;
  if ((DAT_0f6db720 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6db720), iVar10 != 0)) {
    func_0x0c35e6d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6db6a0,0xf53dab8);
    func_0x0410844d(&DAT_0f6db720);
  }
  plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6db6a0 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0c1d4eaa;
    plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6db6a0 + 4));
  if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d4eaa:
    puVar14 = &DAT_0f6db6a0;
  }
  else {
    puVar14 = (undefined *)plVar12[2];
  }
  for (pbVar15 = *(byte **)(uStack_448 + 0x50); pbVar15 != *(byte **)(uStack_448 + 0x58);
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c1d4f8a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0c1d4f8a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar15 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar15 + 0x10);
      }
      auVar27[0] = -(*pbVar21 == 0x5b);
      auVar27[1] = -(pbVar21[1] == 99);
      auVar27[2] = -(pbVar21[2] == 0x65);
      auVar27[3] = -(pbVar21[3] == 0x72);
      auVar27[4] = -(pbVar21[4] == 0x65);
      auVar27[5] = -(pbVar21[5] == 0x61);
      auVar27[6] = -(pbVar21[6] == 0x6c);
      auVar27[7] = -(pbVar21[7] == 0x3a);
      auVar27[8] = -(pbVar21[8] == 100);
      auVar27[9] = -(pbVar21[9] == 0x6f);
      auVar27[10] = -(pbVar21[10] == 99);
      auVar27[0xb] = -(pbVar21[0xb] == 0x75);
      auVar27[0xc] = -(pbVar21[0xc] == 0x6d);
      auVar27[0xd] = -(pbVar21[0xd] == 0x65);
      auVar27[0xe] = -(pbVar21[0xe] == 0x6e);
      auVar27[0xf] = -(pbVar21[0xf] == 0x74);
      auVar29[0] = -(pbVar21[10] == 99);
      auVar29[1] = -(pbVar21[0xb] == 0x75);
      auVar29[2] = -(pbVar21[0xc] == 0x6d);
      auVar29[3] = -(pbVar21[0xd] == 0x65);
      auVar29[4] = -(pbVar21[0xe] == 0x6e);
      auVar29[5] = -(pbVar21[0xf] == 0x74);
      auVar29[6] = -(pbVar21[0x10] == 0x61);
      auVar29[7] = -(pbVar21[0x11] == 0x74);
      auVar29[8] = -(pbVar21[0x12] == 0x69);
      auVar29[9] = -(pbVar21[0x13] == 0x6f);
      auVar29[10] = -(pbVar21[0x14] == 0x6e);
      auVar29[0xb] = -(pbVar21[0x15] == 0x5f);
      auVar29[0xc] = -(pbVar21[0x16] == 0x74);
      auVar29[0xd] = -(pbVar21[0x17] == 0x61);
      auVar29[0xe] = -(pbVar21[0x18] == 0x67);
      auVar29[0xf] = -(pbVar21[0x19] == 0x5d);
      auVar29 = auVar29 & auVar27;
      if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == *(byte **)(uStack_448 + 0x58)) {
LAB_0c1d4fc2:
    if ((int)uStack_420 == 0) {
      if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c1d504d;
      lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
    }
    else {
      uVar6 = uStack_420._4_4_;
      if (puVar14 == (undefined *)0x0) {
        puVar14 = (undefined *)func_0x048aead0(lVar23 + 0x18);
      }
      _auStack_308 = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar6,1);
      if (_auStack_308 == 0) {
        _auStack_308 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_308);
        if (_auStack_308 == 0) goto LAB_0c1d504d;
      }
      if ((*(int *)(_auStack_308 + 0x50) == -0x45dcb126) && (*(long *)(_auStack_308 + 0x58) != 0)) {
        lVar23 = *(long *)(_auStack_308 + 0x58) + 0x40;
      }
      else {
LAB_0c1d504d:
        lVar23 = 0;
      }
    }
    plStack_198 = (long *)&UNK_0488e0b0;
    uStack_188 = 0x48b5725f;
    pcStack_190 = (code *)0x0;
    uStack_184 = 0;
    uStack_1a8 = 0;
    _auStack_308 = (undefined1  [16])0x0;
    pcStack_2f0 = (code *)&UNK_0488e0b0;
    pcStack_2e8 = (code *)0x0;
    iStack_2e0 = 0x48b5725f;
    uStack_2dc = uStack_2dc & 0xffffff00;
    plStack_130 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_130 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    uStack_140 = 0x21;
    uStack_138 = 0x1a;
    *(ulong *)((long)plStack_130 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plStack_130 + 0x12) = uVar5;
    lVar13 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plStack_130 = _DAT_013bbacd;
    plStack_130[1] = lVar13;
    *(undefined1 *)((long)plStack_130 + 0x1a) = 0;
    lVar23 = func_0x048b5060(lVar23,&uStack_140);
    *(undefined8 *)(lVar23 + 0x20) = 0;
    if ((undefined1 *)(lVar23 + 0x20) == auStack_308) {
      pcVar17 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
        puVar25 = (ulong *)(lVar23 + 0x28);
        (**(code **)(lVar23 + 0x40))(puVar25);
        if ((char)uStack_2dc != '\0') {
          if ((char)uStack_2dc == '\x02') {
            (*pcStack_2f0)(5,&uStack_300,puVar25);
          }
          else {
            uVar24 = uStack_300;
            uStack_300 = 0;
            *puVar25 = uVar24;
          }
        }
      }
      *(code **)(lVar23 + 0x38) = pcStack_2f0;
      *(code **)(lVar23 + 0x40) = pcStack_2e8;
      *(int *)(lVar23 + 0x48) = iStack_2e0;
      *(char *)(lVar23 + 0x4c) = (char)uStack_2dc;
      pcVar17 = pcStack_2e8;
    }
    if ((uStack_140 & 1) != 0) {
      func_0x0412a280(plStack_130,uStack_140 & 0xfffffffffffffffe);
      pcVar17 = pcStack_2e8;
    }
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(&uStack_300);
    }
    if (pcStack_190 != (code *)0x0) {
      (*pcStack_190)(&uStack_1a8);
    }
  }
  else {
    iVar10 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ad8), iVar11 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar10 == _DAT_0f550ac4) goto LAB_0c1d4fc2;
  }
  puStack_3a8 = puStack_418;
  pcStack_3b8 = pcStack_428;
  uStack_3b0 = uStack_420;
  uStack_3c8 = (ulong)uStack_438;
  uStack_3c0 = pcStack_430;
  auStack_3d8._0_8_ = uStack_448;
  auStack_3d8._8_8_ = uStack_440;
  auVar3[0xf] = 0;
  auVar3._0_15_ = stack0xfffffffffffffcf9;
  _auStack_308 = auVar3 << 8;
  pcStack_2f0 = (code *)((ulong)pcStack_2f0 & 0xffffffffffffff00);
  if (cStack_250 == '\x01') {
    uStack_300 = 0;
    _auStack_308 = uStack_268;
    auVar27 = _auStack_308;
    uStack_300 = uStack_260;
    if ((uStack_260 & 0x80000000000000) != 0) {
      uVar24 = uStack_260 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar24 - 8);
      lVar23 = lVar13 + 9;
      _auStack_308 = auVar27;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
      if (lVar23 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar23,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,uVar24,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      uStack_300 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      puVar16 = puStack_3e0;
    }
    uStack_2f8 = 0;
    uVar24 = uStack_258;
    if ((uStack_258 & 0x80000000000000) != 0) {
      uVar24 = uStack_258 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar24 - 8);
      lVar23 = lVar13 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
      if (lVar23 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar23,8);
      }
      *plVar12 = lVar13;
      func_0x0eee2f00(plVar12 + 1,uVar24,lVar13);
      *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
      uVar24 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      puVar16 = puStack_3e0;
    }
    pcStack_2f0 = (code *)CONCAT71(pcStack_2f0._1_7_,1);
    uStack_2f8 = uVar24;
  }
  func_0x0412e5e0(&uStack_1a8,puVar16,0x43);
  lStack_128 = auStack_3d8._0_8_;
  uStack_120 = auStack_3d8._8_8_;
  uStack_118 = uStack_3c8;
  plStack_110 = (long *)uStack_3c0;
  pcStack_108 = pcStack_3b8;
  puStack_100 = uStack_3b0;
  puStack_f8 = puStack_3a8;
  if ((uStack_1a8 & 1) != 0) {
    func_0x0412a280(plStack_198,uStack_1a8 & 0xfffffffffffffffe);
  }
  if ((char)pcStack_2f0 == '\x01') {
    if ((uStack_2f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2f8 = 0;
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c35fe80(auStack_3d8,lStack_128 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d553f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d553f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c360460(auStack_3d8,&lStack_128,&UNK_011f9469,9);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ce8;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_0490ce30;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &SUB_0490cb20;
  puStack_408 = &UNK_0c360a10;
  puStack_400 = &UNK_0c360b70;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c360710(auStack_3d8);
  puStack_b8 = (undefined1 *)CONCAT71(puStack_b8._1_7_,puStack_f8._0_1_);
  pcStack_c8 = pcStack_108;
  puStack_c0 = puStack_100;
  uStack_d8 = uStack_118;
  plStack_d0 = plStack_110;
  lStack_e8 = lStack_128;
  uStack_e0 = uStack_120;
  func_0x048b0bc0(&uStack_3c0);
  lStack_a8 = lStack_e8;
  uStack_a0 = uStack_e0;
  uStack_98 = uStack_d8;
  plStack_90 = plStack_d0;
  pcStack_88 = pcStack_c8;
  puStack_80 = puStack_c0;
  puStack_78 = puStack_b8;
  func_0x0c35fe80(auStack_3d8,lStack_e8 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d57bf:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d57bf;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c360460(auStack_3d8,&lStack_a8,&UNK_012ccc8d,0xe);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_04906f70;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &SUB_04906c50;
  puStack_408 = &UNK_0c360d50;
  puStack_400 = &UNK_0c360eb0;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c360710(auStack_3d8);
  puStack_38 = (undefined1 *)CONCAT71(puStack_38._1_7_,puStack_78._0_1_);
  pcStack_48 = pcStack_88;
  puStack_40 = puStack_80;
  uStack_58 = uStack_98;
  plStack_50 = plStack_90;
  lStack_68 = lStack_a8;
  uStack_60 = uStack_a0;
  func_0x048b0bc0(&uStack_3c0);
  lStack_1e8 = lStack_68;
  uStack_1e0 = uStack_60;
  uStack_1d8 = uStack_58;
  plStack_1d0 = plStack_50;
  pcStack_1c8 = pcStack_48;
  uStack_1c0 = puStack_40;
  puStack_1b8 = puStack_38;
  func_0x0c35fe80(auStack_3d8,lStack_68 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d5a2f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d5a2f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c360460(auStack_3d8,&lStack_1e8,&UNK_011c93f3,0x13);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0126a0;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_05daeda0;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &UNK_05daea90;
  puStack_408 = &UNK_0c361090;
  puStack_400 = &UNK_0c3611f0;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c360710(auStack_3d8);
  puVar9 = puStack_1b8;
  puVar14 = uStack_1c0;
  lVar23 = lStack_1e8;
  uStack_2b8 = uStack_1e0;
  uStack_2b0 = uStack_1d8;
  plStack_2a8 = plStack_1d0;
  pcStack_2a0 = pcStack_1c8;
  iVar10 = (int)uStack_1c0;
  uVar6 = uStack_1c0._4_4_;
  func_0x048b0bc0(&uStack_3c0);
  auVar4._10_6_ = 0;
  auVar4._0_10_ = _auStack_302;
  _auStack_308 = auVar4 << 0x30;
  if (iVar10 == 4) {
    if ((DAT_0f6db720 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6db720), iVar10 != 0)) {
      func_0x0c35e6d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6db6a0,0xf53dab8);
      func_0x0410844d(&DAT_0f6db720);
    }
    plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6db6a0 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_0c1d5cb9;
      plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6db6a0 + 4)
            );
    if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d5cb9:
      puVar22 = &DAT_0f6db6a0;
    }
    else {
      puVar22 = (undefined *)plVar12[2];
    }
    lVar13 = func_0x048b1040(lVar23 + 0x18,puVar22,uVar6,1);
    if (lVar13 == 0) {
      auStack_3d8._0_8_ = 0;
      auStack_3d8._8_8_ = 0;
      func_0x048b10d0(auStack_3d8);
      lVar19 = *(long *)(auStack_3d8._0_8_ + 0x38);
      lVar13 = auStack_3d8._0_8_;
      if (lVar19 == 0) goto LAB_0c1d5de7;
LAB_0c1d5e03:
      do {
        lVar13 = lVar19;
        lVar19 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          auStack_3d8._0_8_ = 0;
          auStack_3d8._8_8_ = 0;
          func_0x048b10d0(auStack_3d8);
          lVar19 = auStack_3d8._0_8_;
        }
      } while (lVar19 != 0);
    }
    else {
      lVar19 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) != 0) goto LAB_0c1d5e03;
LAB_0c1d5de7:
      auStack_3d8._0_8_ = 0;
      auStack_3d8._8_8_ = 0;
      func_0x048b10d0(auStack_3d8);
      lVar19 = auStack_3d8._0_8_;
      if (auStack_3d8._0_8_ != 0) goto LAB_0c1d5e03;
    }
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
LAB_0c1d5e5e:
    puVar16[1] = 0xffffffffffffffff;
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 0xff;
    *puVar16 = &UNK_0f0edc68;
    uVar5 = _DAT_014f0238;
    puVar16[4] = 0;
    puVar16[5] = uVar5;
    puVar16[6] = 0;
    *(undefined2 *)(puVar16 + 7) = 0;
    *(undefined1 (*) [4])((long)puVar16 + 0x3a) = auStack_308;
    *(undefined2 *)((long)puVar16 + 0x3e) = uStack_304;
    plVar12 = *(long **)(lVar13 + 8);
    *(undefined8 **)(lVar13 + 8) = puVar16;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
  }
  else if (iVar10 == 1) {
    if ((DAT_0f6db720 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6db720), iVar10 != 0)) {
      func_0x0c35e6d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6db6a0,0xf53dab8);
      func_0x0410844d(&DAT_0f6db720);
    }
    plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6db6a0 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_0c1d5c39;
      plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6db6a0 + 4)
            );
    if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d5c39:
      puVar22 = &DAT_0f6db6a0;
    }
    else {
      puVar22 = (undefined *)plVar12[2];
    }
    lVar13 = func_0x048b0c90(lVar23 + 0x18,puVar22,uVar6,1);
    if (lVar13 == 0) {
      auStack_3d8._0_8_ = 0;
      auStack_3d8._8_8_ = 0;
      FUN_048b0d20(auStack_3d8);
      lVar13 = auStack_3d8._0_8_;
    }
    lVar13 = *(long *)(lVar13 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    goto LAB_0c1d5e5e;
  }
  plStack_230 = plStack_2a8;
  pcStack_228 = pcStack_2a0;
  uStack_240 = uStack_2b8;
  uStack_238 = uStack_2b0;
  lStack_248 = lVar23;
  uStack_220 = puVar14;
  puStack_218 = (undefined1 *)
                CONCAT44(CONCAT13(uStack_2c2,CONCAT21(uStack_2c4,uStack_2c8._3_1_)),
                         (int)CONCAT41(uStack_2c8,(char)puVar9));
  func_0x0c35fe80(auStack_3d8,lVar23 + 0x18);
  puVar25 = puStack_290;
  lVar23 = lStack_2c0;
  puVar16 = puStack_3e0;
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d5faf:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d5faf;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c360460(auStack_3d8,&lStack_248,&UNK_014be3cb,0x11);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0eb460;
  if (uStack_3c0 != (code *)0x0) {
    lVar13 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar13 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_07912090;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &UNK_07911dc0;
  puStack_408 = &UNK_0c3613d0;
  puStack_400 = &UNK_0c361590;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c360710(auStack_3d8);
  uStack_148 = puStack_218._0_1_;
  pcStack_158 = pcStack_228;
  puStack_150 = uStack_220;
  uStack_168 = uStack_238;
  plStack_160 = plStack_230;
  lStack_178 = lStack_248;
  uStack_170 = uStack_240;
  func_0x048b0bc0(&uStack_3c0);
  func_0x0c35fe80(auStack_3d8,lStack_178 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d620f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d620f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c360460(auStack_3d8,&lStack_178,&UNK_0131aabb,10);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar17 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar17 = &UNK_0f2ba8e0;
  if (uStack_3c0 != (code *)0x0) {
    lVar13 = *(long *)uStack_3c0;
    uStack_3c0 = pcVar17;
    (**(code **)(lVar13 + 8))();
    pcVar17 = uStack_3c0;
  }
  uStack_3c0 = pcVar17;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_0c0a1440;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &SUB_0b5ad7b0;
  puStack_408 = &UNK_0c361770;
  puStack_400 = &UNK_0c361960;
  uStack_3f8 = 0;
  auStack_3f0 = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c360710(auStack_3d8);
  func_0x048b0bc0(&uStack_3c0);
  if (cStack_250 == '\x01') {
    if ((uStack_258 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_258 & 0xff00ffffffffffff) - 8);
    }
    uStack_258 = 0;
    if ((uStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar16,0x48);
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
  uStack_288 = uStack_288 & 0xffffffffffffff00;
  cStack_270 = '\0';
  if ((char)puVar25[3] == '\x01') {
    uStack_288 = *puVar25;
    uStack_280 = 0;
    uVar24 = puVar25[1];
    if ((uVar24 & 0x80000000000000) != 0) {
      lVar19 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar12 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar12 = lVar19;
      func_0x0eee2f00(plVar12 + 1,uVar24 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar12 + lVar19 + 8) = 0;
      uVar24 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      puVar25 = puStack_290;
    }
    plStack_278 = (long *)0x0;
    plVar12 = (long *)puVar25[2];
    uStack_280 = uVar24;
    if (((ulong)plVar12 & 0x80000000000000) != 0) {
      lVar19 = *(long *)(((ulong)plVar12 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar18 == (long *)0x0) {
        FUN_0eec74c0(lVar13,8);
      }
      *plVar18 = lVar19;
      func_0x0eee2f00(plVar18 + 1,(ulong)plVar12 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar18 + lVar19 + 8) = 0;
      plVar12 = (long *)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    cStack_270 = '\x01';
    plStack_278 = plVar12;
  }
  if ((DAT_0f6d8b10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d8b10), iVar10 != 0)) {
    func_0x0c2691d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8a90,0xf53dab8);
    func_0x0410844d(&DAT_0f6d8b10);
  }
  plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d8a90 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0c1d6670;
    plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6d8a90 + 4));
  if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d6670:
    puVar14 = &DAT_0f6d8a90;
    if (iRam000000000f6d8af0 != -0x2b3da790) goto LAB_0c1d66eb;
LAB_0c1d669b:
    lVar13 = *(long *)(puVar14 + 0x68);
    if (lVar13 == 0) goto LAB_0c1d66eb;
    bVar26 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0c361b40(auStack_308,lVar23,lVar19,uVar24);
  }
  else {
    puVar14 = (undefined *)plVar12[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c1d669b;
LAB_0c1d66eb:
    func_0x0c361b40(auStack_308,lVar23,&UNK_01281248,0xe);
  }
  if (cStack_2d8 == '\0') {
    lVar23 = _auStack_308;
    if ((DAT_0f6d8b10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d8b10), iVar10 != 0)) {
      func_0x0c2691d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8a90,0xf53dab8);
      func_0x0410844d(&DAT_0f6d8b10);
    }
    plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d8a90 + 4)) * 8);
    do {
      lVar13 = *plVar12;
      if (lVar13 == -1) goto LAB_0c1d678a;
      plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6d8a90 + 4)
            );
    if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d678a:
      puVar14 = &DAT_0f6d8a90;
    }
    else {
      puVar14 = (undefined *)plVar12[2];
    }
    for (pbVar15 = *(byte **)(_auStack_308 + 0x50); pbVar15 != *(byte **)(_auStack_308 + 0x58);
        pbVar15 = pbVar15 + 0x38) {
      bVar2 = *pbVar15;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0c1d686a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0c1d686a:
        if ((bVar2 & 1) == 0) {
          pbVar21 = pbVar15 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar15 + 0x10);
        }
        auVar28[0] = -(*pbVar21 == 0x5b);
        auVar28[1] = -(pbVar21[1] == 99);
        auVar28[2] = -(pbVar21[2] == 0x65);
        auVar28[3] = -(pbVar21[3] == 0x72);
        auVar28[4] = -(pbVar21[4] == 0x65);
        auVar28[5] = -(pbVar21[5] == 0x61);
        auVar28[6] = -(pbVar21[6] == 0x6c);
        auVar28[7] = -(pbVar21[7] == 0x3a);
        auVar28[8] = -(pbVar21[8] == 100);
        auVar28[9] = -(pbVar21[9] == 0x6f);
        auVar28[10] = -(pbVar21[10] == 99);
        auVar28[0xb] = -(pbVar21[0xb] == 0x75);
        auVar28[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar28[0xd] = -(pbVar21[0xd] == 0x65);
        auVar28[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar28[0xf] = -(pbVar21[0xf] == 0x74);
        auVar30[0] = -(pbVar21[10] == 99);
        auVar30[1] = -(pbVar21[0xb] == 0x75);
        auVar30[2] = -(pbVar21[0xc] == 0x6d);
        auVar30[3] = -(pbVar21[0xd] == 0x65);
        auVar30[4] = -(pbVar21[0xe] == 0x6e);
        auVar30[5] = -(pbVar21[0xf] == 0x74);
        auVar30[6] = -(pbVar21[0x10] == 0x61);
        auVar30[7] = -(pbVar21[0x11] == 0x74);
        auVar30[8] = -(pbVar21[0x12] == 0x69);
        auVar30[9] = -(pbVar21[0x13] == 0x6f);
        auVar30[10] = -(pbVar21[0x14] == 0x6e);
        auVar30[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar30[0xc] = -(pbVar21[0x16] == 0x74);
        auVar30[0xd] = -(pbVar21[0x17] == 0x61);
        auVar30[0xe] = -(pbVar21[0x18] == 0x67);
        auVar30[0xf] = -(pbVar21[0x19] == 0x5d);
        auVar30 = auVar30 & auVar28;
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == *(byte **)(_auStack_308 + 0x58)) {
LAB_0c1d68a2:
      uVar7 = uStack_2dc;
      if (iStack_2e0 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c1d698c;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)func_0x048aead0(lVar23 + 0x18,0,uStack_2dc);
        }
        auStack_3d8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar7,1);
        if (auStack_3d8._0_8_ == 0) {
          auStack_3d8 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_3d8);
          if (auStack_3d8._0_8_ == 0) goto LAB_0c1d698c;
        }
        if ((*(int *)(auStack_3d8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_3d8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_3d8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c1d698c:
          lVar23 = 0;
        }
      }
      uStack_438 = &UNK_0488e0b0;
      pcStack_430 = (code *)0x0;
      pcStack_428 = (code *)CONCAT35(pcStack_428._5_3_,0x48b5725f);
      uStack_448 = 0;
      auStack_3d8._0_8_ = 0;
      auStack_3d8._8_8_ = 0;
      uStack_3c0 = (code *)&UNK_0488e0b0;
      pcStack_3b8 = (code *)0x0;
      uStack_3b0 = (undefined *)CONCAT35(uStack_3b0._5_3_,0x48b5725f);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar12 == (long *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      uStack_2b8 = 0x21;
      uStack_2b0 = 0x1a;
      *(ulong *)((long)plVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar12 + 0x12) = uVar5;
      lVar13 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar12 = _DAT_013bbacd;
      plVar12[1] = lVar13;
      *(undefined1 *)((long)plVar12 + 0x1a) = 0;
      plStack_2a8 = plVar12;
      lVar23 = func_0x048b5060(lVar23,&uStack_2b8);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_3d8) {
        pcVar17 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar25 = (ulong *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar25);
          uVar5 = auStack_3d8._8_8_;
          if (uStack_3b0._4_1_ != '\0') {
            if (uStack_3b0._4_1_ == '\x02') {
              (*uStack_3c0)(5,auStack_3d8 + 8,puVar25);
            }
            else {
              auStack_3d8._8_8_ = 0;
              *puVar25 = uVar5;
            }
          }
        }
        *(code **)(lVar23 + 0x38) = uStack_3c0;
        *(code **)(lVar23 + 0x40) = pcStack_3b8;
        *(undefined4 *)(lVar23 + 0x48) = (undefined4)uStack_3b0;
        *(char *)(lVar23 + 0x4c) = uStack_3b0._4_1_;
        pcVar17 = pcStack_3b8;
      }
      if ((uStack_2b8 & 1) != 0) {
        func_0x0412a280(plStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
        pcVar17 = pcStack_3b8;
      }
      if (pcVar17 != (code *)0x0) {
        (*pcVar17)(auStack_3d8 + 8);
      }
      if (pcStack_430 != (code *)0x0) {
        (*pcStack_430)(&uStack_448);
      }
    }
    else {
      iVar10 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ad8), iVar11 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar10 == _DAT_0f550ac4) goto LAB_0c1d68a2;
    }
    puStack_f8 = (undefined1 *)CONCAT71(uStack_2d7,cStack_2d8);
    puStack_100 = (undefined *)CONCAT44(uStack_2dc,iStack_2e0);
    pcStack_108 = pcStack_2e8;
    uStack_118 = uStack_2f8;
    plStack_110 = (long *)pcStack_2f0;
    lStack_128 = _auStack_308;
    uStack_120 = uStack_300;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x98,0);
    }
    func_0x0eee2f00(puVar16,&UNK_01232640,0x93);
    *(undefined1 *)((long)puVar16 + 0x93) = 0;
    uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
    pcStack_2a0 = (code *)((ulong)pcStack_2a0 & 0xffffffffffffff00);
    if (cStack_270 == '\x01') {
      uStack_2b8 = uStack_288;
      uStack_2b0 = 0;
      uVar24 = uStack_280;
      if ((uStack_280 & 0x80000000000000) != 0) {
        uVar24 = uStack_280 & 0xff00ffffffffffff;
        lVar13 = *(long *)(uVar24 - 8);
        lVar23 = lVar13 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
        if (lVar23 != 0 && plVar12 == (long *)0x0) {
          FUN_0eec74c0(lVar23,8);
        }
        *plVar12 = lVar13;
        func_0x0eee2f00(plVar12 + 1,uVar24,lVar13);
        *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
        uVar24 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      plStack_2a8 = (long *)0x0;
      plVar12 = plStack_278;
      uStack_2b0 = uVar24;
      if (((ulong)plStack_278 & 0x80000000000000) != 0) {
        uVar24 = (ulong)plStack_278 & 0xff00ffffffffffff;
        lVar13 = *(long *)(uVar24 - 8);
        lVar23 = lVar13 + 9;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar23,8);
        if (lVar23 != 0 && plVar12 == (long *)0x0) {
          FUN_0eec74c0(lVar23,8);
        }
        *plVar12 = lVar13;
        func_0x0eee2f00(plVar12 + 1,uVar24,lVar13);
        *(undefined1 *)((long)plVar12 + lVar13 + 8) = 0;
        plVar12 = (long *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
      plStack_2a8 = plVar12;
    }
    func_0x0412e5e0(&uStack_268,puVar16,0x93);
    puStack_b8 = puStack_f8;
    pcStack_c8 = pcStack_108;
    puStack_c0 = puStack_100;
    uStack_d8 = uStack_118;
    plStack_d0 = plStack_110;
    lStack_e8 = lStack_128;
    uStack_e0 = uStack_120;
    func_0x0c362130(auStack_3d8,lStack_128 + 0x18);
    if (uStack_3c0._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      uVar24 = *(ulong *)(piVar20 + 0xc);
      while (uVar24 != auStack_3d8._8_8_) {
        piVar20 = *(int **)(piVar20 + 0xe);
        uVar24 = *(ulong *)(piVar20 + 0xc);
      }
LAB_0c1d6dff:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_3c0) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0c1d6dff;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
      }
    }
    func_0x0c3626e0(auStack_3d8,&lStack_e8,&UNK_011f9469,9);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (uStack_3c0 != (code *)0x0) {
      lVar23 = *(long *)uStack_3c0;
      uStack_3c0 = (code *)plVar12;
      (**(code **)(lVar23 + 8))();
      plVar12 = (long *)uStack_3c0;
    }
    uStack_3c0 = (code *)plVar12;
    uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
    uStack_440 = 0;
    uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
    pcStack_430 = (code *)0x1;
    pcStack_428 = (code *)0x0;
    uStack_420 = &UNK_0490ce30;
    puStack_418 = &SUB_048b06d0;
    puStack_410 = &SUB_0490cb20;
    puStack_408 = &UNK_0c362c90;
    puStack_400 = &UNK_0c362df0;
    uStack_3f8 = 0;
    auStack_3f0 = ZEXT816(0);
    FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
    uVar5 = auStack_3f0._8_8_;
    if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_3f0._8_8_ + 8);
      lVar23 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0c362990(auStack_3d8);
    puStack_78 = (undefined1 *)CONCAT71(puStack_78._1_7_,puStack_b8._0_1_);
    pcStack_88 = pcStack_c8;
    puStack_80 = puStack_c0;
    uStack_98 = uStack_d8;
    plStack_90 = plStack_d0;
    lStack_a8 = lStack_e8;
    uStack_a0 = uStack_e0;
    func_0x048b0bc0(&uStack_3c0);
    lStack_68 = lStack_a8;
    uStack_60 = uStack_a0;
    uStack_58 = uStack_98;
    plStack_50 = plStack_90;
    pcStack_48 = pcStack_88;
    puStack_40 = puStack_80;
    puStack_38 = puStack_78;
    func_0x0c362130(auStack_3d8,lStack_a8 + 0x18);
    if (uStack_3c0._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      uVar24 = *(ulong *)(piVar20 + 0xc);
      while (uVar24 != auStack_3d8._8_8_) {
        piVar20 = *(int **)(piVar20 + 0xe);
        uVar24 = *(ulong *)(piVar20 + 0xc);
      }
LAB_0c1d706f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_3c0) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0c1d706f;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
      }
    }
    func_0x0c3626e0(auStack_3d8,&lStack_68,&UNK_012ccc8d,0xe);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (uStack_3c0 != (code *)0x0) {
      lVar23 = *(long *)uStack_3c0;
      uStack_3c0 = (code *)plVar12;
      (**(code **)(lVar23 + 8))();
      plVar12 = (long *)uStack_3c0;
    }
    uStack_3c0 = (code *)plVar12;
    uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
    uStack_440 = 0;
    uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
    pcStack_430 = (code *)0x1;
    pcStack_428 = (code *)0x0;
    uStack_420 = &UNK_04906f70;
    puStack_418 = &SUB_048b06d0;
    puStack_410 = &SUB_04906c50;
    puStack_408 = &UNK_0c362fc0;
    puStack_400 = &UNK_0c363120;
    uStack_3f8 = 0;
    auStack_3f0 = ZEXT816(0);
    FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
    uVar5 = auStack_3f0._8_8_;
    if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_3f0._8_8_ + 8);
      lVar23 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0c362990(auStack_3d8);
    puStack_1b8 = (undefined1 *)CONCAT71(puStack_1b8._1_7_,puStack_38._0_1_);
    pcStack_1c8 = pcStack_48;
    uStack_1c0 = puStack_40;
    uStack_1d8 = uStack_58;
    plStack_1d0 = plStack_50;
    lStack_1e8 = lStack_68;
    uStack_1e0 = uStack_60;
    func_0x048b0bc0(&uStack_3c0);
    lStack_248 = lStack_1e8;
    uStack_240 = uStack_1e0;
    uStack_238 = uStack_1d8;
    plStack_230 = plStack_1d0;
    pcStack_228 = pcStack_1c8;
    uStack_220 = uStack_1c0;
    puStack_218 = puStack_1b8;
    func_0x0c362130(auStack_3d8,lStack_1e8 + 0x18);
    if (uStack_3c0._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      uVar24 = *(ulong *)(piVar20 + 0xc);
      while (uVar24 != auStack_3d8._8_8_) {
        piVar20 = *(int **)(piVar20 + 0xe);
        uVar24 = *(ulong *)(piVar20 + 0xc);
      }
LAB_0c1d72ef:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_3c0) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0c1d72ef;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
      }
    }
    func_0x0c3626e0(auStack_3d8,&lStack_248,&UNK_011c93f3,0x13);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f0126a0;
    if (uStack_3c0 != (code *)0x0) {
      lVar23 = *(long *)uStack_3c0;
      uStack_3c0 = (code *)plVar12;
      (**(code **)(lVar23 + 8))();
      plVar12 = (long *)uStack_3c0;
    }
    uStack_3c0 = (code *)plVar12;
    uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
    uStack_440 = 0;
    uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
    pcStack_430 = (code *)0x1;
    pcStack_428 = (code *)0x0;
    uStack_420 = &UNK_05daeda0;
    puStack_418 = &SUB_048b06d0;
    puStack_410 = &UNK_05daea90;
    puStack_408 = &UNK_0c363300;
    puStack_400 = &UNK_0c363460;
    uStack_3f8 = 0;
    auStack_3f0 = ZEXT816(0);
    FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
    uVar5 = auStack_3f0._8_8_;
    if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_3f0._8_8_ + 8);
      lVar23 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0c362990(auStack_3d8);
    puVar14 = uStack_220;
    lVar23 = lStack_248;
    uStack_1a8 = uStack_240;
    uStack_1a0 = uStack_238;
    plStack_198 = plStack_230;
    pcStack_190 = pcStack_228;
    iVar10 = (int)uStack_220;
    uVar6 = uStack_220._4_4_;
    uVar8 = puStack_218._0_1_;
    puStack_3e0 = puVar16;
    func_0x048b0bc0(&uStack_3c0);
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    if (iVar10 == 4) {
      if ((DAT_0f6d8b10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d8b10), iVar10 != 0)) {
        func_0x0c2691d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8a90,0xf53dab8);
        func_0x0410844d(&DAT_0f6d8b10);
      }
      plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6d8a90 + 4)) * 8);
      do {
        lVar13 = *plVar12;
        if (lVar13 == -1) goto LAB_0c1d7568;
        plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f6d8a90 + 4));
      if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d7568:
        puVar22 = &DAT_0f6d8a90;
      }
      else {
        puVar22 = (undefined *)plVar12[2];
      }
      lVar13 = func_0x048b1040(lVar23 + 0x18,puVar22,uVar6,1);
      if (lVar13 == 0) {
        auStack_3d8._0_8_ = 0;
        auStack_3d8._8_8_ = 0;
        func_0x048b10d0(auStack_3d8);
        lVar19 = *(long *)(auStack_3d8._0_8_ + 0x38);
        lVar13 = auStack_3d8._0_8_;
        if (lVar19 == 0) goto LAB_0c1d7697;
LAB_0c1d76b3:
        do {
          lVar13 = lVar19;
          lVar19 = *(long *)(lVar13 + 0x38);
          if (*(long *)(lVar13 + 0x38) == 0) {
            auStack_3d8._0_8_ = 0;
            auStack_3d8._8_8_ = 0;
            func_0x048b10d0(auStack_3d8);
            lVar19 = auStack_3d8._0_8_;
          }
        } while (lVar19 != 0);
      }
      else {
        lVar19 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) != 0) goto LAB_0c1d76b3;
LAB_0c1d7697:
        auStack_3d8._0_8_ = 0;
        auStack_3d8._8_8_ = 0;
        func_0x048b10d0(auStack_3d8);
        lVar19 = auStack_3d8._0_8_;
        if (auStack_3d8._0_8_ != 0) goto LAB_0c1d76b3;
      }
      lVar13 = *(long *)(lVar13 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
LAB_0c1d770f:
      puVar16[1] = 0xffffffffffffffff;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *puVar16 = &UNK_0f0edc68;
      uVar5 = _DAT_014f0238;
      puVar16[4] = 0;
      puVar16[5] = uVar5;
      puVar16[6] = 0;
      *(undefined2 *)(puVar16 + 7) = 0;
      *(undefined4 *)((long)puVar16 + 0x3a) = uStack_2c8;
      *(undefined2 *)((long)puVar16 + 0x3e) = uStack_2c4;
      plVar12 = *(long **)(lVar13 + 8);
      *(undefined8 **)(lVar13 + 8) = puVar16;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
    }
    else if (iVar10 == 1) {
      if ((DAT_0f6d8b10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6d8b10), iVar10 != 0)) {
        func_0x0c2691d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8a90,0xf53dab8);
        func_0x0410844d(&DAT_0f6d8b10);
      }
      plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6d8a90 + 4)) * 8);
      do {
        lVar13 = *plVar12;
        if (lVar13 == -1) goto LAB_0c1d74e8;
        plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
      } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) !=
               *(uint *)(_DAT_0f6d8a90 + 4));
      if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d74e8:
        puVar22 = &DAT_0f6d8a90;
      }
      else {
        puVar22 = (undefined *)plVar12[2];
      }
      lVar13 = func_0x048b0c90(lVar23 + 0x18,puVar22,uVar6,1);
      if (lVar13 == 0) {
        auStack_3d8._0_8_ = 0;
        auStack_3d8._8_8_ = 0;
        FUN_048b0d20(auStack_3d8);
        lVar13 = auStack_3d8._0_8_;
      }
      lVar13 = *(long *)(lVar13 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_0c1d770f;
    }
    plStack_160 = plStack_198;
    pcStack_158 = pcStack_190;
    uStack_170 = uStack_1a8;
    uStack_168 = uStack_1a0;
    lStack_178 = lVar23;
    puStack_150 = puVar14;
    uStack_148 = uVar8;
    uStack_143 = (undefined3)(uStack_140 >> 0x20);
    uStack_147 = (undefined4)uStack_140;
    func_0x0c362130(auStack_3d8,lVar23 + 0x18);
    lVar23 = lStack_2c0;
    puVar16 = puStack_3e0;
    if (uStack_3c0._4_4_ == 2) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x16;
        iVar10 = *piVar20;
      }
      uVar24 = *(ulong *)(piVar20 + 0xc);
      while (uVar24 != auStack_3d8._8_8_) {
        piVar20 = *(int **)(piVar20 + 0xe);
        uVar24 = *(ulong *)(piVar20 + 0xc);
      }
LAB_0c1d785f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
    }
    else {
      if (uStack_3c0._4_4_ == 1) {
        piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
        iVar10 = *piVar20;
        while (iVar10 != (int)uStack_3c0) {
          piVar20 = piVar20 + 0x1a;
          iVar10 = *piVar20;
        }
        goto LAB_0c1d785f;
      }
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
      }
    }
    func_0x0c3626e0(auStack_3d8,&lStack_178,&UNK_014be3cb,0x11);
    pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar17 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar17 = &UNK_0f0eb460;
    if (uStack_3c0 != (code *)0x0) {
      lVar13 = *(long *)uStack_3c0;
      uStack_3c0 = pcVar17;
      (**(code **)(lVar13 + 8))();
      pcVar17 = uStack_3c0;
    }
    uStack_3c0 = pcVar17;
    uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
    uStack_440 = 0;
    uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
    pcStack_430 = (code *)0x1;
    pcStack_428 = (code *)0x0;
    uStack_420 = &UNK_07912090;
    puStack_418 = &SUB_048b06d0;
    puStack_410 = &UNK_07911dc0;
    puStack_408 = &UNK_0c363640;
    puStack_400 = &UNK_0c363800;
    uStack_3f8 = 0;
    auStack_3f0 = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
    uVar5 = auStack_3f0._8_8_;
    if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_3f0._8_8_ + 8);
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    func_0x0c362990(auStack_3d8);
    func_0x048b0bc0(&uStack_3c0);
    if ((uStack_268 & 1) != 0) {
      func_0x0412a280(uStack_258,uStack_268 & 0xfffffffffffffffe);
    }
    if ((char)pcStack_2a0 == '\x01') {
      if (((ulong)plStack_2a8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)plStack_2a8 & 0xff00ffffffffffff) - 8);
      }
      plStack_2a8 = (long *)0x0;
      if ((uStack_2b0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
      }
      uStack_2b0 = 0;
    }
    func_0x0412a280(puVar16,0x98);
  }
  if (cStack_270 == '\x01') {
    if (((ulong)plStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_278 & 0xff00ffffffffffff) - 8);
    }
    plStack_278 = (long *)0x0;
    if ((uStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_280 & 0xff00ffffffffffff) - 8);
    }
    uStack_280 = 0;
  }
  if ((DAT_0f6db638 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6db638), iVar10 != 0)) {
    func_0x0c35a4c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6db5b8,0xf53dab8);
    func_0x0410844d(&DAT_0f6db638);
  }
  plVar12 = (long *)(*(long *)(lVar23 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6db5b8 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0c1d7b50;
    plVar12 = (long *)(*(long *)(lVar23 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6db5b8 + 4));
  if (plVar12 == *(long **)(lVar23 + 0x38)) {
LAB_0c1d7b50:
    puVar14 = &DAT_0f6db5b8;
    if (iRam000000000f6db618 != -0x2b3da790) goto LAB_0c1d7bbd;
LAB_0c1d7b7b:
    lVar13 = *(long *)(puVar14 + 0x68);
    if (lVar13 == 0) goto LAB_0c1d7bbd;
    bVar26 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0c35a920(auStack_308,lVar23,lVar19,uVar24);
  }
  else {
    puVar14 = (undefined *)plVar12[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c1d7b7b;
LAB_0c1d7bbd:
    func_0x0c35a920(auStack_308,lVar23,0,0);
  }
  if (cStack_2d8 != '\0') {
    return;
  }
  func_0x0c35af10(auStack_3d8,_auStack_308 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d7c4f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d7c4f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c35b500(auStack_3d8,auStack_308,&UNK_011f9469,9);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ce8;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_0490ce30;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &SUB_0490cb20;
  puStack_408 = &UNK_0c35bab0;
  puStack_400 = &UNK_0c35bc10;
  uStack_3f8 = 0;
  auStack_3f0 = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c35b7b0(auStack_3d8);
  puStack_1b8 = (undefined1 *)CONCAT71(puStack_1b8._1_7_,cStack_2d8);
  uStack_1c0 = (undefined *)CONCAT44(uStack_2dc,iStack_2e0);
  pcStack_1c8 = pcStack_2e8;
  uStack_1d8 = uStack_2f8;
  plStack_1d0 = (long *)pcStack_2f0;
  lStack_1e8 = _auStack_308;
  uStack_1e0 = uStack_300;
  func_0x048b0bc0(&uStack_3c0);
  func_0x0c35af10(auStack_3d8,lStack_1e8 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d7e8f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d7e8f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c35b500(auStack_3d8,&lStack_1e8,&UNK_012ccc8d,0xe);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ef8;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_04906f70;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &SUB_04906c50;
  puStack_408 = &UNK_0c35bdf0;
  puStack_400 = &UNK_0c35bf50;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c35b7b0(auStack_3d8);
  puStack_218 = (undefined1 *)CONCAT71(puStack_218._1_7_,puStack_1b8._0_1_);
  pcStack_228 = pcStack_1c8;
  uStack_220 = uStack_1c0;
  uStack_238 = uStack_1d8;
  plStack_230 = plStack_1d0;
  lStack_248 = lStack_1e8;
  uStack_240 = uStack_1e0;
  func_0x048b0bc0(&uStack_3c0);
  func_0x0c35af10(auStack_3d8,lStack_248 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
LAB_0c1d813f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_3c0) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0c1d813f;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x0c35b500(auStack_3d8,&lStack_248,&UNK_011c93f3,0x13);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0126a0;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)plVar12;
    (**(code **)(lVar23 + 8))();
    plVar12 = (long *)uStack_3c0;
  }
  uStack_3c0 = (code *)plVar12;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_05daeda0;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &UNK_05daea90;
  puStack_408 = &UNK_0c35c130;
  puStack_400 = &UNK_0c35c290;
  uStack_3f8 = 0;
  auStack_3f0 = ZEXT816(0);
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c35b7b0(auStack_3d8);
  uStack_148 = puStack_218._0_1_;
  pcStack_158 = pcStack_228;
  puStack_150 = uStack_220;
  uStack_168 = uStack_238;
  plStack_160 = plStack_230;
  lStack_178 = lStack_248;
  uStack_170 = uStack_240;
  func_0x048b0bc0(&uStack_3c0);
  func_0x0c35af10(auStack_3d8,lStack_178 + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    uVar24 = *(ulong *)(piVar20 + 0xc);
    while (uVar24 != auStack_3d8._8_8_) {
      piVar20 = *(int **)(piVar20 + 0xe);
      uVar24 = *(ulong *)(piVar20 + 0xc);
    }
  }
  else {
    if (uStack_3c0._4_4_ != 1) {
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)(uStack_3c8 + 0x18) = *(uint *)(uStack_3c8 + 0x18) | 0x40000;
      }
      goto LAB_0c1d8383;
    }
    piVar20 = *(int **)(*(long *)(uStack_3c8 + 0x78) + 0x48);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_3c0) {
      piVar20 = piVar20 + 0x1a;
      iVar10 = *piVar20;
    }
  }
  *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
LAB_0c1d8383:
  func_0x0c35b500(auStack_3d8,&lStack_178,&UNK_014be3cb,0x11);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f0eb460;
  if (uStack_3c0 != (code *)0x0) {
    lVar23 = *(long *)uStack_3c0;
    uStack_3c0 = (code *)puVar16;
    (**(code **)(lVar23 + 8))();
    puVar16 = (undefined8 *)uStack_3c0;
  }
  uStack_3c0 = (code *)puVar16;
  uStack_448 = CONCAT44(uStack_448._4_4_,(undefined4)uStack_3c8);
  uStack_440 = 0;
  uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
  pcStack_430 = (code *)0x1;
  pcStack_428 = (code *)0x0;
  uStack_420 = &UNK_07912090;
  puStack_418 = &SUB_048b06d0;
  puStack_410 = &UNK_07911dc0;
  puStack_408 = &UNK_0c35c470;
  puStack_400 = &UNK_0c35c630;
  uStack_3f8 = 0;
  auStack_3f0 = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_3d8._8_8_,&uStack_448);
  uVar5 = auStack_3f0._8_8_;
  if ((long *)auStack_3f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_3f0._8_8_ + 8);
    lVar23 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_3f0._8_8_ + 0x10))(auStack_3f0._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  func_0x0c35b7b0(auStack_3d8);
  func_0x048b0bc0(&uStack_3c0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13ef204  When an item has a food component, it becomes edible to the player.
 * 0x13ef214   a food component, it becomes edible to the player.
 * 0x13ef224  t, it becomes edible to the player.
 * 0x13ef234  ible to the player.
 */
