/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc18c990 (ELF vaddr 0xc08c990)
 * Label: caller-of-callee
 * Body:  [[0c18c990, 0c18d021] [0c18d030, 0c18d217] [0c18d220, 0c18d261] [0c18d270, 0c18d9b7] [0c18d9c0, 0c18da01] [0c18da10, 0c18e157] [0c18e160, 0c18e1a1] [0c18e1b0, 0c18eb87] [0c18eb90, 0c18ebd1] [0c18ebe0, 0c18f617] [0c18f620, 0c18f661] [0c18f670, 0c194ab3] [0c1a32a0, 0c1a33ff]]
 * Ghidra: FUN_0c18c990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c18c990(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  byte *pbVar17;
  code *pcVar18;
  int *piVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  undefined1 auStack_190 [16];
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined2 uStack_128;
  undefined2 uStack_126;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  char cStack_38;
  
  func_0x0eb89800();
  func_0x0e7f63e0(param_1);
  func_0x0e9723c0(param_1);
  if ((DAT_0f6d74b8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d74b8), iVar12 != 0)) {
    func_0x0c1e55a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7438,0xf53dab8);
    func_0x0410844d(&DAT_0f6d74b8);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7438 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18ca20;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7438 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18ca20:
    puVar14 = &DAT_0f6d7438;
    if (iRam000000000f6d7498 != -0x2b3da790) goto LAB_0c18ca8d;
LAB_0c18ca4b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18ca8d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c254fc0(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18ca4b;
LAB_0c18ca8d:
    func_0x0c254fc0(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    uStack_240._4_4_ = (uint)((ulong)uStack_240 >> 0x20);
    uStack_250._4_4_ = (undefined4)((ulong)uStack_250 >> 0x20);
    if ((DAT_0f6d7420 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7420), iVar12 != 0)) {
      func_0x0c1e5460();
      func_0x0410844d(&DAT_0f6d7420);
    }
    lVar23 = lStack_e0;
    uStack_b8 = 0x1bf5116900000001;
    if ((DAT_0f6d74b8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d74b8), iVar12 != 0)) {
      func_0x0c1e55a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7438,0xf53dab8);
      func_0x0410844d(&DAT_0f6d74b8);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d7438 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18cb50;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d7438 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18cb50:
      auStack_1e8._0_8_ = &DAT_0f6d7438;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = lVar23 + 0x18;
    func_0x0ed621a0(auStack_1e8,uStack_b8._4_4_);
    auVar25 = auStack_1a8;
    auStack_1e8._0_8_ = auStack_1e8._2_8_ << 0x10;
    auStack_1e8._8_8_ = &uStack_d8;
    uStack_1d8 = uStack_b8._4_4_;
    auStack_1d0 = (undefined1  [16])0x0;
    auStack_1c0 = (undefined1  [16])0x0;
    lStack_1b0 = 0;
    auStack_1a8._1_8_ = 0x6e656e6f706d6f63;
    auStack_1a8[0] = 0x14;
    auStack_1a8._9_2_ = 0x7374;
    auStack_1a8._12_4_ = auVar25._12_4_;
    auStack_1a8[0xb] = 0;
    auStack_190 = (undefined1  [16])0x0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    uStack_160 = 0x3f600000;
    func_0x048afb10(auStack_190,8);
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    auStack_158 = (undefined1  [16])0x0;
    uStack_128 = 0xff00;
    uStack_124 = uStack_124 & 0xffffff00;
    uStack_120 = uStack_120 & 0xffffff00;
    uStack_11c = uStack_11c & 0xffffff00;
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3585f8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240._4_4_ << 0x20);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c255d70;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c068ba0;
    puStack_210 = &UNK_0c255d80;
    puStack_208 = &UNK_0c255ed0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_1e8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar12 = func_0x04108328(&DAT_0f550a20), iVar12 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,_DAT_0f550a0c);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
    *plVar16 = (long)&UNK_0ef439d0;
    plStack_248 = plVar16 + 3;
    uVar6 = auStack_1d0._0_8_;
    uVar8 = auStack_1d0._8_8_;
    auStack_1d0 = (undefined1  [16])0x0;
    plVar16[3] = uVar6;
    plVar16[4] = uVar8;
    plVar16[7] = lStack_1b0;
    plVar16[5] = auStack_1c0._0_8_;
    plVar16[6] = auStack_1c0._8_8_;
    auStack_1c0 = (undefined1  [16])0x0;
    lStack_1b0 = 0;
    plVar16[10] = lStack_198;
    plVar16[8] = auStack_1a8._0_8_;
    plVar16[9] = auStack_1a8._8_8_;
    auStack_1a8 = (undefined1  [16])0x0;
    lStack_198 = 0;
    plVar16[0xb] = auStack_190._0_8_;
    plVar16[0xc] = auStack_190._8_8_;
    plVar16[0xd] = lStack_180;
    auStack_190 = (undefined1  [16])0x0;
    lStack_180 = 0;
    plVar16[0xe] = lStack_178;
    plVar16[0xf] = lStack_170;
    plVar16[0x10] = lStack_168;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    *(undefined4 *)(plVar16 + 0x11) = uStack_160;
    plVar16[0x12] = auStack_158._0_8_;
    plVar16[0x13] = auStack_158._8_8_;
    plVar16[0x14] = lStack_148;
    auStack_158 = (undefined1  [16])0x0;
    lStack_148 = 0;
    plVar16[0x17] = lStack_130;
    plVar16[0x15] = lStack_140;
    plVar16[0x16] = lStack_138;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    *(ulong *)((long)plVar16 + 0xc5) =
         CONCAT17((undefined1)uStack_11c,CONCAT43(uStack_120,uStack_124._1_3_));
    plVar16[0x18] = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
    auStack_118 = (undefined1  [16])0x0;
    uStack_240 = plVar16;
    func_0x048afd20(uVar4,&uStack_250);
    plVar16 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar6 = auStack_118._8_8_;
    if ((long *)auStack_118._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_118._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_118._8_8_ + 0x10))(auStack_118._8_8_);
        func_0x0412c2d0(uVar6);
      }
    }
    lVar23 = *(long *)(uVar4 + 0x10);
    iVar12 = *(int *)(uVar4 + 0x1c);
    if (iVar12 == 2) {
      piVar19 = *(int **)(*(long *)(lVar23 + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != *(int *)(uVar4 + 0x18)) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      for (; *(long *)(piVar19 + 0xc) != *(long *)(uVar4 + 8); piVar19 = *(int **)(piVar19 + 0xe)) {
      }
LAB_0c18d03a:
      piVar19[4] = piVar19[4] | auStack_1e8._0_4_ << 0x10;
    }
    else {
      if (iVar12 == 1) {
        piVar19 = *(int **)(*(long *)(lVar23 + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != *(int *)(uVar4 + 0x18)) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c18d03a;
      }
      if (iVar12 == 0) {
        *(uint *)(lVar23 + 0x18) = *(uint *)(lVar23 + 0x18) | auStack_1e8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_1d0);
  }
  func_0x0eb8b070(param_1);
  if ((DAT_0f6d7570 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7570), iVar12 != 0)) {
    func_0x0c1e6bc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d74f0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7570);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d74f0 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18d0a0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d74f0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18d0a0:
    puVar14 = &DAT_0f6d74f0;
    if (iRam000000000f6d7550 != -0x2b3da790) goto LAB_0c18d10d;
LAB_0c18d0cb:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18d10d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c256460(&lStack_e0,param_1,lVar22,uVar20);
    lVar23 = lStack_e0;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18d0cb;
LAB_0c18d10d:
    func_0x0c256460(&lStack_e0,param_1,&UNK_0120ff27,0xe);
    lVar23 = lStack_e0;
  }
  lStack_e0 = lVar23;
  if (cStack_b0 == '\0') {
    if ((DAT_0f6d7570 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7570), iVar12 != 0)) {
      func_0x0c1e6bc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d74f0,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7570);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d74f0 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18d1a0;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d74f0 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18d1a0:
      puVar14 = &DAT_0f6d74f0;
    }
    else {
      puVar14 = (undefined *)plVar16[2];
    }
    for (pbVar17 = *(byte **)(lStack_e0 + 0x50); pbVar17 != *(byte **)(lStack_e0 + 0x58);
        pbVar17 = pbVar17 + 0x38) {
      bVar3 = *pbVar17;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0c18d27a;
      }
      else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c18d27a:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar17 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar17 + 0x10);
        }
        auVar25[0] = -(*pbVar21 == 0x5b);
        auVar25[1] = -(pbVar21[1] == 99);
        auVar25[2] = -(pbVar21[2] == 0x65);
        auVar25[3] = -(pbVar21[3] == 0x72);
        auVar25[4] = -(pbVar21[4] == 0x65);
        auVar25[5] = -(pbVar21[5] == 0x61);
        auVar25[6] = -(pbVar21[6] == 0x6c);
        auVar25[7] = -(pbVar21[7] == 0x3a);
        auVar25[8] = -(pbVar21[8] == 100);
        auVar25[9] = -(pbVar21[9] == 0x6f);
        auVar25[10] = -(pbVar21[10] == 99);
        auVar25[0xb] = -(pbVar21[0xb] == 0x75);
        auVar25[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar25[0xd] = -(pbVar21[0xd] == 0x65);
        auVar25[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar25[0xf] = -(pbVar21[0xf] == 0x74);
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
        auVar30 = auVar30 & auVar25;
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
    if (pbVar17 == *(byte **)(lStack_e0 + 0x58)) {
LAB_0c18d2a8:
      if ((int)uStack_b8 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c18d332;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_b8._4_4_;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)FUN_048aead0(lVar23 + 0x18,0,uStack_b8._4_4_);
        }
        auStack_1e8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar5,1);
        if (auStack_1e8._0_8_ == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1e8);
          if (auStack_1e8._0_8_ == 0) goto LAB_0c18d332;
        }
        if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c18d332:
          lVar23 = 0;
        }
      }
      uStack_240 = (long *)&UNK_0488e0b0;
      pcStack_238 = (code *)0x0;
      uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
      uStack_250 = 0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d0 = ZEXT816(0x488e0b0);
      auStack_1c0._0_5_ = 0x48b5725f;
      puStack_108 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_108 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_118._8_8_ = 0x1a;
      auStack_118._0_8_ = 0x21;
      *(ulong *)((long)puStack_108 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_108 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_108 = _DAT_013bbacd;
      puStack_108[1] = uVar4;
      *(undefined1 *)((long)puStack_108 + 0x1a) = 0;
      lVar23 = func_0x048b5060(lVar23,auStack_118);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_1e8) {
        pcVar18 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar15);
          if (auStack_1c0[4] != '\0') {
            if (auStack_1c0[4] == '\x02') {
              (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar15);
            }
            else {
              uVar4 = auStack_1e8._8_8_;
              auStack_1e8._8_8_ = 0;
              *puVar15 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar23 + 0x38) = auStack_1d0._0_8_;
        *(undefined8 *)(lVar23 + 0x40) = auStack_1d0._8_8_;
        *(undefined4 *)(lVar23 + 0x48) = auStack_1c0._0_4_;
        *(char *)(lVar23 + 0x4c) = auStack_1c0[4];
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if ((auStack_118[0] & 1) != 0) {
        func_0x0412a280(puStack_108,auStack_118._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_1e8 + 8);
      }
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(&uStack_250);
      }
    }
    else {
      iVar12 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar12 == _DAT_0f550ac4) goto LAB_0c18d2a8;
    }
    uStack_78 = CONCAT71(uStack_af,cStack_b0);
    lStack_88 = lStack_c0;
    lStack_80 = uStack_b8;
    puStack_98 = puStack_d0;
    uStack_90 = uStack_c8;
    lStack_a8 = lStack_e0;
    uStack_a0 = uStack_d8;
    func_0x0c256fd0(auStack_1e8,&lStack_a8,&UNK_011ed181,10,0);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3585f8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c255d70;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c068ba0;
    puStack_210 = &UNK_0c257580;
    puStack_208 = &UNK_0c2576d0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c257280(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c256fd0(auStack_1e8,auStack_118,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3586e0;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2580b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c257da0;
    puStack_210 = &UNK_0c2580c0;
    puStack_208 = &UNK_0c2582a0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c257280(auStack_1e8);
    func_0x048b0bc0(auStack_1d0);
  }
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7628 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7628), iVar12 != 0)) {
    func_0x0c1e9de0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d75a8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7628);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d75a8 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18d840;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d75a8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18d840:
    puVar14 = &DAT_0f6d75a8;
    if (iRam000000000f6d7608 != -0x2b3da790) goto LAB_0c18d8ad;
LAB_0c18d86b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18d8ad;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c258710(&lStack_e0,param_1,lVar22,uVar20);
    lVar23 = lStack_e0;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18d86b;
LAB_0c18d8ad:
    func_0x0c258710(&lStack_e0,param_1,&UNK_0120ff27,0xe);
    lVar23 = lStack_e0;
  }
  lStack_e0 = lVar23;
  if (cStack_b0 == '\0') {
    if ((DAT_0f6d7628 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7628), iVar12 != 0)) {
      func_0x0c1e9de0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d75a8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7628);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d75a8 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18d940;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d75a8 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18d940:
      puVar14 = &DAT_0f6d75a8;
    }
    else {
      puVar14 = (undefined *)plVar16[2];
    }
    for (pbVar17 = *(byte **)(lStack_e0 + 0x50); pbVar17 != *(byte **)(lStack_e0 + 0x58);
        pbVar17 = pbVar17 + 0x38) {
      bVar3 = *pbVar17;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0c18da1a;
      }
      else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c18da1a:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar17 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar17 + 0x10);
        }
        auVar26[0] = -(*pbVar21 == 0x5b);
        auVar26[1] = -(pbVar21[1] == 99);
        auVar26[2] = -(pbVar21[2] == 0x65);
        auVar26[3] = -(pbVar21[3] == 0x72);
        auVar26[4] = -(pbVar21[4] == 0x65);
        auVar26[5] = -(pbVar21[5] == 0x61);
        auVar26[6] = -(pbVar21[6] == 0x6c);
        auVar26[7] = -(pbVar21[7] == 0x3a);
        auVar26[8] = -(pbVar21[8] == 100);
        auVar26[9] = -(pbVar21[9] == 0x6f);
        auVar26[10] = -(pbVar21[10] == 99);
        auVar26[0xb] = -(pbVar21[0xb] == 0x75);
        auVar26[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar26[0xd] = -(pbVar21[0xd] == 0x65);
        auVar26[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar26[0xf] = -(pbVar21[0xf] == 0x74);
        auVar31[0] = -(pbVar21[10] == 99);
        auVar31[1] = -(pbVar21[0xb] == 0x75);
        auVar31[2] = -(pbVar21[0xc] == 0x6d);
        auVar31[3] = -(pbVar21[0xd] == 0x65);
        auVar31[4] = -(pbVar21[0xe] == 0x6e);
        auVar31[5] = -(pbVar21[0xf] == 0x74);
        auVar31[6] = -(pbVar21[0x10] == 0x61);
        auVar31[7] = -(pbVar21[0x11] == 0x74);
        auVar31[8] = -(pbVar21[0x12] == 0x69);
        auVar31[9] = -(pbVar21[0x13] == 0x6f);
        auVar31[10] = -(pbVar21[0x14] == 0x6e);
        auVar31[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar31[0xc] = -(pbVar21[0x16] == 0x74);
        auVar31[0xd] = -(pbVar21[0x17] == 0x61);
        auVar31[0xe] = -(pbVar21[0x18] == 0x67);
        auVar31[0xf] = -(pbVar21[0x19] == 0x5d);
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
    }
    if (pbVar17 == *(byte **)(lStack_e0 + 0x58)) {
LAB_0c18da48:
      if ((int)uStack_b8 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c18dad0;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_b8._4_4_;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)FUN_048aead0(lVar23 + 0x18);
        }
        auStack_1e8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar5,1);
        if (auStack_1e8._0_8_ == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1e8);
          if (auStack_1e8._0_8_ == 0) goto LAB_0c18dad0;
        }
        if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c18dad0:
          lVar23 = 0;
        }
      }
      uStack_240 = (long *)&UNK_0488e0b0;
      pcStack_238 = (code *)0x0;
      uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
      uStack_250 = 0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d0 = ZEXT816(0x488e0b0);
      auStack_1c0._0_5_ = 0x48b5725f;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_118._8_8_ = 0x1a;
      auStack_118._0_8_ = 0x21;
      *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar15 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar15 = _DAT_013bbacd;
      puVar15[1] = uVar4;
      *(undefined1 *)((long)puVar15 + 0x1a) = 0;
      puStack_108 = puVar15;
      lVar23 = func_0x048b5060(lVar23,auStack_118);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_1e8) {
        pcVar18 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar15);
          if (auStack_1c0[4] != '\0') {
            if (auStack_1c0[4] == '\x02') {
              (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar15);
            }
            else {
              uVar4 = auStack_1e8._8_8_;
              auStack_1e8._8_8_ = 0;
              *puVar15 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar23 + 0x38) = auStack_1d0._0_8_;
        *(undefined8 *)(lVar23 + 0x40) = auStack_1d0._8_8_;
        *(undefined4 *)(lVar23 + 0x48) = auStack_1c0._0_4_;
        *(char *)(lVar23 + 0x4c) = auStack_1c0[4];
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if ((auStack_118[0] & 1) != 0) {
        func_0x0412a280(puStack_108,auStack_118._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_1e8 + 8);
      }
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(&uStack_250);
      }
    }
    else {
      iVar12 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar12 == _DAT_0f550ac4) goto LAB_0c18da48;
    }
    uStack_78 = CONCAT71(uStack_af,cStack_b0);
    lStack_88 = lStack_c0;
    lStack_80 = uStack_b8;
    puStack_98 = puStack_d0;
    uStack_90 = uStack_c8;
    lStack_a8 = lStack_e0;
    uStack_a0 = uStack_d8;
    func_0x0c259290(auStack_1e8,&lStack_a8,&UNK_011ed181,10,0);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3585f8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c255d70;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c068ba0;
    puStack_210 = &UNK_0c259840;
    puStack_208 = &UNK_0c259990;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c259540(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c259290(auStack_1e8,auStack_118,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c25a3c0;
    puStack_208 = &UNK_0c25a5b0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c259540(auStack_1e8);
    func_0x048b0bc0(auStack_1d0);
  }
  func_0x0c1a3410(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d76e0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d76e0), iVar12 != 0)) {
    func_0x0c1f6cc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7660,0xf53dab8);
    func_0x0410844d(&DAT_0f6d76e0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7660 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18dfe0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7660 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18dfe0:
    puVar14 = &DAT_0f6d7660;
    if (iRam000000000f6d76c0 != -0x2b3da790) goto LAB_0c18e04d;
LAB_0c18e00b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18e04d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c293eb0(&lStack_e0,param_1,lVar22,uVar20);
    lVar23 = lStack_e0;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18e00b;
LAB_0c18e04d:
    func_0x0c293eb0(&lStack_e0,param_1,&UNK_0120ff27,0xe);
    lVar23 = lStack_e0;
  }
  lStack_e0 = lVar23;
  if (cStack_b0 == '\0') {
    if ((DAT_0f6d76e0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d76e0), iVar12 != 0)) {
      func_0x0c1f6cc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7660,0xf53dab8);
      func_0x0410844d(&DAT_0f6d76e0);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d7660 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18e0e0;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d7660 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18e0e0:
      puVar14 = &DAT_0f6d7660;
    }
    else {
      puVar14 = (undefined *)plVar16[2];
    }
    for (pbVar17 = *(byte **)(lStack_e0 + 0x50); pbVar17 != *(byte **)(lStack_e0 + 0x58);
        pbVar17 = pbVar17 + 0x38) {
      bVar3 = *pbVar17;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0c18e1ba;
      }
      else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c18e1ba:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar17 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar17 + 0x10);
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
        auVar32[0] = -(pbVar21[10] == 99);
        auVar32[1] = -(pbVar21[0xb] == 0x75);
        auVar32[2] = -(pbVar21[0xc] == 0x6d);
        auVar32[3] = -(pbVar21[0xd] == 0x65);
        auVar32[4] = -(pbVar21[0xe] == 0x6e);
        auVar32[5] = -(pbVar21[0xf] == 0x74);
        auVar32[6] = -(pbVar21[0x10] == 0x61);
        auVar32[7] = -(pbVar21[0x11] == 0x74);
        auVar32[8] = -(pbVar21[0x12] == 0x69);
        auVar32[9] = -(pbVar21[0x13] == 0x6f);
        auVar32[10] = -(pbVar21[0x14] == 0x6e);
        auVar32[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar32[0xc] = -(pbVar21[0x16] == 0x74);
        auVar32[0xd] = -(pbVar21[0x17] == 0x61);
        auVar32[0xe] = -(pbVar21[0x18] == 0x67);
        auVar32[0xf] = -(pbVar21[0x19] == 0x5d);
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
    }
    if (pbVar17 == *(byte **)(lStack_e0 + 0x58)) {
LAB_0c18e1e8:
      if ((int)uStack_b8 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c18e270;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_b8._4_4_;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)FUN_048aead0(lVar23 + 0x18);
        }
        auStack_1e8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar5,1);
        if (auStack_1e8._0_8_ == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1e8);
          if (auStack_1e8._0_8_ == 0) goto LAB_0c18e270;
        }
        if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c18e270:
          lVar23 = 0;
        }
      }
      uStack_240 = (long *)&UNK_0488e0b0;
      pcStack_238 = (code *)0x0;
      uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
      uStack_250 = 0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d0 = ZEXT816(0x488e0b0);
      auStack_1c0._0_5_ = 0x48b5725f;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_118._8_8_ = 0x1a;
      auStack_118._0_8_ = 0x21;
      *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar15 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar15 = _DAT_013bbacd;
      puVar15[1] = uVar4;
      *(undefined1 *)((long)puVar15 + 0x1a) = 0;
      puStack_108 = puVar15;
      lVar23 = func_0x048b5060(lVar23,auStack_118);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_1e8) {
        pcVar18 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar15);
          if (auStack_1c0[4] != '\0') {
            if (auStack_1c0[4] == '\x02') {
              (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar15);
            }
            else {
              uVar4 = auStack_1e8._8_8_;
              auStack_1e8._8_8_ = 0;
              *puVar15 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar23 + 0x38) = auStack_1d0._0_8_;
        *(undefined8 *)(lVar23 + 0x40) = auStack_1d0._8_8_;
        *(undefined4 *)(lVar23 + 0x48) = auStack_1c0._0_4_;
        *(char *)(lVar23 + 0x4c) = auStack_1c0[4];
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if ((auStack_118[0] & 1) != 0) {
        func_0x0412a280(puStack_108,auStack_118._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_1e8 + 8);
      }
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(&uStack_250);
      }
    }
    else {
      iVar12 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar12 == _DAT_0f550ac4) goto LAB_0c18e1e8;
    }
    cStack_38 = cStack_b0;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    func_0x0c294a60(auStack_1e8,&lStack_68,&UNK_011ed181,10,0);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f359f30;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2952b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &UNK_0c25ac50;
    puStack_210 = &UNK_0c295370;
    puStack_208 = &UNK_0c295500;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c294d70(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c294a60(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c295980;
    puStack_208 = &UNK_0c295b70;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c294d70(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2944a0(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c18e7cf:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c18e7cf;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c294a60(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f359fa8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2965e0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2962c0;
    puStack_210 = &UNK_0c2965f0;
    puStack_208 = &UNK_0c296830;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c294d70(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d76e0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d76e0), iVar12 != 0)) {
      func_0x0c1f6cc0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7660,0xf53dab8);
      func_0x0410844d(&DAT_0f6d76e0);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7660 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c18e970;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7660 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c18e970:
      auStack_1e8._0_8_ = &DAT_0f6d7660;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0c1a8200(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7798 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7798), iVar12 != 0)) {
    func_0x0c1ffc90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7718,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7798);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7718 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18ea10;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7718 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18ea10:
    puVar14 = &DAT_0f6d7718;
    if (iRam000000000f6d7778 != -0x2b3da790) goto LAB_0c18ea7d;
LAB_0c18ea3b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18ea7d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c29f9c0(&lStack_e0,param_1,lVar22,uVar20);
    lVar23 = lStack_e0;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18ea3b;
LAB_0c18ea7d:
    func_0x0c29f9c0(&lStack_e0,param_1,&UNK_0120ff27,0xe);
    lVar23 = lStack_e0;
  }
  lStack_e0 = lVar23;
  if (cStack_b0 == '\0') {
    if ((DAT_0f6d7798 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7798), iVar12 != 0)) {
      func_0x0c1ffc90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7718,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7798);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d7718 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18eb10;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d7718 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18eb10:
      puVar14 = &DAT_0f6d7718;
    }
    else {
      puVar14 = (undefined *)plVar16[2];
    }
    for (pbVar17 = *(byte **)(lStack_e0 + 0x50); pbVar17 != *(byte **)(lStack_e0 + 0x58);
        pbVar17 = pbVar17 + 0x38) {
      bVar3 = *pbVar17;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0c18ebea;
      }
      else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c18ebea:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar17 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar17 + 0x10);
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
        auVar33[0] = -(pbVar21[10] == 99);
        auVar33[1] = -(pbVar21[0xb] == 0x75);
        auVar33[2] = -(pbVar21[0xc] == 0x6d);
        auVar33[3] = -(pbVar21[0xd] == 0x65);
        auVar33[4] = -(pbVar21[0xe] == 0x6e);
        auVar33[5] = -(pbVar21[0xf] == 0x74);
        auVar33[6] = -(pbVar21[0x10] == 0x61);
        auVar33[7] = -(pbVar21[0x11] == 0x74);
        auVar33[8] = -(pbVar21[0x12] == 0x69);
        auVar33[9] = -(pbVar21[0x13] == 0x6f);
        auVar33[10] = -(pbVar21[0x14] == 0x6e);
        auVar33[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar33[0xc] = -(pbVar21[0x16] == 0x74);
        auVar33[0xd] = -(pbVar21[0x17] == 0x61);
        auVar33[0xe] = -(pbVar21[0x18] == 0x67);
        auVar33[0xf] = -(pbVar21[0x19] == 0x5d);
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
    }
    if (pbVar17 == *(byte **)(lStack_e0 + 0x58)) {
LAB_0c18ec18:
      if ((int)uStack_b8 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c18eca0;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_b8._4_4_;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)FUN_048aead0(lVar23 + 0x18);
        }
        auStack_1e8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar5,1);
        if (auStack_1e8._0_8_ == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1e8);
          if (auStack_1e8._0_8_ == 0) goto LAB_0c18eca0;
        }
        if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c18eca0:
          lVar23 = 0;
        }
      }
      uStack_240 = (long *)&UNK_0488e0b0;
      pcStack_238 = (code *)0x0;
      uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
      uStack_250 = 0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d0 = ZEXT816(0x488e0b0);
      auStack_1c0._0_5_ = 0x48b5725f;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_118._8_8_ = 0x1a;
      auStack_118._0_8_ = 0x21;
      *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar15 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar15 = _DAT_013bbacd;
      puVar15[1] = uVar4;
      *(undefined1 *)((long)puVar15 + 0x1a) = 0;
      puStack_108 = puVar15;
      lVar23 = func_0x048b5060(lVar23,auStack_118);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_1e8) {
        pcVar18 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar15);
          if (auStack_1c0[4] != '\0') {
            if (auStack_1c0[4] == '\x02') {
              (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar15);
            }
            else {
              uVar4 = auStack_1e8._8_8_;
              auStack_1e8._8_8_ = 0;
              *puVar15 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar23 + 0x38) = auStack_1d0._0_8_;
        *(undefined8 *)(lVar23 + 0x40) = auStack_1d0._8_8_;
        *(undefined4 *)(lVar23 + 0x48) = auStack_1c0._0_4_;
        *(char *)(lVar23 + 0x4c) = auStack_1c0[4];
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if ((auStack_118[0] & 1) != 0) {
        func_0x0412a280(puStack_108,auStack_118._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_1e8 + 8);
      }
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(&uStack_250);
      }
    }
    else {
      iVar12 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar12 == _DAT_0f550ac4) goto LAB_0c18ec18;
    }
    cStack_38 = cStack_b0;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    func_0x0c2a0570(auStack_1e8,&lStack_68,&UNK_011ed181,10,0);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a100;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a0dc0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &UNK_0c296cb0;
    puStack_210 = &UNK_0c2a0e80;
    puStack_208 = &UNK_0c2a1020;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a0880(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2a0570(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2a14a0;
    puStack_208 = &UNK_0c2a1690;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a0880(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c29ffb0(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c18f25f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c18f25f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2a0570(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a178;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a2980;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a2670;
    puStack_210 = &UNK_0c2a2990;
    puStack_208 = &UNK_0c2a2b10;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a0880(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7798 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7798), iVar12 != 0)) {
      func_0x0c1ffc90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7718,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7798);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7718 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c18f400;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7718 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c18f400:
      auStack_1e8._0_8_ = &DAT_0f6d7718;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0eb8d0d0(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7850 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7850), iVar12 != 0)) {
    func_0x0c205df0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d77d0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7850);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d77d0 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c18f4a0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d77d0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c18f4a0:
    puVar14 = &DAT_0f6d77d0;
    if (iRam000000000f6d7830 != -0x2b3da790) goto LAB_0c18f50d;
LAB_0c18f4cb:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c18f50d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2a31c0(&lStack_e0,param_1,lVar22,uVar20);
    lVar23 = lStack_e0;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c18f4cb;
LAB_0c18f50d:
    func_0x0c2a31c0(&lStack_e0,param_1,&UNK_0120ff27,0xe);
    lVar23 = lStack_e0;
  }
  lStack_e0 = lVar23;
  if (cStack_b0 == '\0') {
    if ((DAT_0f6d7850 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7850), iVar12 != 0)) {
      func_0x0c205df0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d77d0,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7850);
    }
    plVar16 = (long *)(*(long *)(lVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar23 + 0x20) - *(long *)(lVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d77d0 + 4)) * 8);
    do {
      lVar22 = *plVar16;
      if (lVar22 == -1) goto LAB_0c18f5a0;
      plVar16 = (long *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar23 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6d77d0 + 4)
            );
    if (plVar16 == *(long **)(lVar23 + 0x38)) {
LAB_0c18f5a0:
      puVar14 = &DAT_0f6d77d0;
    }
    else {
      puVar14 = (undefined *)plVar16[2];
    }
    for (pbVar17 = *(byte **)(lStack_e0 + 0x50); pbVar17 != *(byte **)(lStack_e0 + 0x58);
        pbVar17 = pbVar17 + 0x38) {
      bVar3 = *pbVar17;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0c18f67a;
      }
      else if (*(long *)(pbVar17 + 8) == 0x1a) {
LAB_0c18f67a:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar17 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar17 + 0x10);
        }
        auVar29[0] = -(*pbVar21 == 0x5b);
        auVar29[1] = -(pbVar21[1] == 99);
        auVar29[2] = -(pbVar21[2] == 0x65);
        auVar29[3] = -(pbVar21[3] == 0x72);
        auVar29[4] = -(pbVar21[4] == 0x65);
        auVar29[5] = -(pbVar21[5] == 0x61);
        auVar29[6] = -(pbVar21[6] == 0x6c);
        auVar29[7] = -(pbVar21[7] == 0x3a);
        auVar29[8] = -(pbVar21[8] == 100);
        auVar29[9] = -(pbVar21[9] == 0x6f);
        auVar29[10] = -(pbVar21[10] == 99);
        auVar29[0xb] = -(pbVar21[0xb] == 0x75);
        auVar29[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar29[0xd] = -(pbVar21[0xd] == 0x65);
        auVar29[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar29[0xf] = -(pbVar21[0xf] == 0x74);
        auVar34[0] = -(pbVar21[10] == 99);
        auVar34[1] = -(pbVar21[0xb] == 0x75);
        auVar34[2] = -(pbVar21[0xc] == 0x6d);
        auVar34[3] = -(pbVar21[0xd] == 0x65);
        auVar34[4] = -(pbVar21[0xe] == 0x6e);
        auVar34[5] = -(pbVar21[0xf] == 0x74);
        auVar34[6] = -(pbVar21[0x10] == 0x61);
        auVar34[7] = -(pbVar21[0x11] == 0x74);
        auVar34[8] = -(pbVar21[0x12] == 0x69);
        auVar34[9] = -(pbVar21[0x13] == 0x6f);
        auVar34[10] = -(pbVar21[0x14] == 0x6e);
        auVar34[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar34[0xc] = -(pbVar21[0x16] == 0x74);
        auVar34[0xd] = -(pbVar21[0x17] == 0x61);
        auVar34[0xe] = -(pbVar21[0x18] == 0x67);
        auVar34[0xf] = -(pbVar21[0x19] == 0x5d);
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
    }
    if (pbVar17 == *(byte **)(lStack_e0 + 0x58)) {
LAB_0c18f6a8:
      if ((int)uStack_b8 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0c18f732;
        lVar23 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_b8._4_4_;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)FUN_048aead0(lVar23 + 0x18,0,uStack_b8._4_4_);
        }
        auStack_1e8._0_8_ = func_0x048b0c90(lVar23 + 0x18,puVar14,uVar5,1);
        if (auStack_1e8._0_8_ == 0) {
          auStack_1e8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1e8);
          if (auStack_1e8._0_8_ == 0) goto LAB_0c18f732;
        }
        if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
          lVar23 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0c18f732:
          lVar23 = 0;
        }
      }
      uStack_240 = (long *)&UNK_0488e0b0;
      pcStack_238 = (code *)0x0;
      uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
      uStack_250 = 0;
      auStack_1e8 = (undefined1  [16])0x0;
      auStack_1d0 = ZEXT816(0x488e0b0);
      auStack_1c0._0_5_ = 0x48b5725f;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_118._8_8_ = 0x1a;
      auStack_118._0_8_ = 0x21;
      *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar15 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar15 = _DAT_013bbacd;
      puVar15[1] = uVar4;
      *(undefined1 *)((long)puVar15 + 0x1a) = 0;
      puStack_108 = puVar15;
      lVar23 = func_0x048b5060(lVar23,auStack_118);
      *(undefined8 *)(lVar23 + 0x20) = 0;
      if ((undefined1 *)(lVar23 + 0x20) == auStack_1e8) {
        pcVar18 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar23 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar23 + 0x28);
          (**(code **)(lVar23 + 0x40))(puVar15);
          if (auStack_1c0[4] != '\0') {
            if (auStack_1c0[4] == '\x02') {
              (*(code *)auStack_1d0._0_8_)(5,auStack_1e8 + 8,puVar15);
            }
            else {
              uVar4 = auStack_1e8._8_8_;
              auStack_1e8._8_8_ = 0;
              *puVar15 = uVar4;
            }
          }
        }
        *(undefined8 *)(lVar23 + 0x38) = auStack_1d0._0_8_;
        *(undefined8 *)(lVar23 + 0x40) = auStack_1d0._8_8_;
        *(undefined4 *)(lVar23 + 0x48) = auStack_1c0._0_4_;
        *(char *)(lVar23 + 0x4c) = auStack_1c0[4];
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if ((auStack_118[0] & 1) != 0) {
        func_0x0412a280(puStack_108,auStack_118._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_1d0._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_1e8 + 8);
      }
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(&uStack_250);
      }
    }
    else {
      iVar12 = *(int *)(pbVar17 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550ad8), iVar13 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar12 == _DAT_0f550ac4) goto LAB_0c18f6a8;
    }
    cStack_38 = cStack_b0;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    func_0x0c2a37b0(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c18fa0f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c18fa0f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2a3d70(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a2e0;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a53f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a50e0;
    puStack_210 = &UNK_0c2a5400;
    puStack_208 = &UNK_0c2a5590;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a4080(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2a3d70(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2a5a10;
    puStack_208 = &UNK_0c2a5c00;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a4080(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2a37b0(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c18fdcf:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c18fdcf;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2a3d70(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2a6800;
    puStack_208 = &UNK_0c2a69c0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a4080(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7850 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7850), iVar12 != 0)) {
      func_0x0c205df0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d77d0,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7850);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d77d0 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c18ff70;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d77d0 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c18ff70:
      auStack_1e8._0_8_ = &DAT_0f6d77d0;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0eb8d0d0(param_1);
  func_0x0e981e30(param_1);
  func_0x0e982d30(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7908 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7908), iVar12 != 0)) {
    func_0x0c20b0f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7888,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7908);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7888 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c190020;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7888 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c190020:
    puVar14 = &DAT_0f6d7888;
    if (iRam000000000f6d78e8 != -0x2b3da790) goto LAB_0c19008d;
LAB_0c19004b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c19008d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2a6f40(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c19004b;
LAB_0c19008d:
    func_0x0c2a6f40(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2a7530(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19016f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19016f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2a7af0(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a440;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a8f60;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a8c50;
    puStack_210 = &UNK_0c2a8f70;
    puStack_208 = &UNK_0c2a9100;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a7e00(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2a7af0(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2a9580;
    puStack_208 = &UNK_0c2a9770;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a7e00(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2a7530(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19057f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19057f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2a7af0(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2a9940;
    puStack_208 = &UNK_0c2a9b00;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2a7e00(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7908 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7908), iVar12 != 0)) {
      func_0x0c20b0f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7888,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7908);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7888 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c190720;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7888 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c190720:
      auStack_1e8._0_8_ = &DAT_0f6d7888;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0eb8d0d0(param_1);
  func_0x0e981e30(param_1);
  func_0x0e982d30(param_1);
  func_0x0e9895a0(param_1);
  func_0x0e988940(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d79c0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d79c0), iVar12 != 0)) {
    func_0x0c2107f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7940,0xf53dab8);
    func_0x0410844d(&DAT_0f6d79c0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7940 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c1907e0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7940 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c1907e0:
    puVar14 = &DAT_0f6d7940;
    if (iRam000000000f6d79a0 != -0x2b3da790) goto LAB_0c19084d;
LAB_0c19080b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c19084d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2a9f10(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c19080b;
LAB_0c19084d:
    func_0x0c2a9f10(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2aa500(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19092f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19092f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2aaac0(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a5a8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2abfa0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2abc90;
    puStack_210 = &UNK_0c2abfb0;
    puStack_208 = &UNK_0c2ac140;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2aadd0(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2aaac0(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2ac5c0;
    puStack_208 = &UNK_0c2ac7b0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2aadd0(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2aa500(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c190d3f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c190d3f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2aaac0(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2ac980;
    puStack_208 = &UNK_0c2acb40;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2aadd0(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d79c0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d79c0), iVar12 != 0)) {
      func_0x0c2107f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7940,0xf53dab8);
      func_0x0410844d(&DAT_0f6d79c0);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7940 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c190ee0;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7940 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c190ee0:
      auStack_1e8._0_8_ = &DAT_0f6d7940;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0eb8d0d0(param_1);
  func_0x0e981e30(param_1);
  func_0x0e982d30(param_1);
  func_0x0e9895a0(param_1);
  func_0x0e988940(param_1);
  func_0x0e9b9580(param_1);
  func_0x0e9b7040(param_1);
  func_0x0e9b7c00(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7a78 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7a78), iVar12 != 0)) {
    func_0x0c216150();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d79f8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7a78);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d79f8 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c190fc0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d79f8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c190fc0:
    puVar14 = &DAT_0f6d79f8;
    if (iRam000000000f6d7a58 != -0x2b3da790) goto LAB_0c19102d;
LAB_0c190feb:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c19102d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2acd20(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c190feb;
LAB_0c19102d:
    func_0x0c2acd20(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2ad310(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19110f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19110f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2ad8d0(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a690;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2aee90;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2aeb80;
    puStack_210 = &UNK_0c2aeea0;
    puStack_208 = &UNK_0c2af030;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2adbe0(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2ad8d0(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2af4b0;
    puStack_208 = &UNK_0c2af6a0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2adbe0(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2ad310(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19151f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19151f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2ad8d0(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2af870;
    puStack_208 = &UNK_0c2afa30;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2adbe0(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7a78 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7a78), iVar12 != 0)) {
      func_0x0c216150();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d79f8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7a78);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d79f8 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c1916c0;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d79f8 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c1916c0:
      auStack_1e8._0_8_ = &DAT_0f6d79f8;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0e3b2b90(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7b30 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7b30), iVar12 != 0)) {
    func_0x0c21c3f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7ab0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7b30);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7ab0 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c191760;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7ab0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c191760:
    puVar14 = &DAT_0f6d7ab0;
    if (iRam000000000f6d7b10 != -0x2b3da790) goto LAB_0c1917cd;
LAB_0c19178b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c1917cd;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2afc10(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c19178b;
LAB_0c1917cd:
    func_0x0c2afc10(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2b0200(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c1918af:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c1918af;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b07c0(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a778;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2b1ec0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2b1bb0;
    puStack_210 = &UNK_0c2b1ed0;
    puStack_208 = &UNK_0c2b2050;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b0ad0(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b07c0(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2b24d0;
    puStack_208 = &UNK_0c2b26c0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b0ad0(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b0200(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c191cbf:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c191cbf;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b07c0(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2b2890;
    puStack_208 = &UNK_0c2b2a50;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b0ad0(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7b30 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7b30), iVar12 != 0)) {
      func_0x0c21c3f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7ab0,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7b30);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7ab0 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c191e60;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7ab0 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c191e60:
      auStack_1e8._0_8_ = &DAT_0f6d7ab0;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0e3bfdc0(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7be8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7be8), iVar12 != 0)) {
    func_0x0c222300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7b68,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7be8);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7b68 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c191f00;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7b68 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c191f00:
    puVar14 = &DAT_0f6d7b68;
    if (iRam000000000f6d7bc8 != -0x2b3da790) goto LAB_0c191f6d;
LAB_0c191f2b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c191f6d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2b2e60(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c191f2b;
LAB_0c191f6d:
    func_0x0c2b2e60(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2b3450(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19204f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19204f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b3a10(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a8e0;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2b5050;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2b4d40;
    puStack_210 = &UNK_0c2b5060;
    puStack_208 = &UNK_0c2b51f0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b3d20(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b3a10(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2b5670;
    puStack_208 = &UNK_0c2b5860;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b3d20(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b3450(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c19245f:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c19245f;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b3a10(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2b5a30;
    puStack_208 = &UNK_0c2b5bf0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b3d20(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7be8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7be8), iVar12 != 0)) {
      func_0x0c222300();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7b68,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7be8);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7b68 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c192600;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7b68 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c192600:
      auStack_1e8._0_8_ = &DAT_0f6d7b68;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0e3d3190(param_1);
  func_0x0eb8b520(param_1);
  if ((DAT_0f6d7ca0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7ca0), iVar12 != 0)) {
    func_0x0c228220();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7c20,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7ca0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7c20 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c1926a0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7c20 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c1926a0:
    puVar14 = &DAT_0f6d7c20;
    if (iRam000000000f6d7c80 != -0x2b3da790) goto LAB_0c19270d;
LAB_0c1926cb:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c19270d;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2b5dd0(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c1926cb;
LAB_0c19270d:
    func_0x0c2b5dd0(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2b63c0(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c1927ef:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c1927ef;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b6980(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a9c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2b7f20;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2b7c10;
    puStack_210 = &UNK_0c2b7f30;
    puStack_208 = &UNK_0c2b80b0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b6c90(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b6980(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f3587c8;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c25a3b0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c25a090;
    puStack_210 = &UNK_0c2b8530;
    puStack_208 = &UNK_0c2b8720;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b6c90(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b63c0(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c192bff:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c192bff;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b6980(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2b88f0;
    puStack_208 = &UNK_0c2b8ab0;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b6c90(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7ca0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7ca0), iVar12 != 0)) {
      func_0x0c228220();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7c20,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7ca0);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7c20 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c192da0;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7c20 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c192da0:
      auStack_1e8._0_8_ = &DAT_0f6d7c20;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0e3d3190(param_1);
  func_0x0e2af610(param_1);
  func_0x0e2abb40(param_1);
  func_0x0e2ac980(param_1);
  func_0x0e2ad970(param_1);
  func_0x0e2ae7c0(param_1);
  func_0x0e2b3840(param_1);
  if ((DAT_0f6d7d58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7d58), iVar12 != 0)) {
    func_0x0c22e3d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7cd8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7d58);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7cd8 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c192e70;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7cd8 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c192e70:
    puVar14 = &DAT_0f6d7cd8;
    if (iRam000000000f6d7d38 != -0x2b3da790) goto LAB_0c192edd;
LAB_0c192e9b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c192edd;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2b8c90(&lStack_e0,param_1,lVar22,uVar20);
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c192e9b;
LAB_0c192edd:
    func_0x0c2b8c90(&lStack_e0,param_1,&UNK_0120ff27,0xe);
  }
  if (cStack_b0 == '\0') {
    lStack_68 = lStack_e0;
    uStack_60 = uStack_d8;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_c8;
    lStack_48 = lStack_c0;
    lStack_40 = uStack_b8;
    cStack_38 = cStack_b0;
    func_0x0c2b9280(auStack_1e8,lStack_e0 + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c192fbf:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c192fbf;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b9850(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35aab0;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2bad90;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2baa80;
    puStack_210 = &UNK_0c2bada0;
    puStack_208 = &UNK_0c2baf20;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b9b60(auStack_1e8);
    uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
    lStack_88 = lStack_48;
    lStack_80 = lStack_40;
    puStack_98 = puStack_58;
    uStack_90 = uStack_50;
    lStack_a8 = lStack_68;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b9850(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35ab28;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2bbd70;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2bba50;
    puStack_210 = &UNK_0c2bbd80;
    puStack_208 = &UNK_0c2bbfb0;
    uStack_200 = 0;
    auStack_1f8 = ZEXT816(0);
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b9b60(auStack_1e8);
    uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
    lStack_f8 = lStack_88;
    lStack_f0 = lStack_80;
    puStack_108 = puStack_98;
    uStack_100 = uStack_90;
    auStack_118._8_8_ = uStack_a0;
    auStack_118._0_8_ = lStack_a8;
    func_0x048b0bc0(auStack_1d0);
    func_0x0c2b9280(auStack_1e8,auStack_118._0_8_ + 0x18);
    if (auStack_1d0._4_4_ == 2) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x16;
        iVar12 = *piVar19;
      }
      lVar23 = *(long *)(piVar19 + 0xc);
      while (lVar23 != auStack_1e8._8_8_) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar23 = *(long *)(piVar19 + 0xc);
      }
LAB_0c1933cf:
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else {
      if (auStack_1d0._4_4_ == 1) {
        piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
        iVar12 = *piVar19;
        while (iVar12 != auStack_1d0._0_4_) {
          piVar19 = piVar19 + 0x1a;
          iVar12 = *piVar19;
        }
        goto LAB_0c1933cf;
      }
      if (auStack_1d0._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0c2b9850(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f35a358;
    uVar4 = auStack_1d0._0_8_;
    auStack_1d0._0_8_ = puVar15;
    if ((long *)uVar4 != (long *)0x0) {
      (**(code **)(*(long *)uVar4 + 8))();
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
    plStack_248 = (long *)0x0;
    uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
    pcStack_238 = (code *)0x1;
    uStack_230 = 0;
    puStack_228 = &UNK_0c2a67f0;
    puStack_220 = &SUB_048b06d0;
    puStack_218 = &SUB_0c2a64e0;
    puStack_210 = &UNK_0c2bc550;
    puStack_208 = &UNK_0c2bc710;
    uStack_200 = 0;
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_1f8._8_8_ + 8);
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c2b9b60(auStack_1e8);
    uVar4 = auStack_118._0_8_;
    func_0x048b0bc0(auStack_1d0);
    if ((DAT_0f6d7d58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7d58), iVar12 != 0)) {
      func_0x0c22e3d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7cd8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7d58);
    }
    plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f6d7cd8 + 4)) * 8);
    do {
      lVar23 = *plVar16;
      if (lVar23 == -1) goto LAB_0c193570;
      plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7cd8 + 4))
    ;
    if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c193570:
      auStack_1e8._0_8_ = &DAT_0f6d7cd8;
    }
    else {
      auStack_1e8._0_8_ = plVar16[2];
    }
    auStack_1e8._8_8_ = uVar4 + 0x18;
    func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  }
  func_0x0e3d3190(param_1);
  func_0x0e2af610(param_1);
  func_0x0e2abb40(param_1);
  func_0x0e2ac980(param_1);
  func_0x0e2ad970(param_1);
  func_0x0e2ae7c0(param_1);
  func_0x0e2dac70(param_1);
  func_0x0e2d9ee0(param_1);
  func_0x0e2b3840(param_1);
  if ((DAT_0f6d7e10 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7e10), iVar12 != 0)) {
    func_0x0c2344d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7d90,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7e10);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d7d90 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c193650;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7d90 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0c193650:
    puVar14 = &DAT_0f6d7d90;
    if (iRam000000000f6d7df0 != -0x2b3da790) goto LAB_0c1936bd;
LAB_0c19367b:
    lVar23 = *(long *)(puVar14 + 0x68);
    if (lVar23 == 0) goto LAB_0c1936bd;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0c2bcd50(&lStack_e0,param_1,lVar22,uVar20);
    lVar7 = lStack_e0;
    uVar8 = uStack_d8;
    puVar9 = puStack_d0;
    uVar10 = uStack_c8;
    lVar11 = lStack_c0;
    cStack_38 = cStack_b0;
    lVar23 = lStack_68;
    uVar4 = uStack_60;
    puVar15 = puStack_58;
    uVar6 = uStack_50;
    lVar22 = lStack_48;
  }
  else {
    puVar14 = (undefined *)plVar16[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0c19367b;
LAB_0c1936bd:
    func_0x0c2bcd50(&lStack_e0,param_1,&UNK_0138657c,0x17);
    lVar7 = lStack_e0;
    uVar8 = uStack_d8;
    puVar9 = puStack_d0;
    uVar10 = uStack_c8;
    lVar11 = lStack_c0;
    cStack_38 = cStack_b0;
    lVar23 = lStack_68;
    uVar4 = uStack_60;
    puVar15 = puStack_58;
    uVar6 = uStack_50;
    lVar22 = lStack_48;
  }
  lStack_48 = lVar11;
  uStack_50 = uVar10;
  puStack_58 = puVar9;
  uStack_60 = uVar8;
  lStack_68 = lVar7;
  if (cStack_38 != '\0') goto LAB_0c193d89;
  lStack_40 = uStack_b8;
  func_0x0c2bd340(auStack_1e8,lStack_68 + 0x18);
  if (auStack_1d0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
    iVar12 = *piVar19;
    while (iVar12 != auStack_1d0._0_4_) {
      piVar19 = piVar19 + 0x16;
      iVar12 = *piVar19;
    }
    lVar23 = *(long *)(piVar19 + 0xc);
    while (lVar23 != auStack_1e8._8_8_) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar23 = *(long *)(piVar19 + 0xc);
    }
LAB_0c19379f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (auStack_1d0._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x1a;
        iVar12 = *piVar19;
      }
      goto LAB_0c19379f;
    }
    if (auStack_1d0._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0c2bd910(auStack_1e8,&lStack_68,&UNK_011ed181,10,0x10);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f35ad10;
  uVar4 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar15;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
  plStack_248 = (long *)0x0;
  uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
  pcStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0c2bee50;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_0c2beb40;
  puStack_210 = &UNK_0c2bee60;
  puStack_208 = &UNK_0c2befe0;
  uStack_200 = 0;
  auStack_1f8 = ZEXT816(0);
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  uVar4 = auStack_1f8._8_8_;
  if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar16 = (long *)(auStack_1f8._8_8_ + 8);
    lVar23 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c2bdc20(auStack_1e8);
  uStack_78 = CONCAT71(uStack_78._1_7_,cStack_38);
  lStack_88 = lStack_48;
  lStack_80 = lStack_40;
  puStack_98 = puStack_58;
  uStack_90 = uStack_50;
  lStack_a8 = lStack_68;
  uStack_a0 = uStack_60;
  func_0x048b0bc0(auStack_1d0);
  func_0x0c2bd910(auStack_1e8,&lStack_a8,&UNK_011ea907,0xb,1);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f35ab28;
  uVar4 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar15;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
  plStack_248 = (long *)0x0;
  uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
  pcStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0c2bbd70;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_0c2bba50;
  puStack_210 = &UNK_0c2bf460;
  puStack_208 = &UNK_0c2bf690;
  uStack_200 = 0;
  auStack_1f8 = ZEXT816(0);
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  uVar4 = auStack_1f8._8_8_;
  if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar16 = (long *)(auStack_1f8._8_8_ + 8);
    lVar23 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c2bdc20(auStack_1e8);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,(undefined1)uStack_78);
  lStack_f8 = lStack_88;
  lStack_f0 = lStack_80;
  puStack_108 = puStack_98;
  uStack_100 = uStack_90;
  auStack_118._8_8_ = uStack_a0;
  auStack_118._0_8_ = lStack_a8;
  func_0x048b0bc0(auStack_1d0);
  func_0x0c2bd340(auStack_1e8,auStack_118._0_8_ + 0x18);
  if (auStack_1d0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x60);
    iVar12 = *piVar19;
    while (iVar12 != auStack_1d0._0_4_) {
      piVar19 = piVar19 + 0x16;
      iVar12 = *piVar19;
    }
    lVar23 = *(long *)(piVar19 + 0xc);
    while (lVar23 != auStack_1e8._8_8_) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar23 = *(long *)(piVar19 + 0xc);
    }
LAB_0c193baf:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (auStack_1d0._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x78) + 0x48);
      iVar12 = *piVar19;
      while (iVar12 != auStack_1d0._0_4_) {
        piVar19 = piVar19 + 0x1a;
        iVar12 = *piVar19;
      }
      goto LAB_0c193baf;
    }
    if (auStack_1d0._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0c2bd910(auStack_1e8,auStack_118,&UNK_01217d7f,0x17,0x10);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f35a358;
  uVar4 = auStack_1d0._0_8_;
  auStack_1d0._0_8_ = puVar15;
  if ((long *)uVar4 != (long *)0x0) {
    (**(code **)(*(long *)uVar4 + 8))();
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_1d8);
  plStack_248 = (long *)0x0;
  uStack_240 = (long *)((ulong)uStack_240 & 0xffffffff00000000);
  pcStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0c2a67f0;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_0c2a64e0;
  puStack_210 = &UNK_0c2bf860;
  puStack_208 = &UNK_0c2bfa20;
  uStack_200 = 0;
  auStack_1f8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  uVar4 = auStack_1f8._8_8_;
  if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar16 = (long *)(auStack_1f8._8_8_ + 8);
    lVar23 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c2bdc20(auStack_1e8);
  uVar4 = auStack_118._0_8_;
  func_0x048b0bc0(auStack_1d0);
  if ((DAT_0f6d7e10 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6d7e10), iVar12 != 0)) {
    func_0x0c2344d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d7d90,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7e10);
  }
  plVar16 = (long *)(*(long *)(uVar4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f6d7d90 + 4)) * 8);
  do {
    lVar23 = *plVar16;
    if (lVar23 == -1) goto LAB_0c193d50;
    plVar16 = (long *)(*(long *)(uVar4 + 0x30) + lVar23 * 0x18);
  } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f6d7d90 + 4));
  if (plVar16 == *(long **)(uVar4 + 0x38)) {
LAB_0c193d50:
    auStack_1e8._0_8_ = &DAT_0f6d7d90;
  }
  else {
    auStack_1e8._0_8_ = plVar16[2];
  }
  auStack_1e8._8_8_ = uVar4 + 0x18;
  func_0x0ed624b0(auStack_1e8,&UNK_01217d7f,0x17);
  lVar23 = lStack_68;
  uVar4 = uStack_60;
  puVar15 = puStack_58;
  uVar6 = uStack_50;
  lVar22 = lStack_48;
LAB_0c193d89:
  lStack_48 = lVar22;
  uStack_50 = uVar6;
  puStack_58 = puVar15;
  uStack_60 = uVar4;
  lStack_68 = lVar23;
  func_0x0c1a3000(param_1);
  func_0x0c1a3150(param_1);
  auStack_158._8_8_ = 0xc1a32b2;
  func_0x0e2203b0();
  auStack_158._8_8_ = 0xc1a32ba;
  func_0x0e13f650(param_1);
  auStack_158._8_8_ = 0xc1a32c2;
  func_0x0e13d560(param_1);
  auStack_158._8_8_ = 0xc1a32ca;
  func_0x0e13e670(param_1);
  auStack_158._8_8_ = 0xc1a32d2;
  func_0x0e812740(param_1);
  auStack_158._8_8_ = 0xc1a32db;
  lVar23 = func_0x0c23ee40(param_1 + 0x18);
  if ((*(int *)(lVar23 + 0x60) == -0x2b3da790) && (lVar23 = *(long *)(lVar23 + 0x68), lVar23 != 0))
  {
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    puVar14 = (undefined *)(lVar23 + 9);
    if (bVar24) {
      puVar14 = *(undefined **)(lVar23 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar20 = *(ulong *)(lVar23 + 0x10);
    }
  }
  else {
    puVar14 = &UNK_0140879e;
    uVar20 = 0x16;
  }
  auStack_158._8_8_ = 0xc1a332a;
  func_0x0c2c4a30(&lStack_130,param_1,puVar14,uVar20,0);
  if ((char)uStack_100 == '\0') {
    uStack_c8 = uStack_100;
    lStack_f0 = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
    uStack_e8 = CONCAT44(uStack_11c,uStack_120);
    uStack_d8 = auStack_118._8_8_;
    puStack_d0 = puStack_108;
    lStack_e0 = auStack_118._0_8_;
    lStack_f8 = lStack_130;
    auStack_158._8_8_ = 0xc1a3381;
    func_0x0c1ad0b0(&lStack_80,&lStack_f8,&UNK_011ed181,10);
    auStack_158._8_8_ = 0xc1a33a6;
    func_0x0c2c6210(&lStack_48,&lStack_80,&UNK_011ea907,0xb,1);
    auStack_158._8_8_ = 0xc1a33c5;
    func_0x0c1ad300(&uStack_b8,&lStack_48,&UNK_01217d7f,0x17);
    lVar23 = uStack_b8 + 0x18;
    auStack_158._8_8_ = 0xc1a33d9;
    lStack_140 = func_0x0c23ee40(lVar23);
    auStack_158._8_8_ = 0xc1a33f5;
    lStack_138 = lVar23;
    func_0x0ed624b0(&lStack_140,&UNK_01217d7f,0x17);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
