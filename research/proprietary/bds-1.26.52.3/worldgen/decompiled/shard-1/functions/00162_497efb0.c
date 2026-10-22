/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7efb0 (ELF vaddr 0x497efb0)
 * Label: callee-of:0x517c470
 * Body:  [[04a7efb0, 04a7efdf]]
 * Ghidra: FUN_04a7efb0
 */


void FUN_04a7efb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}


