/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdde1960 (ELF vaddr 0xdce1960)
 * Label: caller-of-callee
 * Body:  [[0dde1960, 0dde1fc1] [0dde1fd0, 0dde21fc] [0dde2200, 0dde2aa5]]
 * Ghidra: FUN_0dde1960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dde1960(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  undefined *puStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined1 *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined4 uStack_18f;
  undefined4 uStack_18b;
  undefined4 uStack_187;
  undefined1 uStack_183;
  undefined2 uStack_182;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined4 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined2 uStack_118;
  undefined2 uStack_116;
  uint uStack_114;
  uint uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((DAT_0f73de48 == '\0') && (iVar7 = func_0x04108328(&DAT_0f73de48), iVar7 != 0)) {
    func_0x0de37910();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73ddc8,0xf53dab8);
    FUN_0410844d(&DAT_0f73de48);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73ddc8 + 4)) * 8);
  do {
    lVar13 = *plVar9;
    if (lVar13 == -1) goto LAB_0dde19e0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f73ddc8 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0dde19e0:
    puVar8 = &DAT_0f73ddc8;
    if (iRam000000000f73de28 != -0x2b3da790) goto LAB_0dde1a4d;
LAB_0dde1a0b:
    lVar13 = *(long *)(puVar8 + 0x68);
    if (lVar13 == 0) goto LAB_0dde1a4d;
    bVar17 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar16 = lVar13 + 9;
    if (bVar17) {
      lVar16 = *(long *)(lVar13 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar17) {
      uVar15 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0de37d40(&uStack_108,param_1,lVar16,uVar15);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0dde1a0b;
LAB_0dde1a4d:
    func_0x0de37d40(&uStack_108,param_1,&UNK_01236484,0x13);
  }
  if ((char)puStack_d8 == '\0') {
    uStack_88._4_4_ = (uint)((ulong)uStack_88 >> 0x20);
    uStack_1c8._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
    if ((DAT_0f73de68 == '\0') && (iVar7 = func_0x04108328(&DAT_0f73de68), iVar7 != 0)) {
      func_0x0de37a20();
      FUN_0410844d(&DAT_0f73de68);
    }
    uStack_e0 = 0xf87bfa800000001;
    lVar13 = CONCAT44(uStack_104,uStack_108);
    if ((DAT_0f73de48 == '\0') && (iVar7 = func_0x04108328(&DAT_0f73de48), iVar7 != 0)) {
      func_0x0de37910();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f73ddc8,0xf53dab8);
      FUN_0410844d(&DAT_0f73de48);
    }
    plStack_1d0 = (long *)(lVar13 + 0x18);
    plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f73ddc8 + 4)) * 8);
    do {
      lVar16 = *plVar9;
      if (lVar16 == -1) goto LAB_0dde1b11;
      plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f73ddc8 + 4)
            );
    if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0dde1b11:
      puStack_1d8 = &DAT_0f73ddc8;
    }
    else {
      puStack_1d8 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_1d8,uStack_e0._4_4_);
    puStack_1d8 = (undefined *)CONCAT62(puStack_1d8._2_6_,1);
    uStack_1c8 = (long *)CONCAT44(uStack_1c8._4_4_,uStack_e0._4_4_);
    plStack_1c0 = (long *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    puStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    uStack_198 = CONCAT31((int3)_DAT_01301a1a,0x28);
    uStack_194._1_3_ = (undefined3)_UNK_01301a1e;
    uStack_194 = CONCAT31(uStack_194._1_3_,(char)((uint)_DAT_01301a1a >> 0x18));
    uStack_190 = (undefined1)((uint)_UNK_01301a1e >> 0x18);
    uStack_18f = _UNK_01301a22;
    uStack_18b = _UNK_01301a26;
    uStack_187 = 0x65636e61;
    uStack_183 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    uStack_150 = 0x3f600000;
    plStack_1d0 = (long *)&uStack_100;
    FUN_048afb10(&lStack_180,8);
    uStack_128 = 0;
    lStack_120 = 0;
    lStack_138 = 0;
    uStack_130 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    uStack_118 = 0xff00;
    uStack_114 = uStack_114 & 0xffffff00;
    uStack_110 = uStack_110 & 0xffffff00;
    uStack_10c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0126a0;
    if (plStack_1c0 != (long *)0x0) {
      lVar13 = *plStack_1c0;
      plStack_1c0 = plVar9;
      (**(code **)(lVar13 + 8))();
      plVar9 = plStack_1c0;
    }
    plStack_1c0 = plVar9;
    auStack_98[0] = (undefined4)uStack_1c8;
    uStack_90 = (long *)0x0;
    uStack_88 = (long *)((ulong)uStack_88._4_4_ << 0x20);
    uStack_80 = 1;
    uStack_78 = 0;
    puStack_70 = &UNK_05daeda0;
    puStack_68 = &SUB_048b06d0;
    puStack_60 = &UNK_05daea90;
    puStack_58 = &UNK_0de38850;
    puStack_50 = &UNK_0de389b0;
    uStack_48 = 0;
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    func_0x048b05a0(plStack_1d0,auStack_98);
    plVar9 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_38 + 1;
      lVar13 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_1d0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    auStack_98[0] = _DAT_0f550a0c;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    puVar5 = puStack_1b8;
    plVar1 = plStack_1c0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef439d0;
    uStack_90 = plVar10 + 3;
    plStack_1c0 = (long *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    plVar10[3] = (long)plVar1;
    plVar10[4] = (long)puVar5;
    plVar10[7] = lStack_1a0;
    plVar10[5] = (long)puStack_1b0;
    plVar10[6] = (long)puStack_1a8;
    puStack_1b0 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    lStack_1a0 = 0;
    plVar10[10] = CONCAT26(uStack_182,CONCAT15(uStack_183,CONCAT41(uStack_187,uStack_18b._3_1_)));
    plVar10[8] = CONCAT44(uStack_194,uStack_198);
    plVar10[9] = CONCAT35((undefined3)uStack_18b,CONCAT41(uStack_18f,uStack_190));
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18b = 0;
    uStack_187 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    plVar10[0xb] = lStack_180;
    plVar10[0xc] = lStack_178;
    plVar10[0xd] = lStack_170;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    plVar10[0xe] = lStack_168;
    plVar10[0xf] = lStack_160;
    plVar10[0x10] = lStack_158;
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    *(undefined4 *)(plVar10 + 0x11) = uStack_150;
    plVar10[0x12] = lStack_148;
    plVar10[0x13] = lStack_140;
    plVar10[0x14] = lStack_138;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    plVar10[0x17] = lStack_120;
    *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_130;
    *(undefined4 *)((long)plVar10 + 0xac) = uStack_130._4_4_;
    *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_128;
    *(undefined4 *)((long)plVar10 + 0xb4) = uStack_128._4_4_;
    uStack_130 = 0;
    uStack_128 = 0;
    lStack_120 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_10c,CONCAT43(uStack_110,uStack_114._1_3_));
    plVar10[0x18] = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
    uStack_b8 = 0;
    uStack_b0 = (long *)0x0;
    uStack_88 = plVar10;
    func_0x048afd20(plVar9,auStack_98);
    plVar10 = uStack_88;
    if (uStack_88 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_88 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_88 + 0x10))(uStack_88);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = uStack_b0;
    if (uStack_b0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_b0 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
        func_0x0412c2d0(plVar10);
      }
    }
    lVar13 = *(long *)((long)plVar9 + 0x10);
    iVar7 = *(int *)((long)plVar9 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plVar9 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)((long)plVar9 + 8);
          piVar14 = *(int **)(piVar14 + 0xe)) {
      }
LAB_0dde1fda:
      piVar14[4] = piVar14[4] | (int)puStack_1d8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != *(int *)((long)plVar9 + 0x18)) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0dde1fda;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_1d8 << 0x10;
      }
    }
    lVar13 = CONCAT44(uStack_104,uStack_108);
    iVar7 = (int)uStack_e0;
    uVar6 = uStack_e0._4_4_;
    func_0x048b0bc0(&plStack_1c0);
    if (iVar7 == 4) {
      if ((DAT_0f73de48 == '\0') && (iVar7 = func_0x04108328(&DAT_0f73de48), iVar7 != 0)) {
        func_0x0de37910();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73ddc8,0xf53dab8);
        FUN_0410844d(&DAT_0f73de48);
      }
      plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73ddc8 + 4)) * 8);
      do {
        lVar16 = *plVar9;
        if (lVar16 == -1) goto LAB_0dde2108;
        plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f73ddc8 + 4));
      if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0dde2108:
        puVar8 = &DAT_0f73ddc8;
      }
      else {
        puVar8 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)FUN_048b1040(lVar13 + 0x18,puVar8,uVar6,1);
      if (puVar8 == (undefined *)0x0) {
        puStack_1d8 = (undefined *)0x0;
        plStack_1d0 = (long *)0x0;
        func_0x048b10d0(&puStack_1d8);
        puVar12 = *(undefined **)(puStack_1d8 + 0x38);
        puVar8 = puStack_1d8;
        if (puVar12 == (undefined *)0x0) goto LAB_0dde21da;
LAB_0dde21f6:
        do {
          puVar8 = puVar12;
          puVar12 = *(undefined **)(puVar8 + 0x38);
          if (*(undefined **)(puVar8 + 0x38) == (undefined *)0x0) {
            puStack_1d8 = (undefined *)0x0;
            plStack_1d0 = (long *)0x0;
            func_0x048b10d0(&puStack_1d8);
            puVar12 = puStack_1d8;
          }
        } while (puVar12 != (undefined *)0x0);
      }
      else {
        puVar12 = *(undefined **)(puVar8 + 0x38);
        if (*(undefined **)(puVar8 + 0x38) != (undefined *)0x0) goto LAB_0dde21f6;
LAB_0dde21da:
        puStack_1d8 = (undefined *)0x0;
        plStack_1d0 = (long *)0x0;
        func_0x048b10d0(&puStack_1d8);
        puVar12 = puStack_1d8;
        if (puStack_1d8 != (undefined *)0x0) goto LAB_0dde21f6;
      }
      lVar13 = *(long *)(puVar8 + 0x48);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar7 != 1) goto LAB_0dde22b2;
      if ((DAT_0f73de48 == '\0') && (iVar7 = func_0x04108328(&DAT_0f73de48), iVar7 != 0)) {
        func_0x0de37910();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f73ddc8,0xf53dab8);
        FUN_0410844d(&DAT_0f73de48);
      }
      plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f73ddc8 + 4)) * 8);
      do {
        lVar16 = *plVar9;
        if (lVar16 == -1) goto LAB_0dde2088;
        plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f73ddc8 + 4));
      if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0dde2088:
        puVar8 = &DAT_0f73ddc8;
      }
      else {
        puVar8 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)func_0x048b0c90(lVar13 + 0x18,puVar8,uVar6,1);
      if (puVar8 == (undefined *)0x0) {
        puStack_1d8 = (undefined *)0x0;
        plStack_1d0 = (long *)0x0;
        func_0x048b0d20(&puStack_1d8);
        puVar8 = puStack_1d8;
      }
      lVar13 = *(long *)(puVar8 + 0x58);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar11[1] = 0xffffffffffffffff;
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0xff;
    *puVar11 = &UNK_0f0edc68;
    uVar3 = _DAT_014f0238;
    puVar11[4] = 0;
    puVar11[5] = uVar3;
    puVar11[6] = 0;
    *(undefined2 *)(puVar11 + 7) = 0;
    *(undefined4 *)((long)puVar11 + 0x3a) = 0;
    *(undefined2 *)((long)puVar11 + 0x3e) = 0;
    plVar9 = *(long **)(lVar13 + 8);
    *(undefined8 **)(lVar13 + 8) = puVar11;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x28))();
    }
  }
LAB_0dde22b2:
  lVar13 = func_0x0cd052e0(param_1 + 0x18);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar17 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar16 = lVar13 + 9;
    if (bVar17) {
      lVar16 = *(long *)(lVar13 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar17) {
      uVar15 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0de38b80(auStack_98,param_1,lVar16,uVar15);
    uStack_108 = auStack_98[0];
    plVar9 = uStack_90;
    plVar10 = uStack_88;
    uVar3 = uStack_80;
    uVar4 = uStack_78;
    puStack_d8 = puStack_68;
  }
  else {
    func_0x0de38b80(auStack_98,param_1,&UNK_01370663,0x19);
    uStack_108 = auStack_98[0];
    plVar9 = uStack_90;
    plVar10 = uStack_88;
    uVar3 = uStack_80;
    uVar4 = uStack_78;
    puStack_d8 = puStack_68;
  }
  if ((char)puStack_68 != '\0') {
    return;
  }
  uStack_90._0_4_ = SUB84(plVar9,0);
  uStack_90._4_4_ = (undefined4)((ulong)plVar9 >> 0x20);
  uStack_88._0_4_ = SUB84(plVar10,0);
  uStack_88._4_4_ = (uint)((ulong)plVar10 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar3;
  uStack_80._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_78._0_4_ = (int)uVar4;
  uStack_78._4_4_ = (int)((ulong)uVar4 >> 0x20);
  iStack_e8 = (int)uStack_78;
  iStack_e4 = uStack_78._4_4_;
  uStack_f8 = (undefined4)uStack_88;
  uStack_f4 = uStack_88._4_4_;
  uStack_f0 = (undefined4)uStack_80;
  uStack_ec = uStack_80._4_4_;
  uStack_100 = (undefined4)uStack_90;
  uStack_fc = uStack_90._4_4_;
  uStack_e0 = 0x1e1bc4d500000004;
  auStack_98[0] = uStack_108;
  uStack_90 = plVar9;
  uStack_88 = plVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  puStack_68 = puStack_d8;
  if ((DAT_0f703718 == '\0') && (iVar7 = func_0x04108328(&DAT_0f703718), iVar7 != 0)) {
    func_0x0cd05240(0xf703700);
    FUN_0410844d(&DAT_0f703718);
  }
  puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,uStack_e0._4_4_);
  plStack_1d0 = (long *)0x0;
  uStack_1c8 = (long *)((ulong)uStack_1c8 & 0xffffffff00000000);
  plStack_1c0 = (long *)0x1;
  puStack_1b8 = &SUB_048aead0;
  puStack_1b0 = &UNK_0de393e0;
  puStack_1a8 = &UNK_0de394a0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18b = 0;
  uStack_187 = 0;
  uStack_183 = 0;
  uStack_182 = 0;
  func_0x049057f0(&uStack_100,&puStack_1d8);
  func_0x048aea50(&puStack_1d8);
  uStack_a8 = uStack_f0;
  uStack_a4 = uStack_ec;
  iStack_a0 = iStack_e8;
  iStack_9c = iStack_e4;
  uStack_b8 = CONCAT44(uStack_fc,uStack_100);
  uStack_b0 = (long *)CONCAT44(uStack_f4,uStack_f8);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4a14a8;
  if ((DAT_0f551bc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551bc8), iVar7 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,_DAT_0f551bb4);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plStack_1d0 = plVar9 + 3;
  plVar9[3] = (long)puVar11;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_1c8 = plVar9;
  func_0x048afd20(&uStack_b8,&puStack_1d8);
  plVar9 = uStack_1c8;
  if (uStack_1c8 != (long *)0x0) {
    LOCK();
    plVar10 = uStack_1c8 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_1c8 + 0x10))(uStack_1c8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c0 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar9);
    }
  }
  if ((DAT_0f703718 == '\0') && (iVar7 = func_0x04108328(&DAT_0f703718), iVar7 != 0)) {
    func_0x0cd05240(0xf703700);
    FUN_0410844d(&DAT_0f703718);
  }
  if (iStack_e4 == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_ec,uStack_f0) + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != iStack_e8) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    lVar13 = *(long *)(piVar14 + 0xc);
    while (lVar13 != CONCAT44(uStack_f4,uStack_f8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar13 = *(long *)(piVar14 + 0xc);
    }
  }
  else {
    if (iStack_e4 != 1) {
      if (iStack_e4 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_ec,uStack_f0) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0dde25b3;
    }
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_ec,uStack_f0) + 0x78) + 0x48);
    iVar7 = *piVar14;
    while (iVar7 != iStack_e8) {
      piVar14 = piVar14 + 0x1a;
      iVar7 = *piVar14;
    }
  }
  *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
LAB_0dde25b3:
  if ((DAT_0f703718 == '\0') && (iVar7 = func_0x04108328(&DAT_0f703718), iVar7 != 0)) {
    func_0x0cd05240(0xf703700);
    FUN_0410844d(&DAT_0f703718);
  }
  puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,0xbf75c8f8);
  plStack_1d0 = (long *)0x0;
  uStack_1c8 = (long *)((ulong)uStack_1c8 & 0xffffffff00000000);
  plStack_1c0 = (long *)0x0;
  puStack_1b8 = &UNK_0de39690;
  puStack_1b0 = &SUB_048b06d0;
  puStack_1a8 = &UNK_0de39ea0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_18b = 0;
  uStack_187 = 0;
  uStack_183 = 0;
  uStack_182 = 0;
  func_0x049057f0(&uStack_100,&puStack_1d8);
  func_0x048aea50(&puStack_1d8);
  uStack_a8 = uStack_f0;
  uStack_a4 = uStack_ec;
  iStack_a0 = iStack_e8;
  iStack_9c = iStack_e4;
  uStack_b8 = CONCAT44(uStack_fc,uStack_100);
  uStack_b0 = (long *)CONCAT44(uStack_f4,uStack_f8);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4a14a8;
  if ((DAT_0f551cb0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551cb0), iVar7 != 0)) {
    func_0x04905d10(0xf551c98);
    FUN_0410844d(&DAT_0f551cb0);
  }
  puStack_1d8 = (undefined *)CONCAT44(puStack_1d8._4_4_,_DAT_0f551c9c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c98;
  plStack_1d0 = plVar9 + 3;
  plVar9[3] = (long)puVar11;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_1c8 = plVar9;
  func_0x048afd20(&uStack_b8,&puStack_1d8);
  plVar9 = uStack_1c8;
  if (uStack_1c8 != (long *)0x0) {
    LOCK();
    plVar10 = uStack_1c8 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_1c8 + 0x10))(uStack_1c8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c0 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar9);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x1301a1a  explosion_resistance
 */
