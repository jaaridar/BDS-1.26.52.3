/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe727990 (ELF vaddr 0xe627990)
 * Label: caller-of-callee
 * Body:  [[0e727990, 0e727aa1] [0e727ab0, 0e727af2] [0e727b00, 0e728257] [0e728260, 0e7282a1] [0e7282b0, 0e72866e] [0e728670, 0e7286a1] [0e7286b0, 0e728ee2]]
 * Ghidra: FUN_0e727990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e727990(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [20];
  undefined4 uStack_20c;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  char cStack_1a0;
  undefined7 uStack_19f;
  undefined1 auStack_198 [16];
  undefined4 uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined4 uStack_170;
  char cStack_16c;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e808d40();
  FUN_0e806340(param_1);
  lVar6 = func_0x0c8d38f0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar15 = lVar6 + 9;
    if (bVar16) {
      lVar15 = *(long *)(lVar6 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0e7bb3d0(&uStack_1d0,param_1,lVar15,uVar11);
  }
  else {
    func_0x0e7bb3d0(&uStack_1d0,param_1,&UNK_01284d53,0x10);
  }
  if (cStack_1a0 == '\0') {
    lVar15 = uStack_1d0 + 0x18;
    lVar6 = func_0x0c8d38f0(lVar15);
    for (pbVar8 = *(byte **)(uStack_1d0 + 0x50); pbVar8 != *(byte **)(uStack_1d0 + 0x58);
        pbVar8 = pbVar8 + 0x38) {
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e727b0a;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e727b0a:
        if ((bVar1 & 1) == 0) {
          pbVar13 = pbVar8 + 1;
        }
        else {
          pbVar13 = *(byte **)(pbVar8 + 0x10);
        }
        auVar17[0] = -(*pbVar13 == 0x5b);
        auVar17[1] = -(pbVar13[1] == 99);
        auVar17[2] = -(pbVar13[2] == 0x65);
        auVar17[3] = -(pbVar13[3] == 0x72);
        auVar17[4] = -(pbVar13[4] == 0x65);
        auVar17[5] = -(pbVar13[5] == 0x61);
        auVar17[6] = -(pbVar13[6] == 0x6c);
        auVar17[7] = -(pbVar13[7] == 0x3a);
        auVar17[8] = -(pbVar13[8] == 100);
        auVar17[9] = -(pbVar13[9] == 0x6f);
        auVar17[10] = -(pbVar13[10] == 99);
        auVar17[0xb] = -(pbVar13[0xb] == 0x75);
        auVar17[0xc] = -(pbVar13[0xc] == 0x6d);
        auVar17[0xd] = -(pbVar13[0xd] == 0x65);
        auVar17[0xe] = -(pbVar13[0xe] == 0x6e);
        auVar17[0xf] = -(pbVar13[0xf] == 0x74);
        auVar19[0] = -(pbVar13[10] == 99);
        auVar19[1] = -(pbVar13[0xb] == 0x75);
        auVar19[2] = -(pbVar13[0xc] == 0x6d);
        auVar19[3] = -(pbVar13[0xd] == 0x65);
        auVar19[4] = -(pbVar13[0xe] == 0x6e);
        auVar19[5] = -(pbVar13[0xf] == 0x74);
        auVar19[6] = -(pbVar13[0x10] == 0x61);
        auVar19[7] = -(pbVar13[0x11] == 0x74);
        auVar19[8] = -(pbVar13[0x12] == 0x69);
        auVar19[9] = -(pbVar13[0x13] == 0x6f);
        auVar19[10] = -(pbVar13[0x14] == 0x6e);
        auVar19[0xb] = -(pbVar13[0x15] == 0x5f);
        auVar19[0xc] = -(pbVar13[0x16] == 0x74);
        auVar19[0xd] = -(pbVar13[0x17] == 0x61);
        auVar19[0xe] = -(pbVar13[0x18] == 0x67);
        auVar19[0xf] = -(pbVar13[0x19] == 0x5d);
        auVar19 = auVar19 & auVar17;
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar8 == *(byte **)(uStack_1d0 + 0x58)) {
LAB_0e727b39:
      if (iStack_1a8 == 0) {
        if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
        goto LAB_0e727bb6;
        lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
      }
      else {
        auStack_198._0_8_ = func_0x048b0c90(lVar15,lVar6,uStack_1a4,1);
        if (auStack_198._0_8_ == 0) {
          auStack_198 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_198);
          if (auStack_198._0_8_ == 0) goto LAB_0e727bb6;
        }
        if ((*(int *)(auStack_198._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_198._0_8_ + 0x58) != 0)) {
          lVar6 = *(long *)(auStack_198._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e727bb6:
          lVar6 = 0;
        }
      }
      puStack_268 = &UNK_0488e0b0;
      pcStack_260 = (code *)0x0;
      uStack_258 = CONCAT35(uStack_258._5_3_,0x48b5725f);
      uStack_278 = 0;
      auStack_198 = (undefined1  [16])0x0;
      pcStack_180 = (code *)&UNK_0488e0b0;
      pcStack_178 = (code *)0x0;
      uStack_170 = 0x48b5725f;
      cStack_16c = '\0';
      puStack_1f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_1f8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_208 = 0x21;
      uStack_200 = 0x1a;
      *(ulong *)((long)puStack_1f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_1f8 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_1f8 = _DAT_013bbacd;
      puStack_1f8[1] = uVar2;
      *(undefined1 *)((long)puStack_1f8 + 0x1a) = 0;
      lVar6 = func_0x048b5060(lVar6,&uStack_208);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      if ((undefined1 *)(lVar6 + 0x20) == auStack_198) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
          puVar9 = (undefined8 *)(lVar6 + 0x28);
          (**(code **)(lVar6 + 0x40))(puVar9);
          if (cStack_16c != '\0') {
            if (cStack_16c == '\x02') {
              (*pcStack_180)(5,auStack_198 + 8,puVar9);
            }
            else {
              uVar2 = auStack_198._8_8_;
              auStack_198._8_8_ = 0;
              *puVar9 = uVar2;
            }
          }
        }
        *(code **)(lVar6 + 0x38) = pcStack_180;
        *(code **)(lVar6 + 0x40) = pcStack_178;
        *(undefined4 *)(lVar6 + 0x48) = uStack_170;
        *(char *)(lVar6 + 0x4c) = cStack_16c;
        pcVar10 = pcStack_178;
      }
      if ((uStack_208 & 1) != 0) {
        func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
        pcVar10 = pcStack_178;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_198 + 8);
      }
      if (pcStack_260 != (code *)0x0) {
        (*pcStack_260)(&uStack_278);
      }
    }
    else {
      iVar4 = *(int *)(pbVar8 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0e727b39;
    }
    uStack_98._0_1_ = cStack_1a0;
    uStack_a0 = CONCAT44(uStack_1a4,iStack_1a8);
    uStack_a8 = uStack_1b0;
    puStack_b8 = puStack_1c0;
    uStack_b0 = uStack_1b8;
    uStack_c8 = uStack_1d0;
    uStack_c0 = uStack_1c8;
    func_0x0e7bbc90(auStack_198,&uStack_c8,&UNK_011ea907,0xb);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f4982b8;
    if (pcStack_180 != (code *)0x0) {
      lVar6 = *(long *)pcStack_180;
      pcStack_180 = pcVar10;
      (**(code **)(lVar6 + 8))();
      pcVar10 = pcStack_180;
    }
    pcStack_180 = pcVar10;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
    uStack_270 = 0;
    puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0db7ae60;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0db7ab50;
    puStack_238 = &UNK_0e7bc190;
    puStack_230 = &UNK_0e7bc350;
    uStack_228 = 0;
    auStack_220._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_198._8_8_,&uStack_278);
    uVar2 = auStack_220._8_8_;
    if ((long *)auStack_220._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_220._8_8_ + 8);
      lVar6 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e7bbe90(auStack_198);
    cStack_1d8 = (char)uStack_98;
    uStack_1e8 = uStack_a8;
    uStack_1e0 = uStack_a0;
    puStack_1f8 = puStack_b8;
    uStack_1f0 = uStack_b0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    func_0x048b0bc0(&pcStack_180);
    func_0x0e7bbc90(auStack_198,&uStack_208,&UNK_011ed181,10);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f4cc060;
    if (pcStack_180 != (code *)0x0) {
      lVar6 = *(long *)pcStack_180;
      pcStack_180 = pcVar10;
      (**(code **)(lVar6 + 8))();
      pcVar10 = pcStack_180;
    }
    pcStack_180 = pcVar10;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
    uStack_270 = 0;
    puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0e7bc750;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0e163a60;
    puStack_238 = &UNK_0e7bc760;
    puStack_230 = &UNK_0e7bc930;
    uStack_228 = 0;
    auStack_220._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_198._8_8_,&uStack_278);
    uVar2 = auStack_220._8_8_;
    if ((long *)auStack_220._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_220._8_8_ + 8);
      lVar6 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e7bbe90(auStack_198);
    func_0x048b0bc0(&pcStack_180);
  }
  if ((DAT_0f760b10 == '\0') && (iVar4 = func_0x04108328(&DAT_0f760b10), iVar4 != 0)) {
    func_0x0e7bcfe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760a90,0xf53dab8);
    FUN_0410844d(&DAT_0f760b10);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f760a90 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_0e7280e0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f760a90 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e7280e0:
    puVar7 = &DAT_0f760a90;
    if (iRam000000000f760af0 != -0x2b3da790) goto LAB_0e72814d;
LAB_0e72810b:
    lVar6 = *(long *)(puVar7 + 0x68);
    if (lVar6 == 0) goto LAB_0e72814d;
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar15 = lVar6 + 9;
    if (bVar16) {
      lVar15 = *(long *)(lVar6 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0e7bd680(&uStack_1d0,param_1,lVar15,uVar11);
    uVar11 = uStack_1d0;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e72810b;
LAB_0e72814d:
    func_0x0e7bd680(&uStack_1d0,param_1,&UNK_011e566f,0xf);
    uVar11 = uStack_1d0;
  }
  if (cStack_1a0 != '\0') {
    return;
  }
  uStack_1d0 = uVar11;
  if ((DAT_0f760b10 == '\0') && (iVar4 = func_0x04108328(&DAT_0f760b10), iVar4 != 0)) {
    func_0x0e7bcfe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760a90,0xf53dab8);
    FUN_0410844d(&DAT_0f760b10);
  }
  plVar12 = (long *)(*(long *)(uVar11 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar11 + 0x20) - *(long *)(uVar11 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f760a90 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_0e7281e0;
    plVar12 = (long *)(*(long *)(uVar11 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(uVar11 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f760a90 + 4));
  if (plVar12 == *(long **)(uVar11 + 0x38)) {
LAB_0e7281e0:
    puVar7 = &DAT_0f760a90;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
  }
  for (pbVar8 = *(byte **)(uStack_1d0 + 0x50); pbVar8 != *(byte **)(uStack_1d0 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar1 = *pbVar8;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e7282ba;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e7282ba:
      if ((bVar1 & 1) == 0) {
        pbVar13 = pbVar8 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar8 + 0x10);
      }
      auVar18[0] = -(*pbVar13 == 0x5b);
      auVar18[1] = -(pbVar13[1] == 99);
      auVar18[2] = -(pbVar13[2] == 0x65);
      auVar18[3] = -(pbVar13[3] == 0x72);
      auVar18[4] = -(pbVar13[4] == 0x65);
      auVar18[5] = -(pbVar13[5] == 0x61);
      auVar18[6] = -(pbVar13[6] == 0x6c);
      auVar18[7] = -(pbVar13[7] == 0x3a);
      auVar18[8] = -(pbVar13[8] == 100);
      auVar18[9] = -(pbVar13[9] == 0x6f);
      auVar18[10] = -(pbVar13[10] == 99);
      auVar18[0xb] = -(pbVar13[0xb] == 0x75);
      auVar18[0xc] = -(pbVar13[0xc] == 0x6d);
      auVar18[0xd] = -(pbVar13[0xd] == 0x65);
      auVar18[0xe] = -(pbVar13[0xe] == 0x6e);
      auVar18[0xf] = -(pbVar13[0xf] == 0x74);
      auVar20[0] = -(pbVar13[10] == 99);
      auVar20[1] = -(pbVar13[0xb] == 0x75);
      auVar20[2] = -(pbVar13[0xc] == 0x6d);
      auVar20[3] = -(pbVar13[0xd] == 0x65);
      auVar20[4] = -(pbVar13[0xe] == 0x6e);
      auVar20[5] = -(pbVar13[0xf] == 0x74);
      auVar20[6] = -(pbVar13[0x10] == 0x61);
      auVar20[7] = -(pbVar13[0x11] == 0x74);
      auVar20[8] = -(pbVar13[0x12] == 0x69);
      auVar20[9] = -(pbVar13[0x13] == 0x6f);
      auVar20[10] = -(pbVar13[0x14] == 0x6e);
      auVar20[0xb] = -(pbVar13[0x15] == 0x5f);
      auVar20[0xc] = -(pbVar13[0x16] == 0x74);
      auVar20[0xd] = -(pbVar13[0x17] == 0x61);
      auVar20[0xe] = -(pbVar13[0x18] == 0x67);
      auVar20[0xf] = -(pbVar13[0x19] == 0x5d);
      auVar20 = auVar20 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(uStack_1d0 + 0x58)) {
LAB_0e7282e8:
    uVar3 = uStack_1a4;
    if (iStack_1a8 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e728379;
      lVar6 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(uVar11 + 0x18);
      }
      auStack_198._0_8_ = func_0x048b0c90(uVar11 + 0x18,puVar7,uVar3,1);
      if (auStack_198._0_8_ == 0) {
        auStack_198 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_198);
        if (auStack_198._0_8_ == 0) goto LAB_0e728379;
      }
      if ((*(int *)(auStack_198._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_198._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_198._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e728379:
        lVar6 = 0;
      }
    }
    puStack_268 = &UNK_0488e0b0;
    pcStack_260 = (code *)0x0;
    uStack_258 = CONCAT35(uStack_258._5_3_,0x48b5725f);
    uStack_278 = 0;
    auStack_198 = (undefined1  [16])0x0;
    pcStack_180 = (code *)&UNK_0488e0b0;
    pcStack_178 = (code *)0x0;
    uStack_170 = 0x48b5725f;
    cStack_16c = '\0';
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_208 = 0x21;
    uStack_200 = 0x1a;
    *(ulong *)((long)puVar9 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar9 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar9 = _DAT_013bbacd;
    puVar9[1] = uVar2;
    *(undefined1 *)((long)puVar9 + 0x1a) = 0;
    puStack_1f8 = puVar9;
    lVar6 = func_0x048b5060(lVar6,&uStack_208);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_198) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar9 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar9);
        if (cStack_16c != '\0') {
          if (cStack_16c == '\x02') {
            (*pcStack_180)(5,auStack_198 + 8,puVar9);
          }
          else {
            uVar2 = auStack_198._8_8_;
            auStack_198._8_8_ = 0;
            *puVar9 = uVar2;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_180;
      *(code **)(lVar6 + 0x40) = pcStack_178;
      *(undefined4 *)(lVar6 + 0x48) = uStack_170;
      *(char *)(lVar6 + 0x4c) = cStack_16c;
      pcVar10 = pcStack_178;
    }
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
      pcVar10 = pcStack_178;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_198 + 8);
    }
    if (pcStack_260 != (code *)0x0) {
      (*pcStack_260)(&uStack_278);
    }
  }
  else {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e7282e8;
  }
  uStack_78 = uStack_1c8;
  puStack_70 = puStack_1c0;
  uStack_68 = uStack_1b8;
  uStack_60 = uStack_1b0;
  uStack_20c = uStack_1a4;
  uVar2 = CONCAT71(uStack_19f,cStack_1a0);
  if ((DAT_0f760b10 == '\0') && (iVar4 = func_0x04108328(&DAT_0f760b10), iVar4 != 0)) {
    func_0x0e7bcfe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760a90,0xf53dab8);
    FUN_0410844d(&DAT_0f760b10);
  }
  lStack_88 = uStack_1d0 + 0x18;
  plVar12 = (long *)(*(long *)(uStack_1d0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_1d0 + 0x20) -
                                         *(long *)(uStack_1d0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f760a90 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    uStack_80 = uVar2;
    if (lVar6 == -1) goto LAB_0e728620;
    plVar12 = (long *)(*(long *)(uStack_1d0 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(uStack_1d0 + 0x30) + 8 + lVar6 * 0x18) !=
           *(uint *)(_DAT_0f760a90 + 4));
  if (plVar12 == *(long **)(uStack_1d0 + 0x38)) {
LAB_0e728620:
    puVar7 = &DAT_0f760a90;
    pbVar8 = *(byte **)(uStack_1d0 + 0x50);
    pbVar13 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar8 != pbVar13) {
LAB_0e72868e:
      do {
        bVar1 = *pbVar8;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x24) goto LAB_0e7286ba;
        }
        else if (*(long *)(pbVar8 + 8) == 0x24) {
LAB_0e7286ba:
          if ((bVar1 & 1) == 0) {
            pbVar14 = pbVar8 + 1;
          }
          else {
            pbVar14 = *(byte **)(pbVar8 + 0x10);
          }
          iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar14,0x24);
          if (iVar4 == 0) break;
        }
        pbVar8 = pbVar8 + 0x38;
      } while (pbVar8 != pbVar13);
    }
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    pbVar8 = *(byte **)(uStack_1d0 + 0x50);
    pbVar13 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar8 != pbVar13) goto LAB_0e72868e;
  }
  if (pbVar8 != pbVar13) {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    if (iVar4 != _DAT_0f550754) goto LAB_0e7289c2;
  }
  lVar6 = lStack_88;
  if (iStack_1a8 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e72877a;
    lVar6 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0();
    }
    lVar6 = func_0x048b0c90(lVar6,puVar7,uStack_20c,1);
    if (lVar6 == 0) {
      auStack_198 = ZEXT816(0);
      func_0x048b0d20(auStack_198);
      lVar6 = auStack_198._0_8_;
      if (auStack_198._0_8_ == 0) goto LAB_0e72877a;
    }
    if ((*(int *)(lVar6 + 0x50) == -0x45dcb126) && (*(long *)(lVar6 + 0x58) != 0)) {
      lVar6 = *(long *)(lVar6 + 0x58) + 0x40;
    }
    else {
LAB_0e72877a:
      lVar6 = 0;
    }
  }
  uStack_278 = 0;
  puStack_268 = &UNK_048b4ab0;
  pcStack_260 = (code *)&UNK_048b49f0;
  uStack_258 = CONCAT35(uStack_258._5_3_,0x1d33bd9c5);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar9 = 0x4420656d6f69421c;
  *(undefined4 *)(puVar9 + 1) = 0x6d75636f;
  *(undefined4 *)((long)puVar9 + 0xb) = 0x746e656d;
  *(undefined1 *)((long)puVar9 + 0xf) = 0;
  puVar9[2] = 0;
  *(undefined2 *)(puVar9 + 3) = 2;
  puVar9[4] = 0x1007800150001;
  puVar9[5] = &UNK_01254d89;
  puVar9[6] = &UNK_01254d89;
  pcStack_180 = (code *)&UNK_048b4ab0;
  pcStack_178 = (code *)&UNK_048b49f0;
  uStack_170 = 0xd33bd9c5;
  cStack_16c = '\x01';
  uStack_278 = 0;
  auStack_198._8_8_ = puVar9;
  auStack_198._0_8_ = &UNK_048b46e0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  uStack_208 = 0x29;
  uStack_200 = 0x24;
  puVar9[2] = _DAT_014518b9;
  puVar9[3] = uVar2;
  uVar2 = _UNK_014518b1;
  *puVar9 = _DAT_014518a9;
  puVar9[1] = uVar2;
  *(undefined4 *)(puVar9 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar9 + 0x24) = 0;
  puStack_1f8 = puVar9;
  lVar6 = func_0x048b5060(lVar6,&uStack_208);
  *(undefined **)(lVar6 + 0x20) = &UNK_048b46e0;
  pcVar10 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar6 + 0x20) != auStack_198) {
    puVar9 = (undefined8 *)(lVar6 + 0x28);
    if (*(code **)(lVar6 + 0x40) == (code *)0x0) {
LAB_0e728937:
      uVar2 = auStack_198._8_8_;
      auStack_198._8_8_ = 0;
      *puVar9 = uVar2;
    }
    else {
      (**(code **)(lVar6 + 0x40))(puVar9);
      if (cStack_16c != '\0') {
        if (cStack_16c != '\x02') goto LAB_0e728937;
        (*pcStack_180)(5,auStack_198 + 8,puVar9);
      }
    }
    *(code **)(lVar6 + 0x38) = pcStack_180;
    *(code **)(lVar6 + 0x40) = pcStack_178;
    *(undefined4 *)(lVar6 + 0x48) = uStack_170;
    *(char *)(lVar6 + 0x4c) = cStack_16c;
    pcVar10 = pcStack_178;
  }
  if ((uStack_208 & 1) != 0) {
    func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
    pcVar10 = pcStack_178;
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(auStack_198 + 8);
  }
  if (pcStack_260 != (code *)0x0) {
    (*pcStack_260)(&uStack_278);
  }
LAB_0e7289c2:
  uStack_48 = uStack_68;
  uStack_40 = uStack_60;
  uStack_58 = uStack_78;
  puStack_50 = puStack_70;
  uStack_c8 = uStack_1d0;
  uStack_c0 = uStack_78;
  puStack_b8 = puStack_70;
  uStack_b0 = uStack_68;
  uStack_a8 = uStack_60;
  uStack_a0 = CONCAT44(uStack_20c,iStack_1a8);
  uStack_98 = uStack_80;
  func_0x0e7be1f0(auStack_198,&uStack_c8,&UNK_0128206d,0xf);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f3e2988;
  if (pcStack_180 != (code *)0x0) {
    lVar6 = *(long *)pcStack_180;
    pcStack_180 = pcVar10;
    (**(code **)(lVar6 + 8))();
    pcVar10 = pcStack_180;
  }
  pcStack_180 = pcVar10;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
  uStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0e7be7a0;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0c8d38f0;
  puStack_238 = &UNK_0e7be7b0;
  puStack_230 = &UNK_0e7bea20;
  uStack_228 = 0;
  auStack_220._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_198._8_8_,&uStack_278);
  uVar2 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_220._8_8_ + 8);
    lVar6 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e7be4a0(auStack_198);
  cStack_1d8 = (char)uStack_98;
  uStack_1e8 = uStack_a8;
  uStack_1e0 = uStack_a0;
  puStack_1f8 = puStack_b8;
  uStack_1f0 = uStack_b0;
  uStack_208 = uStack_c8;
  uStack_200 = uStack_c0;
  func_0x048b0bc0(&pcStack_180);
  func_0x0e7be1f0(auStack_198,&uStack_208,&UNK_013771cd,0xe);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0ef44b00;
  if (pcStack_180 != (code *)0x0) {
    lVar6 = *(long *)pcStack_180;
    pcStack_180 = pcVar10;
    (**(code **)(lVar6 + 8))();
    pcVar10 = pcStack_180;
  }
  pcStack_180 = pcVar10;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
  uStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_048b3f30;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_048b2190;
  puStack_238 = &UNK_0e7bee90;
  puStack_230 = &UNK_0e7bf060;
  uStack_228 = 0;
  auStack_220._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_198._8_8_,&uStack_278);
  uVar2 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_220._8_8_ + 8);
    lVar6 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e7be4a0(auStack_198);
  func_0x048b0bc0(&pcStack_180);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
