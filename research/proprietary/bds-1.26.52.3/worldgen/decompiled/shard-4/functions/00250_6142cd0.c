/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6242cd0 (ELF vaddr 0x6142cd0)
 * Label: callee-of:0x61416e0
 * Body:  [[06242cd0, 06242d7e]]
 * Ghidra: FUN_06242cd0
 */


void FUN_06242cd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_28;
  long *plStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *param_3;
  plStack_20 = (long *)param_3[1];
  if (param_3[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_3[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  uStack_18 = param_3[2];
  FUN_0d300630(param_1,param_2,&uStack_28);
  plVar1 = plStack_20;
  uStack_28 = 0;
  plStack_20 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
    plVar1 = plStack_20;
    uStack_18 = 0;
    if (plStack_20 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_20 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_20 + 0x10))(plStack_20);
        func_0x0412c2d0(plVar1);
      }
    }
  }
  *param_1 = &UNK_0f023dd8;
  return;
}


