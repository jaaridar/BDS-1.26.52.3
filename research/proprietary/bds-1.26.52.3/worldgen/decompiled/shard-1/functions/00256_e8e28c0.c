/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9e28c0 (ELF vaddr 0xe8e28c0)
 * Label: callee2-of:0xe8e24a0
 * Body:  [[0e9e28c0, 0e9e2b30] [0e9e2b40, 0e9e2b9e]]
 * Ghidra: FUN_0e9e28c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9e28c0(int *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int *piVar9;
  undefined4 auStack_40 [2];
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  long *plStack_20;
  
  lVar2 = *(long *)(param_1 + 2);
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_40[0] = _DAT_0f550a0c;
  plStack_30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plStack_30 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  plStack_30[1] = 0;
  plStack_30[2] = 0;
  *plStack_30 = (long)&UNK_0ef439d0;
  plStack_38 = plStack_30 + 3;
  lVar3 = *(long *)(param_1 + 6);
  lVar6 = *(long *)(param_1 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  plStack_30[3] = lVar3;
  plStack_30[4] = lVar6;
  plStack_30[7] = *(long *)(param_1 + 0xe);
  lVar3 = *(long *)(param_1 + 0xc);
  plStack_30[5] = *(long *)(param_1 + 10);
  plStack_30[6] = lVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plStack_30[10] = *(long *)(param_1 + 0x14);
  lVar3 = *(long *)(param_1 + 0x12);
  plStack_30[8] = *(long *)(param_1 + 0x10);
  plStack_30[9] = lVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  plStack_30[0xb] = *(long *)(param_1 + 0x16);
  plStack_30[0xc] = lVar3;
  plStack_30[0xd] = *(long *)(param_1 + 0x1a);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar3 = *(long *)(param_1 + 0x1e);
  plStack_30[0xe] = *(long *)(param_1 + 0x1c);
  plStack_30[0xf] = lVar3;
  plStack_30[0x10] = *(long *)(param_1 + 0x20);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int *)(plStack_30 + 0x11) = param_1[0x22];
  lVar3 = *(long *)(param_1 + 0x26);
  plStack_30[0x12] = *(long *)(param_1 + 0x24);
  plStack_30[0x13] = lVar3;
  plStack_30[0x14] = *(long *)(param_1 + 0x28);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  plStack_30[0x17] = *(long *)(param_1 + 0x2e);
  iVar8 = param_1[0x2b];
  iVar4 = param_1[0x2c];
  iVar5 = param_1[0x2d];
  *(int *)(plStack_30 + 0x15) = param_1[0x2a];
  *(int *)((long)plStack_30 + 0xac) = iVar8;
  *(int *)(plStack_30 + 0x16) = iVar4;
  *(int *)((long)plStack_30 + 0xb4) = iVar5;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  lVar3 = *(long *)(param_1 + 0x30);
  *(undefined8 *)((long)plStack_30 + 0xc5) = *(undefined8 *)((long)param_1 + 0xc5);
  plStack_30[0x18] = lVar3;
  uStack_28 = 0;
  plStack_20 = (long *)0x0;
  func_0x048afd20(lVar2,auStack_40);
  plVar7 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_20;
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  iVar8 = *(int *)(lVar2 + 0x1c);
  if (iVar8 == 2) {
    piVar9 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
    iVar8 = *piVar9;
    while (iVar8 != *(int *)(lVar2 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar8 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(lVar2 + 8); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 0) {
        return;
      }
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | *param_1 << 0x10;
      return;
    }
    piVar9 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
    iVar8 = *piVar9;
    while (iVar8 != *(int *)(lVar2 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar8 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | *param_1 << 0x10;
  return;
}


