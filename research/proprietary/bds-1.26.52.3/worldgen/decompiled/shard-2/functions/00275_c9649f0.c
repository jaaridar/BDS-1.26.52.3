/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca649f0 (ELF vaddr 0xc9649f0)
 * Label: callee-of:0xc961580
 * Body:  [[0ca649f0, 0ca64a1a]]
 * Ghidra: FUN_0ca649f0
 */


void FUN_0ca649f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
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


