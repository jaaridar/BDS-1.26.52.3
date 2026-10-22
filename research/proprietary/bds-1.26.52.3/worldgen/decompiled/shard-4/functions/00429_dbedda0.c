/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdcedda0 (ELF vaddr 0xdbedda0)
 * Label: caller-of-callee
 * Body:  [[0dcedda0, 0dcee417] [0dcee420, 0dcee619]]
 * Ghidra: FUN_0dcedda0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dcedda0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined3 uStack_130;
  undefined4 uStack_12d;
  undefined4 uStack_129;
  uint uStack_125;
  uint uStack_121;
  undefined5 uStack_11d;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
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
  
  lVar7 = func_0x0cd13f20(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar16 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar14 = lVar7 + 9;
    if (bVar16) {
      lVar14 = *(long *)(lVar7 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar16) {
      uVar15 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0dd4c530(&uStack_68,param_1,lVar14,uVar15);
  }
  else {
    func_0x0dd4c530(&uStack_68,param_1,&UNK_011cd3a1,0xd);
  }
  if (cStack_38 != '\0') {
    return;
  }
  uStack_130 = 0;
  uStack_12d = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_129 = 0x41800000;
  uStack_125 = 0x41800000;
  uStack_121 = 0x41800000;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar8[1] = -1;
  plVar8[2] = 0;
  *(undefined1 *)(plVar8 + 3) = 0xff;
  *plVar8 = (long)&UNK_0f4a8918;
  *(ulong *)((long)plVar8 + 0x2c) = CONCAT44(uStack_121,uStack_125);
  *(ulong *)((long)plVar8 + 0x1c) = CONCAT35(uStack_130,CONCAT41(uStack_134,uStack_138._3_1_));
  *(ulong *)((long)plVar8 + 0x24) = CONCAT44(uStack_129,uStack_12d);
  iStack_a8 = iStack_48;
  iStack_a4 = iStack_44;
  uStack_b8 = uStack_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  uStack_c8 = uStack_68;
  uStack_c4 = uStack_64;
  uStack_c0 = uStack_60;
  uStack_bc = uStack_5c;
  uStack_a0 = 0x1e1bc4d500000004;
  if ((DAT_0f701130 == '\0') && (iVar6 = FUN_04108328(&DAT_0f701130), iVar6 != 0)) {
    func_0x0cd13e10(0xf701118);
    func_0x0410844d(&DAT_0f701130);
  }
  uStack_138 = uStack_a0._4_4_;
  uStack_130 = 0;
  uStack_12d = 0;
  uStack_129 = 0;
  uStack_125 = uStack_125 & 0xffffff00;
  uStack_121 = CONCAT31(1,(undefined1)uStack_121);
  uStack_11d = 0;
  puStack_118 = &SUB_048aead0;
  puStack_110 = &UNK_0dd4cde0;
  puStack_108 = &UNK_0dd4cea0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_049057f0(&uStack_c0,&uStack_138);
  func_0x048aea50(&uStack_138);
  uStack_78 = uStack_b0;
  uStack_74 = uStack_ac;
  iStack_70 = iStack_a8;
  iStack_6c = iStack_a4;
  uStack_88 = uStack_c0;
  uStack_84 = uStack_bc;
  uStack_80 = uStack_b8;
  uStack_7c = uStack_b4;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f49c890;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_138 = _DAT_0f551bb4;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0ef46c48;
  puVar11 = puVar10 + 3;
  puVar10[3] = puVar9;
  puVar10[4] = 0;
  *(undefined1 *)(puVar10 + 5) = 0xff;
  uStack_130 = SUB83(puVar11,0);
  uStack_12d = (undefined4)((ulong)puVar11 >> 0x18);
  uStack_129._0_1_ = (undefined1)((ulong)puVar11 >> 0x38);
  uStack_129._1_3_ = SUB83(puVar10,0);
  uStack_125 = (uint)((ulong)puVar10 >> 0x18);
  uStack_121._0_1_ = (undefined1)((ulong)puVar10 >> 0x38);
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  func_0x048afd20(&uStack_88,&uStack_138);
  plVar3 = (long *)CONCAT17((undefined1)uStack_121,CONCAT43(uStack_125,uStack_129._1_3_));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      func_0x0412c2d0(plVar3);
    }
  }
  if ((DAT_0f701130 == '\0') && (iVar6 = FUN_04108328(&DAT_0f701130), iVar6 != 0)) {
    func_0x0cd13e10(0xf701118);
    func_0x0410844d(&DAT_0f701130);
  }
  if (iStack_a4 == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_ac,uStack_b0) + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != iStack_a8) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar7 = *(long *)(piVar12 + 0xc);
    while (lVar7 != CONCAT44(uStack_b4,uStack_b8)) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar7 = *(long *)(piVar12 + 0xc);
    }
LAB_0dcee11f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
  }
  else {
    if (iStack_a4 == 1) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_ac,uStack_b0) + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != iStack_a8) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0dcee11f;
    }
    if (iStack_a4 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_ac,uStack_b0) + 0x18);
      *puVar2 = *puVar2 | 0x20000;
    }
  }
  if ((DAT_0f701130 == '\0') && (iVar6 = FUN_04108328(&DAT_0f701130), iVar6 != 0)) {
    func_0x0cd13e10(0xf701118);
    func_0x0410844d(&DAT_0f701130);
  }
  uStack_138 = 0xbf75c8f8;
  uStack_130 = 0;
  uStack_12d = 0;
  uStack_129 = 0;
  uStack_125 = uStack_125 & 0xffffff00;
  uStack_121 = uStack_121 & 0xff;
  uStack_11d = 0;
  puStack_118 = &UNK_0dd4d0a0;
  puStack_110 = &SUB_048b06d0;
  puStack_108 = &UNK_0dd4db00;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_049057f0(&uStack_c0,&uStack_138);
  func_0x048aea50(&uStack_138);
  uStack_78 = uStack_b0;
  uStack_74 = uStack_ac;
  iStack_70 = iStack_a8;
  iStack_6c = iStack_a4;
  uStack_88 = uStack_c0;
  uStack_84 = uStack_bc;
  uStack_80 = uStack_b8;
  uStack_7c = uStack_b4;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f49c890;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551cb0), iVar6 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_138 = _DAT_0f551c9c;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0ef46c98;
  puVar11 = puVar10 + 3;
  puVar10[3] = puVar9;
  *(undefined1 *)(puVar10 + 4) = 0xff;
  uStack_130 = SUB83(puVar11,0);
  uStack_12d = (undefined4)((ulong)puVar11 >> 0x18);
  uStack_129._0_1_ = (undefined1)((ulong)puVar11 >> 0x38);
  uStack_129._1_3_ = SUB83(puVar10,0);
  uStack_125 = (uint)((ulong)puVar10 >> 0x18);
  uStack_121._0_1_ = (undefined1)((ulong)puVar10 >> 0x38);
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  func_0x048afd20(&uStack_88,&uStack_138);
  plVar3 = (long *)CONCAT17((undefined1)uStack_121,CONCAT43(uStack_125,uStack_129._1_3_));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      func_0x0412c2d0(plVar3);
    }
  }
  uVar4 = uStack_a0._4_4_;
  if ((int)uStack_a0 == 4) {
    lVar7 = CONCAT44(uStack_c4,uStack_c8) + 0x18;
    uVar13 = func_0x0cd13f20(lVar7);
    lVar7 = func_0x048b1040(lVar7,uVar13,uVar4,1);
    if (lVar7 == 0) {
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12d = 0;
      uStack_129._0_1_ = 0;
      func_0x048b10d0(&uStack_138);
      lVar7 = CONCAT44(uStack_134,uStack_138);
      lVar14 = *(long *)(lVar7 + 0x38);
    }
    else {
      lVar14 = *(long *)(lVar7 + 0x38);
    }
    if (lVar14 != 0) goto LAB_0dcee425;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12d = 0;
    uStack_129._0_1_ = 0;
    func_0x048b10d0(&uStack_138);
    lVar5 = CONCAT44(uStack_134,uStack_138);
    while (lVar14 = lVar5, lVar14 != 0) {
LAB_0dcee425:
      lVar7 = lVar14;
      lVar5 = *(long *)(lVar14 + 0x38);
      if (*(long *)(lVar14 + 0x38) == 0) {
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12d = 0;
        uStack_129._0_1_ = 0;
        func_0x048b10d0(&uStack_138);
        lVar5 = CONCAT44(uStack_134,uStack_138);
      }
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  else {
    if ((int)uStack_a0 != 1) goto LAB_0dcee4a4;
    lVar7 = CONCAT44(uStack_c4,uStack_c8) + 0x18;
    uVar13 = func_0x0cd13f20(lVar7);
    lVar7 = FUN_048b0c90(lVar7,uVar13,uVar4,1);
    if (lVar7 == 0) {
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12d = 0;
      uStack_129._0_1_ = 0;
      func_0x048b0d20(&uStack_138);
      lVar7 = CONCAT44(uStack_134,uStack_138);
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  puVar9[1] = 0xffffffffffffffff;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f49b7b8;
  puVar9[4] = 0;
  puVar9[5] = plVar8;
  plVar8 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar9;
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_0dcee4a4:
  (**(code **)(*plVar8 + 0x28))(plVar8);
  return;
}


