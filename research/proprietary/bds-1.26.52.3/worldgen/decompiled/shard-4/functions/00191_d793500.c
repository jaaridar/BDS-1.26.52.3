/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd893500 (ELF vaddr 0xd793500)
 * Label: callee-of:0xe1d0880
 * Body:  [[0d893500, 0d893a87]]
 * Ghidra: FUN_0d893500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d893500(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined4 auStack_c0 [2];
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  
  param_2[5] = 0x1e1bc4d500000004;
  if ((DAT_0f560cf8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f560cf8), iVar8 != 0)) {
    func_0x05f23820(0xf560ce0);
    func_0x0410844d(&DAT_0f560cf8);
  }
  puVar12 = param_2 + 1;
  auStack_c0[0] = *(undefined4 *)((long)param_2 + 0x2c);
  plStack_b8 = (long *)0x0;
  uStack_b0 = (long *)((ulong)uStack_b0._4_4_ << 0x20);
  uStack_a8 = 1;
  puStack_a0 = &SUB_048aead0;
  puStack_98 = &UNK_0d89e990;
  puStack_90 = &UNK_0d89e9a0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_049057f0(puVar12,auStack_c0);
  func_0x048aea50(auStack_c0);
  uStack_58 = *(undefined4 *)puVar12;
  uStack_54 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_50 = *(undefined4 *)(param_2 + 2);
  uStack_4c = *(undefined4 *)((long)param_2 + 0x14);
  uStack_48 = *(undefined4 *)(param_2 + 3);
  uStack_44 = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_40 = *(undefined4 *)(param_2 + 4);
  uStack_3c = *(undefined4 *)((long)param_2 + 0x24);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f01a350;
  if ((DAT_0f551bc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551bc8), iVar8 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_c0[0] = _DAT_0f551bb4;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  plStack_b8 = plVar10 + 3;
  plVar10[3] = (long)puVar9;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_b0 = plVar10;
  func_0x048afd20(&uStack_58,auStack_c0);
  plVar10 = uStack_b0;
  if (uStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar10);
    }
  }
  if ((DAT_0f560cf8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f560cf8), iVar8 != 0)) {
    func_0x05f23820(0xf560ce0);
    func_0x0410844d(&DAT_0f560cf8);
  }
  iVar8 = *(int *)((long)param_2 + 0x24);
  if (iVar8 == 2) {
    piVar11 = *(int **)(*(long *)(param_2[3] + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != *(int *)(param_2 + 4)) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar2 = *(long *)(piVar11 + 0xc);
    while (lVar2 != param_2[2]) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar2 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        *(uint *)(param_2[3] + 0x18) = *(uint *)(param_2[3] + 0x18) | 0x20000;
      }
      goto LAB_0d893733;
    }
    piVar11 = *(int **)(*(long *)(param_2[3] + 0x78) + 0x48);
    iVar8 = *piVar11;
    while (iVar8 != *(int *)(param_2 + 4)) {
      piVar11 = piVar11 + 0x1a;
      iVar8 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
LAB_0d893733:
  if ((DAT_0f560cf8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f560cf8), iVar8 != 0)) {
    func_0x05f23820(0xf560ce0);
    func_0x0410844d(&DAT_0f560cf8);
  }
  auStack_c0[0] = 0xbf75c8f8;
  plStack_b8 = (long *)0x0;
  uStack_b0 = (long *)CONCAT44(uStack_b0._4_4_,1);
  uStack_a8 = 0;
  puStack_a0 = &UNK_05fb7aa0;
  puStack_98 = &SUB_048b06d0;
  puStack_90 = &UNK_0d89eb90;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_049057f0(puVar12,auStack_c0);
  func_0x048aea50(auStack_c0);
  uStack_58 = *(undefined4 *)puVar12;
  uStack_54 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_50 = *(undefined4 *)(param_2 + 2);
  uStack_4c = *(undefined4 *)((long)param_2 + 0x14);
  uStack_48 = *(undefined4 *)(param_2 + 3);
  uStack_44 = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_40 = *(undefined4 *)(param_2 + 4);
  uStack_3c = *(undefined4 *)((long)param_2 + 0x24);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f01a350;
  if ((DAT_0f551cb0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551cb0), iVar8 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_c0[0] = _DAT_0f551c9c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c98;
  plStack_b8 = plVar10 + 3;
  plVar10[3] = (long)puVar12;
  *(undefined1 *)(plVar10 + 4) = 0xff;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_b0 = plVar10;
  func_0x048afd20(&uStack_58,auStack_c0);
  plVar10 = uStack_b0;
  if (uStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar10);
    }
  }
  param_1[6] = param_2[6];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return param_1;
}


