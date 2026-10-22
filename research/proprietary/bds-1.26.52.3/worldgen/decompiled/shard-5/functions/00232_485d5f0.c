/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d5f0 (ELF vaddr 0x485d5f0)
 * Label: callee-of:0x485d4d0
 * Body:  [[0495d5f0, 0495d6ad] [0495d6b0, 0495d70f]]
 * Ghidra: FUN_0495d5f0
 */


void FUN_0495d5f0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lStack_258;
  long *plStack_250;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 auStack_228 [512];
  uint uStack_28;
  
  uStack_28 = 0;
  lStack_248 = 0;
  plStack_240 = (long *)0x0;
  plStack_238 = (long *)0x0;
  plStack_230 = (long *)0x0;
  cVar4 = func_0x0edf92e0(&lStack_248,param_1);
  plVar3 = plStack_230;
  if (cVar4 != '\0') {
    plVar6 = plStack_238;
    if (lStack_248 == 0) {
      for (; plVar6 != plVar3; plVar6 = plVar6 + 2) {
        if ((plVar6[1] != 0) &&
           (plVar5 = (long *)func_0x0412c300(), plStack_250 = plVar5, plVar5 != (long *)0x0)) {
          lStack_258 = *plVar6;
          if (lStack_258 != 0) {
            (**(code **)(*(long *)(lStack_258 + 0x40) + 0x10))(lStack_258 + 0x40);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0412c2d0(plVar5);
          }
        }
      }
    }
    else {
      (**(code **)(*(long *)(lStack_248 + 0x40) + 0x10))(lStack_248 + 0x40);
    }
  }
  if ((ulong)uStack_28 != 0xffffffff) {
    (**(code **)(&UNK_0ef4a7d0 + (ulong)uStack_28 * 8))(&lStack_258,auStack_228);
  }
  plVar3 = plStack_240;
  uStack_28 = 0xffffffff;
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_240 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      FUN_0412c2d0(plVar3);
    }
  }
  return;
}


