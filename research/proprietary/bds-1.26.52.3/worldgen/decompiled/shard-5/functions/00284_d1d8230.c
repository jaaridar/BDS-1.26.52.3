/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d8230 (ELF vaddr 0xd1d8230)
 * Label: callee-of:0xd1d78f0
 * Body:  [[0d2d8230, 0d2d8262]]
 * Ghidra: FUN_0d2d8230
 */


void FUN_0d2d8230(long *param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0 & param_2) == 1) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x10))();
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
  }
  return;
}


