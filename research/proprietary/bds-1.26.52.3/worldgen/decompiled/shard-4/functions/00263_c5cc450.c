/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cc450 (ELF vaddr 0xc5cc450)
 * Label: callee-of:0xc5cc0e0
 * Body:  [[0c6cc450, 0c6cc4ab]]
 * Ghidra: FUN_0c6cc450
 */


/* WARNING: Possible PIC construction at 0x0c6cc493: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c6cc498) */

void FUN_0c6cc450(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto SUB_0412c2d0;
    }
  }
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    return;
  }
SUB_0412c2d0:
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


