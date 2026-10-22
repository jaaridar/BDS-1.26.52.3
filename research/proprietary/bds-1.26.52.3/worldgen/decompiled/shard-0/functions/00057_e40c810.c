/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe50c810 (ELF vaddr 0xe40c810)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e50c810, 0e50ca81] [0e50ca90, 0e50d811] [0e50d820, 0e50e091] [0e50e0a0, 0e50e341] [0e50e350, 0e50eb41] [0e50eb50, 0e50ee21] [0e50ee30, 0e50f621] [0e50f630, 0e50f8e1] [0e50f8f0, 0e5100d1] [0e5100e0, 0e510902]]
 * Ghidra: FUN_0e50c810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e50c810(long param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_2f8 [16];
  uint uStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined1 uStack_2ae;
  undefined2 uStack_2ad;
  undefined1 uStack_2ab;
  undefined2 uStack_2aa;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 uStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined2 uStack_238;
  undefined2 uStack_236;
  uint uStack_234;
  uint uStack_230;
  undefined1 uStack_22c;
  ulong uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  int iStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  undefined1 uStack_130;
  uint7 uStack_12f;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  int iStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined5 uStack_b5;
  undefined1 uStack_b0;
  undefined5 uStack_af;
  undefined3 uStack_aa;
  undefined5 uStack_a7;
  undefined1 uStack_a2;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined2 uStack_91;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined2 uStack_79;
  undefined6 uStack_77;
  undefined1 uStack_71;
  ulong uStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((DAT_0f75b678 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b678), iVar9 != 0)) {
    func_0x0e63c920();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b5f8,0xf53dab8);
    func_0x0410844d(&DAT_0f75b678);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75b5f8 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50c880;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b5f8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e50c880:
    puVar11 = &DAT_0f75b5f8;
    if (iRam000000000f75b658 != -0x2b3da790) goto LAB_0e50c8d8;
LAB_0e50c8ab:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0e50c8d8;
    bVar25 = (*(byte *)(lVar24 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar24 + 9);
    if (bVar25) {
      puVar11 = *(undefined **)(lVar24 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar24 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e50c8ab;
LAB_0e50c8d8:
    puVar11 = &UNK_011cee5e;
    uVar21 = 0x12;
  }
  func_0x0e63cd60(&plStack_168,param_1,puVar11,uVar21);
  uVar4 = uStack_134;
  uVar3 = uStack_13c;
  iVar9 = iStack_140;
  plVar16 = plStack_168;
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = 0;
  if ((char)uStack_138 == '\0') {
    plStack_58 = plStack_160;
    plStack_50 = plStack_158;
    plStack_48 = plStack_150;
    plStack_40 = plStack_148;
    uStack_68 = CONCAT44(uVar4,uStack_138) & 0xffffff00ffffffff;
    lStack_60 = (ulong)uStack_12f << 8;
    if ((DAT_0f75b678 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b678), iVar8 != 0)) {
      func_0x0e63c920();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b5f8,0xf53dab8);
      func_0x0410844d(&DAT_0f75b678);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b5f8 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50c9c0;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b5f8 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50c9c0:
      puVar11 = &DAT_0f75b5f8;
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) {
LAB_0e50ca6e:
        do {
          bVar1 = *pbVar17;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e50ca9a;
          }
          else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e50ca9a:
            if ((bVar1 & 1) == 0) {
              pbVar20 = pbVar17 + 1;
            }
            else {
              pbVar20 = *(byte **)(pbVar17 + 0x10);
            }
            auVar26[0] = -(*pbVar20 == 0x5b);
            auVar26[1] = -(pbVar20[1] == 99);
            auVar26[2] = -(pbVar20[2] == 0x65);
            auVar26[3] = -(pbVar20[3] == 0x72);
            auVar26[4] = -(pbVar20[4] == 0x65);
            auVar26[5] = -(pbVar20[5] == 0x61);
            auVar26[6] = -(pbVar20[6] == 0x6c);
            auVar26[7] = -(pbVar20[7] == 0x3a);
            auVar26[8] = -(pbVar20[8] == 100);
            auVar26[9] = -(pbVar20[9] == 0x6f);
            auVar26[10] = -(pbVar20[10] == 99);
            auVar26[0xb] = -(pbVar20[0xb] == 0x75);
            auVar26[0xc] = -(pbVar20[0xc] == 0x6d);
            auVar26[0xd] = -(pbVar20[0xd] == 0x65);
            auVar26[0xe] = -(pbVar20[0xe] == 0x6e);
            auVar26[0xf] = -(pbVar20[0xf] == 0x74);
            auVar31[0] = -(pbVar20[10] == 99);
            auVar31[1] = -(pbVar20[0xb] == 0x75);
            auVar31[2] = -(pbVar20[0xc] == 0x6d);
            auVar31[3] = -(pbVar20[0xd] == 0x65);
            auVar31[4] = -(pbVar20[0xe] == 0x6e);
            auVar31[5] = -(pbVar20[0xf] == 0x74);
            auVar31[6] = -(pbVar20[0x10] == 0x61);
            auVar31[7] = -(pbVar20[0x11] == 0x74);
            auVar31[8] = -(pbVar20[0x12] == 0x69);
            auVar31[9] = -(pbVar20[0x13] == 0x6f);
            auVar31[10] = -(pbVar20[0x14] == 0x6e);
            auVar31[0xb] = -(pbVar20[0x15] == 0x5f);
            auVar31[0xc] = -(pbVar20[0x16] == 0x74);
            auVar31[0xd] = -(pbVar20[0x17] == 0x61);
            auVar31[0xe] = -(pbVar20[0x18] == 0x67);
            auVar31[0xf] = -(pbVar20[0x19] == 0x5d);
            auVar31 = auVar31 & auVar26;
            if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar17 = pbVar17 + 0x38;
        } while (pbVar17 != pbVar18);
      }
    }
    else {
      puVar11 = (undefined *)plVar14[2];
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) goto LAB_0e50ca6e;
    }
    if (pbVar17 == pbVar18) {
LAB_0e50caca:
      if (iVar9 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e50cb47;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)func_0x048aead0(plVar16 + 3);
        }
        auStack_2f8._0_8_ = func_0x048b0c90(plVar16 + 3,puVar11,uVar3,1);
        if (auStack_2f8._0_8_ == 0) {
          auStack_2f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_2f8);
          if (auStack_2f8._0_8_ == 0) goto LAB_0e50cb47;
        }
        if ((*(int *)(auStack_2f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_2f8._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_2f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e50cb47:
          lVar24 = 0;
        }
      }
      plStack_210 = (long *)&UNK_0488e0b0;
      uStack_208 = (code *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x48b5725f);
      uStack_220 = 0;
      auStack_2f8 = (undefined1  [16])0x0;
      pcStack_2e0 = (code *)&UNK_0488e0b0;
      pcStack_2d8 = (code *)0x0;
      uStack_2d0 = CONCAT35(uStack_2d0._5_3_,0x48b5725f);
      plStack_1a8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plStack_1a8 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      plStack_1b8 = (long *)0x21;
      plStack_1b0 = (long *)0x1a;
      *(ulong *)((long)plStack_1a8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plStack_1a8 + 0x12) = uVar5;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plStack_1a8 = _DAT_013bbacd;
      plStack_1a8[1] = lVar19;
      *(undefined1 *)((long)plStack_1a8 + 0x1a) = 0;
      lVar24 = func_0x048b5060(lVar24,&plStack_1b8);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_2f8) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_2d0._4_1_ != '\0') {
            if (uStack_2d0._4_1_ == '\x02') {
              (*pcStack_2e0)(5,auStack_2f8 + 8,puVar23);
            }
            else {
              uVar5 = auStack_2f8._8_8_;
              auStack_2f8._8_8_ = 0;
              *puVar23 = uVar5;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_2e0;
        *(code **)(lVar24 + 0x40) = pcStack_2d8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_2d0;
        *(char *)(lVar24 + 0x4c) = uStack_2d0._4_1_;
        pcVar15 = pcStack_2d8;
      }
      if (((ulong)plStack_1b8 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_1a8,(ulong)plStack_1b8 & 0xfffffffffffffffe);
        pcVar15 = pcStack_2d8;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(auStack_2f8 + 8);
      }
      if (uStack_208 != (code *)0x0) {
        (*uStack_208)(&uStack_220);
      }
    }
    else {
      iVar8 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e50caca;
    }
    plStack_128 = plVar16;
    plStack_120 = plStack_58;
    plStack_118 = plStack_50;
    plStack_110 = plStack_48;
    plStack_108 = plStack_40;
    iStack_100 = iVar9;
    uStack_fc = uVar3;
    uStack_f8 = (undefined4)uStack_68;
    iStack_f4 = (int)(uStack_68 >> 0x20);
    uStack_f0 = (undefined4)lStack_60;
    uStack_ec = (undefined4)((ulong)lStack_60 >> 0x20);
    func_0x0e6405e0(auStack_2f8,&UNK_0145a6b7,7);
    uVar21 = uStack_2d0 >> 1 & 0x7f;
    lVar24 = (long)&uStack_2d0 + 1;
    if ((uStack_2d0 & 1) != 0) {
      uVar21 = uStack_2c8;
      lVar24 = lStack_2c0;
    }
    if (uVar21 == 0) {
      uStack_fc = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uStack_fc = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_fc = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar24 + 3 + uVar22) ^
                      ((int)*(char *)(lVar24 + 2 + uVar22) ^
                      ((int)*(char *)(lVar24 + 1 + uVar22) ^
                      ((int)*(char *)(lVar24 + uVar22) ^ uStack_fc) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_fc = ((int)*(char *)(lVar24 + uVar22 + uVar21) ^ uStack_fc) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    iStack_100 = 2;
    if ((DAT_0f75b698 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b698), iVar9 != 0)) {
      func_0x0e63ca30();
      func_0x0410844d(&DAT_0f75b698);
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,uStack_fc);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)CONCAT44(plStack_210._4_4_,3);
    uStack_208 = (code *)0x1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_0e640bc0;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0e63c860;
    puStack_1e0 = &UNK_0e640c80;
    puStack_1d8 = &UNK_0e640c90;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(&plStack_120,&uStack_220);
    plVar16 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1c0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    plStack_1a8 = plStack_110;
    plStack_1a0 = plStack_108;
    plStack_1b8 = plStack_120;
    plStack_1b0 = plStack_118;
    func_0x0e640950(&uStack_220,&plStack_1b8,auStack_2f8);
    if (uStack_208._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_210 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_208) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar24 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar24 != plStack_218) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar24 = *(long *)(piVar13 + 0xc);
      }
LAB_0e50cfcf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_208._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_210 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_208) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0e50cfcf;
      }
      if (uStack_208._4_4_ == 0) {
        *(uint *)((long)plStack_210 + 0x18) = *(uint *)((long)plStack_210 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_f0 == '\0') {
      func_0x0e640ce0(&uStack_220,&plStack_128);
    }
    iVar9 = iStack_f4;
    plVar16 = plStack_128;
    if ((DAT_0f75b678 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b678), iVar8 != 0)) {
      func_0x0e63c920();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b5f8,0xf53dab8);
      func_0x0410844d(&DAT_0f75b678);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b5f8 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50d070;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b5f8 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50d070:
      puVar11 = &DAT_0f75b5f8;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar2 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar2 && (*piVar13 != iVar9)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar2) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014c416d),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    FUN_05d9c620(piVar13 + 2,&uStack_fc,&uStack_fc,&uStack_220);
    plStack_1b8 = plStack_128;
    plStack_1b0 = plStack_120;
    plStack_1a8 = plStack_118;
    plStack_1a0 = plStack_110;
    plStack_198 = plStack_108;
    uStack_190 = iStack_100;
    uStack_18c = uStack_fc;
    uStack_188 = uStack_f8;
    uStack_184 = iStack_f4;
    uStack_180 = uStack_f0;
    FUN_048b0bc0(auStack_2f8);
    func_0x0e6405e0(auStack_2f8,&UNK_01442d2a,8);
    uVar21 = uStack_2d0 >> 1 & 0x7f;
    lVar24 = (long)&uStack_2d0 + 1;
    if ((uStack_2d0 & 1) != 0) {
      uVar21 = uStack_2c8;
      lVar24 = lStack_2c0;
    }
    if (uVar21 == 0) {
      uStack_18c = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_18c = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_18c = ((int)*(char *)(lVar24 + 3 + uVar22) ^
                       ((int)*(char *)(lVar24 + 2 + uVar22) ^
                       ((int)*(char *)(lVar24 + 1 + uVar22) ^
                       ((int)*(char *)(lVar24 + uVar22) ^ uStack_18c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_18c = ((int)*(char *)(lVar24 + uVar22 + uVar21) ^ uStack_18c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    uStack_190 = 2;
    if ((DAT_0f75b698 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b698), iVar9 != 0)) {
      func_0x0e63ca30();
      func_0x0410844d(&DAT_0f75b698);
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,uStack_18c);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)CONCAT44(plStack_210._4_4_,3);
    uStack_208 = (code *)0x1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_0e640bc0;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0e63c860;
    puStack_1e0 = &UNK_0e640ea0;
    puStack_1d8 = &UNK_0e640eb0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(&plStack_1b0,&uStack_220);
    plVar16 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1c0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    plStack_d8 = plStack_1a0;
    plStack_d0 = plStack_198;
    plStack_e8 = plStack_1b0;
    plStack_e0 = plStack_1a8;
    func_0x0e640950(&uStack_220,&plStack_e8,auStack_2f8);
    if (uStack_208._4_4_ == 2) {
      piVar13 = *(int **)(plStack_210[0xf] + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_208) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      plVar16 = *(long **)(piVar13 + 0xc);
      while (plVar16 != plStack_218) {
        piVar13 = *(int **)(piVar13 + 0xe);
        plVar16 = *(long **)(piVar13 + 0xc);
      }
LAB_0e50d42f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_208._4_4_ == 1) {
        piVar13 = *(int **)(plStack_210[0xf] + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_208) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0e50d42f;
      }
      if (uStack_208._4_4_ == 0) {
        *(uint *)(plStack_210 + 3) = *(uint *)(plStack_210 + 3) | 0x90000;
      }
    }
    if ((char)uStack_180 == '\0') {
      func_0x0e640ce0(&uStack_220,&plStack_1b8);
    }
    uVar3 = uStack_184;
    plVar16 = plStack_1b8;
    if ((DAT_0f75b678 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b678), iVar9 != 0)) {
      func_0x0e63c920();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b5f8,0xf53dab8);
      func_0x0410844d(&DAT_0f75b678);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b5f8 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50d4d0;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b5f8 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50d4d0:
      puVar11 = &DAT_0f75b5f8;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar2 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar2 && (*piVar13 != uVar3)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar2) &&
       (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014c416d),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    FUN_05d9c620(piVar13 + 2,&uStack_18c,&uStack_18c,&uStack_220);
    FUN_048b0bc0(auStack_2f8);
  }
  uStack_80 = 0x1c;
  uStack_7f = 0x726f68636e41;
  uStack_79 = 0x6241;
  uStack_77 = 0x6574756c6f73;
  uStack_71 = 0;
  if ((DAT_0f75b730 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b730), iVar9 != 0)) {
    func_0x0e640fc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b6b0,0xf53dab8);
    func_0x0410844d(&DAT_0f75b730);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75b6b0 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50d610;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b6b0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e50d610:
    puVar11 = &DAT_0f75b6b0;
    if (iRam000000000f75b710 != -0x2b3da790) goto LAB_0e50d67d;
LAB_0e50d63b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0e50d67d;
    bVar25 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0e6413d0(&plStack_168,param_1,lVar19,uVar21);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e50d63b;
LAB_0e50d67d:
    func_0x0e6413d0(&plStack_168,param_1,&uStack_7f,0xe);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  plStack_168 = plVar16;
  iStack_140 = iVar9;
  uStack_13c = uVar3;
  if ((char)uStack_138 == '\0') {
    uStack_170 = CONCAT44(uStack_134,uStack_138);
    plStack_128 = plStack_160;
    plStack_120 = plStack_158;
    plStack_118 = plStack_150;
    plStack_110 = plStack_148;
    if ((DAT_0f75b730 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b730), iVar8 != 0)) {
      func_0x0e640fc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b6b0,0xf53dab8);
      func_0x0410844d(&DAT_0f75b730);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b6b0 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50d750;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b6b0 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50d750:
      puVar11 = &DAT_0f75b6b0;
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) {
LAB_0e50d7fe:
        do {
          bVar1 = *pbVar17;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e50d82a;
          }
          else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e50d82a:
            if ((bVar1 & 1) == 0) {
              pbVar20 = pbVar17 + 1;
            }
            else {
              pbVar20 = *(byte **)(pbVar17 + 0x10);
            }
            auVar27[0] = -(*pbVar20 == 0x5b);
            auVar27[1] = -(pbVar20[1] == 99);
            auVar27[2] = -(pbVar20[2] == 0x65);
            auVar27[3] = -(pbVar20[3] == 0x72);
            auVar27[4] = -(pbVar20[4] == 0x65);
            auVar27[5] = -(pbVar20[5] == 0x61);
            auVar27[6] = -(pbVar20[6] == 0x6c);
            auVar27[7] = -(pbVar20[7] == 0x3a);
            auVar27[8] = -(pbVar20[8] == 100);
            auVar27[9] = -(pbVar20[9] == 0x6f);
            auVar27[10] = -(pbVar20[10] == 99);
            auVar27[0xb] = -(pbVar20[0xb] == 0x75);
            auVar27[0xc] = -(pbVar20[0xc] == 0x6d);
            auVar27[0xd] = -(pbVar20[0xd] == 0x65);
            auVar27[0xe] = -(pbVar20[0xe] == 0x6e);
            auVar27[0xf] = -(pbVar20[0xf] == 0x74);
            auVar32[0] = -(pbVar20[10] == 99);
            auVar32[1] = -(pbVar20[0xb] == 0x75);
            auVar32[2] = -(pbVar20[0xc] == 0x6d);
            auVar32[3] = -(pbVar20[0xd] == 0x65);
            auVar32[4] = -(pbVar20[0xe] == 0x6e);
            auVar32[5] = -(pbVar20[0xf] == 0x74);
            auVar32[6] = -(pbVar20[0x10] == 0x61);
            auVar32[7] = -(pbVar20[0x11] == 0x74);
            auVar32[8] = -(pbVar20[0x12] == 0x69);
            auVar32[9] = -(pbVar20[0x13] == 0x6f);
            auVar32[10] = -(pbVar20[0x14] == 0x6e);
            auVar32[0xb] = -(pbVar20[0x15] == 0x5f);
            auVar32[0xc] = -(pbVar20[0x16] == 0x74);
            auVar32[0xd] = -(pbVar20[0x17] == 0x61);
            auVar32[0xe] = -(pbVar20[0x18] == 0x67);
            auVar32[0xf] = -(pbVar20[0x19] == 0x5d);
            auVar32 = auVar32 & auVar27;
            if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar17 = pbVar17 + 0x38;
        } while (pbVar17 != pbVar18);
      }
    }
    else {
      puVar11 = (undefined *)plVar14[2];
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) goto LAB_0e50d7fe;
    }
    if (pbVar17 == pbVar18) {
LAB_0e50d85a:
      if (iVar9 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e50d8d7;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)func_0x048aead0(plVar16 + 3);
        }
        auStack_2f8._0_8_ = func_0x048b0c90(plVar16 + 3,puVar11,uVar3,1);
        if (auStack_2f8._0_8_ == 0) {
          auStack_2f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_2f8);
          if (auStack_2f8._0_8_ == 0) goto LAB_0e50d8d7;
        }
        if ((*(int *)(auStack_2f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_2f8._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_2f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e50d8d7:
          lVar24 = 0;
        }
      }
      plStack_210 = (long *)&UNK_0488e0b0;
      uStack_208 = (code *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x48b5725f);
      uStack_220 = 0;
      auStack_2f8 = (undefined1  [16])0x0;
      pcStack_2e0 = (code *)&UNK_0488e0b0;
      pcStack_2d8 = (code *)0x0;
      uStack_2d0 = CONCAT35(uStack_2d0._5_3_,0x48b5725f);
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      plStack_1b8 = (long *)0x21;
      plStack_1b0 = (long *)0x1a;
      *(ulong *)((long)plVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar14 + 0x12) = uVar5;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar14 = _DAT_013bbacd;
      plVar14[1] = lVar19;
      *(undefined1 *)((long)plVar14 + 0x1a) = 0;
      plStack_1a8 = plVar14;
      lVar24 = func_0x048b5060(lVar24,&plStack_1b8);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_2f8) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_2d0._4_1_ != '\0') {
            if (uStack_2d0._4_1_ == '\x02') {
              (*pcStack_2e0)(5,auStack_2f8 + 8,puVar23);
            }
            else {
              uVar5 = auStack_2f8._8_8_;
              auStack_2f8._8_8_ = 0;
              *puVar23 = uVar5;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_2e0;
        *(code **)(lVar24 + 0x40) = pcStack_2d8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_2d0;
        *(char *)(lVar24 + 0x4c) = uStack_2d0._4_1_;
        pcVar15 = pcStack_2d8;
      }
      if (((ulong)plStack_1b8 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_1a8,(ulong)plStack_1b8 & 0xfffffffffffffffe);
        pcVar15 = pcStack_2d8;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(auStack_2f8 + 8);
      }
      if (uStack_208 != (code *)0x0) {
        (*uStack_208)(&uStack_220);
      }
    }
    else {
      iVar8 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e50d85a;
    }
    plStack_1b0 = plStack_128;
    plStack_1a8 = plStack_120;
    plStack_1a0 = plStack_118;
    plStack_198 = plStack_110;
    uStack_188 = (undefined4)uStack_170;
    uStack_184 = (uint)((ulong)uStack_170 >> 0x20);
    plStack_1b8 = plVar16;
    if ((DAT_0f75b750 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b750), iVar9 != 0)) {
      func_0x0e6410d0();
      func_0x0410844d(&DAT_0f75b750);
    }
    plVar16 = plStack_1b8;
    uStack_190 = 1;
    uStack_18c = 0xdd268bc;
    if ((DAT_0f75b730 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b730), iVar9 != 0)) {
      func_0x0e640fc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b6b0,0xf53dab8);
      func_0x0410844d(&DAT_0f75b730);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b6b0 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50dbe0;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b6b0 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50dbe0:
      auStack_2f8._0_8_ = &DAT_0f75b6b0;
    }
    else {
      auStack_2f8._0_8_ = plVar14[2];
    }
    auStack_2f8._8_8_ = plVar16 + 3;
    func_0x0ed621a0(auStack_2f8,uStack_18c);
    auStack_2f8._0_2_ = 1;
    auStack_2f8._8_8_ = &plStack_1b0;
    uStack_2e8 = uStack_18c;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0x10;
    uStack_2b7 = 0x74756c6f736261;
    uStack_2b0 = 0x65;
    uStack_2af = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    uStack_270 = 0x3f600000;
    func_0x048afb10(&lStack_2a0,8);
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    uStack_238 = 0xff00;
    uStack_234 = uStack_234 & 0xffffff00;
    uStack_230 = uStack_230 & 0xffffff00;
    uStack_22c = 0;
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f0c2a88;
    if (pcStack_2e0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_2e0;
      pcStack_2e0 = pcVar15;
      (**(code **)(lVar24 + 8))();
      pcVar15 = pcStack_2e0;
    }
    pcStack_2e0 = pcVar15;
    uStack_220 = CONCAT44(uStack_220._4_4_,uStack_2e8);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)((ulong)plStack_210 & 0xffffffff00000000);
    uStack_208 = (code *)0x1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_0729f0a0;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0651e820;
    puStack_1e0 = &UNK_0e641ee0;
    puStack_1d8 = &UNK_0e642040;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_220);
    plVar16 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1c0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar5 = auStack_2f8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,_DAT_0f550a0c);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar6 = pcStack_2d8;
    pcVar15 = pcStack_2e0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0ef439d0;
    plStack_218 = plVar16 + 3;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    plVar16[3] = (long)pcVar15;
    plVar16[4] = (long)pcVar6;
    plVar16[7] = lStack_2c0;
    plVar16[5] = uStack_2d0;
    plVar16[6] = uStack_2c8;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    plVar16[10] = lStack_2a8;
    plVar16[8] = CONCAT71(uStack_2b7,uStack_2b8);
    plVar16[9] = CONCAT26(uStack_2aa,
                          CONCAT15(uStack_2ab,
                                   CONCAT23(uStack_2ad,
                                            CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0)))));
    uStack_2b8 = 0;
    uStack_2b7 = 0;
    uStack_2b0 = 0;
    uStack_2af = 0;
    uStack_2ae = 0;
    uStack_2ad = 0;
    uStack_2ab = 0;
    uStack_2aa = 0;
    lStack_2a8 = 0;
    plVar16[0xb] = lStack_2a0;
    plVar16[0xc] = lStack_298;
    plVar16[0xd] = lStack_290;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    plVar16[0xe] = lStack_288;
    plVar16[0xf] = lStack_280;
    plVar16[0x10] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    *(undefined4 *)(plVar16 + 0x11) = uStack_270;
    plVar16[0x12] = lStack_268;
    plVar16[0x13] = lStack_260;
    plVar16[0x14] = lStack_258;
    lStack_268 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    plVar16[0x17] = lStack_240;
    plVar16[0x15] = lStack_250;
    plVar16[0x16] = lStack_248;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    *(ulong *)((long)plVar16 + 0xc5) = CONCAT17(uStack_22c,CONCAT43(uStack_230,uStack_234._1_3_));
    plVar16[0x18] = CONCAT44(uStack_234,CONCAT22(uStack_236,uStack_238));
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_210 = plVar16;
    func_0x048afd20(uVar5,&uStack_220);
    plVar16 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_210 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_e0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        func_0x0412c2d0(plVar16);
      }
    }
    lVar24 = *(long *)(uVar5 + 0x10);
    iVar9 = *(int *)(uVar5 + 0x1c);
    if (iVar9 == 2) {
      piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != *(int *)(uVar5 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar5 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
      }
LAB_0e50e0aa:
      piVar13[4] = piVar13[4] | auStack_2f8._0_4_ << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != *(int *)(uVar5 + 0x18)) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0e50e0aa;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar24 + 0x18) = *(uint *)(lVar24 + 0x18) | auStack_2f8._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&pcStack_2e0);
  }
  bStack_c8 = 0x22;
  uStack_c7 = (undefined7)_DAT_0142752a;
  uStack_c0 = (undefined1)((ulong)_DAT_0142752a >> 0x38);
  uStack_bf = (undefined7)_UNK_01427532;
  uStack_b8 = (undefined1)((ulong)_UNK_01427532 >> 0x38);
  uStack_b7 = 0x6d;
  if ((DAT_0f75b7e8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b7e8), iVar9 != 0)) {
    func_0x0e6422d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b768,0xf53dab8);
    func_0x0410844d(&DAT_0f75b7e8);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75b768 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50e140;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b768 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e50e140:
    puVar11 = &DAT_0f75b768;
    if (iRam000000000f75b7c8 != -0x2b3da790) goto LAB_0e50e1ad;
LAB_0e50e16b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0e50e1ad;
    bVar25 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0e6426e0(&plStack_168,param_1,lVar19,uVar21);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e50e16b;
LAB_0e50e1ad:
    func_0x0e6426e0(&plStack_168,param_1,&uStack_c7,0x11);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  plStack_168 = plVar16;
  iStack_140 = iVar9;
  uStack_13c = uVar3;
  if ((char)uStack_138 == '\0') {
    uStack_170 = CONCAT44(uStack_134,uStack_138);
    plStack_128 = plStack_160;
    plStack_120 = plStack_158;
    plStack_118 = plStack_150;
    plStack_110 = plStack_148;
    if ((DAT_0f75b7e8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b7e8), iVar8 != 0)) {
      func_0x0e6422d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b768,0xf53dab8);
      func_0x0410844d(&DAT_0f75b7e8);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b768 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50e280;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b768 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50e280:
      puVar11 = &DAT_0f75b768;
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) {
LAB_0e50e32e:
        do {
          bVar1 = *pbVar17;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e50e35a;
          }
          else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e50e35a:
            if ((bVar1 & 1) == 0) {
              pbVar20 = pbVar17 + 1;
            }
            else {
              pbVar20 = *(byte **)(pbVar17 + 0x10);
            }
            auVar28[0] = -(*pbVar20 == 0x5b);
            auVar28[1] = -(pbVar20[1] == 99);
            auVar28[2] = -(pbVar20[2] == 0x65);
            auVar28[3] = -(pbVar20[3] == 0x72);
            auVar28[4] = -(pbVar20[4] == 0x65);
            auVar28[5] = -(pbVar20[5] == 0x61);
            auVar28[6] = -(pbVar20[6] == 0x6c);
            auVar28[7] = -(pbVar20[7] == 0x3a);
            auVar28[8] = -(pbVar20[8] == 100);
            auVar28[9] = -(pbVar20[9] == 0x6f);
            auVar28[10] = -(pbVar20[10] == 99);
            auVar28[0xb] = -(pbVar20[0xb] == 0x75);
            auVar28[0xc] = -(pbVar20[0xc] == 0x6d);
            auVar28[0xd] = -(pbVar20[0xd] == 0x65);
            auVar28[0xe] = -(pbVar20[0xe] == 0x6e);
            auVar28[0xf] = -(pbVar20[0xf] == 0x74);
            auVar33[0] = -(pbVar20[10] == 99);
            auVar33[1] = -(pbVar20[0xb] == 0x75);
            auVar33[2] = -(pbVar20[0xc] == 0x6d);
            auVar33[3] = -(pbVar20[0xd] == 0x65);
            auVar33[4] = -(pbVar20[0xe] == 0x6e);
            auVar33[5] = -(pbVar20[0xf] == 0x74);
            auVar33[6] = -(pbVar20[0x10] == 0x61);
            auVar33[7] = -(pbVar20[0x11] == 0x74);
            auVar33[8] = -(pbVar20[0x12] == 0x69);
            auVar33[9] = -(pbVar20[0x13] == 0x6f);
            auVar33[10] = -(pbVar20[0x14] == 0x6e);
            auVar33[0xb] = -(pbVar20[0x15] == 0x5f);
            auVar33[0xc] = -(pbVar20[0x16] == 0x74);
            auVar33[0xd] = -(pbVar20[0x17] == 0x61);
            auVar33[0xe] = -(pbVar20[0x18] == 0x67);
            auVar33[0xf] = -(pbVar20[0x19] == 0x5d);
            auVar33 = auVar33 & auVar28;
            if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar17 = pbVar17 + 0x38;
        } while (pbVar17 != pbVar18);
      }
    }
    else {
      puVar11 = (undefined *)plVar14[2];
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) goto LAB_0e50e32e;
    }
    if (pbVar17 == pbVar18) {
LAB_0e50e38a:
      if (iVar9 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e50e407;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)func_0x048aead0(plVar16 + 3);
        }
        auStack_2f8._0_8_ = func_0x048b0c90(plVar16 + 3,puVar11,uVar3,1);
        if (auStack_2f8._0_8_ == 0) {
          auStack_2f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_2f8);
          if (auStack_2f8._0_8_ == 0) goto LAB_0e50e407;
        }
        if ((*(int *)(auStack_2f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_2f8._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_2f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e50e407:
          lVar24 = 0;
        }
      }
      plStack_210 = (long *)&UNK_0488e0b0;
      uStack_208 = (code *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x48b5725f);
      uStack_220 = 0;
      auStack_2f8 = (undefined1  [16])0x0;
      pcStack_2e0 = (code *)&UNK_0488e0b0;
      pcStack_2d8 = (code *)0x0;
      uStack_2d0 = CONCAT35(uStack_2d0._5_3_,0x48b5725f);
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      plStack_1b8 = (long *)0x21;
      plStack_1b0 = (long *)0x1a;
      *(ulong *)((long)plVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar14 + 0x12) = uVar5;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar14 = _DAT_013bbacd;
      plVar14[1] = lVar19;
      *(undefined1 *)((long)plVar14 + 0x1a) = 0;
      plStack_1a8 = plVar14;
      lVar24 = func_0x048b5060(lVar24,&plStack_1b8);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_2f8) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_2d0._4_1_ != '\0') {
            if (uStack_2d0._4_1_ == '\x02') {
              (*pcStack_2e0)(5,auStack_2f8 + 8,puVar23);
            }
            else {
              uVar5 = auStack_2f8._8_8_;
              auStack_2f8._8_8_ = 0;
              *puVar23 = uVar5;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_2e0;
        *(code **)(lVar24 + 0x40) = pcStack_2d8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_2d0;
        *(char *)(lVar24 + 0x4c) = uStack_2d0._4_1_;
        pcVar15 = pcStack_2d8;
      }
      if (((ulong)plStack_1b8 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_1a8,(ulong)plStack_1b8 & 0xfffffffffffffffe);
        pcVar15 = pcStack_2d8;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(auStack_2f8 + 8);
      }
      if (uStack_208 != (code *)0x0) {
        (*uStack_208)(&uStack_220);
      }
    }
    else {
      iVar8 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e50e38a;
    }
    plStack_1b0 = plStack_128;
    plStack_1a8 = plStack_120;
    plStack_1a0 = plStack_118;
    plStack_198 = plStack_110;
    uStack_188 = (undefined4)uStack_170;
    uStack_184 = (uint)((ulong)uStack_170 >> 0x20);
    plStack_1b8 = plVar16;
    if ((DAT_0f75b808 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b808), iVar9 != 0)) {
      func_0x0e6423e0();
      func_0x0410844d(&DAT_0f75b808);
    }
    plVar16 = plStack_1b8;
    uStack_190 = 1;
    uStack_18c = 0xe7293f50;
    if ((DAT_0f75b7e8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b7e8), iVar9 != 0)) {
      func_0x0e6422d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b768,0xf53dab8);
      func_0x0410844d(&DAT_0f75b7e8);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b768 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50e690;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b768 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50e690:
      auStack_2f8._0_8_ = &DAT_0f75b768;
    }
    else {
      auStack_2f8._0_8_ = plVar14[2];
    }
    auStack_2f8._8_8_ = plVar16 + 3;
    func_0x0ed621a0(auStack_2f8,uStack_18c);
    auStack_2f8._0_2_ = 1;
    auStack_2f8._8_8_ = &plStack_1b0;
    uStack_2e8 = uStack_18c;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0x18;
    uStack_2b7 = 0x625f65766f6261;
    uStack_2b0 = 0x6f;
    uStack_2af = 0x74;
    uStack_2ae = 0x74;
    uStack_2ad = 0x6d6f;
    uStack_2ab = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    uStack_270 = 0x3f600000;
    func_0x048afb10(&lStack_2a0,8);
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    uStack_238 = 0xff00;
    uStack_234 = uStack_234 & 0xffffff00;
    uStack_230 = uStack_230 & 0xffffff00;
    uStack_22c = 0;
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f0c2a88;
    if (pcStack_2e0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_2e0;
      pcStack_2e0 = pcVar15;
      (**(code **)(lVar24 + 8))();
      pcVar15 = pcStack_2e0;
    }
    pcStack_2e0 = pcVar15;
    uStack_220 = CONCAT44(uStack_220._4_4_,uStack_2e8);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)((ulong)plStack_210 & 0xffffffff00000000);
    uStack_208 = (code *)0x1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_0729f0a0;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0651e820;
    puStack_1e0 = &UNK_0e6431f0;
    puStack_1d8 = &UNK_0e643350;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_220);
    plVar16 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1c0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar5 = auStack_2f8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,_DAT_0f550a0c);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar6 = pcStack_2d8;
    pcVar15 = pcStack_2e0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0ef439d0;
    plStack_218 = plVar16 + 3;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    plVar16[3] = (long)pcVar15;
    plVar16[4] = (long)pcVar6;
    plVar16[7] = lStack_2c0;
    plVar16[5] = uStack_2d0;
    plVar16[6] = uStack_2c8;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    plVar16[10] = lStack_2a8;
    plVar16[8] = CONCAT71(uStack_2b7,uStack_2b8);
    plVar16[9] = CONCAT26(uStack_2aa,
                          CONCAT15(uStack_2ab,
                                   CONCAT23(uStack_2ad,
                                            CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0)))));
    uStack_2b8 = 0;
    uStack_2b7 = 0;
    uStack_2b0 = 0;
    uStack_2af = 0;
    uStack_2ae = 0;
    uStack_2ad = 0;
    uStack_2ab = 0;
    uStack_2aa = 0;
    lStack_2a8 = 0;
    plVar16[0xb] = lStack_2a0;
    plVar16[0xc] = lStack_298;
    plVar16[0xd] = lStack_290;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    plVar16[0xe] = lStack_288;
    plVar16[0xf] = lStack_280;
    plVar16[0x10] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    *(undefined4 *)(plVar16 + 0x11) = uStack_270;
    plVar16[0x12] = lStack_268;
    plVar16[0x13] = lStack_260;
    plVar16[0x14] = lStack_258;
    lStack_268 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    plVar16[0x17] = lStack_240;
    plVar16[0x15] = lStack_250;
    plVar16[0x16] = lStack_248;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    *(ulong *)((long)plVar16 + 0xc5) = CONCAT17(uStack_22c,CONCAT43(uStack_230,uStack_234._1_3_));
    plVar16[0x18] = CONCAT44(uStack_234,CONCAT22(uStack_236,uStack_238));
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_210 = plVar16;
    func_0x048afd20(uVar5,&uStack_220);
    plVar16 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_210 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_e0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        func_0x0412c2d0(plVar16);
      }
    }
    lVar24 = *(long *)(uVar5 + 0x10);
    iVar9 = *(int *)(uVar5 + 0x1c);
    if (iVar9 == 2) {
      piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != *(int *)(uVar5 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar5 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
      }
LAB_0e50eb5a:
      piVar13[4] = piVar13[4] | auStack_2f8._0_4_ << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != *(int *)(uVar5 + 0x18)) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0e50eb5a;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar24 + 0x18) = *(uint *)(lVar24 + 0x18) | auStack_2f8._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&pcStack_2e0);
  }
  if ((bStack_c8 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT53(uStack_b5,CONCAT21(uStack_b7,uStack_b8)),
                       CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  uStack_98 = 0x1c;
  uStack_97 = 0x726f68636e41;
  uStack_91 = 0x6542;
  uStack_8f = 0x706f54776f6c;
  uStack_89 = 0;
  if ((DAT_0f75b8a0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b8a0), iVar9 != 0)) {
    func_0x0e6435e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b820,0xf53dab8);
    func_0x0410844d(&DAT_0f75b8a0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75b820 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50ec20;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b820 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e50ec20:
    puVar11 = &DAT_0f75b820;
    if (iRam000000000f75b880 != -0x2b3da790) goto LAB_0e50ec8d;
LAB_0e50ec4b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0e50ec8d;
    bVar25 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0e6439f0(&plStack_168,param_1,lVar19,uVar21);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e50ec4b;
LAB_0e50ec8d:
    func_0x0e6439f0(&plStack_168,param_1,&uStack_97,0xe);
    plVar16 = plStack_168;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
  }
  plStack_168 = plVar16;
  iStack_140 = iVar9;
  uStack_13c = uVar3;
  if ((char)uStack_138 == '\0') {
    uStack_170 = CONCAT44(uStack_134,uStack_138);
    plStack_128 = plStack_160;
    plStack_120 = plStack_158;
    plStack_118 = plStack_150;
    plStack_110 = plStack_148;
    if ((DAT_0f75b8a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b8a0), iVar8 != 0)) {
      func_0x0e6435e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b820,0xf53dab8);
      func_0x0410844d(&DAT_0f75b8a0);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b820 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50ed60;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b820 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50ed60:
      puVar11 = &DAT_0f75b820;
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) {
LAB_0e50ee0e:
        do {
          bVar1 = *pbVar17;
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 == 0x1a) goto LAB_0e50ee3a;
          }
          else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e50ee3a:
            if ((bVar1 & 1) == 0) {
              pbVar20 = pbVar17 + 1;
            }
            else {
              pbVar20 = *(byte **)(pbVar17 + 0x10);
            }
            auVar29[0] = -(*pbVar20 == 0x5b);
            auVar29[1] = -(pbVar20[1] == 99);
            auVar29[2] = -(pbVar20[2] == 0x65);
            auVar29[3] = -(pbVar20[3] == 0x72);
            auVar29[4] = -(pbVar20[4] == 0x65);
            auVar29[5] = -(pbVar20[5] == 0x61);
            auVar29[6] = -(pbVar20[6] == 0x6c);
            auVar29[7] = -(pbVar20[7] == 0x3a);
            auVar29[8] = -(pbVar20[8] == 100);
            auVar29[9] = -(pbVar20[9] == 0x6f);
            auVar29[10] = -(pbVar20[10] == 99);
            auVar29[0xb] = -(pbVar20[0xb] == 0x75);
            auVar29[0xc] = -(pbVar20[0xc] == 0x6d);
            auVar29[0xd] = -(pbVar20[0xd] == 0x65);
            auVar29[0xe] = -(pbVar20[0xe] == 0x6e);
            auVar29[0xf] = -(pbVar20[0xf] == 0x74);
            auVar34[0] = -(pbVar20[10] == 99);
            auVar34[1] = -(pbVar20[0xb] == 0x75);
            auVar34[2] = -(pbVar20[0xc] == 0x6d);
            auVar34[3] = -(pbVar20[0xd] == 0x65);
            auVar34[4] = -(pbVar20[0xe] == 0x6e);
            auVar34[5] = -(pbVar20[0xf] == 0x74);
            auVar34[6] = -(pbVar20[0x10] == 0x61);
            auVar34[7] = -(pbVar20[0x11] == 0x74);
            auVar34[8] = -(pbVar20[0x12] == 0x69);
            auVar34[9] = -(pbVar20[0x13] == 0x6f);
            auVar34[10] = -(pbVar20[0x14] == 0x6e);
            auVar34[0xb] = -(pbVar20[0x15] == 0x5f);
            auVar34[0xc] = -(pbVar20[0x16] == 0x74);
            auVar34[0xd] = -(pbVar20[0x17] == 0x61);
            auVar34[0xe] = -(pbVar20[0x18] == 0x67);
            auVar34[0xf] = -(pbVar20[0x19] == 0x5d);
            auVar34 = auVar34 & auVar29;
            if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar17 = pbVar17 + 0x38;
        } while (pbVar17 != pbVar18);
      }
    }
    else {
      puVar11 = (undefined *)plVar14[2];
      pbVar17 = (byte *)plVar16[10];
      pbVar18 = (byte *)plVar16[0xb];
      if (pbVar17 != pbVar18) goto LAB_0e50ee0e;
    }
    if (pbVar17 == pbVar18) {
LAB_0e50ee6a:
      if (iVar9 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e50eee7;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)func_0x048aead0(plVar16 + 3);
        }
        auStack_2f8._0_8_ = func_0x048b0c90(plVar16 + 3,puVar11,uVar3,1);
        if (auStack_2f8._0_8_ == 0) {
          auStack_2f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_2f8);
          if (auStack_2f8._0_8_ == 0) goto LAB_0e50eee7;
        }
        if ((*(int *)(auStack_2f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_2f8._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_2f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e50eee7:
          lVar24 = 0;
        }
      }
      plStack_210 = (long *)&UNK_0488e0b0;
      uStack_208 = (code *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x48b5725f);
      uStack_220 = 0;
      auStack_2f8 = (undefined1  [16])0x0;
      pcStack_2e0 = (code *)&UNK_0488e0b0;
      pcStack_2d8 = (code *)0x0;
      uStack_2d0 = CONCAT35(uStack_2d0._5_3_,0x48b5725f);
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar5 = _UNK_013bbadf;
      plStack_1b8 = (long *)0x21;
      plStack_1b0 = (long *)0x1a;
      *(ulong *)((long)plVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar14 + 0x12) = uVar5;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar14 = _DAT_013bbacd;
      plVar14[1] = lVar19;
      *(undefined1 *)((long)plVar14 + 0x1a) = 0;
      plStack_1a8 = plVar14;
      lVar24 = func_0x048b5060(lVar24,&plStack_1b8);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_2f8) {
        pcVar15 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_2d0._4_1_ != '\0') {
            if (uStack_2d0._4_1_ == '\x02') {
              (*pcStack_2e0)(5,auStack_2f8 + 8,puVar23);
            }
            else {
              uVar5 = auStack_2f8._8_8_;
              auStack_2f8._8_8_ = 0;
              *puVar23 = uVar5;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_2e0;
        *(code **)(lVar24 + 0x40) = pcStack_2d8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_2d0;
        *(char *)(lVar24 + 0x4c) = uStack_2d0._4_1_;
        pcVar15 = pcStack_2d8;
      }
      if (((ulong)plStack_1b8 & 1) != 0) {
        thunk_FUN_0ee326a0(plStack_1a8,(ulong)plStack_1b8 & 0xfffffffffffffffe);
        pcVar15 = pcStack_2d8;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(auStack_2f8 + 8);
      }
      if (uStack_208 != (code *)0x0) {
        (*uStack_208)(&uStack_220);
      }
    }
    else {
      iVar8 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0e50ee6a;
    }
    plStack_1b0 = plStack_128;
    plStack_1a8 = plStack_120;
    plStack_1a0 = plStack_118;
    plStack_198 = plStack_110;
    uStack_188 = (undefined4)uStack_170;
    uStack_184 = (uint)((ulong)uStack_170 >> 0x20);
    plStack_1b8 = plVar16;
    if ((DAT_0f75b8c0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b8c0), iVar9 != 0)) {
      func_0x0e6436f0();
      func_0x0410844d(&DAT_0f75b8c0);
    }
    plVar16 = plStack_1b8;
    uStack_190 = 1;
    uStack_18c = 0x79c05236;
    if ((DAT_0f75b8a0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b8a0), iVar9 != 0)) {
      func_0x0e6435e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b820,0xf53dab8);
      func_0x0410844d(&DAT_0f75b8a0);
    }
    plVar14 = (long *)(plVar16[3] +
                      (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b820 + 4)) * 8);
    do {
      lVar24 = *plVar14;
      if (lVar24 == -1) goto LAB_0e50f170;
      plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b820 + 4));
    if (plVar14 == (long *)plVar16[7]) {
LAB_0e50f170:
      auStack_2f8._0_8_ = &DAT_0f75b820;
    }
    else {
      auStack_2f8._0_8_ = plVar14[2];
    }
    auStack_2f8._8_8_ = plVar16 + 3;
    func_0x0ed621a0(auStack_2f8,uStack_18c);
    auStack_2f8._0_2_ = 1;
    auStack_2f8._8_8_ = &plStack_1b0;
    uStack_2e8 = uStack_18c;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0x12;
    uStack_2b7 = 0x745f776f6c6562;
    uStack_2b0 = 0x6f;
    uStack_2af = 0x70;
    uStack_2ae = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    uStack_270 = 0x3f600000;
    func_0x048afb10(&lStack_2a0,8);
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    uStack_238 = 0xff00;
    uStack_234 = uStack_234 & 0xffffff00;
    uStack_230 = uStack_230 & 0xffffff00;
    uStack_22c = 0;
    pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar15 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar15 = &UNK_0f0c2a88;
    if (pcStack_2e0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_2e0;
      pcStack_2e0 = pcVar15;
      (**(code **)(lVar24 + 8))();
      pcVar15 = pcStack_2e0;
    }
    pcStack_2e0 = pcVar15;
    uStack_220 = CONCAT44(uStack_220._4_4_,uStack_2e8);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)((ulong)plStack_210 & 0xffffffff00000000);
    uStack_208 = (code *)0x1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_0729f0a0;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_0651e820;
    puStack_1e0 = &UNK_0e644500;
    puStack_1d8 = &UNK_0e644660;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_220);
    plVar16 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_1c0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar5 = auStack_2f8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,_DAT_0f550a0c);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar6 = pcStack_2d8;
    pcVar15 = pcStack_2e0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&UNK_0ef439d0;
    plStack_218 = plVar16 + 3;
    pcStack_2e0 = (code *)0x0;
    pcStack_2d8 = (code *)0x0;
    plVar16[3] = (long)pcVar15;
    plVar16[4] = (long)pcVar6;
    plVar16[7] = lStack_2c0;
    plVar16[5] = uStack_2d0;
    plVar16[6] = uStack_2c8;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    plVar16[10] = lStack_2a8;
    plVar16[8] = CONCAT71(uStack_2b7,uStack_2b8);
    plVar16[9] = CONCAT26(uStack_2aa,
                          CONCAT15(uStack_2ab,
                                   CONCAT23(uStack_2ad,
                                            CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0)))));
    uStack_2b8 = 0;
    uStack_2b7 = 0;
    uStack_2b0 = 0;
    uStack_2af = 0;
    uStack_2ae = 0;
    uStack_2ad = 0;
    uStack_2ab = 0;
    uStack_2aa = 0;
    lStack_2a8 = 0;
    plVar16[0xb] = lStack_2a0;
    plVar16[0xc] = lStack_298;
    plVar16[0xd] = lStack_290;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    plVar16[0xe] = lStack_288;
    plVar16[0xf] = lStack_280;
    plVar16[0x10] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    *(undefined4 *)(plVar16 + 0x11) = uStack_270;
    plVar16[0x12] = lStack_268;
    plVar16[0x13] = lStack_260;
    plVar16[0x14] = lStack_258;
    lStack_268 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    plVar16[0x17] = lStack_240;
    plVar16[0x15] = lStack_250;
    plVar16[0x16] = lStack_248;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    *(ulong *)((long)plVar16 + 0xc5) = CONCAT17(uStack_22c,CONCAT43(uStack_230,uStack_234._1_3_));
    plVar16[0x18] = CONCAT44(uStack_234,CONCAT22(uStack_236,uStack_238));
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_210 = plVar16;
    func_0x048afd20(uVar5,&uStack_220);
    plVar16 = plStack_210;
    if (plStack_210 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_210 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        func_0x0412c2d0(plVar16);
      }
    }
    plVar16 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_e0 + 1;
      lVar24 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        func_0x0412c2d0(plVar16);
      }
    }
    lVar24 = *(long *)(uVar5 + 0x10);
    iVar9 = *(int *)(uVar5 + 0x1c);
    if (iVar9 == 2) {
      piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != *(int *)(uVar5 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar5 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
      }
LAB_0e50f63a:
      piVar13[4] = piVar13[4] | auStack_2f8._0_4_ << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != *(int *)(uVar5 + 0x18)) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0e50f63a;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar24 + 0x18) = *(uint *)(lVar24 + 0x18) | auStack_2f8._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&pcStack_2e0);
  }
  uStack_b0 = 0x1a;
  uStack_af = 0x6f68636e41;
  uStack_aa = 0x724672;
  uStack_a7 = 0x6165536d6f;
  uStack_a2 = 0;
  if ((DAT_0f75b958 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b958), iVar9 != 0)) {
    func_0x0e6448f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b8d8,0xf53dab8);
    func_0x0410844d(&DAT_0f75b958);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75b8d8 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50f6e0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b8d8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e50f6e0:
    puVar11 = &DAT_0f75b8d8;
    if (iRam000000000f75b938 != -0x2b3da790) goto LAB_0e50f74d;
LAB_0e50f70b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0e50f74d;
    bVar25 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar25) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar25) {
      uVar21 = *(ulong *)(lVar24 + 0x10);
    }
    FUN_0e644d00(&plStack_168,param_1,lVar19,uVar21);
    plVar16 = plStack_168;
    plStack_128 = plStack_160;
    plStack_120 = plStack_158;
    plStack_118 = plStack_150;
    plStack_110 = plStack_148;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
    uVar4 = uStack_134;
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e50f70b;
LAB_0e50f74d:
    FUN_0e644d00(&plStack_168,param_1,&uStack_af,0xd);
    plVar16 = plStack_168;
    plStack_128 = plStack_160;
    plStack_120 = plStack_158;
    plStack_118 = plStack_150;
    plStack_110 = plStack_148;
    iVar9 = iStack_140;
    uVar3 = uStack_13c;
    uVar4 = uStack_134;
  }
  if ((char)uStack_138 != '\0') {
    return;
  }
  uStack_134 = uVar4;
  if ((DAT_0f75b958 == '\0') && (iVar8 = func_0x04108328(&DAT_0f75b958), iVar8 != 0)) {
    func_0x0e6448f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b8d8,0xf53dab8);
    func_0x0410844d(&DAT_0f75b958);
  }
  plVar14 = (long *)(plVar16[3] +
                    (ulong)((int)((ulong)(plVar16[4] - plVar16[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f75b8d8 + 4)) * 8);
  do {
    lVar24 = *plVar14;
    if (lVar24 == -1) goto LAB_0e50f820;
    plVar14 = (long *)(plVar16[6] + lVar24 * 0x18);
  } while (*(uint *)(plVar16[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b8d8 + 4));
  if (plVar14 == (long *)plVar16[7]) {
LAB_0e50f820:
    puVar11 = &DAT_0f75b8d8;
    pbVar17 = (byte *)plVar16[10];
    pbVar18 = (byte *)plVar16[0xb];
    if (pbVar17 != pbVar18) {
LAB_0e50f8ce:
      do {
        bVar1 = *pbVar17;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x1a) goto LAB_0e50f8fa;
        }
        else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0e50f8fa:
          if ((bVar1 & 1) == 0) {
            pbVar20 = pbVar17 + 1;
          }
          else {
            pbVar20 = *(byte **)(pbVar17 + 0x10);
          }
          auVar30[0] = -(*pbVar20 == 0x5b);
          auVar30[1] = -(pbVar20[1] == 99);
          auVar30[2] = -(pbVar20[2] == 0x65);
          auVar30[3] = -(pbVar20[3] == 0x72);
          auVar30[4] = -(pbVar20[4] == 0x65);
          auVar30[5] = -(pbVar20[5] == 0x61);
          auVar30[6] = -(pbVar20[6] == 0x6c);
          auVar30[7] = -(pbVar20[7] == 0x3a);
          auVar30[8] = -(pbVar20[8] == 100);
          auVar30[9] = -(pbVar20[9] == 0x6f);
          auVar30[10] = -(pbVar20[10] == 99);
          auVar30[0xb] = -(pbVar20[0xb] == 0x75);
          auVar30[0xc] = -(pbVar20[0xc] == 0x6d);
          auVar30[0xd] = -(pbVar20[0xd] == 0x65);
          auVar30[0xe] = -(pbVar20[0xe] == 0x6e);
          auVar30[0xf] = -(pbVar20[0xf] == 0x74);
          auVar35[0] = -(pbVar20[10] == 99);
          auVar35[1] = -(pbVar20[0xb] == 0x75);
          auVar35[2] = -(pbVar20[0xc] == 0x6d);
          auVar35[3] = -(pbVar20[0xd] == 0x65);
          auVar35[4] = -(pbVar20[0xe] == 0x6e);
          auVar35[5] = -(pbVar20[0xf] == 0x74);
          auVar35[6] = -(pbVar20[0x10] == 0x61);
          auVar35[7] = -(pbVar20[0x11] == 0x74);
          auVar35[8] = -(pbVar20[0x12] == 0x69);
          auVar35[9] = -(pbVar20[0x13] == 0x6f);
          auVar35[10] = -(pbVar20[0x14] == 0x6e);
          auVar35[0xb] = -(pbVar20[0x15] == 0x5f);
          auVar35[0xc] = -(pbVar20[0x16] == 0x74);
          auVar35[0xd] = -(pbVar20[0x17] == 0x61);
          auVar35[0xe] = -(pbVar20[0x18] == 0x67);
          auVar35[0xf] = -(pbVar20[0x19] == 0x5d);
          auVar35 = auVar35 & auVar30;
          if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) break;
        }
        pbVar17 = pbVar17 + 0x38;
      } while (pbVar17 != pbVar18);
    }
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    pbVar17 = (byte *)plVar16[10];
    pbVar18 = (byte *)plVar16[0xb];
    if (pbVar17 != pbVar18) goto LAB_0e50f8ce;
  }
  if (pbVar17 == pbVar18) {
LAB_0e50f92a:
    if (iVar9 == 0) {
      if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e50f9a5;
      lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
    }
    else {
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)func_0x048aead0(plVar16 + 3);
      }
      auStack_2f8._0_8_ = func_0x048b0c90(plVar16 + 3,puVar11,uVar3,1);
      if (auStack_2f8._0_8_ == 0) {
        auStack_2f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2f8);
        if (auStack_2f8._0_8_ == 0) goto LAB_0e50f9a5;
      }
      if ((*(int *)(auStack_2f8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_2f8._0_8_ + 0x58) != 0)) {
        lVar24 = *(long *)(auStack_2f8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e50f9a5:
        lVar24 = 0;
      }
    }
    plStack_210 = (long *)&UNK_0488e0b0;
    uStack_208 = (code *)0x0;
    uStack_200 = CONCAT35(uStack_200._5_3_,0x48b5725f);
    uStack_220 = 0;
    auStack_2f8 = (undefined1  [16])0x0;
    pcStack_2e0 = (code *)&UNK_0488e0b0;
    pcStack_2d8 = (code *)0x0;
    uStack_2d0 = CONCAT35(uStack_2d0._5_3_,0x48b5725f);
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_013bbadf;
    plStack_1b8 = (long *)0x21;
    plStack_1b0 = (long *)0x1a;
    *(ulong *)((long)plVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plVar14 + 0x12) = uVar5;
    lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plVar14 = _DAT_013bbacd;
    plVar14[1] = lVar19;
    *(undefined1 *)((long)plVar14 + 0x1a) = 0;
    plStack_1a8 = plVar14;
    lVar24 = func_0x048b5060(lVar24,&plStack_1b8);
    *(undefined8 *)(lVar24 + 0x20) = 0;
    if ((undefined1 *)(lVar24 + 0x20) == auStack_2f8) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
        puVar23 = (undefined8 *)(lVar24 + 0x28);
        (**(code **)(lVar24 + 0x40))(puVar23);
        if (uStack_2d0._4_1_ != '\0') {
          if (uStack_2d0._4_1_ == '\x02') {
            (*pcStack_2e0)(5,auStack_2f8 + 8,puVar23);
          }
          else {
            uVar5 = auStack_2f8._8_8_;
            auStack_2f8._8_8_ = 0;
            *puVar23 = uVar5;
          }
        }
      }
      *(code **)(lVar24 + 0x38) = pcStack_2e0;
      *(code **)(lVar24 + 0x40) = pcStack_2d8;
      *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_2d0;
      *(char *)(lVar24 + 0x4c) = uStack_2d0._4_1_;
      pcVar15 = pcStack_2d8;
    }
    if (((ulong)plStack_1b8 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_1a8,(ulong)plStack_1b8 & 0xfffffffffffffffe);
      pcVar15 = pcStack_2d8;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(auStack_2f8 + 8);
    }
    if (uStack_208 != (code *)0x0) {
      (*uStack_208)(&uStack_220);
    }
  }
  else {
    iVar8 = *(int *)(pbVar17 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0e50f92a;
  }
  plStack_1b0 = plStack_128;
  plStack_1a8 = plStack_120;
  plStack_1a0 = plStack_118;
  plStack_198 = plStack_110;
  plStack_1b8 = plVar16;
  uStack_184 = uVar4;
  if ((DAT_0f75b978 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b978), iVar9 != 0)) {
    func_0x0e644a00();
    func_0x0410844d(&DAT_0f75b978);
  }
  uStack_190 = 1;
  uStack_18c = 0x397a1ab5;
  if ((DAT_0f75b958 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75b958), iVar9 != 0)) {
    func_0x0e6448f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b8d8,0xf53dab8);
    func_0x0410844d(&DAT_0f75b958);
  }
  plVar16 = (long *)(plStack_1b8[3] +
                    (ulong)((int)((ulong)(plStack_1b8[4] - plStack_1b8[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f75b8d8 + 4)) * 8);
  do {
    lVar24 = *plVar16;
    if (lVar24 == -1) goto LAB_0e50fc30;
    plVar16 = (long *)(plStack_1b8[6] + lVar24 * 0x18);
  } while (*(uint *)(plStack_1b8[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f75b8d8 + 4));
  if (plVar16 == (long *)plStack_1b8[7]) {
LAB_0e50fc30:
    auStack_2f8._0_8_ = &DAT_0f75b8d8;
  }
  else {
    auStack_2f8._0_8_ = plVar16[2];
  }
  auStack_2f8._8_8_ = plStack_1b8 + 3;
  func_0x0ed621a0(auStack_2f8,uStack_18c);
  auStack_2f8._0_2_ = 1;
  auStack_2f8._8_8_ = &plStack_1b0;
  uStack_2e8 = uStack_18c;
  pcStack_2e0 = (code *)0x0;
  pcStack_2d8 = (code *)0x0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  uStack_2b8 = 0x10;
  uStack_2b7 = 0x65735f6d6f7266;
  uStack_2b0 = 0x61;
  uStack_2af = 0;
  lStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  uStack_270 = 0x3f600000;
  func_0x048afb10(&lStack_2a0,8);
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  uStack_238 = 0xff00;
  uStack_234 = uStack_234 & 0xffffff00;
  uStack_230 = uStack_230 & 0xffffff00;
  uStack_22c = 0;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar15 = &UNK_0f0c2a88;
  if (pcStack_2e0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_2e0;
    pcStack_2e0 = pcVar15;
    (**(code **)(lVar24 + 8))();
    pcVar15 = pcStack_2e0;
  }
  pcStack_2e0 = pcVar15;
  uStack_220 = CONCAT44(uStack_220._4_4_,uStack_2e8);
  plStack_218 = (long *)0x0;
  plStack_210 = (long *)((ulong)plStack_210 & 0xffffffff00000000);
  uStack_208 = (code *)0x1;
  uStack_200 = 0;
  puStack_1f8 = &UNK_0729f0a0;
  puStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &UNK_0651e820;
  puStack_1e0 = &UNK_0e645810;
  puStack_1d8 = &UNK_0e645970;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  plStack_1c0 = (long *)0x0;
  func_0x048b05a0(auStack_2f8._8_8_,&uStack_220);
  plVar16 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_1c0 + 1;
    lVar24 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar16);
    }
  }
  uVar5 = auStack_2f8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_220 = CONCAT44(uStack_220._4_4_,_DAT_0f550a0c);
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  pcVar6 = pcStack_2d8;
  pcVar15 = pcStack_2e0;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0ef439d0;
  plStack_218 = plVar16 + 3;
  pcStack_2e0 = (code *)0x0;
  pcStack_2d8 = (code *)0x0;
  plVar16[3] = (long)pcVar15;
  plVar16[4] = (long)pcVar6;
  plVar16[7] = lStack_2c0;
  plVar16[5] = uStack_2d0;
  plVar16[6] = uStack_2c8;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  plVar16[10] = lStack_2a8;
  plVar16[8] = CONCAT71(uStack_2b7,uStack_2b8);
  plVar16[9] = CONCAT26(uStack_2aa,
                        CONCAT15(uStack_2ab,
                                 CONCAT23(uStack_2ad,
                                          CONCAT12(uStack_2ae,CONCAT11(uStack_2af,uStack_2b0)))));
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b0 = 0;
  uStack_2af = 0;
  uStack_2ae = 0;
  uStack_2ad = 0;
  uStack_2ab = 0;
  uStack_2aa = 0;
  lStack_2a8 = 0;
  plVar16[0xb] = lStack_2a0;
  plVar16[0xc] = lStack_298;
  plVar16[0xd] = lStack_290;
  lStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  plVar16[0xe] = lStack_288;
  plVar16[0xf] = lStack_280;
  plVar16[0x10] = lStack_278;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  *(undefined4 *)(plVar16 + 0x11) = uStack_270;
  plVar16[0x12] = lStack_268;
  plVar16[0x13] = lStack_260;
  plVar16[0x14] = lStack_258;
  lStack_268 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  plVar16[0x17] = lStack_240;
  plVar16[0x15] = lStack_250;
  plVar16[0x16] = lStack_248;
  lStack_250 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  *(ulong *)((long)plVar16 + 0xc5) = CONCAT17(uStack_22c,CONCAT43(uStack_230,uStack_234._1_3_));
  plVar16[0x18] = CONCAT44(uStack_234,CONCAT22(uStack_236,uStack_238));
  plStack_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  plStack_210 = plVar16;
  func_0x048afd20(uVar5,&uStack_220);
  plVar16 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_210 + 1;
    lVar24 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_210 + 0x10))(plStack_210);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_e0 + 1;
    lVar24 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      func_0x0412c2d0(plVar16);
    }
  }
  lVar24 = *(long *)(uVar5 + 0x10);
  iVar9 = *(int *)(uVar5 + 0x1c);
  if (iVar9 == 2) {
    piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x60);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(uVar5 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar9 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar5 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 == 0) {
        *(uint *)(lVar24 + 0x18) = *(uint *)(lVar24 + 0x18) | auStack_2f8._0_4_ << 0x10;
      }
      goto LAB_0e5100ed;
    }
    piVar13 = *(int **)(*(long *)(lVar24 + 0x78) + 0x48);
    iVar9 = *piVar13;
    while (iVar9 != *(int *)(uVar5 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar9 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | auStack_2f8._0_4_ << 0x10;
LAB_0e5100ed:
  FUN_048b0bc0(&pcStack_2e0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x142752a  AnchorAboveBottom
 */
