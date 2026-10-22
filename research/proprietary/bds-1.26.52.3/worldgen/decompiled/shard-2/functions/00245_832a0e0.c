/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x842a0e0 (ELF vaddr 0x832a0e0)
 * Label: caller-of-callee
 * Body:  [[0842a0e0, 0842a731] [0842a740, 0842b301] [0842b310, 0842b50c] [0842b510, 0842b9bd]]
 * Ghidra: FUN_0842a0e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0842a0e0(long param_1)

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
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  bool bVar15;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined4 uStack_117;
  undefined1 uStack_113;
  undefined2 uStack_112;
  undefined1 uStack_110;
  undefined2 uStack_10f;
  undefined5 uStack_10d;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined2 uStack_98;
  undefined2 uStack_96;
  uint uStack_94;
  uint uStack_90;
  undefined1 uStack_8c;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  char cStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x078ef550();
  func_0x07820f40(param_1);
  if ((DAT_0f5d4638 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4638), iVar7 != 0)) {
    func_0x08511170();
    func_0x0410844d(&DAT_0f5d4638);
  }
  uVar12 = _DAT_0f5d4630;
  lVar13 = _DAT_0f5d4628;
  if ((DAT_0f5d4618 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4618), iVar7 != 0)) {
    func_0x085102c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4598,0xf53dab8);
    func_0x0410844d(&DAT_0f5d4618);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d4598 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0842a181;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4598 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0842a181:
    puVar8 = &DAT_0f5d4598;
    iVar7 = iRam000000000f5d45f8;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar15 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar13 = lVar2 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08510660(&lStack_80,param_1,lVar13,uVar12);
  if (cStack_50 == '\0') {
    if ((DAT_0f5d4638 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4638), iVar7 != 0)) {
      func_0x08511170();
      func_0x0410844d(&DAT_0f5d4638);
    }
    lVar13 = lStack_80;
    uStack_58 = 0x257b883200000001;
    if ((DAT_0f5d4618 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4618), iVar7 != 0)) {
      func_0x085102c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4598,0xf53dab8);
      func_0x0410844d(&DAT_0f5d4618);
    }
    puStack_150 = (undefined1 *)(lVar13 + 0x18);
    plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d4598 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_0842a280;
      plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4598 + 4))
    ;
    if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0842a280:
      puStack_158 = &DAT_0f5d4598;
    }
    else {
      puStack_158 = (undefined *)plVar9[2];
    }
    FUN_0ed621a0(&puStack_158,uStack_58._4_4_);
    puStack_158 = (undefined *)CONCAT62(puStack_158._2_6_,1);
    uStack_148 = uStack_58._4_4_;
    plStack_140 = (long *)0x0;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_118 = 8;
    uStack_117 = 0x44495555;
    uStack_113 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0x3f600000;
    puStack_150 = auStack_78;
    func_0x048afb10(&lStack_100,8);
    uStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_98 = 0xff00;
    uStack_94 = uStack_94 & 0xffffff00;
    uStack_90 = uStack_90 & 0xffffff00;
    uStack_8c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef42d08;
    if (plStack_140 != (long *)0x0) {
      lVar13 = *plStack_140;
      plStack_140 = plVar9;
      (**(code **)(lVar13 + 8))();
      plVar9 = plStack_140;
    }
    plStack_140 = plVar9;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0._4_4_ << 0x20);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_048b06c0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b02c0;
    puStack_180 = &UNK_085111f0;
    puStack_178 = &UNK_08511350;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar9 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        FUN_0412c2d0(plVar9);
      }
    }
    puVar3 = puStack_150;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_1c0[0] = _DAT_0f550a0c;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar13 = lStack_138;
    plVar1 = plStack_140;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    plStack_1b8 = plVar9 + 3;
    plStack_140 = (long *)0x0;
    lStack_138 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar13;
    plVar9[7] = lStack_120;
    plVar9[5] = lStack_130;
    plVar9[6] = lStack_128;
    lStack_130 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    plVar9[10] = lStack_108;
    plVar9[8] = CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,uStack_118)));
    plVar9[9] = CONCAT53(uStack_10d,CONCAT21(uStack_10f,uStack_110));
    uStack_118 = 0;
    uStack_117 = 0;
    uStack_113 = 0;
    uStack_112 = 0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10d = 0;
    lStack_108 = 0;
    plVar9[0xb] = lStack_100;
    plVar9[0xc] = lStack_f8;
    plVar9[0xd] = lStack_f0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    plVar9[0xe] = lStack_e8;
    plVar9[0xf] = lStack_e0;
    plVar9[0x10] = lStack_d8;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_d0;
    plVar9[0x12] = lStack_c8;
    plVar9[0x13] = lStack_c0;
    plVar9[0x14] = lStack_b8;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    plVar9[0x17] = lStack_a0;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_b0;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_b0._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_a8;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_a8._4_4_;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_8c,CONCAT43(uStack_90,uStack_94._1_3_));
    plVar9[0x18] = CONCAT44(uStack_94,CONCAT22(uStack_96,uStack_98));
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    uStack_1b0 = plVar9;
    FUN_048afd20(puVar3,auStack_1c0);
    plVar9 = uStack_1b0;
    if (uStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1b0 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
        FUN_0412c2d0(plVar9);
      }
    }
    plVar9 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        FUN_0412c2d0(plVar9);
      }
    }
    lVar13 = *(long *)(puVar3 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar3 + 8); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_0842a74a:
      piVar14[4] = piVar14[4] | (int)puStack_158 << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
        iVar7 = *piVar14;
        while (iVar7 != *(int *)(puVar3 + 0x18)) {
          piVar14 = piVar14 + 0x1a;
          iVar7 = *piVar14;
        }
        goto LAB_0842a74a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_158 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_140);
  }
  func_0x078ee1d0(param_1);
  if ((DAT_0f5d46f0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d46f0), iVar7 != 0)) {
    func_0x08512840();
    func_0x0410844d(&DAT_0f5d46f0);
  }
  uVar12 = _DAT_0f5d46e8;
  lVar13 = _DAT_0f5d46e0;
  if ((DAT_0f5d46d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d46d0), iVar7 != 0)) {
    func_0x085115e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4650,0xf53dab8);
    func_0x0410844d(&DAT_0f5d46d0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d4650 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0842a7d1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4650 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0842a7d1:
    puVar8 = &DAT_0f5d4650;
    iVar7 = iRam000000000f5d46b0;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar15 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar13 = lVar2 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08511cc0(&lStack_80,param_1,lVar13,uVar12);
  if (cStack_50 == '\0') {
    func_0x085128c0(&puStack_158,&lStack_80,&UNK_01346eec,0xb);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f11d148;
    if (plStack_140 != (long *)0x0) {
      lVar13 = *plStack_140;
      plStack_140 = plVar9;
      (**(code **)(lVar13 + 8))();
      plVar9 = plStack_140;
    }
    plStack_140 = plVar9;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_08513060;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_08510200;
    puStack_180 = &UNK_08513120;
    puStack_178 = &UNK_08513280;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar9 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x08512b70(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x085128c0(&puStack_158,&lStack_80,&UNK_014b40b5,0x15);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f11d1c0;
    if (plStack_140 != (long *)0x0) {
      lVar13 = *plStack_140;
      plStack_140 = plVar9;
      (**(code **)(lVar13 + 8))();
      plVar9 = plStack_140;
    }
    plStack_140 = plVar9;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_08513950;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0795c550;
    puStack_180 = &UNK_08513960;
    puStack_178 = &UNK_08513c90;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar9 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x08512b70(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x085128c0(&puStack_158,&lStack_80,&UNK_012f7663,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ec520;
    if (plStack_140 != (long *)0x0) {
      lVar13 = *plStack_140;
      plStack_140 = plVar9;
      (**(code **)(lVar13 + 8))();
      plVar9 = plStack_140;
    }
    plStack_140 = plVar9;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0795c3c0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_07958070;
    puStack_180 = &UNK_08514100;
    puStack_178 = &UNK_08514260;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar9 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        FUN_0412c2d0(plVar9);
      }
    }
    func_0x08512b70(&puStack_158);
    lVar13 = lStack_80;
    iVar7 = (int)uStack_58;
    uVar4 = uStack_58._4_4_;
    func_0x048b0bc0(&plStack_140);
    if ((DAT_0f5d46d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d46d0), iVar6 != 0)) {
      func_0x085115e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4650,0xf53dab8);
      func_0x0410844d(&DAT_0f5d46d0);
    }
    plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d4650 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_0842ac40;
      plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4650 + 4))
    ;
    if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0842ac40:
      puVar8 = &DAT_0f5d4650;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar7 - 1U) &&
       (cVar5 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0144de58),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(lVar13 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_158 = (undefined *)0x0;
      puStack_150 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_158);
      puVar8 = puStack_158;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
  }
  if ((DAT_0f5d4440 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4440), iVar7 != 0)) {
    func_0x0850db80();
    func_0x0410844d(&DAT_0f5d4440);
  }
  uVar12 = _DAT_0f5d4438;
  lVar13 = _DAT_0f5d4430;
  if ((DAT_0f5d44d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d44d8), iVar7 != 0)) {
    func_0x0850e5d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4458,0xf53dab8);
    func_0x0410844d(&DAT_0f5d44d8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d4458 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0842ad51;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4458 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0842ad51:
    puVar8 = &DAT_0f5d4458;
    iVar7 = iRam000000000f5d44b8;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar15 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar13 = lVar2 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x085146d0(&lStack_80,param_1,lVar13,uVar12);
  if (cStack_50 != '\0') {
    return;
  }
  if ((DAT_0f5d4440 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d4440), iVar7 != 0)) {
    func_0x0850db80();
    func_0x0410844d(&DAT_0f5d4440);
  }
  lVar13 = lStack_80;
  uStack_58 = 0x1d756bcb00000001;
  if ((DAT_0f5d44d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d44d8), iVar7 != 0)) {
    func_0x0850e5d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4458,0xf53dab8);
    func_0x0410844d(&DAT_0f5d44d8);
  }
  puStack_150 = (undefined1 *)(lVar13 + 0x18);
  plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5d4458 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0842ae50;
    plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d4458 + 4));
  if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_0842ae50:
    puStack_158 = &DAT_0f5d4458;
  }
  else {
    puStack_158 = (undefined *)plVar9[2];
  }
  FUN_0ed621a0(&puStack_158,uStack_58._4_4_);
  puStack_158 = (undefined *)CONCAT62(puStack_158._2_6_,1);
  uStack_148 = uStack_58._4_4_;
  plStack_140 = (long *)0x0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0x12;
  uStack_117 = 0x70796157;
  uStack_113 = 0x6f;
  uStack_112 = 0x6e69;
  uStack_110 = 0x74;
  uStack_10f = 0x73;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0x3f600000;
  puStack_150 = auStack_78;
  func_0x048afb10(&lStack_100,8);
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_98 = 0xff00;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_8c = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f11d2a8;
  if (plStack_140 != (long *)0x0) {
    lVar13 = *plStack_140;
    plStack_140 = plVar9;
    (**(code **)(lVar13 + 8))();
    plVar9 = plStack_140;
  }
  plStack_140 = plVar9;
  auStack_1c0[0] = uStack_148;
  plStack_1b8 = (long *)0x0;
  uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
  uStack_1a8 = 1;
  uStack_1a0 = 0;
  puStack_198 = &UNK_08518ed0;
  puStack_190 = &SUB_048b06d0;
  puStack_188 = &UNK_08517570;
  puStack_180 = &UNK_08518f90;
  puStack_178 = &UNK_085191a0;
  uStack_170 = 0;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  func_0x048b05a0(puStack_150,auStack_1c0);
  plVar9 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      FUN_0412c2d0(plVar9);
    }
  }
  puVar3 = puStack_150;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_1c0[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar13 = lStack_138;
  plVar1 = plStack_140;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_1b8 = plVar9 + 3;
  plStack_140 = (long *)0x0;
  lStack_138 = 0;
  plVar9[3] = (long)plVar1;
  plVar9[4] = lVar13;
  plVar9[7] = lStack_120;
  plVar9[5] = lStack_130;
  plVar9[6] = lStack_128;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  plVar9[10] = lStack_108;
  plVar9[8] = CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,uStack_118)));
  plVar9[9] = CONCAT53(uStack_10d,CONCAT21(uStack_10f,uStack_110));
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_113 = 0;
  uStack_112 = 0;
  uStack_110 = 0;
  uStack_10f = 0;
  uStack_10d = 0;
  lStack_108 = 0;
  plVar9[0xb] = lStack_100;
  plVar9[0xc] = lStack_f8;
  plVar9[0xd] = lStack_f0;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  plVar9[0xe] = lStack_e8;
  plVar9[0xf] = lStack_e0;
  plVar9[0x10] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_d0;
  plVar9[0x12] = lStack_c8;
  plVar9[0x13] = lStack_c0;
  plVar9[0x14] = lStack_b8;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  plVar9[0x17] = lStack_a0;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_b0;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_b0._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_a8;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_a8._4_4_;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_8c,CONCAT43(uStack_90,uStack_94._1_3_));
  plVar9[0x18] = CONCAT44(uStack_94,CONCAT22(uStack_96,uStack_98));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_1b0 = plVar9;
  FUN_048afd20(puVar3,auStack_1c0);
  plVar9 = uStack_1b0;
  if (uStack_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b0 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar9);
    }
  }
  lVar13 = *(long *)(puVar3 + 0x10);
  iVar7 = *(int *)(puVar3 + 0x1c);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != *(int *)(puVar3 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar3 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0842b31a:
    piVar14[4] = piVar14[4] | (int)puStack_158 << 0x10;
  }
  else {
    if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)(puVar3 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0842b31a;
    }
    if (iVar7 == 0) {
      *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_158 << 0x10;
    }
  }
  iVar7 = (int)uStack_58;
  uVar4 = uStack_58._4_4_;
  func_0x048b0bc0(&plStack_140);
  if (iVar7 != 4) {
    if (iVar7 != 1) {
      return;
    }
    if ((DAT_0f5d44d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d44d8), iVar7 != 0)) {
      func_0x0850e5d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4458,0xf53dab8);
      func_0x0410844d(&DAT_0f5d44d8);
    }
    plVar9 = (long *)(*(long *)(lStack_80 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_80 + 0x20) - *(long *)(lStack_80 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5d4458 + 4)) * 8);
    do {
      lVar13 = *plVar9;
      if (lVar13 == -1) goto LAB_0842b3a8;
      plVar9 = (long *)(*(long *)(lStack_80 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_80 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5d4458 + 4));
    if (plVar9 == *(long **)(lStack_80 + 0x38)) {
LAB_0842b3a8:
      puVar8 = &DAT_0f5d4458;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    puVar8 = (undefined *)func_0x048b0c90(lStack_80 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_158 = (undefined *)0x0;
      puStack_150 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_158);
      puVar8 = puStack_158;
    }
    lVar13 = *(long *)(puVar8 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0842b55e;
  }
  if ((DAT_0f5d44d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d44d8), iVar7 != 0)) {
    func_0x0850e5d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d4458,0xf53dab8);
    func_0x0410844d(&DAT_0f5d44d8);
  }
  plVar9 = (long *)(*(long *)(lStack_80 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_80 + 0x20) - *(long *)(lStack_80 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5d4458 + 4)) * 8);
  do {
    lVar13 = *plVar9;
    if (lVar13 == -1) goto LAB_0842b418;
    plVar9 = (long *)(*(long *)(lStack_80 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_80 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f5d4458 + 4));
  if (plVar9 == *(long **)(lStack_80 + 0x38)) {
LAB_0842b418:
    puVar8 = &DAT_0f5d4458;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
  }
  puVar8 = (undefined *)func_0x048b1040(lStack_80 + 0x18,puVar8,uVar4,1);
  if (puVar8 == (undefined *)0x0) {
    puStack_158 = (undefined *)0x0;
    puStack_150 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_158);
    puVar11 = *(undefined **)(puStack_158 + 0x38);
    puVar8 = puStack_158;
    if (puVar11 == (undefined *)0x0) goto LAB_0842b4ea;
LAB_0842b506:
    do {
      puVar8 = puVar11;
      puVar11 = *(undefined **)(puVar8 + 0x38);
      if (*(undefined **)(puVar8 + 0x38) == (undefined *)0x0) {
        puStack_158 = (undefined *)0x0;
        puStack_150 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_158);
        puVar11 = puStack_158;
      }
    } while (puVar11 != (undefined *)0x0);
  }
  else {
    puVar11 = *(undefined **)(puVar8 + 0x38);
    if (*(undefined **)(puVar8 + 0x38) != (undefined *)0x0) goto LAB_0842b506;
LAB_0842b4ea:
    puStack_158 = (undefined *)0x0;
    puStack_150 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_158);
    puVar11 = puStack_158;
    if (puStack_158 != (undefined *)0x0) goto LAB_0842b506;
  }
  lVar13 = *(long *)(puVar8 + 0x48);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_0842b55e:
  puVar10[1] = 40000;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0xff;
  *puVar10 = &UNK_0f4e3cf0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  *(undefined8 *)((long)puVar10 + 0x29) = 0;
  *(undefined8 *)((long)puVar10 + 0x31) = 0;
  plVar9 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar10;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
  return;
}


