/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4985d60 (ELF vaddr 0x4885d60)
 * Label: callee-of:0xc95fb20
 * Body:  [[04985d60, 04985dff]]
 * Ghidra: FUN_04985d60
 */


void FUN_04985d60(undefined8 *param_1)

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
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0412c2d0(plVar3);
    plVar3 = (long *)param_1[1];
    param_1[2] = 0;
  }
  else {
    plVar3 = (long *)param_1[1];
    param_1[2] = 0;
  }
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


