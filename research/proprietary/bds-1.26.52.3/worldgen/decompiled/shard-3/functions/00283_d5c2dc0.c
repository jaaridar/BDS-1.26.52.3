/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c2dc0 (ELF vaddr 0xd5c2dc0)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d6c2dc0, 0d6c2df2]]
 * Ghidra: FUN_0d6c2dc0
 */


void FUN_0d6c2dc0(long *param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    func_0x0412a280(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0d6c2dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


