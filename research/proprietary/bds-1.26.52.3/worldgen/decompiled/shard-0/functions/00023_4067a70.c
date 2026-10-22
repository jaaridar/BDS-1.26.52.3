/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4167a70 (ELF vaddr 0x4067a70)
 * Label: callee-of:0x4de9260
 * Body:  [[04167a70, 04167acb]]
 * Ghidra: FUN_04167a70
 */


void FUN_04167a70(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_2 != 0xf5478c0) {
    LOCK();
    plVar1 = (long *)(*param_2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0xf5478c0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      *param_1 = *param_2;
      return;
    }
  }
  *param_1 = *param_2;
  return;
}


