/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb68e960 (ELF vaddr 0xb58e960)
 * Label: caller-of-callee
 * Body:  [[0b68e960, 0b68ef07] [0b68ef10, 0b68f0fa]]
 * Ghidra: FUN_0b68e960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b68e960(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  char cStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  lVar6 = func_0x0b6ad260(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar13 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar13) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar13) {
      uVar12 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0b6ad6a0(&lStack_80,param_1,lVar11,uVar12);
  }
  else {
    func_0x0b6ad6a0(&lStack_80,param_1,&UNK_0142118f,10);
  }
  if (cStack_50 != '\0') {
    return;
  }
  uStack_58 = 0x1e1bc4d500000004;
  if ((DAT_0f6b56b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b56b0), iVar5 != 0)) {
    func_0x0b6ad450(0xf6b5698);
    func_0x0410844d(&DAT_0f6b56b0);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,uStack_58._4_4_);
  plStack_f0 = (long *)0x0;
  uStack_e8 = (long *)((ulong)uStack_e8._4_4_ << 0x20);
  uStack_e0 = 1;
  puStack_d8 = &SUB_048aead0;
  puStack_d0 = &UNK_077e6fa0;
  puStack_c8 = &UNK_0b6adf00;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x049057f0(&uStack_78,&uStack_f8);
  func_0x048aea50(&uStack_f8);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  iStack_30 = iStack_60;
  iStack_2c = iStack_5c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f012438;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_f0 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e8 = plVar8;
  func_0x048afd20(&uStack_48,&uStack_f8);
  plVar8 = uStack_e8;
  if (uStack_e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_e8 + 0x10))(uStack_e8);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f6b56b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b56b0), iVar5 != 0)) {
    func_0x0b6ad450(0xf6b5698);
    func_0x0410844d(&DAT_0f6b56b0);
  }
  if (iStack_5c == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != iStack_60) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    lVar6 = *(long *)(piVar9 + 0xc);
    while (lVar6 != CONCAT44(uStack_6c,uStack_70)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar6 = *(long *)(piVar9 + 0xc);
    }
  }
  else {
    if (iStack_5c != 1) {
      if (iStack_5c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_64,uStack_68) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0b68ec13;
    }
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x48);
    iVar5 = *piVar9;
    while (iVar5 != iStack_60) {
      piVar9 = piVar9 + 0x1a;
      iVar5 = *piVar9;
    }
  }
  *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
LAB_0b68ec13:
  if ((DAT_0f6b56b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b56b0), iVar5 != 0)) {
    func_0x0b6ad450(0xf6b5698);
    func_0x0410844d(&DAT_0f6b56b0);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,0xbf75c8f8);
  plStack_f0 = (long *)0x0;
  uStack_e8 = (long *)((ulong)uStack_e8 & 0xffffffff00000000);
  uStack_e0 = 0;
  puStack_d8 = &UNK_05dcda00;
  puStack_d0 = &SUB_048b06d0;
  puStack_c8 = &UNK_0b6ae0f0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x049057f0(&uStack_78,&uStack_f8);
  func_0x048aea50(&uStack_f8);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  iStack_30 = iStack_60;
  iStack_2c = iStack_5c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f012438;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_f0 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e8 = plVar8;
  func_0x048afd20(&uStack_48,&uStack_f8);
  plVar8 = uStack_e8;
  if (uStack_e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_e8 + 0x10))(uStack_e8);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar8);
    }
  }
  uVar3 = uStack_58._4_4_;
  if ((int)uStack_58 == 4) {
    uVar10 = func_0x0b6ad260(lStack_80 + 0x18);
    lVar6 = func_0x048b1040(lStack_80 + 0x18,uVar10,uVar3,1);
    if (lVar6 == 0) {
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      func_0x048b10d0(&uStack_f8);
      lVar11 = *(long *)(uStack_f8 + 0x38);
      lVar6 = uStack_f8;
    }
    else {
      lVar11 = *(long *)(lVar6 + 0x38);
    }
    if (lVar11 != 0) goto LAB_0b68ef15;
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    func_0x048b10d0(&uStack_f8);
    lVar4 = uStack_f8;
    while (lVar11 = lVar4, lVar11 != 0) {
LAB_0b68ef15:
      lVar6 = lVar11;
      lVar4 = *(long *)(lVar11 + 0x38);
      if (*(long *)(lVar11 + 0x38) == 0) {
        uStack_f8 = 0;
        plStack_f0 = (long *)0x0;
        func_0x048b10d0(&uStack_f8);
        lVar4 = uStack_f8;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if ((int)uStack_58 != 1) {
      return;
    }
    uVar10 = func_0x0b6ad260(lStack_80 + 0x18);
    lVar6 = func_0x048b0c90(lStack_80 + 0x18,uVar10,uVar3,1);
    if (lVar6 == 0) {
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      func_0x048b0d20(&uStack_f8);
      lVar6 = uStack_f8;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f0edc68;
  uVar10 = _DAT_014f09d8;
  puVar7[4] = 0;
  puVar7[5] = uVar10;
  puVar7[6] = 0;
  puVar7[7] = 0;
  plVar8 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


