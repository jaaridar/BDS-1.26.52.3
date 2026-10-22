/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdddcca0 (ELF vaddr 0xdcdcca0)
 * Label: caller-of-callee
 * Body:  [[0dddcca0, 0dddd301] [0dddd310, 0dddd52c] [0dddd530, 0ddddbbe]]
 * Ghidra: FUN_0dddcca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dddcca0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_220 [2];
  long *plStack_218;
  undefined8 uStack_210;
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
  undefined *puStack_1b8;
  undefined4 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined2 uStack_16f;
  undefined1 uStack_16d;
  undefined4 uStack_16c;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  uint uStack_f4;
  uint uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 auStack_d8 [2];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined4 auStack_a8 [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f73d9c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73d9c8), iVar6 != 0)) {
    func_0x0de1a2d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73d948,0xf53dab8);
    func_0x0410844d(&DAT_0f73d9c8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73d948 + 4)) * 8);
  do {
    lVar11 = *plVar9;
    if (lVar11 == -1) goto LAB_0dddcd20;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f73d948 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0dddcd20:
    puVar7 = &DAT_0f73d948;
    if (iRam000000000f73d9a8 != -0x2b3da790) goto LAB_0dddcd8d;
LAB_0dddcd4b:
    lVar11 = *(long *)(puVar7 + 0x68);
    if (lVar11 == 0) goto LAB_0dddcd8d;
    bVar15 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar14 = lVar11 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar11 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0de1a6f0(&uStack_e0,param_1,lVar14,uVar13);
  }
  else {
    puVar7 = (undefined *)plVar9[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dddcd4b;
LAB_0dddcd8d:
    func_0x0de1a6f0(&uStack_e0,param_1,&UNK_011a555f,9);
  }
  if (cStack_b0 == '\0') {
    uStack_210._4_4_ = (uint)((ulong)uStack_210 >> 0x20);
    if ((DAT_0f73d9e8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73d9e8), iVar6 != 0)) {
      func_0x0de1a3e0();
      func_0x0410844d(&DAT_0f73d9e8);
    }
    uStack_b8 = 0x9153d0a100000001;
    lVar11 = CONCAT44(uStack_dc,uStack_e0);
    if ((DAT_0f73d9c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73d9c8), iVar6 != 0)) {
      func_0x0de1a2d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f73d948,0xf53dab8);
      func_0x0410844d(&DAT_0f73d9c8);
    }
    puStack_1b0 = (undefined4 *)(lVar11 + 0x18);
    plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f73d948 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_0dddce51;
      plVar9 = (long *)(*(long *)(lVar11 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f73d948 + 4)
            );
    if (plVar9 == *(long **)(lVar11 + 0x38)) {
LAB_0dddce51:
      puStack_1b8 = &DAT_0f73d948;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_b8._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_b8._4_4_;
    uStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    uStack_178 = 0x14;
    uStack_177 = 0x6f635f746f6c73;
    uStack_170 = 0x75;
    uStack_16f = 0x746e;
    uStack_16d = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_d8;
    func_0x048afb10(&lStack_160,8);
    uStack_108 = 0;
    lStack_100 = 0;
    lStack_118 = 0;
    uStack_110 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_f8 = 0xff00;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uStack_f0 = uStack_f0 & 0xffffff00;
    uStack_ec = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f012438;
    if (uStack_1a0 != (long *)0x0) {
      lVar11 = *uStack_1a0;
      uStack_1a0 = puVar8;
      (**(code **)(lVar11 + 8))();
      puVar8 = uStack_1a0;
    }
    uStack_1a0 = puVar8;
    auStack_220[0] = uStack_1a8;
    plStack_218 = (long *)0x0;
    uStack_210 = (long *)((ulong)uStack_210._4_4_ << 0x20);
    uStack_208 = 1;
    uStack_200 = 0;
    puStack_1f8 = &UNK_05fc5e00;
    puStack_1f0 = &SUB_048b06d0;
    puStack_1e8 = &UNK_05dcda00;
    puStack_1e0 = &UNK_0de1b200;
    puStack_1d8 = &UNK_0de1b360;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_220);
    plVar9 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_1c0 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_220[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar11 = lStack_198;
    puVar8 = uStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_218 = plVar9 + 3;
    uStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)puVar8;
    plVar9[4] = lVar11;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = CONCAT71(uStack_177,uStack_178);
    plVar9[9] = CONCAT44(uStack_16c,CONCAT13(uStack_16d,CONCAT21(uStack_16f,uStack_170)));
    uStack_178 = 0;
    uStack_177 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16d = 0;
    uStack_16c = 0;
    lStack_168 = 0;
    plVar9[0xb] = lStack_160;
    plVar9[0xc] = lStack_158;
    plVar9[0xd] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar9[0xe] = lStack_148;
    plVar9[0xf] = lStack_140;
    plVar9[0x10] = lStack_138;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_130;
    plVar9[0x12] = lStack_128;
    plVar9[0x13] = lStack_120;
    plVar9[0x14] = lStack_118;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    plVar9[0x17] = lStack_100;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_110;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_110._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_108;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_108._4_4_;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_100 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_ec,CONCAT43(uStack_f0,uStack_f4._1_3_));
    plVar9[0x18] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    uStack_210 = plVar9;
    FUN_048afd20(puVar3,auStack_220);
    plVar9 = uStack_210;
    if (uStack_210 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_210 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_210 + 0x10))(uStack_210);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_60 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar11 = *(long *)(puVar3 + 4);
    iVar6 = puVar3[7];
    if (iVar6 == 2) {
      piVar12 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != puVar3[6]) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar3 + 2); piVar12 = *(int **)(piVar12 + 0xe))
      {
      }
LAB_0dddd31a:
      piVar12[4] = piVar12[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != puVar3[6]) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_0dddd31a;
      }
      if (iVar6 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    lVar11 = CONCAT44(uStack_dc,uStack_e0);
    iVar6 = (int)uStack_b8;
    uVar5 = uStack_b8._4_4_;
    func_0x048b0bc0(&uStack_1a0);
    if (iVar6 == 4) {
      if ((DAT_0f73d9c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73d9c8), iVar6 != 0)) {
        func_0x0de1a2d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73d948,0xf53dab8);
        func_0x0410844d(&DAT_0f73d9c8);
      }
      plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73d948 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_0dddd438;
        plVar9 = (long *)(*(long *)(lVar11 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f73d948 + 4));
      if (plVar9 == *(long **)(lVar11 + 0x38)) {
LAB_0dddd438:
        puVar7 = &DAT_0f73d948;
      }
      else {
        puVar7 = (undefined *)plVar9[2];
      }
      puVar7 = (undefined *)func_0x048b1040(lVar11 + 0x18,puVar7,uVar5,1);
      if (puVar7 == (undefined *)0x0) {
        puStack_1b8 = (undefined *)0x0;
        puStack_1b0 = (undefined4 *)0x0;
        func_0x048b10d0(&puStack_1b8);
        puVar10 = *(undefined **)(puStack_1b8 + 0x38);
        puVar7 = puStack_1b8;
        if (puVar10 == (undefined *)0x0) goto LAB_0dddd50a;
LAB_0dddd526:
        do {
          puVar7 = puVar10;
          puVar10 = *(undefined **)(puVar7 + 0x38);
          if (*(undefined **)(puVar7 + 0x38) == (undefined *)0x0) {
            puStack_1b8 = (undefined *)0x0;
            puStack_1b0 = (undefined4 *)0x0;
            func_0x048b10d0(&puStack_1b8);
            puVar10 = puStack_1b8;
          }
        } while (puVar10 != (undefined *)0x0);
      }
      else {
        puVar10 = *(undefined **)(puVar7 + 0x38);
        if (*(undefined **)(puVar7 + 0x38) != (undefined *)0x0) goto LAB_0dddd526;
LAB_0dddd50a:
        puStack_1b8 = (undefined *)0x0;
        puStack_1b0 = (undefined4 *)0x0;
        func_0x048b10d0(&puStack_1b8);
        puVar10 = puStack_1b8;
        if (puStack_1b8 != (undefined *)0x0) goto LAB_0dddd526;
      }
      lVar11 = *(long *)(puVar7 + 0x48);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    else {
      if (iVar6 != 1) goto LAB_0dddd5bc;
      if ((DAT_0f73d9c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73d9c8), iVar6 != 0)) {
        func_0x0de1a2d0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73d948,0xf53dab8);
        func_0x0410844d(&DAT_0f73d9c8);
      }
      plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73d948 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_0dddd3b8;
        plVar9 = (long *)(*(long *)(lVar11 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f73d948 + 4));
      if (plVar9 == *(long **)(lVar11 + 0x38)) {
LAB_0dddd3b8:
        puVar7 = &DAT_0f73d948;
      }
      else {
        puVar7 = (undefined *)plVar9[2];
      }
      puVar7 = (undefined *)func_0x048b0c90(lVar11 + 0x18,puVar7,uVar5,1);
      if (puVar7 == (undefined *)0x0) {
        puStack_1b8 = (undefined *)0x0;
        puStack_1b0 = (undefined4 *)0x0;
        func_0x048b0d20(&puStack_1b8);
        puVar7 = puStack_1b8;
      }
      lVar11 = *(long *)(puVar7 + 0x58);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    puVar8[1] = 0xffffffffffffffff;
    puVar8[2] = 0;
    *puVar8 = &UNK_0f49b628;
    *(undefined4 *)(puVar8 + 3) = 0x3601ff;
    *(undefined2 *)((long)puVar8 + 0x1c) = 0;
    plVar9 = *(long **)(lVar11 + 8);
    *(undefined8 **)(lVar11 + 8) = puVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x28))();
    }
  }
LAB_0dddd5bc:
  lVar11 = func_0x0de1b530(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar15 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar14 = lVar11 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar11 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0de1b9b0(&uStack_e0,param_1,lVar14,uVar13);
    uStack_98 = uStack_d0;
    uStack_94 = uStack_cc;
    uStack_90 = uStack_c8;
    uStack_8c = uStack_c4;
    uStack_88 = uStack_c0;
    uStack_84 = uStack_bc;
    uVar4 = uStack_b8;
    cStack_78 = cStack_b0;
  }
  else {
    func_0x0de1b9b0(&uStack_e0,param_1,&UNK_0131f2a0,0xc);
    uStack_98 = uStack_d0;
    uStack_94 = uStack_cc;
    uStack_90 = uStack_c8;
    uStack_8c = uStack_c4;
    uStack_88 = uStack_c0;
    uStack_84 = uStack_bc;
    uVar4 = uStack_b8;
    cStack_78 = cStack_b0;
  }
  if (cStack_78 != '\0') {
    return;
  }
  uStack_b8._0_4_ = (int)uVar4;
  uStack_b8._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_80 = (int)uStack_b8;
  uStack_7c = uStack_b8._4_4_;
  uStack_b8 = uVar4;
  func_0x0de1bef0(&puStack_1b8,CONCAT44(uStack_dc,uStack_e0) + 0x18);
  if (uStack_1a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_1a4,uStack_1a8) + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_1a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    puVar3 = *(undefined4 **)(piVar12 + 0xc);
    while (puVar3 != puStack_1b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      puVar3 = *(undefined4 **)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_1a0._4_4_ != 1) {
      if (uStack_1a0._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0dddd6f3;
    }
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_1a4,uStack_1a8) + 0x78) + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_1a0) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_0dddd6f3:
  func_0x0de1c260(&puStack_1b8,auStack_a8,&UNK_0136f109,0x12,0x10);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef46ef8;
  if (uStack_1a0 != (long *)0x0) {
    lVar11 = *uStack_1a0;
    uStack_1a0 = plVar9;
    (**(code **)(lVar11 + 8))();
    plVar9 = uStack_1a0;
  }
  uStack_1a0 = plVar9;
  auStack_220[0] = uStack_1a8;
  plStack_218 = (long *)0x0;
  uStack_210 = (long *)((ulong)uStack_210 & 0xffffffff00000000);
  uStack_208 = 1;
  uStack_200 = 0;
  puStack_1f8 = &UNK_04906f70;
  puStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &UNK_04906c50;
  puStack_1e0 = &UNK_0de1c760;
  puStack_1d8 = &UNK_0de1c8c0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  plStack_1c0 = (long *)0x0;
  func_0x048b05a0(puStack_1b0,auStack_220);
  plVar9 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1c0 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      FUN_0412c2d0(plVar9);
    }
  }
  func_0x0de1c460(&puStack_1b8);
  cStack_38 = cStack_78;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  func_0x048b0bc0(&uStack_1a0);
  func_0x0de1c260(&puStack_1b8,&uStack_68,&UNK_011a555f,9,0);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4a08f8;
  if (uStack_1a0 != (long *)0x0) {
    lVar11 = *uStack_1a0;
    uStack_1a0 = puVar8;
    (**(code **)(lVar11 + 8))();
    puVar8 = uStack_1a0;
  }
  uStack_1a0 = puVar8;
  auStack_220[0] = uStack_1a8;
  plStack_218 = (long *)0x0;
  uStack_210 = (long *)((ulong)uStack_210 & 0xffffffff00000000);
  uStack_208 = 1;
  uStack_200 = 0;
  puStack_1f8 = &UNK_0de1da10;
  puStack_1f0 = &SUB_048b06d0;
  puStack_1e8 = &UNK_0de1d660;
  puStack_1e0 = &UNK_0de1dad0;
  puStack_1d8 = &UNK_0de1dc30;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  plStack_1c0 = (long *)0x0;
  func_0x048b05a0(puStack_1b0,auStack_220);
  plVar9 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1c0 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      FUN_0412c2d0(plVar9);
    }
  }
  func_0x0de1c460(&puStack_1b8);
  func_0x048b0bc0(&uStack_1a0);
  return;
}


