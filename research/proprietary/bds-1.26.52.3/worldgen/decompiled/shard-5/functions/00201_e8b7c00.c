/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9b7c00 (ELF vaddr 0xe8b7c00)
 * Label: caller-of-callee
 * Body:  [[0e9b7c00, 0e9b7e07] [0e9b7e10, 0e9b7e51] [0e9b7e60, 0e9b8899] [0e9b88a0, 0e9b88e2] [0e9b88f0, 0e9b90d1] [0e9b90e0, 0e9b91f2] [0e9b9200, 0e9b948d]]
 * Ghidra: FUN_0e9b7c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9b7c00(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  byte *pbVar11;
  code *pcVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_298 [16];
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  long lStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined5 uStack_24f;
  undefined2 uStack_24a;
  undefined1 uStack_248;
  undefined5 uStack_247;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined1 auStack_240 [16];
  long lStack_230;
  undefined1 auStack_228 [16];
  long lStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined1 uStack_1cc;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined1 auStack_168 [16];
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  char cStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined7 uStack_77;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x0eb6df80();
  func_0x0ecaf190(param_1);
  if ((DAT_0f76db60 == '\0') && (iVar8 = func_0x04108328(&DAT_0f76db60), iVar8 != 0)) {
    func_0x0eb51250();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76dae0,0xf53dab8);
    FUN_0410844d(&DAT_0f76db60);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76dae0 + 4)) * 8);
  do {
    lVar20 = *plVar14;
    if (lVar20 == -1) goto LAB_0e9b7c80;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f76dae0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e9b7c80:
    puVar10 = &DAT_0f76dae0;
    if (iRam000000000f76db40 != -0x2b3da790) goto LAB_0e9b7d02;
LAB_0e9b7cab:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0e9b7d02;
    bVar21 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar18 = lVar20 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar20 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0eb51690(&uStack_120,param_1,lVar18,uVar16);
    if (cStack_f0 != '\0') goto LAB_0e9b7ce8;
LAB_0e9b7d28:
    uVar16 = uStack_120;
    if ((DAT_0f76db60 == '\0') && (iVar8 = func_0x04108328(&DAT_0f76db60), iVar8 != 0)) {
      func_0x0eb51250();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76dae0,0xf53dab8);
      FUN_0410844d(&DAT_0f76db60);
    }
    plVar14 = (long *)(*(long *)(uVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f76dae0 + 4)) * 8);
    do {
      lVar20 = *plVar14;
      if (lVar20 == -1) goto LAB_0e9b7d90;
      plVar14 = (long *)(*(long *)(uVar16 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f76dae0 + 4)
            );
    if (plVar14 == *(long **)(uVar16 + 0x38)) {
LAB_0e9b7d90:
      puVar10 = &DAT_0f76dae0;
    }
    else {
      puVar10 = (undefined *)plVar14[2];
    }
    for (pbVar11 = *(byte **)(uStack_120 + 0x50); pbVar11 != *(byte **)(uStack_120 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e9b7e6a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e9b7e6a:
        if ((bVar3 & 1) == 0) {
          pbVar17 = pbVar11 + 1;
        }
        else {
          pbVar17 = *(byte **)(pbVar11 + 0x10);
        }
        auVar22[0] = -(*pbVar17 == 0x5b);
        auVar22[1] = -(pbVar17[1] == 99);
        auVar22[2] = -(pbVar17[2] == 0x65);
        auVar22[3] = -(pbVar17[3] == 0x72);
        auVar22[4] = -(pbVar17[4] == 0x65);
        auVar22[5] = -(pbVar17[5] == 0x61);
        auVar22[6] = -(pbVar17[6] == 0x6c);
        auVar22[7] = -(pbVar17[7] == 0x3a);
        auVar22[8] = -(pbVar17[8] == 100);
        auVar22[9] = -(pbVar17[9] == 0x6f);
        auVar22[10] = -(pbVar17[10] == 99);
        auVar22[0xb] = -(pbVar17[0xb] == 0x75);
        auVar22[0xc] = -(pbVar17[0xc] == 0x6d);
        auVar22[0xd] = -(pbVar17[0xd] == 0x65);
        auVar22[0xe] = -(pbVar17[0xe] == 0x6e);
        auVar22[0xf] = -(pbVar17[0xf] == 0x74);
        auVar24[0] = -(pbVar17[10] == 99);
        auVar24[1] = -(pbVar17[0xb] == 0x75);
        auVar24[2] = -(pbVar17[0xc] == 0x6d);
        auVar24[3] = -(pbVar17[0xd] == 0x65);
        auVar24[4] = -(pbVar17[0xe] == 0x6e);
        auVar24[5] = -(pbVar17[0xf] == 0x74);
        auVar24[6] = -(pbVar17[0x10] == 0x61);
        auVar24[7] = -(pbVar17[0x11] == 0x74);
        auVar24[8] = -(pbVar17[0x12] == 0x69);
        auVar24[9] = -(pbVar17[0x13] == 0x6f);
        auVar24[10] = -(pbVar17[0x14] == 0x6e);
        auVar24[0xb] = -(pbVar17[0x15] == 0x5f);
        auVar24[0xc] = -(pbVar17[0x16] == 0x74);
        auVar24[0xd] = -(pbVar17[0x17] == 0x61);
        auVar24[0xe] = -(pbVar17[0x18] == 0x67);
        auVar24[0xf] = -(pbVar17[0x19] == 0x5d);
        auVar24 = auVar24 & auVar22;
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
    if (pbVar11 == *(byte **)(uStack_120 + 0x58)) {
LAB_0e9b7e98:
      uVar6 = uStack_f4;
      if (iStack_f8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e9b7f1c;
        lVar20 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(uVar16 + 0x18);
        }
        auStack_298._0_8_ = func_0x048b0c90(uVar16 + 0x18,puVar10,uVar6,1);
        if (auStack_298._0_8_ == 0) {
          auStack_298 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_298);
          if (auStack_298._0_8_ == 0) goto LAB_0e9b7f1c;
        }
        if ((*(int *)(auStack_298._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_298._0_8_ + 0x58) != 0)) {
          lVar20 = *(long *)(auStack_298._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e9b7f1c:
          lVar20 = 0;
        }
      }
      plStack_1b0 = (long *)&UNK_0488e0b0;
      pcStack_1a8 = (code *)0x0;
      uStack_1a0 = CONCAT35(uStack_1a0._5_3_,0x48b5725f);
      uStack_1c0 = 0;
      auStack_298 = (undefined1  [16])0x0;
      auStack_280 = ZEXT816(0x488e0b0);
      auStack_270._0_5_ = 0x48b5725f;
      puStack_148 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_148 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar15 = _UNK_013bbadf;
      uStack_158 = 0x21;
      uStack_150 = 0x1a;
      *(ulong *)((long)puStack_148 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_148 + 0x12) = uVar15;
      uVar15 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_148 = _DAT_013bbacd;
      puStack_148[1] = uVar15;
      *(undefined1 *)((long)puStack_148 + 0x1a) = 0;
      lVar20 = func_0x048b5060(lVar20,&uStack_158);
      *(undefined8 *)(lVar20 + 0x20) = 0;
      if ((undefined1 *)(lVar20 + 0x20) == auStack_298) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
          puVar19 = (undefined8 *)(lVar20 + 0x28);
          (**(code **)(lVar20 + 0x40))(puVar19);
          if (auStack_270[4] != '\0') {
            if (auStack_270[4] == '\x02') {
              (*(code *)auStack_280._0_8_)(5,auStack_298 + 8,puVar19);
            }
            else {
              uVar15 = auStack_298._8_8_;
              auStack_298._8_8_ = 0;
              *puVar19 = uVar15;
            }
          }
        }
        *(undefined8 *)(lVar20 + 0x38) = auStack_280._0_8_;
        *(undefined8 *)(lVar20 + 0x40) = auStack_280._8_8_;
        *(undefined4 *)(lVar20 + 0x48) = auStack_270._0_4_;
        *(char *)(lVar20 + 0x4c) = auStack_270[4];
        pcVar12 = (code *)auStack_280._8_8_;
      }
      if ((uStack_158 & 1) != 0) {
        func_0x0412a280(puStack_148,uStack_158 & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_280._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_298 + 8);
      }
      if (pcStack_1a8 != (code *)0x0) {
        (*pcStack_1a8)(&uStack_1c0);
      }
    }
    else {
      iVar8 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e9b7e98;
    }
    cStack_38 = cStack_f0;
    uStack_40 = CONCAT44(uStack_f4,iStack_f8);
    uStack_48 = uStack_100;
    puStack_58 = puStack_110;
    uStack_50 = uStack_108;
    uStack_68 = uStack_120;
    uStack_60 = uStack_118;
    func_0x0eb51c80(auStack_298,uStack_120 + 0x18);
    if (auStack_280._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != auStack_280._0_4_) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      lVar20 = *(long *)(piVar13 + 0xc);
      while (lVar20 != auStack_298._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar20 = *(long *)(piVar13 + 0xc);
      }
LAB_0e9b817f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (auStack_280._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != auStack_280._0_4_) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_0e9b817f;
      }
      if (auStack_280._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_284,uStack_288) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0eb521f0(auStack_298,&uStack_68,&UNK_011c3fb1,10);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0ef46ce8;
    uVar15 = auStack_280._0_8_;
    auStack_280._0_8_ = puVar19;
    if ((long *)uVar15 != (long *)0x0) {
      (**(code **)(*(long *)uVar15 + 8))();
    }
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uStack_288);
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)((ulong)plStack_1b0 & 0xffffffff00000000);
    pcStack_1a8 = (code *)0x1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0490ce30;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0490cb20;
    puStack_180 = &UNK_0eb527a0;
    puStack_178 = &UNK_0eb52900;
    uStack_170 = 0;
    auStack_168 = ZEXT816(0);
    func_0x048b05a0(auStack_298._8_8_,&uStack_1c0);
    uVar15 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar15);
      }
    }
    func_0x0eb524a0(auStack_298);
    cStack_78 = cStack_38;
    uStack_88 = uStack_48;
    uStack_80 = uStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    auStack_a8._8_8_ = uStack_60;
    auStack_a8._0_8_ = uStack_68;
    func_0x048b0bc0(auStack_280);
    uStack_e8 = auStack_a8._0_8_;
    uStack_e0 = auStack_a8._8_8_;
    puStack_d8 = puStack_98;
    uStack_d0 = uStack_90;
    uStack_c8 = uStack_88;
    uStack_c0 = uStack_80;
    uStack_b8 = CONCAT71(uStack_77,cStack_78);
    func_0x0eb51c80(auStack_298,auStack_a8._0_8_ + 0x18);
    if (auStack_280._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != auStack_280._0_4_) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      lVar20 = *(long *)(piVar13 + 0xc);
      while (lVar20 != auStack_298._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar20 = *(long *)(piVar13 + 0xc);
      }
LAB_0e9b840f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (auStack_280._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != auStack_280._0_4_) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_0e9b840f;
      }
      if (auStack_280._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_284,uStack_288) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0eb521f0(auStack_298,&uStack_e8,&UNK_011a1060,0xd);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f48fcb8;
    uVar15 = auStack_280._0_8_;
    auStack_280._0_8_ = puVar19;
    if ((long *)uVar15 != (long *)0x0) {
      (**(code **)(*(long *)uVar15 + 8))();
    }
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uStack_288);
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)((ulong)plStack_1b0 & 0xffffffff00000000);
    pcStack_1a8 = (code *)0x1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0d9452a0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0d944cb0;
    puStack_180 = &UNK_0eb52ad0;
    puStack_178 = &UNK_0eb52c30;
    uStack_170 = 0;
    auStack_168 = ZEXT816(0);
    func_0x048b05a0(auStack_298._8_8_,&uStack_1c0);
    uVar15 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar15);
      }
    }
    func_0x0eb524a0(auStack_298);
    uStack_128 = CONCAT71(uStack_128._1_7_,(undefined1)uStack_b8);
    uStack_138 = uStack_c8;
    uStack_130 = uStack_c0;
    puStack_148 = puStack_d8;
    uStack_140 = uStack_d0;
    uStack_158 = uStack_e8;
    uStack_150 = uStack_e0;
    func_0x048b0bc0(auStack_280);
    func_0x0eb51c80(auStack_298,uStack_158 + 0x18);
    if (auStack_280._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != auStack_280._0_4_) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      lVar20 = *(long *)(piVar13 + 0xc);
      while (lVar20 != auStack_298._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar20 = *(long *)(piVar13 + 0xc);
      }
LAB_0e9b865f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (auStack_280._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_284,uStack_288) + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != auStack_280._0_4_) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_0e9b865f;
      }
      if (auStack_280._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_284,uStack_288) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0eb521f0(auStack_298,&uStack_158,&UNK_01483087,0xb);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f0ef580;
    uVar15 = auStack_280._0_8_;
    auStack_280._0_8_ = puVar19;
    if ((long *)uVar15 != (long *)0x0) {
      (**(code **)(*(long *)uVar15 + 8))();
    }
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uStack_288);
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)((ulong)plStack_1b0 & 0xffffffff00000000);
    pcStack_1a8 = (code *)0x1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07b12180;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_07b0de30;
    puStack_180 = &UNK_0eb52e10;
    puStack_178 = &UNK_0eb52f70;
    uStack_170 = 0;
    auStack_168 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_298._8_8_,&uStack_1c0);
    uVar15 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar15);
      }
    }
    func_0x0eb524a0(auStack_298);
    func_0x048b0bc0(auStack_280);
    lVar20 = func_0x0c4c2d40(param_1 + 0x18);
    if (*(int *)(lVar20 + 0x60) != -0x2b3da790) goto LAB_0e9b87fd;
LAB_0e9b87bb:
    lVar20 = *(long *)(lVar20 + 0x68);
    if (lVar20 == 0) goto LAB_0e9b87fd;
    bVar21 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar18 = lVar20 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar20 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0eb53150(&uStack_120,param_1,lVar18,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar14[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e9b7cab;
LAB_0e9b7d02:
    func_0x0eb51690(&uStack_120,param_1,&UNK_0133c278,0x30);
    if (cStack_f0 == '\0') goto LAB_0e9b7d28;
LAB_0e9b7ce8:
    lVar20 = func_0x0c4c2d40(param_1 + 0x18);
    if (*(int *)(lVar20 + 0x60) == -0x2b3da790) goto LAB_0e9b87bb;
LAB_0e9b87fd:
    func_0x0eb53150(&uStack_120,param_1,&DAT_014be34f,0x1b);
  }
  if (cStack_f0 != '\0') {
    return;
  }
  lVar18 = uStack_120 + 0x18;
  lVar20 = func_0x0c4c2d40(lVar18);
  for (pbVar11 = *(byte **)(uStack_120 + 0x50); pbVar11 != *(byte **)(uStack_120 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar3 = *pbVar11;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e9b88fa;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e9b88fa:
      if ((bVar3 & 1) == 0) {
        pbVar17 = pbVar11 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar11 + 0x10);
      }
      auVar23[0] = -(*pbVar17 == 0x5b);
      auVar23[1] = -(pbVar17[1] == 99);
      auVar23[2] = -(pbVar17[2] == 0x65);
      auVar23[3] = -(pbVar17[3] == 0x72);
      auVar23[4] = -(pbVar17[4] == 0x65);
      auVar23[5] = -(pbVar17[5] == 0x61);
      auVar23[6] = -(pbVar17[6] == 0x6c);
      auVar23[7] = -(pbVar17[7] == 0x3a);
      auVar23[8] = -(pbVar17[8] == 100);
      auVar23[9] = -(pbVar17[9] == 0x6f);
      auVar23[10] = -(pbVar17[10] == 99);
      auVar23[0xb] = -(pbVar17[0xb] == 0x75);
      auVar23[0xc] = -(pbVar17[0xc] == 0x6d);
      auVar23[0xd] = -(pbVar17[0xd] == 0x65);
      auVar23[0xe] = -(pbVar17[0xe] == 0x6e);
      auVar23[0xf] = -(pbVar17[0xf] == 0x74);
      auVar25[0] = -(pbVar17[10] == 99);
      auVar25[1] = -(pbVar17[0xb] == 0x75);
      auVar25[2] = -(pbVar17[0xc] == 0x6d);
      auVar25[3] = -(pbVar17[0xd] == 0x65);
      auVar25[4] = -(pbVar17[0xe] == 0x6e);
      auVar25[5] = -(pbVar17[0xf] == 0x74);
      auVar25[6] = -(pbVar17[0x10] == 0x61);
      auVar25[7] = -(pbVar17[0x11] == 0x74);
      auVar25[8] = -(pbVar17[0x12] == 0x69);
      auVar25[9] = -(pbVar17[0x13] == 0x6f);
      auVar25[10] = -(pbVar17[0x14] == 0x6e);
      auVar25[0xb] = -(pbVar17[0x15] == 0x5f);
      auVar25[0xc] = -(pbVar17[0x16] == 0x74);
      auVar25[0xd] = -(pbVar17[0x17] == 0x61);
      auVar25[0xe] = -(pbVar17[0x18] == 0x67);
      auVar25[0xf] = -(pbVar17[0x19] == 0x5d);
      auVar25 = auVar25 & auVar23;
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
LAB_0e9b8929:
    if (iStack_f8 == 0) {
      if ((*(int *)(lVar20 + 0x60) != -0x2b3da790) || (*(long *)(lVar20 + 0x68) == 0))
      goto LAB_0e9b8999;
      lVar20 = *(long *)(lVar20 + 0x68) + 0x38;
    }
    else {
      auStack_298._0_8_ = func_0x048b0c90(lVar18,lVar20,uStack_f4,1);
      if (auStack_298._0_8_ == 0) {
        auStack_298 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_298);
        if (auStack_298._0_8_ == 0) goto LAB_0e9b8999;
      }
      if ((*(int *)(auStack_298._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_298._0_8_ + 0x58) != 0)) {
        lVar20 = *(long *)(auStack_298._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e9b8999:
        lVar20 = 0;
      }
    }
    plStack_1b0 = (long *)&UNK_0488e0b0;
    pcStack_1a8 = (code *)0x0;
    uStack_1a0 = CONCAT35(uStack_1a0._5_3_,0x48b5725f);
    uStack_1c0 = 0;
    auStack_298 = (undefined1  [16])0x0;
    auStack_280 = ZEXT816(0x488e0b0);
    auStack_270._0_5_ = 0x48b5725f;
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_013bbadf;
    uStack_158 = 0x21;
    uStack_150 = 0x1a;
    *(ulong *)((long)puVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar19 + 0x12) = uVar15;
    uVar15 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar19 = _DAT_013bbacd;
    puVar19[1] = uVar15;
    *(undefined1 *)((long)puVar19 + 0x1a) = 0;
    puStack_148 = puVar19;
    lVar20 = func_0x048b5060(lVar20,&uStack_158);
    *(undefined8 *)(lVar20 + 0x20) = 0;
    if ((undefined1 *)(lVar20 + 0x20) == auStack_298) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar20 + 0x28);
        (**(code **)(lVar20 + 0x40))(puVar19);
        if (auStack_270[4] != '\0') {
          if (auStack_270[4] == '\x02') {
            (*(code *)auStack_280._0_8_)(5,auStack_298 + 8,puVar19);
          }
          else {
            uVar15 = auStack_298._8_8_;
            auStack_298._8_8_ = 0;
            *puVar19 = uVar15;
          }
        }
      }
      *(undefined8 *)(lVar20 + 0x38) = auStack_280._0_8_;
      *(undefined8 *)(lVar20 + 0x40) = auStack_280._8_8_;
      *(undefined4 *)(lVar20 + 0x48) = auStack_270._0_4_;
      *(char *)(lVar20 + 0x4c) = auStack_270[4];
      pcVar12 = (code *)auStack_280._8_8_;
    }
    if ((uStack_158 & 1) != 0) {
      func_0x0412a280(puStack_148,uStack_158 & 0xfffffffffffffffe);
      pcVar12 = (code *)auStack_280._8_8_;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_298 + 8);
    }
    if (pcStack_1a8 != (code *)0x0) {
      (*pcStack_1a8)(&uStack_1c0);
    }
  }
  else {
    iVar8 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0e9b8929;
  }
  uStack_c8 = uStack_100;
  puStack_d8 = puStack_110;
  uStack_d0 = uStack_108;
  uStack_e8 = uStack_120;
  uStack_e0 = uStack_118;
  uStack_158 = uStack_120;
  uStack_150 = uStack_118;
  puStack_148 = puStack_110;
  uStack_140 = uStack_108;
  uStack_138 = uStack_100;
  if ((DAT_0f6e6bb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6e6bb0), iVar8 != 0)) {
    func_0x0c4c2cd0(0xf6e6b98);
    FUN_0410844d(&DAT_0f6e6bb0);
  }
  uStack_130 = 0xc6ae08df00000001;
  lVar20 = uStack_158 + 0x18;
  auStack_298._0_8_ = func_0x0c4c2d40(lVar20);
  auStack_298._8_8_ = lVar20;
  func_0x0ed621a0(auStack_298,uStack_130._4_4_);
  auStack_298._0_2_ = 1;
  auStack_298._8_8_ = &uStack_150;
  uStack_288 = uStack_130._4_4_;
  auStack_280 = ZEXT816(0);
  auStack_270 = ZEXT816(0);
  lStack_260 = 0;
  uStack_258 = 0x2a;
  uStack_257 = (undefined7)_DAT_012ed459;
  uStack_250 = (undefined1)((ulong)_DAT_012ed459 >> 0x38);
  uStack_24f = (undefined5)_UNK_012ed461;
  uStack_24a = 0x6572;
  uStack_248 = 0x73;
  uStack_247 = 0x73646c6f68;
  uStack_242 = 0;
  auStack_240 = ZEXT816(0);
  lStack_230 = 0;
  auStack_228 = ZEXT816(0);
  lStack_218 = 0;
  uStack_210 = 0x3f600000;
  FUN_048afb10(auStack_240,8);
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  auStack_208 = (undefined1  [16])0x0;
  uStack_1d8 = 0xff00;
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  uStack_1d0 = uStack_1d0 & 0xffffff00;
  uStack_1cc = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f4dab80;
  uVar15 = auStack_280._0_8_;
  auStack_280._0_8_ = puVar19;
  if ((long *)uVar15 != (long *)0x0) {
    (**(code **)(*(long *)uVar15 + 8))();
  }
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uStack_288);
  plStack_1b8 = (long *)0x0;
  plStack_1b0 = (long *)((ulong)plStack_1b0 & 0xffffffff00000000);
  pcStack_1a8 = (code *)0x1;
  uStack_1a0 = 0;
  puStack_198 = &UNK_0eb569f0;
  puStack_190 = &SUB_048b06d0;
  puStack_188 = &UNK_0eb557b0;
  puStack_180 = &UNK_0eb56ab0;
  puStack_178 = &UNK_0eb56cc0;
  uStack_170 = 0;
  auStack_168 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_298._8_8_,&uStack_1c0);
  uVar15 = auStack_168._8_8_;
  if ((long *)auStack_168._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_168._8_8_ + 8);
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
      func_0x0412c2d0(uVar15);
    }
  }
  uVar15 = auStack_298._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,_DAT_0f550a0c);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar14 + 1) = (undefined1  [16])0x0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_1b8 = plVar14 + 3;
  uVar4 = auStack_280._0_8_;
  uVar5 = auStack_280._8_8_;
  auStack_280 = (undefined1  [16])0x0;
  plVar14[3] = uVar4;
  plVar14[4] = uVar5;
  plVar14[7] = lStack_260;
  plVar14[5] = auStack_270._0_8_;
  plVar14[6] = auStack_270._8_8_;
  auStack_270 = (undefined1  [16])0x0;
  lStack_260 = 0;
  plVar14[10] = CONCAT17(uStack_241,CONCAT16(uStack_242,CONCAT51(uStack_247,uStack_248)));
  plVar14[8] = CONCAT71(uStack_257,uStack_258);
  plVar14[9] = CONCAT26(uStack_24a,CONCAT51(uStack_24f,uStack_250));
  uStack_258 = 0;
  uStack_257 = 0;
  uStack_250 = 0;
  uStack_24f = 0;
  uStack_24a = 0;
  uStack_248 = 0;
  uStack_247 = 0;
  uStack_242 = 0;
  uStack_241 = 0;
  plVar14[0xb] = auStack_240._0_8_;
  plVar14[0xc] = auStack_240._8_8_;
  plVar14[0xd] = lStack_230;
  auStack_240 = (undefined1  [16])0x0;
  lStack_230 = 0;
  plVar14[0xe] = auStack_228._0_8_;
  plVar14[0xf] = auStack_228._8_8_;
  plVar14[0x10] = lStack_218;
  auStack_228 = (undefined1  [16])0x0;
  lStack_218 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_210;
  plVar14[0x12] = auStack_208._0_8_;
  plVar14[0x13] = auStack_208._8_8_;
  plVar14[0x14] = lStack_1f8;
  auStack_208 = (undefined1  [16])0x0;
  lStack_1f8 = 0;
  plVar14[0x17] = lStack_1e0;
  plVar14[0x15] = lStack_1f0;
  plVar14[0x16] = lStack_1e8;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_1cc,CONCAT43(uStack_1d0,uStack_1d4._1_3_));
  plVar14[0x18] = CONCAT44(uStack_1d4,CONCAT22(uStack_1d6,uStack_1d8));
  auStack_a8 = (undefined1  [16])0x0;
  plStack_1b0 = plVar14;
  func_0x048afd20(uVar15,&uStack_1c0);
  plVar14 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1b0 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plVar14);
    }
  }
  uVar4 = auStack_a8._8_8_;
  if ((long *)auStack_a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_a8._8_8_ + 8);
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*(long *)auStack_a8._8_8_ + 0x10))(auStack_a8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  uVar16 = uStack_158;
  lVar20 = *(long *)(uVar15 + 0x10);
  iVar8 = *(int *)(uVar15 + 0x1c);
  if (iVar8 == 2) {
    piVar13 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != *(int *)(uVar15 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar15 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | auStack_298._0_4_ << 0x10;
      }
      goto LAB_0e9b90ed;
    }
    piVar13 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
    iVar8 = *piVar13;
    while (iVar8 != *(int *)(uVar15 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar8 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | auStack_298._0_4_ << 0x10;
LAB_0e9b90ed:
  iVar8 = (int)uStack_130;
  uVar6 = uStack_130._4_4_;
  func_0x048b0bc0(auStack_280);
  if (iVar8 == 4) {
    lVar20 = uVar16 + 0x18;
    uVar15 = func_0x0c4c2d40(lVar20);
    lVar20 = FUN_048b1040(lVar20,uVar15,uVar6,1);
    if (lVar20 == 0) {
      auStack_298 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_298);
      lVar18 = *(long *)(auStack_298._0_8_ + 0x38);
      lVar20 = auStack_298._0_8_;
    }
    else {
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    if (lVar18 != 0) goto LAB_0e9b9205;
    auStack_298 = (undefined1  [16])0x0;
    func_0x048b10d0(auStack_298);
    lVar7 = auStack_298._0_8_;
    while (lVar18 = lVar7, lVar18 != 0) {
LAB_0e9b9205:
      lVar20 = lVar18;
      lVar7 = *(long *)(lVar18 + 0x38);
      if (*(long *)(lVar18 + 0x38) == 0) {
        auStack_298 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_298);
        lVar7 = auStack_298._0_8_;
      }
    }
    lVar20 = *(long *)(lVar20 + 0x48);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar8 != 1) {
      return;
    }
    lVar20 = uVar16 + 0x18;
    uVar15 = func_0x0c4c2d40(lVar20);
    lVar20 = func_0x048b0c90(lVar20,uVar15,uVar6,1);
    if (lVar20 == 0) {
      auStack_298 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_298);
      lVar20 = auStack_298._0_8_;
    }
    lVar20 = *(long *)(lVar20 + 0x58);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar19[1] = 0xffffffffffffffff;
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 0xff;
  *puVar19 = &UNK_0f4e3cf0;
  puVar19[4] = 1;
  *(undefined1 (*) [16])(puVar19 + 5) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar19 + 7) = 0;
  plVar14 = *(long **)(lVar20 + 8);
  *(undefined8 **)(lVar20 + 8) = puVar19;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x12ed459  durability_thresholds
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
