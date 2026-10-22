/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3c1920 (ELF vaddr 0xe2c1920)
 * Label: string:minecraft:biome_music
 * Body:  [[0e3c1920, 0e3c1b17] [0e3c1b20, 0e3c1b61] [0e3c1b70, 0e3c2749] [0e3c2750, 0e3c2791] [0e3c27a0, 0e3c2fb1] [0e3c2fc0, 0e3c3772] [0e3c3780, 0e3c39d7] [0e3c39e0, 0e3c3a21] [0e3c3a30, 0e3c442c]]
 * Ghidra: FUN_0e3c1920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3c1920(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  byte *pbVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  int *piVar17;
  undefined8 *puVar18;
  long lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined *puStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined2 uStack_1a7;
  undefined5 uStack_1a5;
  undefined1 auStack_1a0 [16];
  long lStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [16];
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  uint uStack_134;
  uint uStack_130;
  undefined1 uStack_12c;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  char cStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0e3c08a0();
  if ((DAT_0f751c30 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751c30), iVar8 != 0)) {
    func_0x0e4244a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751bb0,0xf53dab8);
    func_0x0410844d(&DAT_0f751c30);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f751bb0 + 4)) * 8);
  do {
    lVar19 = *plVar13;
    if (lVar19 == -1) goto LAB_0e3c19a0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f751bb0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3c19a0:
    puVar10 = &DAT_0f751bb0;
    if (iRam000000000f751c10 != -0x2b3da790) goto LAB_0e3c1a0d;
LAB_0e3c19cb:
    lVar19 = *(long *)(puVar10 + 0x68);
    if (lVar19 == 0) goto LAB_0e3c1a0d;
    bVar20 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar14 = lVar19 + 9;
    if (bVar20) {
      lVar14 = *(long *)(lVar19 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0e424a50(&uStack_a8,param_1,lVar14,uVar15);
    uVar15 = uStack_a8;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3c19cb;
LAB_0e3c1a0d:
    func_0x0e424a50(&uStack_a8,param_1,&UNK_014a91d7,0x17);
    uVar15 = uStack_a8;
  }
  if (cStack_78 == '\0') {
    uStack_a8 = uVar15;
    if ((DAT_0f751c30 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751c30), iVar8 != 0)) {
      func_0x0e4244a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f751c30);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f751bb0 + 4)) * 8);
    do {
      lVar19 = *plVar13;
      if (lVar19 == -1) goto LAB_0e3c1aa0;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f751bb0 + 4)
            );
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e3c1aa0:
      puVar10 = &DAT_0f751bb0;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(uStack_a8 + 0x50); pbVar11 != *(byte **)(uStack_a8 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e3c1b7a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e3c1b7a:
        if ((bVar3 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar21[0] = -(*pbVar16 == 0x5b);
        auVar21[1] = -(pbVar16[1] == 99);
        auVar21[2] = -(pbVar16[2] == 0x65);
        auVar21[3] = -(pbVar16[3] == 0x72);
        auVar21[4] = -(pbVar16[4] == 0x65);
        auVar21[5] = -(pbVar16[5] == 0x61);
        auVar21[6] = -(pbVar16[6] == 0x6c);
        auVar21[7] = -(pbVar16[7] == 0x3a);
        auVar21[8] = -(pbVar16[8] == 100);
        auVar21[9] = -(pbVar16[9] == 0x6f);
        auVar21[10] = -(pbVar16[10] == 99);
        auVar21[0xb] = -(pbVar16[0xb] == 0x75);
        auVar21[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar21[0xd] = -(pbVar16[0xd] == 0x65);
        auVar21[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar21[0xf] = -(pbVar16[0xf] == 0x74);
        auVar24[0] = -(pbVar16[10] == 99);
        auVar24[1] = -(pbVar16[0xb] == 0x75);
        auVar24[2] = -(pbVar16[0xc] == 0x6d);
        auVar24[3] = -(pbVar16[0xd] == 0x65);
        auVar24[4] = -(pbVar16[0xe] == 0x6e);
        auVar24[5] = -(pbVar16[0xf] == 0x74);
        auVar24[6] = -(pbVar16[0x10] == 0x61);
        auVar24[7] = -(pbVar16[0x11] == 0x74);
        auVar24[8] = -(pbVar16[0x12] == 0x69);
        auVar24[9] = -(pbVar16[0x13] == 0x6f);
        auVar24[10] = -(pbVar16[0x14] == 0x6e);
        auVar24[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar24[0xc] = -(pbVar16[0x16] == 0x74);
        auVar24[0xd] = -(pbVar16[0x17] == 0x61);
        auVar24[0xe] = -(pbVar16[0x18] == 0x67);
        auVar24[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar24 = auVar24 & auVar21;
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
    if (pbVar11 == *(byte **)(uStack_a8 + 0x58)) {
LAB_0e3c1ba8:
      if ((int)uStack_80 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e3c1c30;
        lVar19 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        uVar7 = uStack_80._4_4_;
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18);
        }
        auStack_1f8._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar7,1);
        if (auStack_1f8._0_8_ == 0) {
          auStack_1f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1f8);
          if (auStack_1f8._0_8_ == 0) goto LAB_0e3c1c30;
        }
        if ((*(int *)(auStack_1f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1f8._0_8_ + 0x58) != 0)) {
          lVar19 = *(long *)(auStack_1f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e3c1c30:
          lVar19 = 0;
        }
      }
      plStack_250 = (long *)&UNK_0488e0b0;
      pcStack_248 = (code *)0x0;
      uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
      uStack_260 = 0;
      auStack_1f8 = (undefined1  [16])0x0;
      auStack_1e0 = ZEXT816(0x488e0b0);
      auStack_1d0._0_5_ = 0x48b5725f;
      puStack_110 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_110 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      uStack_120 = 0x21;
      uStack_118 = 0x1a;
      *(ulong *)((long)puStack_110 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_110 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_110 = _DAT_013bbacd;
      puStack_110[1] = uVar4;
      *(undefined1 *)((long)puStack_110 + 0x1a) = 0;
      lVar19 = func_0x048b5060(lVar19,&uStack_120);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined1 *)(lVar19 + 0x20) == auStack_1f8) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar18 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar18);
          if (auStack_1d0[4] != '\0') {
            if (auStack_1d0[4] == '\x02') {
              (*(code *)auStack_1e0._0_8_)(5,auStack_1f8 + 8,puVar18);
            }
            else {
              uVar4 = auStack_1f8._8_8_;
              auStack_1f8._8_8_ = 0;
              *puVar18 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar19 + 0x38) = auStack_1e0._0_8_;
        *(undefined8 *)(lVar19 + 0x40) = auStack_1e0._8_8_;
        *(undefined4 *)(lVar19 + 0x48) = auStack_1d0._0_4_;
        *(char *)(lVar19 + 0x4c) = auStack_1d0[4];
        pcVar12 = (code *)auStack_1e0._8_8_;
      }
      if ((uStack_120 & 1) != 0) {
        func_0x0412a280(puStack_110,uStack_120 & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_1e0._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_1f8 + 8);
      }
      if (pcStack_248 != (code *)0x0) {
        (*pcStack_248)(&uStack_260);
      }
    }
    else {
      iVar8 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550ad8), iVar9 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e3c1ba8;
    }
    func_0x0e3c45a0(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e1d790,0x18);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b8548;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e335c70;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e335970;
    pcStack_220 = (code *)&UNK_0e425bd0;
    puStack_218 = &UNK_0e425d90;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    func_0x0e3c5440(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e1d7b0,0x18);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b8688;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e337b60;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e337860;
    pcStack_220 = (code *)&UNK_0e425eb0;
    puStack_218 = &UNK_0e426070;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    func_0x0e3c6640(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e19060,0x1c);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b9fe0;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e4279b0;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e427620;
    pcStack_220 = (code *)&UNK_0e427a70;
    puStack_218 = &UNK_0e427d00;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    func_0x0e3c9de0(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e1d7d0,0x1a);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b87c8;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e33b760;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e33b460;
    pcStack_220 = (code *)&UNK_0e428190;
    puStack_218 = &UNK_0e428350;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    if ((DAT_0f751e88 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751e88), iVar8 != 0)) {
      func_0x0e4291e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f751e08,0xf53dab8);
      func_0x0410844d(&DAT_0f751e88);
    }
    plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f751e08 + 4)) * 8);
    do {
      lVar19 = *plVar13;
      if (lVar19 == -1) goto LAB_0e3c25d0;
      plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar19 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar19 * 0x18) !=
             *(uint *)(_DAT_0f751e08 + 4));
    if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3c25d0:
      puVar10 = &DAT_0f751e08;
      if (iRam000000000f751e68 != -0x2b3da790) goto LAB_0e3c263d;
LAB_0e3c25fb:
      lVar19 = *(long *)(puVar10 + 0x68);
      if (lVar19 == 0) goto LAB_0e3c263d;
      bVar20 = (*(byte *)(lVar19 + 8) & 1) != 0;
      lVar14 = lVar19 + 9;
      if (bVar20) {
        lVar14 = *(long *)(lVar19 + 0x18);
      }
      uVar15 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
      if (bVar20) {
        uVar15 = *(ulong *)(lVar19 + 0x10);
      }
      func_0x0e446f60(&uStack_120,param_1,lVar14,uVar15);
      uVar15 = uStack_120;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
      if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3c25fb;
LAB_0e3c263d:
      func_0x0e446f60(&uStack_120,param_1,&DAT_01e190c0,0x15);
      uVar15 = uStack_120;
    }
    uStack_120 = uVar15;
    if (cStack_f0 == '\0') {
      if ((DAT_0f751e88 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751e88), iVar8 != 0)) {
        func_0x0e4291e0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f751e08,0xf53dab8);
        func_0x0410844d(&DAT_0f751e88);
      }
      plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f751e08 + 4)) * 8);
      do {
        lVar19 = *plVar13;
        if (lVar19 == -1) goto LAB_0e3c26d1;
        plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f751e08 + 4));
      if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e3c26d1:
        puVar10 = &DAT_0f751e08;
      }
      else {
        puVar10 = (undefined *)plVar13[2];
      }
      for (pbVar11 = *(byte **)(uStack_120 + 0x50); pbVar11 != *(byte **)(uStack_120 + 0x58);
          pbVar11 = pbVar11 + 0x38) {
        bVar3 = *pbVar11;
        if ((bVar3 & 1) == 0) {
          if (bVar3 >> 1 == 0x1a) goto LAB_0e3c27aa;
        }
        else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e3c27aa:
          if ((bVar3 & 1) == 0) {
            pbVar16 = pbVar11 + 1;
          }
          else {
            pbVar16 = *(byte **)(pbVar11 + 0x10);
          }
          auVar22[0] = -(*pbVar16 == 0x5b);
          auVar22[1] = -(pbVar16[1] == 99);
          auVar22[2] = -(pbVar16[2] == 0x65);
          auVar22[3] = -(pbVar16[3] == 0x72);
          auVar22[4] = -(pbVar16[4] == 0x65);
          auVar22[5] = -(pbVar16[5] == 0x61);
          auVar22[6] = -(pbVar16[6] == 0x6c);
          auVar22[7] = -(pbVar16[7] == 0x3a);
          auVar22[8] = -(pbVar16[8] == 100);
          auVar22[9] = -(pbVar16[9] == 0x6f);
          auVar22[10] = -(pbVar16[10] == 99);
          auVar22[0xb] = -(pbVar16[0xb] == 0x75);
          auVar22[0xc] = -(pbVar16[0xc] == 0x6d);
          auVar22[0xd] = -(pbVar16[0xd] == 0x65);
          auVar22[0xe] = -(pbVar16[0xe] == 0x6e);
          auVar22[0xf] = -(pbVar16[0xf] == 0x74);
          auVar25[0] = -(pbVar16[10] == 99);
          auVar25[1] = -(pbVar16[0xb] == 0x75);
          auVar25[2] = -(pbVar16[0xc] == 0x6d);
          auVar25[3] = -(pbVar16[0xd] == 0x65);
          auVar25[4] = -(pbVar16[0xe] == 0x6e);
          auVar25[5] = -(pbVar16[0xf] == 0x74);
          auVar25[6] = -(pbVar16[0x10] == 0x61);
          auVar25[7] = -(pbVar16[0x11] == 0x74);
          auVar25[8] = -(pbVar16[0x12] == 0x69);
          auVar25[9] = -(pbVar16[0x13] == 0x6f);
          auVar25[10] = -(pbVar16[0x14] == 0x6e);
          auVar25[0xb] = -(pbVar16[0x15] == 0x5f);
          auVar25[0xc] = -(pbVar16[0x16] == 0x74);
          auVar25[0xd] = -(pbVar16[0x17] == 0x61);
          auVar25[0xe] = -(pbVar16[0x18] == 0x67);
          auVar25[0xf] = -(pbVar16[0x19] == 0x5d);
          auVar25 = auVar25 & auVar22;
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) break;
        }
      }
      if (pbVar11 == *(byte **)(uStack_120 + 0x58)) {
LAB_0e3c27d8:
        uVar7 = uStack_f4;
        if (iStack_f8 == 0) {
          if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
             (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e3c2860;
          lVar19 = *(long *)(puVar10 + 0x68) + 0x38;
        }
        else {
          if (puVar10 == (undefined *)0x0) {
            puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18);
          }
          auStack_1f8._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar7,1);
          if (auStack_1f8._0_8_ == 0) {
            auStack_1f8 = (undefined1  [16])0x0;
            func_0x048b0d20(auStack_1f8);
            if (auStack_1f8._0_8_ == 0) goto LAB_0e3c2860;
          }
          if ((*(int *)(auStack_1f8._0_8_ + 0x50) == -0x45dcb126) &&
             (*(long *)(auStack_1f8._0_8_ + 0x58) != 0)) {
            lVar19 = *(long *)(auStack_1f8._0_8_ + 0x58) + 0x40;
          }
          else {
LAB_0e3c2860:
            lVar19 = 0;
          }
        }
        plStack_250 = (long *)&UNK_0488e0b0;
        pcStack_248 = (code *)0x0;
        uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
        uStack_260 = 0;
        auStack_1f8 = (undefined1  [16])0x0;
        auStack_1e0 = ZEXT816(0x488e0b0);
        auStack_1d0._0_5_ = 0x48b5725f;
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
        lVar19 = func_0x048b5060(lVar19,&uStack_e8);
        *(undefined8 *)(lVar19 + 0x20) = 0;
        if ((undefined1 *)(lVar19 + 0x20) == auStack_1f8) {
          pcVar12 = (code *)0x0;
        }
        else {
          if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
            puVar18 = (undefined8 *)(lVar19 + 0x28);
            (**(code **)(lVar19 + 0x40))(puVar18);
            if (auStack_1d0[4] != '\0') {
              if (auStack_1d0[4] == '\x02') {
                (*(code *)auStack_1e0._0_8_)(5,auStack_1f8 + 8,puVar18);
              }
              else {
                uVar4 = auStack_1f8._8_8_;
                auStack_1f8._8_8_ = 0;
                *puVar18 = uVar4;
              }
            }
          }
          *(undefined8 *)(lVar19 + 0x38) = auStack_1e0._0_8_;
          *(undefined8 *)(lVar19 + 0x40) = auStack_1e0._8_8_;
          *(undefined4 *)(lVar19 + 0x48) = auStack_1d0._0_4_;
          *(char *)(lVar19 + 0x4c) = auStack_1d0[4];
          pcVar12 = (code *)auStack_1e0._8_8_;
        }
        if ((uStack_e8 & 1) != 0) {
          func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
          pcVar12 = (code *)auStack_1e0._8_8_;
        }
        if (pcVar12 != (code *)0x0) {
          (*pcVar12)(auStack_1f8 + 8);
        }
        if (pcStack_248 != (code *)0x0) {
          (*pcStack_248)(&uStack_260);
        }
      }
      else {
        iVar8 = *(int *)(pbVar11 + 0x1c);
        if ((DAT_0f550ad8 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550ad8), iVar9 != 0)) {
          func_0x0488e120(0xf550ac0);
          func_0x0410844d(&DAT_0f550ad8);
        }
        if (iVar8 == _DAT_0f550ac4) goto LAB_0e3c27d8;
      }
      uStack_b8 = CONCAT71(uStack_ef,cStack_f0);
      auStack_c8._8_4_ = iStack_f8;
      auStack_c8._0_8_ = uStack_100;
      auStack_c8._12_4_ = uStack_f4;
      puStack_d8 = puStack_110;
      uStack_d0 = uStack_108;
      uStack_e8 = uStack_120;
      uStack_e0 = uStack_118;
      uVar4 = uStack_100;
      if (DAT_0f751df0 == '\0') {
        iVar8 = FUN_04108328(&DAT_0f751df0);
        uVar4 = auStack_c8._0_8_;
        if (iVar8 != 0) {
          func_0x0e4290a0();
          func_0x0410844d(&DAT_0f751df0);
          uVar4 = auStack_c8._0_8_;
        }
      }
      auStack_c8._0_8_ = uVar4;
      uVar15 = uStack_e8;
      auStack_c8._8_8_ = 0xe18edaa700000001;
      if ((DAT_0f751e88 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751e88), iVar8 != 0)) {
        func_0x0e4291e0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f751e08,0xf53dab8);
        func_0x0410844d(&DAT_0f751e88);
      }
      plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f751e08 + 4)) * 8);
      do {
        lVar19 = *plVar13;
        if (lVar19 == -1) goto LAB_0e3c2af0;
        plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f751e08 + 4));
      if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e3c2af0:
        auStack_1f8._0_8_ = &DAT_0f751e08;
      }
      else {
        auStack_1f8._0_8_ = plVar13[2];
      }
      auStack_1f8._8_8_ = uVar15 + 0x18;
      FUN_0ed621a0(auStack_1f8,auStack_c8._12_4_);
      auStack_1f8._0_8_ = auStack_1f8._2_8_ << 0x10;
      auStack_1f8._8_8_ = &uStack_e0;
      uStack_1e8 = auStack_c8._12_4_;
      auStack_1e0 = ZEXT816(0);
      auStack_1d0 = ZEXT816(0);
      lStack_1c0 = 0;
      uStack_1b8 = 0x22;
      uStack_1b7 = (undefined7)_DAT_014ec760;
      uStack_1b0 = (undefined1)((ulong)_DAT_014ec760 >> 0x38);
      uStack_1af = (undefined7)_UNK_014ec768;
      uStack_1a8 = (undefined1)((ulong)_UNK_014ec768 >> 0x38);
      uStack_1a7 = 0x72;
      auStack_1a0 = ZEXT816(0);
      lStack_190 = 0;
      auStack_188 = ZEXT816(0);
      lStack_178 = 0;
      uStack_170 = 0x3f600000;
      FUN_048afb10(auStack_1a0,8);
      lStack_148 = 0;
      lStack_140 = 0;
      lStack_158 = 0;
      lStack_150 = 0;
      auStack_168 = (undefined1  [16])0x0;
      uStack_138 = 0xff00;
      uStack_134 = uStack_134 & 0xffffff00;
      uStack_130 = uStack_130 & 0xffffff00;
      uStack_12c = 0;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar18 = &UNK_0f0122d0;
      uVar4 = auStack_1e0._0_8_;
      auStack_1e0._0_8_ = puVar18;
      if ((long *)uVar4 != (long *)0x0) {
        (**(code **)(*(long *)uVar4 + 8))();
      }
      uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
      plStack_258 = (long *)0x0;
      plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
      pcStack_248 = (code *)0x1;
      uStack_240 = 0;
      puStack_238 = &UNK_05de9430;
      puStack_230 = &SUB_048b06d0;
      puStack_228 = &SUB_05de9110;
      pcStack_220 = (code *)&UNK_0e447a80;
      puStack_218 = &UNK_0e447bf0;
      uStack_210 = 0;
      auStack_208 = (undefined1  [16])0x0;
      func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
      uVar4 = auStack_208._8_8_;
      if ((long *)auStack_208._8_8_ != (long *)0x0) {
        LOCK();
        plVar13 = (long *)(auStack_208._8_8_ + 8);
        lVar19 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
          func_0x0412c2d0(uVar4);
        }
      }
      uVar4 = auStack_1f8._8_8_;
      if ((DAT_0f550a20 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550a20), iVar8 != 0)) {
        func_0x048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
      uStack_260 = CONCAT44(uStack_260._4_4_,_DAT_0f550a0c);
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar13 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
      *plVar13 = (long)&UNK_0ef439d0;
      plStack_258 = plVar13 + 3;
      uVar5 = auStack_1e0._0_8_;
      uVar6 = auStack_1e0._8_8_;
      auStack_1e0 = (undefined1  [16])0x0;
      plVar13[3] = uVar5;
      plVar13[4] = uVar6;
      plVar13[7] = lStack_1c0;
      plVar13[5] = auStack_1d0._0_8_;
      plVar13[6] = auStack_1d0._8_8_;
      auStack_1d0 = (undefined1  [16])0x0;
      lStack_1c0 = 0;
      plVar13[10] = CONCAT53(uStack_1a5,CONCAT21(uStack_1a7,uStack_1a8));
      plVar13[8] = CONCAT71(uStack_1b7,uStack_1b8);
      plVar13[9] = CONCAT71(uStack_1af,uStack_1b0);
      uStack_1b8 = 0;
      uStack_1b7 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      plVar13[0xb] = auStack_1a0._0_8_;
      plVar13[0xc] = auStack_1a0._8_8_;
      plVar13[0xd] = lStack_190;
      auStack_1a0 = (undefined1  [16])0x0;
      lStack_190 = 0;
      plVar13[0xe] = auStack_188._0_8_;
      plVar13[0xf] = auStack_188._8_8_;
      plVar13[0x10] = lStack_178;
      auStack_188 = (undefined1  [16])0x0;
      lStack_178 = 0;
      *(undefined4 *)(plVar13 + 0x11) = uStack_170;
      plVar13[0x12] = auStack_168._0_8_;
      plVar13[0x13] = auStack_168._8_8_;
      plVar13[0x14] = lStack_158;
      auStack_168 = (undefined1  [16])0x0;
      lStack_158 = 0;
      plVar13[0x17] = lStack_140;
      plVar13[0x15] = lStack_150;
      plVar13[0x16] = lStack_148;
      lStack_150 = 0;
      lStack_148 = 0;
      lStack_140 = 0;
      *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_12c,CONCAT43(uStack_130,uStack_134._1_3_));
      plVar13[0x18] = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
      auStack_68 = (undefined1  [16])0x0;
      plStack_250 = plVar13;
      func_0x048afd20(uVar4,&uStack_260);
      plVar13 = plStack_250;
      if (plStack_250 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_250 + 1;
        lVar19 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plStack_250 + 0x10))(plStack_250);
          func_0x0412c2d0(plVar13);
        }
      }
      uVar5 = auStack_68._8_8_;
      if ((long *)auStack_68._8_8_ != (long *)0x0) {
        LOCK();
        plVar13 = (long *)(auStack_68._8_8_ + 8);
        lVar19 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*(long *)auStack_68._8_8_ + 0x10))(auStack_68._8_8_);
          func_0x0412c2d0(uVar5);
        }
      }
      lVar19 = *(long *)(uVar4 + 0x10);
      iVar8 = *(int *)(uVar4 + 0x1c);
      if (iVar8 == 2) {
        piVar17 = *(int **)(*(long *)(lVar19 + 0x78) + 0x60);
        iVar8 = *piVar17;
        while (iVar8 != *(int *)(uVar4 + 0x18)) {
          piVar17 = piVar17 + 0x16;
          iVar8 = *piVar17;
        }
        for (; *(long *)(piVar17 + 0xc) != *(long *)(uVar4 + 8); piVar17 = *(int **)(piVar17 + 0xe))
        {
        }
LAB_0e3c2fca:
        piVar17[4] = piVar17[4] | auStack_1f8._0_4_ << 0x10;
      }
      else {
        if (iVar8 == 1) {
          piVar17 = *(int **)(*(long *)(lVar19 + 0x78) + 0x48);
          iVar8 = *piVar17;
          while (iVar8 != *(int *)(uVar4 + 0x18)) {
            piVar17 = piVar17 + 0x1a;
            iVar8 = *piVar17;
          }
          goto LAB_0e3c2fca;
        }
        if (iVar8 == 0) {
          *(uint *)(lVar19 + 0x18) = *(uint *)(lVar19 + 0x18) | auStack_1f8._0_4_ << 0x10;
        }
      }
      func_0x048b0bc0(auStack_1e0);
    }
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&DAT_01e190c0,0x15);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4ba120;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e429bb0;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e429820;
    pcStack_220 = FUN_0e429c70;
    puStack_218 = &UNK_0e429eb0;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    func_0x0e3ca250(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e1d7f0,0x13);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b8908;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e33d470;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e33d170;
    pcStack_220 = (code *)&UNK_0e42a2f0;
    puStack_218 = &UNK_0e42a4b0;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    func_0x0e3ca6a0(param_1);
    func_0x0e4255c0(auStack_1f8,&uStack_a8,&UNK_01e1d810,0x1a);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4b8a48;
    uVar4 = auStack_1e0._0_8_;
    auStack_1e0._0_8_ = puVar18;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e33f290;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e33ef90;
    pcStack_220 = (code *)&UNK_0e42a650;
    puStack_218 = &UNK_0e42a810;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar4 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_208._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar8 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar8 == 2) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar8 = *piVar17;
      }
      lVar19 = *(long *)(piVar17 + 0xc);
      while (lVar19 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar17 = *(int **)(piVar17 + 0xe);
        lVar19 = *(long *)(piVar17 + 0xc);
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar17 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar17;
      while (iVar8 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar8 = *piVar17;
      }
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e4258d0(auStack_1f8);
    func_0x048b0bc0(auStack_1e0);
    if ((int)uStack_80 == 4) {
      if ((DAT_0f751c30 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751c30), iVar8 != 0)) {
        func_0x0e4244a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f751bb0,0xf53dab8);
        func_0x0410844d(&DAT_0f751c30);
      }
      plVar13 = (long *)(*(long *)(uStack_a8 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uStack_a8 + 0x20) -
                                             *(long *)(uStack_a8 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f751bb0 + 4)) * 8);
      do {
        lVar19 = *plVar13;
        if (lVar19 == -1) goto LAB_0e3c3678;
        plVar13 = (long *)(*(long *)(uStack_a8 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(uStack_a8 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f751bb0 + 4));
      if (plVar13 == *(long **)(uStack_a8 + 0x38)) {
LAB_0e3c3678:
        puVar10 = &DAT_0f751bb0;
      }
      else {
        puVar10 = (undefined *)plVar13[2];
      }
      lVar19 = FUN_048b1040(uStack_a8 + 0x18,puVar10,uStack_80._4_4_,1);
      if (lVar19 == 0) {
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_1f8);
        lVar14 = *(long *)(auStack_1f8._0_8_ + 0x38);
        lVar19 = auStack_1f8._0_8_;
        if (lVar14 == 0) goto LAB_0e3c374e;
LAB_0e3c376c:
        do {
          lVar19 = lVar14;
          lVar14 = *(long *)(lVar19 + 0x38);
          if (*(long *)(lVar19 + 0x38) == 0) {
            auStack_1f8 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_1f8);
            lVar14 = auStack_1f8._0_8_;
          }
        } while (lVar14 != 0);
      }
      else {
        lVar14 = *(long *)(lVar19 + 0x38);
        if (*(long *)(lVar19 + 0x38) != 0) goto LAB_0e3c376c;
LAB_0e3c374e:
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_1f8);
        lVar14 = auStack_1f8._0_8_;
        if (auStack_1f8._0_8_ != 0) goto LAB_0e3c376c;
      }
      lVar19 = *(long *)(lVar19 + 0x48);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    else {
      if ((int)uStack_80 != 1) goto LAB_0e3c3802;
      if ((DAT_0f751c30 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751c30), iVar8 != 0)) {
        func_0x0e4244a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f751bb0,0xf53dab8);
        func_0x0410844d(&DAT_0f751c30);
      }
      plVar13 = (long *)(*(long *)(uStack_a8 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uStack_a8 + 0x20) -
                                             *(long *)(uStack_a8 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f751bb0 + 4)) * 8);
      do {
        lVar19 = *plVar13;
        if (lVar19 == -1) goto LAB_0e3c35f8;
        plVar13 = (long *)(*(long *)(uStack_a8 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(uStack_a8 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f751bb0 + 4));
      if (plVar13 == *(long **)(uStack_a8 + 0x38)) {
LAB_0e3c35f8:
        puVar10 = &DAT_0f751bb0;
      }
      else {
        puVar10 = (undefined *)plVar13[2];
      }
      lVar19 = func_0x048b0c90(uStack_a8 + 0x18,puVar10,uStack_80._4_4_,1);
      if (lVar19 == 0) {
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1f8);
        lVar19 = auStack_1f8._0_8_;
      }
      lVar19 = *(long *)(lVar19 + 0x58);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    puVar18[1] = 0xffffffffffffffff;
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 0xff;
    *puVar18 = &UNK_0f4e2d20;
    plVar13 = *(long **)(lVar19 + 8);
    *(undefined8 **)(lVar19 + 8) = puVar18;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
  }
LAB_0e3c3802:
  if ((DAT_0f751fc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751fc8), iVar8 != 0)) {
    func_0x0e42a9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751f48,0xf53dab8);
    func_0x0410844d(&DAT_0f751fc8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f751f48 + 4)) * 8);
  do {
    lVar19 = *plVar13;
    if (lVar19 == -1) goto LAB_0e3c3860;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f751f48 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3c3860:
    puVar10 = &DAT_0f751f48;
    if (iRam000000000f751fa8 != -0x2b3da790) goto LAB_0e3c38cd;
LAB_0e3c388b:
    lVar19 = *(long *)(puVar10 + 0x68);
    if (lVar19 == 0) goto LAB_0e3c38cd;
    bVar20 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar14 = lVar19 + 9;
    if (bVar20) {
      lVar14 = *(long *)(lVar19 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0e42b0f0(&uStack_120,param_1,lVar14,uVar15);
    uVar15 = uStack_120;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3c388b;
LAB_0e3c38cd:
    func_0x0e42b0f0(&uStack_120,param_1,&UNK_013a6a27,0x17);
    uVar15 = uStack_120;
  }
  if (cStack_f0 != '\0') {
    return;
  }
  uStack_120 = uVar15;
  if ((DAT_0f751fc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f751fc8), iVar8 != 0)) {
    func_0x0e42a9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f751f48,0xf53dab8);
    func_0x0410844d(&DAT_0f751fc8);
  }
  plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f751f48 + 4)) * 8);
  do {
    lVar19 = *plVar13;
    if (lVar19 == -1) goto LAB_0e3c3960;
    plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f751f48 + 4));
  if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e3c3960:
    puVar10 = &DAT_0f751f48;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
  }
  for (pbVar11 = *(byte **)(uStack_120 + 0x50); pbVar11 != *(byte **)(uStack_120 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar3 = *pbVar11;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e3c3a3a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e3c3a3a:
      if ((bVar3 & 1) == 0) {
        pbVar16 = pbVar11 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar11 + 0x10);
      }
      auVar23[0] = -(*pbVar16 == 0x5b);
      auVar23[1] = -(pbVar16[1] == 99);
      auVar23[2] = -(pbVar16[2] == 0x65);
      auVar23[3] = -(pbVar16[3] == 0x72);
      auVar23[4] = -(pbVar16[4] == 0x65);
      auVar23[5] = -(pbVar16[5] == 0x61);
      auVar23[6] = -(pbVar16[6] == 0x6c);
      auVar23[7] = -(pbVar16[7] == 0x3a);
      auVar23[8] = -(pbVar16[8] == 100);
      auVar23[9] = -(pbVar16[9] == 0x6f);
      auVar23[10] = -(pbVar16[10] == 99);
      auVar23[0xb] = -(pbVar16[0xb] == 0x75);
      auVar23[0xc] = -(pbVar16[0xc] == 0x6d);
      auVar23[0xd] = -(pbVar16[0xd] == 0x65);
      auVar23[0xe] = -(pbVar16[0xe] == 0x6e);
      auVar23[0xf] = -(pbVar16[0xf] == 0x74);
      auVar26[0] = -(pbVar16[10] == 99);
      auVar26[1] = -(pbVar16[0xb] == 0x75);
      auVar26[2] = -(pbVar16[0xc] == 0x6d);
      auVar26[3] = -(pbVar16[0xd] == 0x65);
      auVar26[4] = -(pbVar16[0xe] == 0x6e);
      auVar26[5] = -(pbVar16[0xf] == 0x74);
      auVar26[6] = -(pbVar16[0x10] == 0x61);
      auVar26[7] = -(pbVar16[0x11] == 0x74);
      auVar26[8] = -(pbVar16[0x12] == 0x69);
      auVar26[9] = -(pbVar16[0x13] == 0x6f);
      auVar26[10] = -(pbVar16[0x14] == 0x6e);
      auVar26[0xb] = -(pbVar16[0x15] == 0x5f);
      auVar26[0xc] = -(pbVar16[0x16] == 0x74);
      auVar26[0xd] = -(pbVar16[0x17] == 0x61);
      auVar26[0xe] = -(pbVar16[0x18] == 0x67);
      auVar26[0xf] = -(pbVar16[0x19] == 0x5d);
      auVar26 = auVar26 & auVar23;
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
  if (pbVar11 != *(byte **)(uStack_120 + 0x58)) {
    iVar8 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550ad8), iVar9 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar8 != _DAT_0f550ac4) goto LAB_0e3c3cab;
  }
  uVar7 = uStack_f4;
  if (iStack_f8 == 0) {
    if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e3c3af2;
    lVar19 = *(long *)(puVar10 + 0x68) + 0x38;
  }
  else {
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18,0,uStack_f4);
    }
    auStack_1f8._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar7,1);
    if (auStack_1f8._0_8_ == 0) {
      auStack_1f8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1f8);
      if (auStack_1f8._0_8_ == 0) goto LAB_0e3c3af2;
    }
    if ((*(int *)(auStack_1f8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_1f8._0_8_ + 0x58) != 0)) {
      lVar19 = *(long *)(auStack_1f8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e3c3af2:
      lVar19 = 0;
    }
  }
  plStack_250 = (long *)&UNK_0488e0b0;
  pcStack_248 = (code *)0x0;
  uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
  uStack_260 = 0;
  auStack_1f8 = (undefined1  [16])0x0;
  auStack_1e0 = ZEXT816(0x488e0b0);
  auStack_1d0._0_5_ = 0x48b5725f;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013bbadf;
  uStack_e8 = 0x21;
  uStack_e0 = 0x1a;
  *(ulong *)((long)puVar18 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar18 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar18 = _DAT_013bbacd;
  puVar18[1] = uVar4;
  *(undefined1 *)((long)puVar18 + 0x1a) = 0;
  puStack_d8 = puVar18;
  lVar19 = func_0x048b5060(lVar19,&uStack_e8);
  *(undefined8 *)(lVar19 + 0x20) = 0;
  if ((undefined1 *)(lVar19 + 0x20) == auStack_1f8) {
    pcVar12 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
      puVar18 = (undefined8 *)(lVar19 + 0x28);
      (**(code **)(lVar19 + 0x40))(puVar18);
      if (auStack_1d0[4] != '\0') {
        if (auStack_1d0[4] == '\x02') {
          (*(code *)auStack_1e0._0_8_)(5,auStack_1f8 + 8,puVar18);
        }
        else {
          uVar4 = auStack_1f8._8_8_;
          auStack_1f8._8_8_ = 0;
          *puVar18 = uVar4;
        }
      }
    }
    *(undefined8 *)(lVar19 + 0x38) = auStack_1e0._0_8_;
    *(undefined8 *)(lVar19 + 0x40) = auStack_1e0._8_8_;
    *(undefined4 *)(lVar19 + 0x48) = auStack_1d0._0_4_;
    *(char *)(lVar19 + 0x4c) = auStack_1d0[4];
    pcVar12 = (code *)auStack_1e0._8_8_;
  }
  if ((uStack_e8 & 1) != 0) {
    func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
    pcVar12 = (code *)auStack_1e0._8_8_;
  }
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(auStack_1f8 + 8);
  }
  if (pcStack_248 != (code *)0x0) {
    (*pcStack_248)(&uStack_260);
  }
LAB_0e3c3cab:
  cStack_78 = cStack_f0;
  uStack_80 = CONCAT44(uStack_f4,iStack_f8);
  uStack_48 = uStack_100;
  puStack_58 = puStack_110;
  uStack_50 = uStack_108;
  auStack_68._8_8_ = uStack_118;
  auStack_68._0_8_ = uStack_120;
  uStack_a8 = uStack_120;
  uStack_a0 = uStack_118;
  puStack_98 = puStack_110;
  uStack_90 = uStack_108;
  uStack_88 = uStack_100;
  func_0x0e42bc60(auStack_1f8,&uStack_a8,&UNK_011ea907,0xb);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar18 = &UNK_0f4b8b88;
  uVar4 = auStack_1e0._0_8_;
  auStack_1e0._0_8_ = puVar18;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
  plStack_258 = (long *)0x0;
  plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
  pcStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_0e34d240;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &SUB_0e34cf30;
  pcStack_220 = (code *)&UNK_0e42c210;
  puStack_218 = &UNK_0e42c3d0;
  uStack_210 = 0;
  auStack_208 = ZEXT816(0);
  func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
  uVar4 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_208._8_8_ + 8);
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e42bf10(auStack_1f8);
  uStack_b8 = CONCAT71(uStack_b8._1_7_,cStack_78);
  auStack_c8._8_8_ = uStack_80;
  auStack_c8._0_8_ = uStack_88;
  puStack_d8 = puStack_98;
  uStack_d0 = uStack_90;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  func_0x048b0bc0(auStack_1e0);
  func_0x0e42bc60(auStack_1f8,&uStack_e8,&UNK_011ed181,10);
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar18 = &UNK_0f4ba2d0;
  uVar4 = auStack_1e0._0_8_;
  auStack_1e0._0_8_ = puVar18;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
  plStack_258 = (long *)0x0;
  plStack_250 = (long *)((ulong)plStack_250 & 0xffffffff00000000);
  pcStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_0e42c7e0;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_0e4243e0;
  pcStack_220 = (code *)&UNK_0e42c8a0;
  puStack_218 = &UNK_0e42caf0;
  uStack_210 = 0;
  auStack_208 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
  uVar4 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_208._8_8_ + 8);
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e42bf10(auStack_1f8);
  func_0x048b0bc0(auStack_1e0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14ec760  volume_multiplier
 */
