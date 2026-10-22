/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7cab540 (ELF vaddr 0x7bab540)
 * Label: caller-of-callee
 * Body:  [[07cab540, 07cabc41] [07cabc50, 07cac281] [07cac290, 07cac8c1] [07cac8d0, 07cad011] [07cad020, 07cad801] [07cad810, 07cadee1] [07cadef0, 07cae501] [07cae510, 07caef02]]
 * Ghidra: FUN_07cab540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07cab540(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
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
  undefined4 auStack_e0 [2];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_38;
  
  if ((DAT_0f5b91b8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b91b8), iVar7 != 0)) {
    func_0x07cd8140();
    func_0x0410844d(&DAT_0f5b91b8);
  }
  uVar11 = _DAT_0f5b91b0;
  lVar12 = _DAT_0f5b91a8;
  if ((DAT_0f5b9250 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9250), iVar7 != 0)) {
    func_0x07cd83b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b91d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9250);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b91d0 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cab5d1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b91d0 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cab5d1:
    puVar8 = &DAT_0f5b91d0;
    iVar7 = iRam000000000f5b9230;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07cdd7a0(&puStack_1b8,param_1,lVar12,uVar11);
  if ((DAT_0f5b9100 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9100), iVar7 != 0)) {
    func_0x07cd7890();
    func_0x0410844d(&DAT_0f5b9100);
  }
  uVar11 = _DAT_0f5b90f8;
  lVar12 = _DAT_0f5b90f0;
  if ((DAT_0f5b9198 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9198), iVar7 != 0)) {
    func_0x07cd79d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9118,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9198);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9118 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cab6a1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9118 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cab6a1:
    puVar8 = &DAT_0f5b9118;
    iVar7 = iRam000000000f5b9178;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07cde2c0(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b9100 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9100), iVar7 != 0)) {
      func_0x07cd7890();
      func_0x0410844d(&DAT_0f5b9100);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b9198 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9198), iVar7 != 0)) {
      func_0x07cd79d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9118,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9198);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b9118 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cab7a0;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9118 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cab7a0:
      puStack_1b8 = &DAT_0f5b9118;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f012438;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0._4_4_ << 0x20);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_05fc5e00;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &UNK_05dcda00;
    puStack_a0 = &UNK_07cdede0;
    puStack_98 = &UNK_07cdef40;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cabc5a:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cabc5a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5b9270 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9270), iVar7 != 0)) {
    func_0x07cd8950();
    func_0x0410844d(&DAT_0f5b9270);
  }
  uVar11 = _DAT_0f5b9268;
  lVar12 = _DAT_0f5b9260;
  if ((DAT_0f5b9308 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9308), iVar7 != 0)) {
    func_0x07cd8ab0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9288,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9308);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9288 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cabce1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9288 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cabce1:
    puVar8 = &DAT_0f5b9288;
    iVar7 = iRam000000000f5b92e8;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07cdf120(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b9270 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9270), iVar7 != 0)) {
      func_0x07cd8950();
      func_0x0410844d(&DAT_0f5b9270);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b9308 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9308), iVar7 != 0)) {
      func_0x07cd8ab0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9288,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9308);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b9288 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cabde0;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9288 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cabde0:
      puStack_1b8 = &DAT_0f5b9288;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_0729f0a0;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &UNK_0651e820;
    puStack_a0 = &UNK_07cdfc40;
    puStack_98 = &UNK_07cdfda0;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cac29a:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cac29a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5b9328 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9328), iVar7 != 0)) {
    func_0x07cd9050();
    func_0x0410844d(&DAT_0f5b9328);
  }
  uVar11 = _DAT_0f5b9320;
  lVar12 = _DAT_0f5b9318;
  if ((DAT_0f5b93c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b93c0), iVar7 != 0)) {
    func_0x07cd91b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9340,0xf53dab8);
    func_0x0410844d(&DAT_0f5b93c0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9340 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cac321;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9340 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cac321:
    puVar8 = &DAT_0f5b9340;
    iVar7 = iRam000000000f5b93a0;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07cdff80(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b9328 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9328), iVar7 != 0)) {
      func_0x07cd9050();
      func_0x0410844d(&DAT_0f5b9328);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b93c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b93c0), iVar7 != 0)) {
      func_0x07cd91b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9340,0xf53dab8);
      func_0x0410844d(&DAT_0f5b93c0);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b9340 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cac420;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9340 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cac420:
      puStack_1b8 = &DAT_0f5b9340;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_0490ce30;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &SUB_0490cb20;
    puStack_a0 = &UNK_07ce0aa0;
    puStack_98 = &UNK_07ce0c00;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar2 = lStack_68;
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cac8da:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cac8da;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    iVar7 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
    func_0x048b0bc0(&plStack_1a0);
    if ((DAT_0f5b93c0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b93c0), iVar6 != 0)) {
      func_0x07cd91b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9340,0xf53dab8);
      func_0x0410844d(&DAT_0f5b93c0);
    }
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5b9340 + 4)) * 8);
    do {
      lVar12 = *plVar9;
      if (lVar12 == -1) goto LAB_07cac960;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5b9340 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_07cac960:
      puVar8 = &DAT_0f5b9340;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012280fa),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(lVar2 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1b8 = (undefined *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1b8);
      puVar8 = puStack_1b8;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5b93e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b93e0), iVar7 != 0)) {
    func_0x07cd9750();
    func_0x0410844d(&DAT_0f5b93e0);
  }
  uVar11 = _DAT_0f5b93d8;
  lVar12 = _DAT_0f5b93d0;
  if ((DAT_0f5b9478 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9478), iVar7 != 0)) {
    func_0x07cd98b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b93f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9478);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b93f8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07caca71;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b93f8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07caca71:
    puVar8 = &DAT_0f5b93f8;
    iVar7 = iRam000000000f5b9458;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07ce0de0(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b93e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b93e0), iVar7 != 0)) {
      func_0x07cd9750();
      func_0x0410844d(&DAT_0f5b93e0);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b9478 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9478), iVar7 != 0)) {
      func_0x07cd98b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b93f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9478);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b93f8 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cacb70;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b93f8 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cacb70:
      puStack_1b8 = &DAT_0f5b93f8;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ee2f8;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_07920050;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &UNK_0651f3e0;
    puStack_a0 = &UNK_07ce1900;
    puStack_98 = &UNK_07ce1a60;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar2 = lStack_68;
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cad02a:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cad02a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    iVar7 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
    func_0x048b0bc0(&plStack_1a0);
    if ((DAT_0f5b9478 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b9478), iVar6 != 0)) {
      func_0x07cd98b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b93f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9478);
    }
    plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5b93f8 + 4)) * 8);
    do {
      lVar12 = *plVar9;
      if (lVar12 == -1) goto LAB_07cad0b0;
      plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5b93f8 + 4))
    ;
    if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_07cad0b0:
      puVar8 = &DAT_0f5b93f8;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120ce84),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(lVar2 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1b8 = (undefined *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1b8);
      puVar8 = puStack_1b8;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5b9498 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9498), iVar7 != 0)) {
    func_0x07cd9e50();
    func_0x0410844d(&DAT_0f5b9498);
  }
  uVar11 = _DAT_0f5b9490;
  lVar12 = _DAT_0f5b9488;
  if ((DAT_0f5b9530 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9530), iVar7 != 0)) {
    func_0x07cd9fb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b94b0,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9530);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b94b0 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cad1c1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b94b0 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cad1c1:
    puVar8 = &DAT_0f5b94b0;
    iVar7 = iRam000000000f5b9510;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07ce1c40(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b9498 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9498), iVar7 != 0)) {
      func_0x07cd9e50();
      func_0x0410844d(&DAT_0f5b9498);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b9530 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9530), iVar7 != 0)) {
      func_0x07cd9fb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b94b0,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9530);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b94b0 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cad2c0;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b94b0 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cad2c0:
      puStack_1b8 = &DAT_0f5b94b0;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0126a0;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_079717a0;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &SUB_05daea90;
    puStack_a0 = &UNK_07ce2760;
    puStack_98 = &UNK_07ce28d0;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    iVar7 = *(int *)(puStack_1b0 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(puStack_1b0 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puStack_1b0 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != *(long *)(puStack_1b0 + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_07cad50f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(*(long *)(puStack_1b0 + 0x10) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puStack_1b0 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cad50f;
      }
      if (iVar7 == 0) {
        *(uint *)(*(long *)(puStack_1b0 + 0x10) + 0x18) =
             *(uint *)(*(long *)(puStack_1b0 + 0x10) + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cad81a:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cad81a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5b9550 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9550), iVar7 != 0)) {
    func_0x07cda550();
    func_0x0410844d(&DAT_0f5b9550);
  }
  uVar11 = _DAT_0f5b9548;
  lVar12 = _DAT_0f5b9540;
  if ((DAT_0f5b95e8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b95e8), iVar7 != 0)) {
    func_0x07cda6b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9568,0xf53dab8);
    func_0x0410844d(&DAT_0f5b95e8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9568 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cad8a1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9568 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cad8a1:
    puVar8 = &DAT_0f5b9568;
    iVar7 = iRam000000000f5b95c8;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07ce29f0(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 == '\0') {
    if ((DAT_0f5b9550 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9550), iVar7 != 0)) {
      func_0x07cda550();
      func_0x0410844d(&DAT_0f5b9550);
    }
    lVar12 = lStack_68;
    uStack_40 = 0xd872e2a500000001;
    if ((DAT_0f5b95e8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b95e8), iVar7 != 0)) {
      func_0x07cda6b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9568,0xf53dab8);
      func_0x0410844d(&DAT_0f5b95e8);
    }
    puStack_1b0 = (undefined1 *)(lVar12 + 0x18);
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b9568 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_07cad9a0;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b9568 + 4))
    ;
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_07cad9a0:
      puStack_1b8 = &DAT_0f5b9568;
    }
    else {
      puStack_1b8 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
    puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
    uStack_1a8 = uStack_40._4_4_;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0x3f600000;
    puStack_1b0 = auStack_60;
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
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0f7ec8;
    if (plStack_1a0 != (long *)0x0) {
      lVar12 = *plStack_1a0;
      plStack_1a0 = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = plStack_1a0;
    }
    plStack_1a0 = plVar9;
    auStack_e0[0] = uStack_1a8;
    plStack_d8 = (long *)0x0;
    uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
    uStack_c8 = 1;
    uStack_c0 = 0;
    puStack_b8 = &UNK_07ce3a60;
    puStack_b0 = &SUB_048b06d0;
    puStack_a8 = &UNK_0651fa70;
    puStack_a0 = &UNK_07ce3a70;
    puStack_98 = &UNK_07ce3c10;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    func_0x048b05a0(puStack_1b0,auStack_e0);
    plVar9 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_1b0;
    iVar7 = *(int *)(puStack_1b0 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(puStack_1b0 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puStack_1b0 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != *(long *)(puStack_1b0 + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_07cadbef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(*(long *)(puStack_1b0 + 0x10) + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puStack_1b0 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cadbef;
      }
      if (iVar7 == 0) {
        *(uint *)(*(long *)(puStack_1b0 + 0x10) + 0x18) =
             *(uint *)(*(long *)(puStack_1b0 + 0x10) + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_e0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_198;
    plVar1 = plStack_1a0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_d8 = plVar9 + 3;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar12;
    plVar9[7] = lStack_180;
    plVar9[5] = lStack_190;
    plVar9[6] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    plVar9[10] = lStack_168;
    plVar9[8] = lStack_178;
    plVar9[9] = lStack_170;
    lStack_178 = 0;
    lStack_170 = 0;
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
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_d0 = plVar9;
    FUN_048afd20(puVar3,auStack_e0);
    plVar9 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar12 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar7 = *piVar10;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar7 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cadefa:
      piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar7 = *piVar10;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar7 = *piVar10;
        }
        goto LAB_07cadefa;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1a0);
  }
  if ((DAT_0f5b9690 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9690), iVar7 != 0)) {
    func_0x07cdb3c0();
    func_0x0410844d(&DAT_0f5b9690);
  }
  uVar11 = _DAT_0f5b9688;
  lVar12 = _DAT_0f5b9680;
  if ((DAT_0f5b9728 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9728), iVar7 != 0)) {
    func_0x07cdb520();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b96a8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9728);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b96a8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_07cadf81;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5b96a8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_07cadf81:
    puVar8 = &DAT_0f5b96a8;
    iVar7 = iRam000000000f5b9708;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x07ce3d50(&lStack_68,param_1,lVar12,uVar11);
  if (cStack_38 != '\0') {
    return;
  }
  if ((DAT_0f5b9690 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9690), iVar7 != 0)) {
    func_0x07cdb3c0();
    func_0x0410844d(&DAT_0f5b9690);
  }
  uStack_40 = 0xd872e2a500000001;
  if ((DAT_0f5b9728 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5b9728), iVar7 != 0)) {
    func_0x07cdb520();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b96a8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9728);
  }
  puStack_1b0 = (undefined1 *)(lStack_68 + 0x18);
  plVar9 = (long *)(*(long *)(lStack_68 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_68 + 0x20) - *(long *)(lStack_68 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5b96a8 + 4)) * 8);
  do {
    lVar12 = *plVar9;
    if (lVar12 == -1) goto LAB_07cae080;
    plVar9 = (long *)(*(long *)(lStack_68 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lStack_68 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f5b96a8 + 4));
  if (plVar9 == *(long **)(lStack_68 + 0x38)) {
LAB_07cae080:
    puStack_1b8 = &DAT_0f5b96a8;
  }
  else {
    puStack_1b8 = (undefined *)plVar9[2];
  }
  FUN_0ed621a0(&puStack_1b8,uStack_40._4_4_);
  puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
  uStack_1a8 = uStack_40._4_4_;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = CONCAT26(lStack_178._6_2_,0x6174616408);
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0x3f600000;
  puStack_1b0 = auStack_60;
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
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0ef44b00;
  if (plStack_1a0 != (long *)0x0) {
    lVar12 = *plStack_1a0;
    plStack_1a0 = plVar9;
    (**(code **)(lVar12 + 8))();
    plVar9 = plStack_1a0;
  }
  plStack_1a0 = plVar9;
  auStack_e0[0] = uStack_1a8;
  plStack_d8 = (long *)0x0;
  uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff00000000);
  uStack_c8 = 1;
  uStack_c0 = 0;
  puStack_b8 = &UNK_048b3f30;
  puStack_b0 = &SUB_048b06d0;
  puStack_a8 = &SUB_048b2190;
  puStack_a0 = &UNK_07ce48b0;
  puStack_98 = &UNK_07ce4a80;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  func_0x048b05a0(puStack_1b0,auStack_e0);
  plVar9 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      FUN_0412c2d0(plVar9);
    }
  }
  puVar3 = puStack_1b0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_e0[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar12 = lStack_198;
  plVar1 = plStack_1a0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_d8 = plVar9 + 3;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  plVar9[3] = (long)plVar1;
  plVar9[4] = lVar12;
  plVar9[7] = lStack_180;
  plVar9[5] = lStack_190;
  plVar9[6] = lStack_188;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar9[10] = lStack_168;
  plVar9[8] = lStack_178;
  plVar9[9] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
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
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_d0 = plVar9;
  FUN_048afd20(puVar3,auStack_e0);
  plVar9 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      FUN_0412c2d0(plVar9);
    }
  }
  lVar12 = *(long *)(puVar3 + 0x10);
  iVar7 = *(int *)(puVar3 + 0x1c);
  if (iVar7 == 2) {
    piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(puVar3 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar7 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_1b8 << 0x10;
      }
      goto LAB_07cae51d;
    }
    piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
    iVar7 = *piVar10;
    while (iVar7 != *(int *)(puVar3 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar7 = *piVar10;
    }
  }
  piVar10[4] = piVar10[4] | (int)puStack_1b8 << 0x10;
LAB_07cae51d:
  func_0x048b0bc0(&plStack_1a0);
  return;
}


