/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedf9c90 (ELF vaddr 0xecf9c90)
 * Label: callee-of:0x48cac20
 * Body:  [[0edf9c90, 0edf9cba] [0edf9cc0, 0edf9d48] [0edf9d50, 0edf9dd1]]
 * Ghidra: FUN_0edf9c90
 */


void FUN_0edf9c90(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = &UNK_0f4e6890;
  plVar1 = param_1 + 1;
  plVar3 = (long *)param_1[1];
  while (plVar3 != plVar1) {
    lVar4 = plVar3[2];
    plVar3 = (long *)plVar3[3];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    lVar5 = *(long *)(lVar4 + 8);
    plVar6 = *(long **)(lVar4 + 0x10);
    *plVar6 = lVar5;
    *(long **)(lVar5 + 8) = plVar6;
    *(long *)(lVar4 + 8) = lVar4 + 8;
    *(long *)(lVar4 + 0x10) = lVar4 + 8;
    plVar6 = *(long **)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar4 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    plVar3 = (long *)*plVar1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_0f4e6848;
  while (plVar3 != plVar1) {
    lVar4 = *plVar3;
    plVar6 = (long *)plVar3[1];
    *plVar6 = lVar4;
    *(long **)(lVar4 + 8) = plVar6;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    plVar3 = (long *)*plVar1;
  }
  if (plVar3 != plVar1) {
    puVar7 = (undefined8 *)param_1[2];
    *puVar7 = plVar3;
    plVar3[1] = (long)puVar7;
    param_1[1] = plVar1;
    param_1[2] = plVar1;
  }
  return;
}


