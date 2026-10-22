/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7de5ea0 (ELF vaddr 0x7ce5ea0)
 * Label: caller-of-callee
 * Body:  [[07de5ea0, 07de6467] [07de6470, 07de6676]]
 * Ghidra: FUN_07de5ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07de5ea0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
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
  
  func_0x07dda5d0();
  if ((DAT_0f5bea80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bea80), iVar6 != 0)) {
    func_0x07e87090(0xf5bea68);
    FUN_0410844d(&DAT_0f5bea80);
  }
  uVar3 = _DAT_0f5bea78;
  uVar11 = _DAT_0f5bea70;
  lVar7 = func_0x07e86220(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar14 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar12 = lVar7 + 9;
    if (bVar14) {
      lVar12 = *(long *)(lVar7 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar14) {
      uVar13 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x07e867f0(&lStack_80,param_1,lVar12,uVar13);
  }
  else {
    func_0x07e867f0(&lStack_80,param_1,uVar11,uVar3);
  }
  if (cStack_50 != '\0') {
    return;
  }
  uStack_58 = 0x1e1bc4d500000004;
  if ((DAT_0f5bea80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bea80), iVar6 != 0)) {
    func_0x07e87090(0xf5bea68);
    FUN_0410844d(&DAT_0f5bea80);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,uStack_58._4_4_);
  plStack_f0 = (long *)0x0;
  uStack_e8 = (long *)((ulong)uStack_e8._4_4_ << 0x20);
  uStack_e0 = 1;
  puStack_d8 = &SUB_048aead0;
  puStack_d0 = &UNK_07e87190;
  puStack_c8 = &UNK_07e871a0;
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
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f087df0;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,_DAT_0f551bb4);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plStack_f0 = plVar9 + 3;
  plVar9[3] = (long)puVar8;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e8 = plVar9;
  func_0x048afd20(&uStack_48,&uStack_f8);
  plVar9 = uStack_e8;
  if (uStack_e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e8 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_e8 + 0x10))(uStack_e8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar9);
    }
  }
  if ((DAT_0f5bea80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bea80), iVar6 != 0)) {
    func_0x07e87090(0xf5bea68);
    FUN_0410844d(&DAT_0f5bea80);
  }
  if (iStack_5c == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != iStack_60) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    lVar7 = *(long *)(piVar10 + 0xc);
    while (lVar7 != CONCAT44(uStack_6c,uStack_70)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar7 = *(long *)(piVar10 + 0xc);
    }
  }
  else {
    if (iStack_5c != 1) {
      if (iStack_5c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_64,uStack_68) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_07de6173;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x48);
    iVar6 = *piVar10;
    while (iVar6 != iStack_60) {
      piVar10 = piVar10 + 0x1a;
      iVar6 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 2;
LAB_07de6173:
  if ((DAT_0f5bea80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bea80), iVar6 != 0)) {
    func_0x07e87090(0xf5bea68);
    FUN_0410844d(&DAT_0f5bea80);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,0xbf75c8f8);
  plStack_f0 = (long *)0x0;
  uStack_e8 = (long *)CONCAT44(uStack_e8._4_4_,1);
  uStack_e0 = 0;
  puStack_d8 = &SUB_06d00d00;
  puStack_d0 = &SUB_048b06d0;
  puStack_c8 = &UNK_07e87430;
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
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f087df0;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    FUN_0410844d(&DAT_0f551cb0);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,_DAT_0f551c9c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c98;
  plStack_f0 = plVar9 + 3;
  plVar9[3] = (long)puVar8;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e8 = plVar9;
  func_0x048afd20(&uStack_48,&uStack_f8);
  plVar9 = uStack_e8;
  if (uStack_e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e8 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_e8 + 0x10))(uStack_e8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar4 = uStack_58._4_4_;
  if ((int)uStack_58 == 4) {
    uVar11 = func_0x07e86220(lStack_80 + 0x18);
    lVar7 = FUN_048b1040(lStack_80 + 0x18,uVar11,uVar4,1);
    if (lVar7 == 0) {
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      func_0x048b10d0(&uStack_f8);
      lVar12 = *(long *)(uStack_f8 + 0x38);
      lVar7 = uStack_f8;
    }
    else {
      lVar12 = *(long *)(lVar7 + 0x38);
    }
    if (lVar12 != 0) goto LAB_07de6475;
    uStack_f8 = 0;
    plStack_f0 = (long *)0x0;
    func_0x048b10d0(&uStack_f8);
    lVar5 = uStack_f8;
    while (lVar12 = lVar5, lVar12 != 0) {
LAB_07de6475:
      lVar7 = lVar12;
      lVar5 = *(long *)(lVar12 + 0x38);
      if (*(long *)(lVar12 + 0x38) == 0) {
        uStack_f8 = 0;
        plStack_f0 = (long *)0x0;
        func_0x048b10d0(&uStack_f8);
        lVar5 = uStack_f8;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  else {
    if ((int)uStack_58 != 1) {
      return;
    }
    uVar11 = func_0x07e86220(lStack_80 + 0x18);
    lVar7 = func_0x048b0c90(lStack_80 + 0x18,uVar11,uVar4,1);
    if (lVar7 == 0) {
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      func_0x048b0d20(&uStack_f8);
      lVar7 = uStack_f8;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  puVar8[1] = 0xffffffffffffffff;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f0e91e0;
  plVar9 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
  return;
}


