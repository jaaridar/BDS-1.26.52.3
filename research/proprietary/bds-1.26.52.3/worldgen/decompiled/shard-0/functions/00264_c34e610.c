/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc44e610 (ELF vaddr 0xc34e610)
 * Label: callee-of:0xc5cb4d0
 * Body:  [[0c44e610, 0c44e6b4]]
 * Ghidra: FUN_0c44e610
 */


void FUN_0c44e610(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &UNK_0f36e918;
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
    func_0x0412a280(lVar2,param_1[0xc] - lVar2);
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    param_1[7] = lVar2;
    func_0x0412a280(lVar2,param_1[8] - lVar2);
  }
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plVar1 + 0xc) < 1) && (*plVar1 == 0)) && (param_1[1] != 0)) {
      func_0x0412a280(param_1[1],0x10);
    }
    param_1[1] = 0;
  }
  return;
}


