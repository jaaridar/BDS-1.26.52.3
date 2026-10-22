/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb9fdd0 (ELF vaddr 0xea9fdd0)
 * Label: caller-of-callee
 * Body:  [[0eb9fdd0, 0eb9ffd7] [0eb9ffe0, 0eba0021] [0eba0030, 0eba09b2] [0eba09c0, 0eba1261] [0eba1270, 0eba14d6]]
 * Ghidra: FUN_0eb9fdd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb9fdd0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  byte *pbVar11;
  code *pcVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  long lStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  long lStack_248;
  undefined1 auStack_240 [16];
  long lStack_230;
  long lStack_228;
  long lStack_220;
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
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [16];
  undefined8 *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  char cStack_f0;
  undefined7 uStack_ef;
  undefined1 auStack_e8 [16];
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0eb7c440();
  func_0x0eb67df0(param_1);
  if ((DAT_0f771ff8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f771ff8), iVar8 != 0)) {
    func_0x0ec7e020();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f771f78,0xf53dab8);
    FUN_0410844d(&DAT_0f771ff8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f771f78 + 4)) * 8);
  do {
    lVar19 = *plVar13;
    if (lVar19 == -1) goto LAB_0eb9fe50;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f771f78 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eb9fe50:
    puVar10 = &DAT_0f771f78;
    if (iRam000000000f771fd8 != -0x2b3da790) goto LAB_0eb9fed2;
LAB_0eb9fe7b:
    lVar19 = *(long *)(puVar10 + 0x68);
    if (lVar19 == 0) goto LAB_0eb9fed2;
    bVar20 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar17 = lVar19 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar19 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0ec7e7e0(&lStack_120,param_1,lVar17,uVar15);
    if (cStack_f0 != '\0') goto LAB_0eb9feb8;
LAB_0eb9fef8:
    lVar19 = lStack_120;
    if ((DAT_0f771ff8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f771ff8), iVar8 != 0)) {
      func_0x0ec7e020();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f771f78,0xf53dab8);
      FUN_0410844d(&DAT_0f771ff8);
    }
    plVar13 = (long *)(*(long *)(lVar19 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f771f78 + 4)) * 8);
    do {
      lVar17 = *plVar13;
      if (lVar17 == -1) goto LAB_0eb9ff60;
      plVar13 = (long *)(*(long *)(lVar19 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar19 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f771f78 + 4)
            );
    if (plVar13 == *(long **)(lVar19 + 0x38)) {
LAB_0eb9ff60:
      puVar10 = &DAT_0f771f78;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(lStack_120 + 0x50); pbVar11 != *(byte **)(lStack_120 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar2 = *pbVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0eba003a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0eba003a:
        if ((bVar2 & 1) == 0) {
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
        auVar23[0] = -(pbVar16[10] == 99);
        auVar23[1] = -(pbVar16[0xb] == 0x75);
        auVar23[2] = -(pbVar16[0xc] == 0x6d);
        auVar23[3] = -(pbVar16[0xd] == 0x65);
        auVar23[4] = -(pbVar16[0xe] == 0x6e);
        auVar23[5] = -(pbVar16[0xf] == 0x74);
        auVar23[6] = -(pbVar16[0x10] == 0x61);
        auVar23[7] = -(pbVar16[0x11] == 0x74);
        auVar23[8] = -(pbVar16[0x12] == 0x69);
        auVar23[9] = -(pbVar16[0x13] == 0x6f);
        auVar23[10] = -(pbVar16[0x14] == 0x6e);
        auVar23[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar23[0xc] = -(pbVar16[0x16] == 0x74);
        auVar23[0xd] = -(pbVar16[0x17] == 0x61);
        auVar23[0xe] = -(pbVar16[0x18] == 0x67);
        auVar23[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar23 = auVar23 & auVar21;
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
    if (pbVar11 == *(byte **)(lStack_120 + 0x58)) {
LAB_0eba0068:
      uVar7 = uStack_f4;
      if (iStack_f8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0eba00ec;
        lVar19 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(lVar19 + 0x18);
        }
        auStack_298._0_8_ = func_0x048b0c90(lVar19 + 0x18,puVar10,uVar7,1);
        if (auStack_298._0_8_ == 0) {
          auStack_298 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_298);
          if (auStack_298._0_8_ == 0) goto LAB_0eba00ec;
        }
        if ((*(int *)(auStack_298._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_298._0_8_ + 0x58) != 0)) {
          lVar19 = *(long *)(auStack_298._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0eba00ec:
          lVar19 = 0;
        }
      }
      plStack_1b8 = (long *)&UNK_0488e0b0;
      pcStack_1b0 = (code *)0x0;
      uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x48b5725f);
      uStack_1c8 = 0;
      auStack_298 = (undefined1  [16])0x0;
      auStack_280 = ZEXT816(0x488e0b0);
      auStack_270._0_5_ = 0x48b5725f;
      puStack_148 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_148 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      auStack_158._8_8_ = 0x1a;
      auStack_158._0_8_ = 0x21;
      *(ulong *)((long)puStack_148 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_148 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_148 = _DAT_013bbacd;
      puStack_148[1] = uVar3;
      *(undefined1 *)((long)puStack_148 + 0x1a) = 0;
      lVar19 = func_0x048b5060(lVar19,auStack_158);
      *(undefined8 *)(lVar19 + 0x20) = 0;
      if ((undefined1 *)(lVar19 + 0x20) == auStack_298) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
          puVar18 = (undefined8 *)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x40))(puVar18);
          if (auStack_270[4] != '\0') {
            if (auStack_270[4] == '\x02') {
              (*(code *)auStack_280._0_8_)(5,auStack_298 + 8,puVar18);
            }
            else {
              uVar3 = auStack_298._8_8_;
              auStack_298._8_8_ = 0;
              *puVar18 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar19 + 0x38) = auStack_280._0_8_;
        *(undefined8 *)(lVar19 + 0x40) = auStack_280._8_8_;
        *(undefined4 *)(lVar19 + 0x48) = auStack_270._0_4_;
        *(char *)(lVar19 + 0x4c) = auStack_270[4];
        pcVar12 = (code *)auStack_280._8_8_;
      }
      if ((auStack_158[0] & 1) != 0) {
        func_0x0412a280(puStack_148,auStack_158._0_8_ & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_280._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_298 + 8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(&uStack_1c8);
      }
    }
    else {
      iVar8 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar8 == _DAT_0f550ac4) goto LAB_0eba0068;
    }
    uStack_48 = uStack_100;
    uStack_38 = CONCAT71(uStack_ef,cStack_f0);
    puStack_58 = puStack_110;
    uStack_50 = uStack_108;
    lStack_68 = lStack_120;
    uStack_60 = uStack_118;
    uStack_40 = 0x1e1bc4d500000004;
    if (DAT_0f772018 == '\0') {
      iVar8 = func_0x04108328(&DAT_0f772018);
      if (iVar8 != 0) {
        func_0x0ec7e130();
        FUN_0410844d(&DAT_0f772018);
      }
    }
    auStack_298._0_4_ = uStack_40._4_4_;
    auStack_298._8_8_ = 0;
    uStack_288 = (long *)((ulong)uStack_288._4_4_ << 0x20);
    auStack_280._8_8_ = &SUB_048aead0;
    auStack_280._0_8_ = 1;
    auStack_270._8_8_ = &UNK_0ec7f3a0;
    auStack_270._0_8_ = &UNK_0ec7f390;
    lStack_260 = 0;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = stack0xfffffffffffffdac;
    _auStack_258 = auVar4 << 0x20;
    uStack_250 = 0;
    lStack_248 = 0;
    func_0x049057f0(&uStack_60,auStack_298);
    func_0x048aea50(auStack_298);
    plStack_1b8 = (long *)uStack_50;
    pcStack_1b0 = (code *)uStack_48;
    uStack_1c8 = uStack_60;
    plStack_1c0 = puStack_58;
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f493870;
    if ((DAT_0f551bc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f551bc8), iVar8 != 0)) {
      func_0x04905be0(0xf551bb0);
      FUN_0410844d(&DAT_0f551bc8);
    }
    auStack_298._0_4_ = _DAT_0f551bb4;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef46c48;
    plVar13[3] = (long)puVar18;
    plVar13[4] = 0;
    *(undefined1 *)(plVar13 + 5) = 0xff;
    auStack_298._8_8_ = plVar13 + 3;
    auStack_158 = (undefined1  [16])0x0;
    uStack_288 = plVar13;
    func_0x048afd20(&uStack_1c8,auStack_298);
    plVar13 = uStack_288;
    if (uStack_288 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_288 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*uStack_288 + 0x10))(uStack_288);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar3 = auStack_158._8_8_;
    if ((long *)auStack_158._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_158._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    auStack_e8._8_8_ = uStack_60;
    auStack_e8._0_8_ = lStack_68;
    puStack_d8 = puStack_58;
    uStack_d0 = uStack_50;
    uStack_c8 = uStack_48;
    uStack_c0 = uStack_40;
    uStack_b8 = uStack_38;
    func_0x0ec7f610(auStack_298,auStack_e8,&UNK_012d8a23,5,1);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f493870;
    uVar3 = auStack_280._0_8_;
    auStack_280._0_8_ = puVar18;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_288);
    plStack_1c0 = (long *)0x0;
    plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffff00000000);
    pcStack_1b0 = (code *)0x1;
    uStack_1a8 = 0;
    puStack_1a0 = &UNK_0db0ca50;
    puStack_198 = &SUB_048b06d0;
    puStack_190 = &UNK_0db0b2f0;
    puStack_188 = &UNK_0ec7fbd0;
    puStack_180 = &UNK_0ec7fdb0;
    uStack_178 = 0;
    auStack_170._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_298._8_8_,&uStack_1c8);
    uVar3 = auStack_170._8_8_;
    if ((long *)auStack_170._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_170._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_170._8_8_ + 0x10))(auStack_170._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ec7f8d0(auStack_298);
    uStack_78 = CONCAT71(uStack_78._1_7_,(undefined1)uStack_b8);
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    puStack_98 = puStack_d8;
    uStack_90 = uStack_d0;
    lStack_a8 = auStack_e8._0_8_;
    uStack_a0 = auStack_e8._8_8_;
    func_0x048b0bc0(auStack_280);
    auStack_158._8_8_ = uStack_a0;
    auStack_158._0_8_ = lStack_a8;
    puStack_148 = puStack_98;
    uStack_140 = uStack_90;
    uStack_138 = uStack_88;
    uStack_130 = uStack_80;
    uStack_128 = uStack_78;
    func_0x0ec7edd0(auStack_298,lStack_a8 + 0x18);
    if (auStack_280._4_4_ == 2) {
      piVar14 = *(int **)(uStack_288[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != auStack_280._0_4_) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      lVar19 = *(long *)(piVar14 + 0xc);
      while (lVar19 != auStack_298._8_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar19 = *(long *)(piVar14 + 0xc);
      }
LAB_0eba072f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (auStack_280._4_4_ == 1) {
        piVar14 = *(int **)(uStack_288[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != auStack_280._0_4_) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0eba072f;
      }
      if (auStack_280._4_4_ == 0) {
        *(uint *)(uStack_288 + 3) = *(uint *)(uStack_288 + 3) | 0x40000;
      }
    }
    func_0x0ec7f610(auStack_298,auStack_158,&UNK_0131a99b,0xd,0x10);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f2cccf0;
    uVar3 = auStack_280._0_8_;
    auStack_280._0_8_ = puVar18;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_288);
    plStack_1c0 = (long *)0x0;
    plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffff00000000);
    pcStack_1b0 = (code *)0x1;
    uStack_1a8 = 0;
    puStack_1a0 = &UNK_0d9d7be0;
    puStack_198 = &SUB_048b06d0;
    puStack_190 = &SUB_0b68b830;
    puStack_188 = &UNK_0ec7ff80;
    puStack_180 = &UNK_0ec801c0;
    uStack_178 = 0;
    auStack_170._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_298._8_8_,&uStack_1c8);
    uVar3 = auStack_170._8_8_;
    if ((long *)auStack_170._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_170._8_8_ + 8);
      lVar19 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_170._8_8_ + 0x10))(auStack_170._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ec7f8d0(auStack_298);
    func_0x048b0bc0(auStack_280);
    lVar19 = func_0x0c4d5030(param_1 + 0x18);
    if (*(int *)(lVar19 + 0x60) != -0x2b3da790) goto LAB_0eba08d3;
LAB_0eba0891:
    lVar19 = *(long *)(lVar19 + 0x68);
    if (lVar19 == 0) goto LAB_0eba08d3;
    bVar20 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar17 = lVar19 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar19 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0ec803a0(&lStack_120,param_1,lVar17,uVar15);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0eb9fe7b;
LAB_0eb9fed2:
    func_0x0ec7e7e0(&lStack_120,param_1,&UNK_012a88e6,6);
    if (cStack_f0 == '\0') goto LAB_0eb9fef8;
LAB_0eb9feb8:
    lVar19 = func_0x0c4d5030(param_1 + 0x18);
    if (*(int *)(lVar19 + 0x60) == -0x2b3da790) goto LAB_0eba0891;
LAB_0eba08d3:
    func_0x0ec803a0(&lStack_120,param_1,&DAT_01350d4d,0x14);
  }
  if (cStack_f0 != '\0') {
    return;
  }
  lVar17 = lStack_120 + 0x18;
  lVar19 = func_0x0c4d5030(lVar17);
  for (pbVar11 = *(byte **)(lStack_120 + 0x50); pbVar11 != *(byte **)(lStack_120 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eba09ca;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0eba09ca:
      if ((bVar2 & 1) == 0) {
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
  if (pbVar11 == *(byte **)(lStack_120 + 0x58)) {
LAB_0eba09f9:
    if (iStack_f8 == 0) {
      if ((*(int *)(lVar19 + 0x60) != -0x2b3da790) || (*(long *)(lVar19 + 0x68) == 0))
      goto LAB_0eba0a69;
      lVar19 = *(long *)(lVar19 + 0x68) + 0x38;
    }
    else {
      auStack_298._0_8_ = func_0x048b0c90(lVar17,lVar19,uStack_f4,1);
      if (auStack_298._0_8_ == 0) {
        auStack_298 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_298);
        if (auStack_298._0_8_ == 0) goto LAB_0eba0a69;
      }
      if ((*(int *)(auStack_298._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_298._0_8_ + 0x58) != 0)) {
        lVar19 = *(long *)(auStack_298._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eba0a69:
        lVar19 = 0;
      }
    }
    plStack_1b8 = (long *)&UNK_0488e0b0;
    pcStack_1b0 = (code *)0x0;
    uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x48b5725f);
    uStack_1c8 = 0;
    auStack_298 = (undefined1  [16])0x0;
    auStack_280 = ZEXT816(0x488e0b0);
    auStack_270._0_5_ = 0x48b5725f;
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    auStack_158._8_8_ = 0x1a;
    auStack_158._0_8_ = 0x21;
    *(ulong *)((long)puVar18 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar18 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar18 = _DAT_013bbacd;
    puVar18[1] = uVar3;
    *(undefined1 *)((long)puVar18 + 0x1a) = 0;
    puStack_148 = puVar18;
    lVar19 = func_0x048b5060(lVar19,auStack_158);
    *(undefined8 *)(lVar19 + 0x20) = 0;
    if ((undefined1 *)(lVar19 + 0x20) == auStack_298) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar19 + 0x40) != (code *)0x0) {
        puVar18 = (undefined8 *)(lVar19 + 0x28);
        (**(code **)(lVar19 + 0x40))(puVar18);
        if (auStack_270[4] != '\0') {
          if (auStack_270[4] == '\x02') {
            (*(code *)auStack_280._0_8_)(5,auStack_298 + 8,puVar18);
          }
          else {
            uVar3 = auStack_298._8_8_;
            auStack_298._8_8_ = 0;
            *puVar18 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar19 + 0x38) = auStack_280._0_8_;
      *(undefined8 *)(lVar19 + 0x40) = auStack_280._8_8_;
      *(undefined4 *)(lVar19 + 0x48) = auStack_270._0_4_;
      *(char *)(lVar19 + 0x4c) = auStack_270[4];
      pcVar12 = (code *)auStack_280._8_8_;
    }
    if ((auStack_158[0] & 1) != 0) {
      func_0x0412a280(puStack_148,auStack_158._0_8_ & 0xfffffffffffffffe);
      pcVar12 = (code *)auStack_280._8_8_;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_298 + 8);
    }
    if (pcStack_1b0 != (code *)0x0) {
      (*pcStack_1b0)(&uStack_1c8);
    }
  }
  else {
    iVar8 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550ad8), iVar9 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0eba09f9;
  }
  uStack_88 = uStack_100;
  puStack_98 = puStack_110;
  uStack_90 = uStack_108;
  lStack_a8 = lStack_120;
  uStack_a0 = uStack_118;
  auStack_158._8_8_ = uStack_118;
  auStack_158._0_8_ = lStack_120;
  puStack_148 = puStack_110;
  uStack_140 = uStack_108;
  uStack_138 = uStack_100;
  func_0x0ec808e0(auStack_298,lStack_120 + 0x18);
  if (auStack_280._4_4_ == 2) {
    piVar14 = *(int **)(uStack_288[0xf] + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != auStack_280._0_4_) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    lVar19 = *(long *)(piVar14 + 0xc);
    while (lVar19 != auStack_298._8_8_) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar19 = *(long *)(piVar14 + 0xc);
    }
LAB_0eba0d3f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (auStack_280._4_4_ == 1) {
      piVar14 = *(int **)(uStack_288[0xf] + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != auStack_280._0_4_) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_0eba0d3f;
    }
    if (auStack_280._4_4_ == 0) {
      *(uint *)(uStack_288 + 3) = *(uint *)(uStack_288 + 3) | 0x40000;
    }
  }
  if (DAT_0f6e7958 == '\0') {
    iVar8 = func_0x04108328(&DAT_0f6e7958);
    if (iVar8 != 0) {
      func_0x0c4d4fc0(0xf6e7940);
      FUN_0410844d(&DAT_0f6e7958);
    }
  }
  uStack_130 = 0x8ead8cdb00000001;
  auStack_298._0_8_ = func_0x0c4d5030(auStack_158._0_8_ + 0x18);
  auStack_298._8_8_ = auStack_158._0_8_ + 0x18;
  func_0x0ed621a0(auStack_298,uStack_130._4_4_);
  auVar21 = _auStack_258;
  auStack_298._0_2_ = 0x10;
  auStack_298._8_8_ = auStack_158 + 8;
  uStack_288 = (long *)CONCAT44(uStack_288._4_4_,uStack_130._4_4_);
  auStack_280 = (undefined1  [16])0x0;
  auStack_270 = (undefined1  [16])0x0;
  lStack_260 = 0;
  stack0xfffffffffffffda9 = 0x695f726961706572;
  auStack_258[0] = 0x18;
  uStack_250._1_4_ = 0x736d6574;
  uStack_250._6_2_ = auVar21._14_2_;
  uStack_250._5_1_ = 0;
  auStack_240 = (undefined1  [16])0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
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
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar18 = &UNK_0f4dfdd8;
  uVar3 = auStack_280._0_8_;
  auStack_280._0_8_ = puVar18;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_288);
  plStack_1c0 = (long *)0x0;
  plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffff00000000);
  pcStack_1b0 = (code *)0x1;
  uStack_1a8 = 0;
  puStack_1a0 = &UNK_0ec84360;
  puStack_198 = &SUB_048b06d0;
  puStack_190 = &UNK_0ec82e80;
  puStack_188 = &UNK_0ec84420;
  puStack_180 = &UNK_0ec84680;
  uStack_178 = 0;
  auStack_170._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_298._8_8_,&uStack_1c8);
  uVar3 = auStack_170._8_8_;
  if ((long *)auStack_170._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_170._8_8_ + 8);
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)auStack_170._8_8_ + 0x10))(auStack_170._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  uVar3 = auStack_298._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,_DAT_0f550a0c);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
  *plVar13 = (long)&UNK_0ef439d0;
  plStack_1c0 = plVar13 + 3;
  uVar5 = auStack_280._0_8_;
  uVar6 = auStack_280._8_8_;
  auStack_280 = (undefined1  [16])0x0;
  plVar13[3] = uVar5;
  plVar13[4] = uVar6;
  plVar13[7] = lStack_260;
  plVar13[5] = auStack_270._0_8_;
  plVar13[6] = auStack_270._8_8_;
  auStack_270 = (undefined1  [16])0x0;
  lStack_260 = 0;
  plVar13[10] = lStack_248;
  plVar13[8] = (long)auStack_258;
  plVar13[9] = uStack_250;
  _auStack_258 = (undefined1  [16])0x0;
  lStack_248 = 0;
  plVar13[0xb] = auStack_240._0_8_;
  plVar13[0xc] = auStack_240._8_8_;
  plVar13[0xd] = lStack_230;
  auStack_240 = (undefined1  [16])0x0;
  lStack_230 = 0;
  plVar13[0xe] = lStack_228;
  plVar13[0xf] = lStack_220;
  plVar13[0x10] = lStack_218;
  lStack_228 = 0;
  lStack_220 = 0;
  lStack_218 = 0;
  *(undefined4 *)(plVar13 + 0x11) = uStack_210;
  plVar13[0x12] = auStack_208._0_8_;
  plVar13[0x13] = auStack_208._8_8_;
  plVar13[0x14] = lStack_1f8;
  auStack_208 = (undefined1  [16])0x0;
  lStack_1f8 = 0;
  plVar13[0x17] = lStack_1e0;
  plVar13[0x15] = lStack_1f0;
  plVar13[0x16] = lStack_1e8;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_1cc,CONCAT43(uStack_1d0,uStack_1d4._1_3_));
  plVar13[0x18] = CONCAT44(uStack_1d4,CONCAT22(uStack_1d6,uStack_1d8));
  auStack_e8 = (undefined1  [16])0x0;
  plStack_1b8 = plVar13;
  func_0x048afd20(uVar3,&uStack_1c8);
  plVar13 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1b8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      func_0x0412c2d0(plVar13);
    }
  }
  uVar5 = auStack_e8._8_8_;
  if ((long *)auStack_e8._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_e8._8_8_ + 8);
    lVar19 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)auStack_e8._8_8_ + 0x10))(auStack_e8._8_8_);
      func_0x0412c2d0(uVar5);
    }
  }
  lVar19 = *(long *)(uVar3 + 0x10);
  iVar8 = *(int *)(uVar3 + 0x1c);
  if (iVar8 == 2) {
    piVar14 = *(int **)(*(long *)(lVar19 + 0x78) + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != *(int *)(uVar3 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(uVar3 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(lVar19 + 0x18) = *(uint *)(lVar19 + 0x18) | auStack_298._0_4_ << 0x10;
      }
      goto LAB_0eba127d;
    }
    piVar14 = *(int **)(*(long *)(lVar19 + 0x78) + 0x48);
    iVar8 = *piVar14;
    while (iVar8 != *(int *)(uVar3 + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar8 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | auStack_298._0_4_ << 0x10;
LAB_0eba127d:
  func_0x048b0bc0(auStack_280);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
