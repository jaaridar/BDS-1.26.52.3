/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdddf0f0 (ELF vaddr 0xdcdf0f0)
 * Label: caller-of-callee
 * Body:  [[0dddf0f0, 0dddf827] [0dddf830, 0dddfa3e]]
 * Ghidra: FUN_0dddf0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dddf0f0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined3 uStack_170;
  undefined4 uStack_16d;
  undefined4 uStack_169;
  uint uStack_165;
  uint uStack_161;
  undefined5 uStack_15d;
  undefined1 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  char cStack_38;
  
  lVar7 = func_0x0cd03960(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar17) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar16 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0de23880(&uStack_68,param_1,lVar15,uVar16);
    uVar14 = _DAT_01d64d9c;
    uVar4 = _DAT_01d64da4;
  }
  else {
    func_0x0de23880(&uStack_68,param_1,&UNK_0129ded4,0xd);
    uVar14 = _DAT_01d64d9c;
    uVar4 = _DAT_01d64da4;
  }
  if (cStack_38 != '\0') {
    _DAT_01d64d9c = uVar14;
    _DAT_01d64da4 = uVar4;
    return;
  }
  uStack_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  uStack_88 = 0xff;
  puStack_a0 = &UNK_0f49fd98;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  uStack_170 = 0;
  uStack_16d = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_169 = (undefined4)uVar14;
  uStack_165 = (uint)((ulong)uVar14 >> 0x20);
  _DAT_01d64d9c = uVar14;
  _DAT_01d64da4 = uVar4;
  uStack_161 = uVar4;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  plVar8[1] = -1;
  plVar8[2] = 0;
  *(undefined1 *)(plVar8 + 3) = 0xff;
  *plVar8 = (long)&UNK_0f4a8918;
  *(ulong *)((long)plVar8 + 0x2c) = CONCAT44(uStack_161,uStack_165);
  *(uint *)((long)plVar8 + 0x1c) = CONCAT31((undefined3)uStack_174,uStack_178._3_1_);
  *(uint *)(plVar8 + 4) = CONCAT31(uStack_170,uStack_174._3_1_);
  *(undefined4 *)((long)plVar8 + 0x24) = uStack_16d;
  *(undefined4 *)(plVar8 + 5) = uStack_169;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_10c._3_1_ = (byte)uVar14;
  uStack_10c = (uint)uStack_10c._3_1_ << 0x18;
  uStack_108 = (undefined4)((ulong)uVar14 >> 8);
  uStack_104._0_3_ = (undefined3)((ulong)uVar14 >> 0x28);
  uStack_104._3_1_ = (undefined1)uVar4;
  uStack_100._0_3_ = (undefined3)((uint)uVar4 >> 8);
  plStack_78 = plVar8;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  plVar9[1] = 0x10;
  plVar9[2] = 0;
  *(undefined1 *)(plVar9 + 3) = 0xff;
  *plVar9 = (long)&UNK_0f4a88c8;
  *(ulong *)((long)plVar9 + 0x2c) =
       CONCAT35((undefined3)uStack_100,CONCAT41(uStack_104,uStack_108._3_1_));
  *(ulong *)((long)plVar9 + 0x1c) =
       CONCAT35((undefined3)uStack_110,CONCAT41(uStack_114,uStack_118._3_1_));
  *(ulong *)((long)plVar9 + 0x24) =
       CONCAT35((undefined3)uStack_108,CONCAT41(uStack_10c,uStack_110._3_1_));
  iStack_f8 = iStack_48;
  iStack_f4 = iStack_44;
  uStack_108 = uStack_58;
  uStack_104 = uStack_54;
  uStack_100 = uStack_50;
  uStack_fc = uStack_4c;
  uStack_118 = uStack_68;
  uStack_114 = uStack_64;
  uStack_110 = uStack_60;
  uStack_10c = uStack_5c;
  uStack_f0 = 0x1e1bc4d500000004;
  if ((DAT_0f702d08 == '\0') && (iVar6 = func_0x04108328(&DAT_0f702d08), iVar6 != 0)) {
    func_0x0cd032a0(0xf702cf0);
    func_0x0410844d(&DAT_0f702d08);
  }
  uStack_178 = uStack_f0._4_4_;
  uStack_170 = 0;
  uStack_16d = 0;
  uStack_169 = 0;
  uStack_165 = uStack_165 & 0xffffff00;
  uStack_161 = CONCAT31(1,(undefined1)uStack_161);
  uStack_15d = 0;
  puStack_158 = &SUB_048aead0;
  puStack_150 = &UNK_0de24130;
  puStack_148 = &UNK_0de241f0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x049057f0(&uStack_110,&uStack_178);
  func_0x048aea50(&uStack_178);
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  iStack_b0 = iStack_f8;
  iStack_ac = iStack_f4;
  uStack_c8 = uStack_110;
  uStack_c4 = uStack_10c;
  uStack_c0 = uStack_108;
  uStack_bc = uStack_104;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4a0bd8;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_178 = _DAT_0f551bb4;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef46c48;
  puVar12 = puVar11 + 3;
  puVar11[3] = puVar10;
  puVar11[4] = 0;
  *(undefined1 *)(puVar11 + 5) = 0xff;
  uStack_170 = SUB83(puVar12,0);
  uStack_16d = (undefined4)((ulong)puVar12 >> 0x18);
  uStack_169._0_1_ = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_169._1_3_ = SUB83(puVar11,0);
  uStack_165 = (uint)((ulong)puVar11 >> 0x18);
  uStack_161._0_1_ = (undefined1)((ulong)puVar11 >> 0x38);
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  func_0x048afd20(&uStack_c8,&uStack_178);
  plVar3 = (long *)CONCAT17((undefined1)uStack_161,CONCAT43(uStack_165,uStack_169._1_3_));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      func_0x0412c2d0(plVar3);
    }
  }
  if ((DAT_0f702d08 == '\0') && (iVar6 = func_0x04108328(&DAT_0f702d08), iVar6 != 0)) {
    func_0x0cd032a0(0xf702cf0);
    func_0x0410844d(&DAT_0f702d08);
  }
  if (iStack_f4 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_fc,uStack_100) + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != iStack_f8) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar7 = *(long *)(piVar13 + 0xc);
    while (lVar7 != CONCAT44(uStack_104,uStack_108)) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar7 = *(long *)(piVar13 + 0xc);
    }
LAB_0dddf51f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 2;
  }
  else {
    if (iStack_f4 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_fc,uStack_100) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != iStack_f8) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0dddf51f;
    }
    if (iStack_f4 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_fc,uStack_100) + 0x18);
      *puVar1 = *puVar1 | 0x20000;
    }
  }
  if ((DAT_0f702d08 == '\0') && (iVar6 = func_0x04108328(&DAT_0f702d08), iVar6 != 0)) {
    func_0x0cd032a0(0xf702cf0);
    func_0x0410844d(&DAT_0f702d08);
  }
  uStack_178 = 0xbf75c8f8;
  uStack_170 = 0;
  uStack_16d = 0;
  uStack_169 = 0;
  uStack_165 = uStack_165 & 0xffffff00;
  uStack_161 = uStack_161 & 0xff;
  uStack_15d = 0;
  puStack_158 = &UNK_0de24430;
  puStack_150 = &SUB_048b06d0;
  puStack_148 = &UNK_0de26330;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x049057f0(&uStack_110,&uStack_178);
  func_0x048aea50(&uStack_178);
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  iStack_b0 = iStack_f8;
  iStack_ac = iStack_f4;
  uStack_c8 = uStack_110;
  uStack_c4 = uStack_10c;
  uStack_c0 = uStack_108;
  uStack_bc = uStack_104;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4a0bd8;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_178 = _DAT_0f551c9c;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef46c98;
  puVar12 = puVar11 + 3;
  puVar11[3] = puVar10;
  *(undefined1 *)(puVar11 + 4) = 0xff;
  uStack_170 = SUB83(puVar12,0);
  uStack_16d = (undefined4)((ulong)puVar12 >> 0x18);
  uStack_169._0_1_ = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_169._1_3_ = SUB83(puVar11,0);
  uStack_165 = (uint)((ulong)puVar11 >> 0x18);
  uStack_161._0_1_ = (undefined1)((ulong)puVar11 >> 0x38);
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  func_0x048afd20(&uStack_c8,&uStack_178);
  plVar3 = (long *)CONCAT17((undefined1)uStack_161,CONCAT43(uStack_165,uStack_169._1_3_));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      func_0x0412c2d0(plVar3);
    }
  }
  uVar4 = uStack_f0._4_4_;
  if ((int)uStack_f0 == 4) {
    lVar7 = CONCAT44(uStack_114,uStack_118) + 0x18;
    uVar14 = func_0x0cd03960(lVar7);
    lVar7 = func_0x048b1040(lVar7,uVar14,uVar4,1);
    if (lVar7 == 0) {
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16d = 0;
      uStack_169._0_1_ = 0;
      func_0x048b10d0(&uStack_178);
      lVar7 = CONCAT44(uStack_174,uStack_178);
      lVar15 = *(long *)(lVar7 + 0x38);
    }
    else {
      lVar15 = *(long *)(lVar7 + 0x38);
    }
    if (lVar15 != 0) goto LAB_0dddf835;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16d = 0;
    uStack_169._0_1_ = 0;
    func_0x048b10d0(&uStack_178);
    lVar5 = CONCAT44(uStack_174,uStack_178);
    while (lVar15 = lVar5, lVar15 != 0) {
LAB_0dddf835:
      lVar7 = lVar15;
      lVar5 = *(long *)(lVar15 + 0x38);
      if (*(long *)(lVar15 + 0x38) == 0) {
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_16d = 0;
        uStack_169._0_1_ = 0;
        func_0x048b10d0(&uStack_178);
        lVar5 = CONCAT44(uStack_174,uStack_178);
      }
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
  }
  else {
    if ((int)uStack_f0 != 1) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
      goto LAB_0dddf8b8;
    }
    lVar7 = CONCAT44(uStack_114,uStack_118) + 0x18;
    uVar14 = func_0x0cd03960(lVar7);
    lVar7 = func_0x048b0c90(lVar7,uVar14,uVar4,1);
    if (lVar7 == 0) {
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16d = 0;
      uStack_169._0_1_ = 0;
      FUN_048b0d20(&uStack_178);
      lVar7 = CONCAT44(uStack_174,uStack_178);
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
  }
  *(undefined1 *)(puVar10 + 3) = uStack_88;
  *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_98;
  *(undefined4 *)((long)puVar10 + 0xc) = uStack_98._4_4_;
  *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_90;
  *(undefined4 *)((long)puVar10 + 0x14) = uStack_90._4_4_;
  *puVar10 = &UNK_0f49fd98;
  puVar10[4] = 0;
  puVar10[5] = plVar8;
  puVar10[6] = plVar9;
  plVar8 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar10;
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_0dddf8b8:
  (**(code **)(*plVar8 + 0x28))(plVar8);
  return;
}


