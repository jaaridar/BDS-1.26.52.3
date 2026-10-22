/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a590 (ELF vaddr 0x517a590)
 * Label: callee-of:0x517a670
 * Body:  [[0527a590, 0527a5ad] [0527a5b0, 0527a65d]]
 * Ghidra: FUN_0527a590
 */


void FUN_0527a590(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0412d680(param_1 + 8);
  plVar3 = param_1 + 6;
  plVar5 = (long *)param_1[6];
  while (plVar5 != plVar3) {
    plVar1 = (long *)*plVar5;
    if (plVar1 != plVar5) {
      puVar2 = (undefined8 *)plVar5[1];
      *puVar2 = plVar1;
      plVar1[1] = (long)puVar2;
    }
    func_0x0412a280(plVar5,0xa2220);
    plVar5 = (long *)*plVar3;
  }
  func_0x0412d6b0(param_1 + 8);
  func_0x0eee11d0(param_1 + 0xd);
  plVar5 = (long *)param_1[6];
  while (plVar5 != plVar3) {
    lVar4 = *plVar5;
    plVar1 = (long *)plVar5[1];
    *plVar1 = lVar4;
    *(long **)(lVar4 + 8) = plVar1;
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    plVar5 = (long *)*plVar3;
  }
  if (plVar5 != plVar3) {
    puVar2 = (undefined8 *)param_1[7];
    *puVar2 = plVar5;
    plVar5[1] = (long)puVar2;
    param_1[6] = (long)plVar3;
    param_1[7] = (long)plVar3;
  }
  plVar3 = (long *)param_1[4];
  if (plVar3 == param_1) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0527a65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + lVar4))();
  return;
}


