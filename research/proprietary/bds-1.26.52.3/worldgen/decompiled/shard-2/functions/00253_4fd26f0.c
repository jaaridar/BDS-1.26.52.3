/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x50d26f0 (ELF vaddr 0x4fd26f0)
 * Label: callee-of:0x61416e0
 * Body:  [[050d26f0, 050d278f]]
 * Ghidra: FUN_050d26f0
 */


/* WARNING: Possible PIC construction at 0x050d274d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x050d2752) */

void FUN_050d26f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar3 == (long *)0x0) {
    param_1[2] = 0;
    return;
  }
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[1];
    param_1[2] = 0;
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
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
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


