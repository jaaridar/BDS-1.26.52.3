/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4db870 (ELF vaddr 0xe3db870)
 * Label: caller-of-callee
 * Body:  [[0e4db870, 0e4dba67] [0e4dba70, 0e4dbab1] [0e4dbac0, 0e4dc1f7] [0e4dc200, 0e4dc241] [0e4dc250, 0e4dc8c5] [0e4dc8d0, 0e4dc912] [0e4dc920, 0e4dcc0e] [0e4dcc10, 0e4dcc40] [0e4dcc50, 0e4dd69c]]
 * Ghidra: FUN_0e4db870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4db870(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined1 auStack_240 [16];
  undefined4 uStack_230;
  undefined1 uStack_22c;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 uStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e4;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined1 auStack_1a8 [16];
  undefined4 uStack_198;
  code *pcStack_190;
  code *pcStack_188;
  undefined4 uStack_180;
  char cStack_17c;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((DAT_0f759b08 == '\0') && (iVar4 = func_0x04108328(&DAT_0f759b08), iVar4 != 0)) {
    func_0x0e5ec000();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f759a88,0xf53dab8);
    func_0x0410844d(&DAT_0f759b08);
  }
  lStack_1f0 = param_1 + 0x18;
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f759a88 + 4)) * 8);
  do {
    lVar15 = *plVar9;
    if (lVar15 == -1) goto LAB_0e4db8f0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f759a88 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e4db8f0:
    puVar6 = &DAT_0f759a88;
    if (iRam000000000f759ae8 != -0x2b3da790) goto LAB_0e4db95d;
LAB_0e4db91b:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e4db95d;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e5ec6b0(&uStack_1e0,param_1,lVar12,uVar10);
    uVar10 = uStack_1e0;
  }
  else {
    puVar6 = (undefined *)plVar9[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e4db91b;
LAB_0e4db95d:
    func_0x0e5ec6b0(&uStack_1e0,param_1,&UNK_0121cfec,0x18);
    uVar10 = uStack_1e0;
  }
  uStack_1e0 = uVar10;
  if (cStack_1b0 == '\0') {
    if ((DAT_0f759b08 == '\0') && (iVar4 = func_0x04108328(&DAT_0f759b08), iVar4 != 0)) {
      func_0x0e5ec000();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f759a88,0xf53dab8);
      func_0x0410844d(&DAT_0f759b08);
    }
    plVar9 = (long *)(*(long *)(uVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f759a88 + 4)) * 8);
    do {
      lVar15 = *plVar9;
      if (lVar15 == -1) goto LAB_0e4db9f0;
      plVar9 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f759a88 + 4)
            );
    if (plVar9 == *(long **)(uVar10 + 0x38)) {
LAB_0e4db9f0:
      puVar6 = &DAT_0f759a88;
    }
    else {
      puVar6 = (undefined *)plVar9[2];
    }
    for (pbVar7 = *(byte **)(uStack_1e0 + 0x50); pbVar7 != *(byte **)(uStack_1e0 + 0x58);
        pbVar7 = pbVar7 + 0x38) {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e4dbaca;
      }
      else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e4dbaca:
        if ((bVar1 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        else {
          pbVar11 = *(byte **)(pbVar7 + 0x10);
        }
        auVar17[0] = -(*pbVar11 == 0x5b);
        auVar17[1] = -(pbVar11[1] == 99);
        auVar17[2] = -(pbVar11[2] == 0x65);
        auVar17[3] = -(pbVar11[3] == 0x72);
        auVar17[4] = -(pbVar11[4] == 0x65);
        auVar17[5] = -(pbVar11[5] == 0x61);
        auVar17[6] = -(pbVar11[6] == 0x6c);
        auVar17[7] = -(pbVar11[7] == 0x3a);
        auVar17[8] = -(pbVar11[8] == 100);
        auVar17[9] = -(pbVar11[9] == 0x6f);
        auVar17[10] = -(pbVar11[10] == 99);
        auVar17[0xb] = -(pbVar11[0xb] == 0x75);
        auVar17[0xc] = -(pbVar11[0xc] == 0x6d);
        auVar17[0xd] = -(pbVar11[0xd] == 0x65);
        auVar17[0xe] = -(pbVar11[0xe] == 0x6e);
        auVar17[0xf] = -(pbVar11[0xf] == 0x74);
        auVar20[0] = -(pbVar11[10] == 99);
        auVar20[1] = -(pbVar11[0xb] == 0x75);
        auVar20[2] = -(pbVar11[0xc] == 0x6d);
        auVar20[3] = -(pbVar11[0xd] == 0x65);
        auVar20[4] = -(pbVar11[0xe] == 0x6e);
        auVar20[5] = -(pbVar11[0xf] == 0x74);
        auVar20[6] = -(pbVar11[0x10] == 0x61);
        auVar20[7] = -(pbVar11[0x11] == 0x74);
        auVar20[8] = -(pbVar11[0x12] == 0x69);
        auVar20[9] = -(pbVar11[0x13] == 0x6f);
        auVar20[10] = -(pbVar11[0x14] == 0x6e);
        auVar20[0xb] = -(pbVar11[0x15] == 0x5f);
        auVar20[0xc] = -(pbVar11[0x16] == 0x74);
        auVar20[0xd] = -(pbVar11[0x17] == 0x61);
        auVar20[0xe] = -(pbVar11[0x18] == 0x67);
        auVar20[0xf] = -(pbVar11[0x19] == 0x5d);
        auVar20 = auVar20 & auVar17;
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
    if (pbVar7 == *(byte **)(uStack_1e0 + 0x58)) {
LAB_0e4dbaf8:
      uVar3 = uStack_1b4;
      if (iStack_1b8 == 0) {
        if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e4dbb89;
        lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
      }
      else {
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)FUN_048aead0(uVar10 + 0x18);
        }
        auStack_1a8._0_8_ = func_0x048b0c90(uVar10 + 0x18,puVar6,uVar3,1);
        if (auStack_1a8._0_8_ == 0) {
          auStack_1a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1a8);
          if (auStack_1a8._0_8_ == 0) goto LAB_0e4dbb89;
        }
        if ((*(int *)(auStack_1a8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1a8._0_8_ + 0x58) != 0)) {
          lVar15 = *(long *)(auStack_1a8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4dbb89:
          lVar15 = 0;
        }
      }
      puStack_288 = &UNK_0488e0b0;
      pcStack_280 = (code *)0x0;
      uStack_278 = CONCAT35(uStack_278._5_3_,0x48b5725f);
      uStack_298 = 0;
      auStack_1a8 = (undefined1  [16])0x0;
      pcStack_190 = (code *)&UNK_0488e0b0;
      pcStack_188 = (code *)0x0;
      uStack_180 = 0x48b5725f;
      cStack_17c = '\0';
      puStack_218 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_218 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_228 = 0x21;
      uStack_220 = 0x1a;
      *(ulong *)((long)puStack_218 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_218 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_218 = _DAT_013bbacd;
      puStack_218[1] = uVar2;
      *(undefined1 *)((long)puStack_218 + 0x1a) = 0;
      lVar15 = func_0x048b5060(lVar15,&uStack_228);
      *(undefined8 *)(lVar15 + 0x20) = 0;
      if ((undefined1 *)(lVar15 + 0x20) == auStack_1a8) {
        pcVar8 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
          puVar14 = (undefined8 *)(lVar15 + 0x28);
          (**(code **)(lVar15 + 0x40))(puVar14);
          if (cStack_17c != '\0') {
            if (cStack_17c == '\x02') {
              (*pcStack_190)(5,auStack_1a8 + 8,puVar14);
            }
            else {
              uVar2 = auStack_1a8._8_8_;
              auStack_1a8._8_8_ = 0;
              *puVar14 = uVar2;
            }
          }
        }
        *(code **)(lVar15 + 0x38) = pcStack_190;
        *(code **)(lVar15 + 0x40) = pcStack_188;
        *(undefined4 *)(lVar15 + 0x48) = uStack_180;
        *(char *)(lVar15 + 0x4c) = cStack_17c;
        pcVar8 = pcStack_188;
      }
      if ((uStack_228 & 1) != 0) {
        func_0x0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
        pcVar8 = pcStack_188;
      }
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_1a8 + 8);
      }
      if (pcStack_280 != (code *)0x0) {
        (*pcStack_280)(&uStack_298);
      }
    }
    else {
      iVar4 = *(int *)(pbVar7 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0e4dbaf8;
    }
    uStack_a8 = CONCAT71(uStack_1af,cStack_1b0);
    uStack_b0 = CONCAT44(uStack_1b4,iStack_1b8);
    uStack_b8 = uStack_1c0;
    puStack_c8 = puStack_1d0;
    uStack_c0 = uStack_1c8;
    uStack_d8 = uStack_1e0;
    uStack_d0 = uStack_1d8;
    func_0x0e5ed210(auStack_1a8,&uStack_d8,&UNK_013762e9,10);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0ef44b00;
    if (pcStack_190 != (code *)0x0) {
      lVar15 = *(long *)pcStack_190;
      pcStack_190 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_190;
    }
    pcStack_190 = pcVar8;
    uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
    uStack_290 = 0;
    puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
    pcStack_280 = (code *)0x1;
    uStack_278 = 0;
    puStack_270 = &UNK_048b3f30;
    puStack_268 = &SUB_048b06d0;
    puStack_260 = &SUB_048b2190;
    puStack_258 = &UNK_0e5ed7c0;
    puStack_250 = &UNK_0e5ed980;
    uStack_248 = 0;
    auStack_240 = ZEXT816(0);
    func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
    uVar2 = auStack_240._8_8_;
    if ((long *)auStack_240._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_240._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e5ed4c0(auStack_1a8);
    uStack_1f8 = (undefined1)uStack_a8;
    auStack_208._8_8_ = uStack_b0;
    auStack_208._0_8_ = uStack_b8;
    puStack_218 = puStack_c8;
    uStack_210 = uStack_c0;
    uStack_228 = uStack_d8;
    uStack_220 = uStack_d0;
    func_0x048b0bc0(&pcStack_190);
    func_0x0e5ed210(auStack_1a8,&uStack_228,&UNK_01283742,0xe);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0ef44b00;
    if (pcStack_190 != (code *)0x0) {
      lVar15 = *(long *)pcStack_190;
      pcStack_190 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_190;
    }
    pcStack_190 = pcVar8;
    uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
    uStack_290 = 0;
    puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
    pcStack_280 = (code *)0x1;
    uStack_278 = 0;
    puStack_270 = &UNK_048b3f30;
    puStack_268 = &SUB_048b06d0;
    puStack_260 = &SUB_048b2190;
    puStack_258 = &UNK_0e5edb50;
    puStack_250 = &UNK_0e5edd20;
    uStack_248 = 0;
    auStack_240 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
    uVar2 = auStack_240._8_8_;
    if ((long *)auStack_240._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_240._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e5ed4c0(auStack_1a8);
    func_0x048b0bc0(&pcStack_190);
  }
  func_0x0e4db7a0(param_1);
  if ((DAT_0f759bc0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f759bc0), iVar4 != 0)) {
    func_0x0e5edfc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f759b40,0xf53dab8);
    func_0x0410844d(&DAT_0f759bc0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f759b40 + 4)) * 8);
  do {
    lVar15 = *plVar9;
    if (lVar15 == -1) goto LAB_0e4dc080;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f759b40 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e4dc080:
    puVar6 = &DAT_0f759b40;
    if (iRam000000000f759ba0 != -0x2b3da790) goto LAB_0e4dc0ed;
LAB_0e4dc0ab:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e4dc0ed;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e5ee6e0(&uStack_1e0,param_1,lVar12,uVar10);
    uVar10 = uStack_1e0;
  }
  else {
    puVar6 = (undefined *)plVar9[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e4dc0ab;
LAB_0e4dc0ed:
    func_0x0e5ee6e0(&uStack_1e0,param_1,&UNK_01237990,0x17);
    uVar10 = uStack_1e0;
  }
  uStack_1e0 = uVar10;
  if (cStack_1b0 == '\0') {
    if ((DAT_0f759bc0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f759bc0), iVar4 != 0)) {
      func_0x0e5edfc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f759b40,0xf53dab8);
      func_0x0410844d(&DAT_0f759bc0);
    }
    plVar9 = (long *)(*(long *)(uVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f759b40 + 4)) * 8);
    do {
      lVar15 = *plVar9;
      if (lVar15 == -1) goto LAB_0e4dc180;
      plVar9 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f759b40 + 4)
            );
    if (plVar9 == *(long **)(uVar10 + 0x38)) {
LAB_0e4dc180:
      puVar6 = &DAT_0f759b40;
    }
    else {
      puVar6 = (undefined *)plVar9[2];
    }
    for (pbVar7 = *(byte **)(uStack_1e0 + 0x50); pbVar7 != *(byte **)(uStack_1e0 + 0x58);
        pbVar7 = pbVar7 + 0x38) {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e4dc25a;
      }
      else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e4dc25a:
        if ((bVar1 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        else {
          pbVar11 = *(byte **)(pbVar7 + 0x10);
        }
        auVar18[0] = -(*pbVar11 == 0x5b);
        auVar18[1] = -(pbVar11[1] == 99);
        auVar18[2] = -(pbVar11[2] == 0x65);
        auVar18[3] = -(pbVar11[3] == 0x72);
        auVar18[4] = -(pbVar11[4] == 0x65);
        auVar18[5] = -(pbVar11[5] == 0x61);
        auVar18[6] = -(pbVar11[6] == 0x6c);
        auVar18[7] = -(pbVar11[7] == 0x3a);
        auVar18[8] = -(pbVar11[8] == 100);
        auVar18[9] = -(pbVar11[9] == 0x6f);
        auVar18[10] = -(pbVar11[10] == 99);
        auVar18[0xb] = -(pbVar11[0xb] == 0x75);
        auVar18[0xc] = -(pbVar11[0xc] == 0x6d);
        auVar18[0xd] = -(pbVar11[0xd] == 0x65);
        auVar18[0xe] = -(pbVar11[0xe] == 0x6e);
        auVar18[0xf] = -(pbVar11[0xf] == 0x74);
        auVar21[0] = -(pbVar11[10] == 99);
        auVar21[1] = -(pbVar11[0xb] == 0x75);
        auVar21[2] = -(pbVar11[0xc] == 0x6d);
        auVar21[3] = -(pbVar11[0xd] == 0x65);
        auVar21[4] = -(pbVar11[0xe] == 0x6e);
        auVar21[5] = -(pbVar11[0xf] == 0x74);
        auVar21[6] = -(pbVar11[0x10] == 0x61);
        auVar21[7] = -(pbVar11[0x11] == 0x74);
        auVar21[8] = -(pbVar11[0x12] == 0x69);
        auVar21[9] = -(pbVar11[0x13] == 0x6f);
        auVar21[10] = -(pbVar11[0x14] == 0x6e);
        auVar21[0xb] = -(pbVar11[0x15] == 0x5f);
        auVar21[0xc] = -(pbVar11[0x16] == 0x74);
        auVar21[0xd] = -(pbVar11[0x17] == 0x61);
        auVar21[0xe] = -(pbVar11[0x18] == 0x67);
        auVar21[0xf] = -(pbVar11[0x19] == 0x5d);
        auVar21 = auVar21 & auVar18;
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
    if (pbVar7 == *(byte **)(uStack_1e0 + 0x58)) {
LAB_0e4dc288:
      uVar3 = uStack_1b4;
      if (iStack_1b8 == 0) {
        if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e4dc319;
        lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
      }
      else {
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)FUN_048aead0(uVar10 + 0x18);
        }
        auStack_1a8._0_8_ = func_0x048b0c90(uVar10 + 0x18,puVar6,uVar3,1);
        if (auStack_1a8._0_8_ == 0) {
          auStack_1a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1a8);
          if (auStack_1a8._0_8_ == 0) goto LAB_0e4dc319;
        }
        if ((*(int *)(auStack_1a8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1a8._0_8_ + 0x58) != 0)) {
          lVar15 = *(long *)(auStack_1a8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4dc319:
          lVar15 = 0;
        }
      }
      puStack_288 = &UNK_0488e0b0;
      pcStack_280 = (code *)0x0;
      uStack_278 = CONCAT35(uStack_278._5_3_,0x48b5725f);
      uStack_298 = 0;
      auStack_1a8 = (undefined1  [16])0x0;
      pcStack_190 = (code *)&UNK_0488e0b0;
      pcStack_188 = (code *)0x0;
      uStack_180 = 0x48b5725f;
      cStack_17c = '\0';
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_228 = 0x21;
      uStack_220 = 0x1a;
      *(ulong *)((long)puVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar14 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar14 = _DAT_013bbacd;
      puVar14[1] = uVar2;
      *(undefined1 *)((long)puVar14 + 0x1a) = 0;
      puStack_218 = puVar14;
      lVar15 = func_0x048b5060(lVar15,&uStack_228);
      *(undefined8 *)(lVar15 + 0x20) = 0;
      if ((undefined1 *)(lVar15 + 0x20) == auStack_1a8) {
        pcVar8 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
          puVar14 = (undefined8 *)(lVar15 + 0x28);
          (**(code **)(lVar15 + 0x40))(puVar14);
          if (cStack_17c != '\0') {
            if (cStack_17c == '\x02') {
              (*pcStack_190)(5,auStack_1a8 + 8,puVar14);
            }
            else {
              uVar2 = auStack_1a8._8_8_;
              auStack_1a8._8_8_ = 0;
              *puVar14 = uVar2;
            }
          }
        }
        *(code **)(lVar15 + 0x38) = pcStack_190;
        *(code **)(lVar15 + 0x40) = pcStack_188;
        *(undefined4 *)(lVar15 + 0x48) = uStack_180;
        *(char *)(lVar15 + 0x4c) = cStack_17c;
        pcVar8 = pcStack_188;
      }
      if ((uStack_228 & 1) != 0) {
        func_0x0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
        pcVar8 = pcStack_188;
      }
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_1a8 + 8);
      }
      if (pcStack_280 != (code *)0x0) {
        (*pcStack_280)(&uStack_298);
      }
    }
    else {
      iVar4 = *(int *)(pbVar7 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0e4dc288;
    }
    uStack_a8 = CONCAT71(uStack_1af,cStack_1b0);
    uStack_b0 = CONCAT44(uStack_1b4,iStack_1b8);
    uStack_b8 = uStack_1c0;
    puStack_c8 = puStack_1d0;
    uStack_c0 = uStack_1c8;
    uStack_d8 = uStack_1e0;
    uStack_d0 = uStack_1d8;
    func_0x0e5ef280(auStack_1a8,&uStack_d8,&UNK_011b3031,0xe,1);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0ef44b00;
    if (pcStack_190 != (code *)0x0) {
      lVar15 = *(long *)pcStack_190;
      pcStack_190 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_190;
    }
    pcStack_190 = pcVar8;
    uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
    uStack_290 = 0;
    puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
    pcStack_280 = (code *)0x1;
    uStack_278 = 0;
    puStack_270 = &UNK_048b3f30;
    puStack_268 = &SUB_048b06d0;
    puStack_260 = &SUB_048b2190;
    puStack_258 = &UNK_0e5ef840;
    puStack_250 = &UNK_0e5efa20;
    uStack_248 = 0;
    auStack_240 = ZEXT816(0);
    func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
    uVar2 = auStack_240._8_8_;
    if ((long *)auStack_240._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_240._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e5ef540(auStack_1a8);
    uStack_1f8 = (undefined1)uStack_a8;
    auStack_208._8_8_ = uStack_b0;
    auStack_208._0_8_ = uStack_b8;
    puStack_218 = puStack_c8;
    uStack_210 = uStack_c0;
    uStack_228 = uStack_d8;
    uStack_220 = uStack_d0;
    func_0x048b0bc0(&pcStack_190);
    func_0x0e5ef280(auStack_1a8,&uStack_228,&UNK_0127ef61,0x16,0);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f4c2458;
    if (pcStack_190 != (code *)0x0) {
      lVar15 = *(long *)pcStack_190;
      pcStack_190 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_190;
    }
    pcStack_190 = pcVar8;
    uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
    uStack_290 = 0;
    puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
    pcStack_280 = (code *)0x1;
    uStack_278 = 0;
    puStack_270 = &UNK_0e5f0a90;
    puStack_268 = &SUB_048b06d0;
    puStack_260 = &UNK_0e5f0770;
    puStack_258 = &UNK_0e5f0b50;
    puStack_250 = &UNK_0e5f0db0;
    uStack_248 = 0;
    auStack_240 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
    uVar2 = auStack_240._8_8_;
    if ((long *)auStack_240._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_240._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e5ef540(auStack_1a8);
    func_0x048b0bc0(&pcStack_190);
  }
  func_0x0e9b4e10(param_1);
  lVar15 = func_0x0d52ab90(lStack_1f0);
  if ((*(int *)(lVar15 + 0x60) == -0x2b3da790) && (lVar15 = *(long *)(lVar15 + 0x68), lVar15 != 0))
  {
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e5f1220(&uStack_1e0,param_1,lVar12,uVar10);
  }
  else {
    func_0x0e5f1220(&uStack_1e0,param_1,&UNK_014a951b,0x17);
  }
  if (cStack_1b0 != '\0') {
    return;
  }
  lVar12 = uStack_1e0 + 0x18;
  lVar15 = func_0x0d52ab90(lVar12);
  for (pbVar7 = *(byte **)(uStack_1e0 + 0x50); pbVar7 != *(byte **)(uStack_1e0 + 0x58);
      pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e4dc92a;
    }
    else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e4dc92a:
      if ((bVar1 & 1) == 0) {
        pbVar11 = pbVar7 + 1;
      }
      else {
        pbVar11 = *(byte **)(pbVar7 + 0x10);
      }
      auVar19[0] = -(*pbVar11 == 0x5b);
      auVar19[1] = -(pbVar11[1] == 99);
      auVar19[2] = -(pbVar11[2] == 0x65);
      auVar19[3] = -(pbVar11[3] == 0x72);
      auVar19[4] = -(pbVar11[4] == 0x65);
      auVar19[5] = -(pbVar11[5] == 0x61);
      auVar19[6] = -(pbVar11[6] == 0x6c);
      auVar19[7] = -(pbVar11[7] == 0x3a);
      auVar19[8] = -(pbVar11[8] == 100);
      auVar19[9] = -(pbVar11[9] == 0x6f);
      auVar19[10] = -(pbVar11[10] == 99);
      auVar19[0xb] = -(pbVar11[0xb] == 0x75);
      auVar19[0xc] = -(pbVar11[0xc] == 0x6d);
      auVar19[0xd] = -(pbVar11[0xd] == 0x65);
      auVar19[0xe] = -(pbVar11[0xe] == 0x6e);
      auVar19[0xf] = -(pbVar11[0xf] == 0x74);
      auVar22[0] = -(pbVar11[10] == 99);
      auVar22[1] = -(pbVar11[0xb] == 0x75);
      auVar22[2] = -(pbVar11[0xc] == 0x6d);
      auVar22[3] = -(pbVar11[0xd] == 0x65);
      auVar22[4] = -(pbVar11[0xe] == 0x6e);
      auVar22[5] = -(pbVar11[0xf] == 0x74);
      auVar22[6] = -(pbVar11[0x10] == 0x61);
      auVar22[7] = -(pbVar11[0x11] == 0x74);
      auVar22[8] = -(pbVar11[0x12] == 0x69);
      auVar22[9] = -(pbVar11[0x13] == 0x6f);
      auVar22[10] = -(pbVar11[0x14] == 0x6e);
      auVar22[0xb] = -(pbVar11[0x15] == 0x5f);
      auVar22[0xc] = -(pbVar11[0x16] == 0x74);
      auVar22[0xd] = -(pbVar11[0x17] == 0x61);
      auVar22[0xe] = -(pbVar11[0x18] == 0x67);
      auVar22[0xf] = -(pbVar11[0x19] == 0x5d);
      auVar22 = auVar22 & auVar19;
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
  if (pbVar7 == *(byte **)(uStack_1e0 + 0x58)) {
LAB_0e4dc959:
    if (iStack_1b8 == 0) {
      if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
      goto LAB_0e4dc9d6;
      lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
    }
    else {
      auStack_1a8._0_8_ = func_0x048b0c90(lVar12,lVar15,uStack_1b4,1);
      if (auStack_1a8._0_8_ == 0) {
        auStack_1a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1a8);
        if (auStack_1a8._0_8_ == 0) goto LAB_0e4dc9d6;
      }
      if ((*(int *)(auStack_1a8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1a8._0_8_ + 0x58) != 0)) {
        lVar15 = *(long *)(auStack_1a8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e4dc9d6:
        lVar15 = 0;
      }
    }
    puStack_288 = &UNK_0488e0b0;
    pcStack_280 = (code *)0x0;
    uStack_278 = CONCAT35(uStack_278._5_3_,0x48b5725f);
    uStack_298 = 0;
    auStack_1a8 = (undefined1  [16])0x0;
    pcStack_190 = (code *)&UNK_0488e0b0;
    pcStack_188 = (code *)0x0;
    uStack_180 = 0x48b5725f;
    cStack_17c = '\0';
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_228 = 0x21;
    uStack_220 = 0x1a;
    *(ulong *)((long)puVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar14 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar14 = _DAT_013bbacd;
    puVar14[1] = uVar2;
    *(undefined1 *)((long)puVar14 + 0x1a) = 0;
    puStack_218 = puVar14;
    lVar15 = func_0x048b5060(lVar15,&uStack_228);
    *(undefined8 *)(lVar15 + 0x20) = 0;
    if ((undefined1 *)(lVar15 + 0x20) == auStack_1a8) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar15 + 0x28);
        (**(code **)(lVar15 + 0x40))(puVar14);
        if (cStack_17c != '\0') {
          if (cStack_17c == '\x02') {
            (*pcStack_190)(5,auStack_1a8 + 8,puVar14);
          }
          else {
            uVar2 = auStack_1a8._8_8_;
            auStack_1a8._8_8_ = 0;
            *puVar14 = uVar2;
          }
        }
      }
      *(code **)(lVar15 + 0x38) = pcStack_190;
      *(code **)(lVar15 + 0x40) = pcStack_188;
      *(undefined4 *)(lVar15 + 0x48) = uStack_180;
      *(char *)(lVar15 + 0x4c) = cStack_17c;
      pcVar8 = pcStack_188;
    }
    if ((uStack_228 & 1) != 0) {
      func_0x0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
      pcVar8 = pcStack_188;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_1a8 + 8);
    }
    if (pcStack_280 != (code *)0x0) {
      (*pcStack_280)(&uStack_298);
    }
  }
  else {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e4dc959;
  }
  uStack_58 = uStack_1d8;
  puStack_50 = puStack_1d0;
  uStack_48 = uStack_1c8;
  uStack_40 = uStack_1c0;
  lStack_1f0 = CONCAT44(lStack_1f0._4_4_,iStack_1b8);
  uStack_1e4 = uStack_1b4;
  uStack_98 = CONCAT71(uStack_1af,cStack_1b0);
  uStack_22c = 0x65;
  uStack_230 = 0x6c755220;
  lVar15 = func_0x0d52ab90(uStack_1e0 + 0x18);
  pbVar11 = *(byte **)(uStack_1e0 + 0x58);
  for (pbVar7 = *(byte **)(uStack_1e0 + 0x50); pbVar7 != pbVar11; pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0e4dcc5a;
    }
    else if (*(long *)(pbVar7 + 8) == 0x24) {
LAB_0e4dcc5a:
      if ((bVar1 & 1) == 0) {
        pbVar13 = pbVar7 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar7 + 0x10);
      }
      iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar13,0x24);
      if (iVar4 == 0) break;
    }
  }
  if (pbVar7 != pbVar11) {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 != _DAT_0f550754) goto LAB_0e4dcf51;
  }
  if ((int)lStack_1f0 == 0) {
    if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
    goto LAB_0e4dcd03;
    lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
  }
  else {
    lVar15 = func_0x048b0c90(uStack_1e0 + 0x18,lVar15,uStack_1e4,1);
    if (lVar15 == 0) {
      auStack_1a8 = ZEXT816(0);
      func_0x048b0d20(auStack_1a8);
      lVar15 = auStack_1a8._0_8_;
      if (auStack_1a8._0_8_ == 0) goto LAB_0e4dcd03;
    }
    if ((*(int *)(lVar15 + 0x50) == -0x45dcb126) && (*(long *)(lVar15 + 0x58) != 0)) {
      lVar15 = *(long *)(lVar15 + 0x58) + 0x40;
    }
    else {
LAB_0e4dcd03:
      lVar15 = 0;
    }
  }
  uStack_298 = 0;
  puStack_288 = &UNK_048b4ab0;
  pcStack_280 = (code *)&UNK_048b49f0;
  uStack_278 = CONCAT35(uStack_278._5_3_,0x1d33bd9c5);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar14 = 0x6572757461654618;
  *(undefined4 *)(puVar14 + 1) = uStack_230;
  *(undefined1 *)((long)puVar14 + 0xc) = uStack_22c;
  *(undefined1 *)((long)puVar14 + 0xd) = 0;
  *(undefined2 *)((long)puVar14 + 0xe) = 0;
  puVar14[2] = 0;
  uStack_22c = 0;
  uStack_230 = 0;
  *(undefined2 *)(puVar14 + 3) = 0x1400;
  puVar14[4] = 0x1001400150001;
  puVar14[5] = &UNK_01254d89;
  puVar14[6] = &UNK_01254d89;
  pcStack_190 = (code *)&UNK_048b4ab0;
  pcStack_188 = (code *)&UNK_048b49f0;
  uStack_180 = 0xd33bd9c5;
  cStack_17c = '\x01';
  uStack_298 = 0;
  auStack_1a8._8_8_ = puVar14;
  auStack_1a8._0_8_ = &UNK_048b46e0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  uStack_228 = 0x29;
  uStack_220 = 0x24;
  puVar14[2] = _DAT_014518b9;
  puVar14[3] = uVar2;
  uVar2 = _UNK_014518b1;
  *puVar14 = _DAT_014518a9;
  puVar14[1] = uVar2;
  *(undefined4 *)(puVar14 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar14 + 0x24) = 0;
  puStack_218 = puVar14;
  lVar15 = func_0x048b5060(lVar15,&uStack_228);
  *(undefined **)(lVar15 + 0x20) = &UNK_048b46e0;
  pcVar8 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar15 + 0x20) != auStack_1a8) {
    puVar14 = (undefined8 *)(lVar15 + 0x28);
    if (*(code **)(lVar15 + 0x40) == (code *)0x0) {
LAB_0e4dcece:
      uVar2 = auStack_1a8._8_8_;
      auStack_1a8._8_8_ = 0;
      *puVar14 = uVar2;
    }
    else {
      (**(code **)(lVar15 + 0x40))(puVar14);
      if (cStack_17c != '\0') {
        if (cStack_17c != '\x02') goto LAB_0e4dcece;
        (*pcStack_190)(5,auStack_1a8 + 8,puVar14);
      }
    }
    *(code **)(lVar15 + 0x38) = pcStack_190;
    *(code **)(lVar15 + 0x40) = pcStack_188;
    *(undefined4 *)(lVar15 + 0x48) = uStack_180;
    *(char *)(lVar15 + 0x4c) = cStack_17c;
    pcVar8 = pcStack_188;
  }
  if ((uStack_228 & 1) != 0) {
    func_0x0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
    pcVar8 = pcStack_188;
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(auStack_1a8 + 8);
  }
  if (pcStack_280 != (code *)0x0) {
    (*pcStack_280)(&uStack_298);
  }
LAB_0e4dcf51:
  uStack_90 = uStack_1e0;
  uStack_88 = uStack_58;
  puStack_80 = puStack_50;
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  uStack_68 = (int)lStack_1f0;
  uStack_64 = uStack_1e4;
  uStack_60 = uStack_98;
  func_0x0e5f1ae0(auStack_1a8,&uStack_90,&UNK_011ea907,0xb,1);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4c2578;
  if (pcStack_190 != (code *)0x0) {
    lVar15 = *(long *)pcStack_190;
    pcStack_190 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_190;
  }
  pcStack_190 = pcVar8;
  uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
  uStack_290 = 0;
  puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
  pcStack_280 = (code *)0x1;
  uStack_278 = 0;
  puStack_270 = &UNK_0e5f2210;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &UNK_0e5ebf40;
  puStack_258 = &UNK_0e5f22d0;
  puStack_250 = &UNK_0e5f2570;
  uStack_248 = 0;
  auStack_240 = ZEXT816(0);
  func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
  uVar2 = auStack_240._8_8_;
  if ((long *)auStack_240._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_240._8_8_ + 8);
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e5f1ce0(auStack_1a8);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,(undefined1)uStack_60);
  uStack_b0 = CONCAT44(uStack_64,uStack_68);
  uStack_b8 = uStack_70;
  puStack_c8 = puStack_80;
  uStack_c0 = uStack_78;
  uStack_d8 = uStack_90;
  uStack_d0 = uStack_88;
  func_0x048b0bc0(&pcStack_190);
  func_0x0e5f1ae0(auStack_1a8,&uStack_d8,&UNK_014526bb,10,1);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4c25f0;
  if (pcStack_190 != (code *)0x0) {
    lVar15 = *(long *)pcStack_190;
    pcStack_190 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_190;
  }
  pcStack_190 = pcVar8;
  uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
  uStack_290 = 0;
  puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
  pcStack_280 = (code *)0x1;
  uStack_278 = 0;
  puStack_270 = &UNK_0e5f2c60;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &UNK_0e5edf00;
  puStack_258 = &UNK_0e5f2d20;
  puStack_250 = &UNK_0e5f3020;
  uStack_248 = 0;
  auStack_240 = ZEXT816(0);
  func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
  uVar2 = auStack_240._8_8_;
  if ((long *)auStack_240._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_240._8_8_ + 8);
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e5f1ce0(auStack_1a8);
  uStack_1f8 = (undefined1)uStack_a8;
  auStack_208._8_8_ = uStack_b0;
  auStack_208._0_8_ = uStack_b8;
  puStack_218 = puStack_c8;
  uStack_210 = uStack_c0;
  uStack_228 = uStack_d8;
  uStack_220 = uStack_d0;
  func_0x048b0bc0(&pcStack_190);
  func_0x0e5f1ae0(auStack_1a8,&uStack_228,&UNK_012aacc5,0xc,0);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4c2668;
  if (pcStack_190 != (code *)0x0) {
    lVar15 = *(long *)pcStack_190;
    pcStack_190 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_190;
  }
  pcStack_190 = pcVar8;
  uStack_298 = CONCAT44(uStack_298._4_4_,uStack_198);
  uStack_290 = 0;
  puStack_288 = (undefined *)((ulong)puStack_288 & 0xffffffff00000000);
  pcStack_280 = (code *)0x1;
  uStack_278 = 0;
  puStack_270 = &UNK_0e5f4600;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &UNK_0e5f42e0;
  puStack_258 = &UNK_0e5f46c0;
  puStack_250 = &UNK_0e5f48f0;
  uStack_248 = 0;
  auStack_240 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1a8._8_8_,&uStack_298);
  uVar2 = auStack_240._8_8_;
  if ((long *)auStack_240._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_240._8_8_ + 8);
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_240._8_8_ + 0x10))(auStack_240._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e5f1ce0(auStack_1a8);
  func_0x048b0bc0(&pcStack_190);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
