/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412c2d0 (ELF vaddr 0x402c2d0)
 * Label: callee-of:0x517c470
 * Body:  [[0412c2d0, 0412c2f1]]
 * Ghidra: FUN_0412c2d0
 */


void FUN_0412c2d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1[2] != 0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


