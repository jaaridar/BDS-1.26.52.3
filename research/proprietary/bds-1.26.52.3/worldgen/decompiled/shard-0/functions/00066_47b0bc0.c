/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0bc0 (ELF vaddr 0x47b0bc0)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b0bc0, 048b0c81]]
 * Ghidra: FUN_048b0bc0
 */


void FUN_048b0bc0(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    func_0x0412a280(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    param_1[0x10] = lVar2;
    func_0x0412a280(lVar2,param_1[0x11] - lVar2);
  }
  func_0x048aff40(param_1 + 8);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    func_0x0412a280(param_1[7],param_1[5] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 2);
  }
  if ((bVar1 & 1) == 0) {
    plVar3 = (long *)param_1[1];
    param_1[1] = 0;
  }
  else {
    func_0x0412a280(param_1[4],param_1[2] & 0xfffffffffffffffe);
    plVar3 = (long *)param_1[1];
    param_1[1] = 0;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x048b0c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}


