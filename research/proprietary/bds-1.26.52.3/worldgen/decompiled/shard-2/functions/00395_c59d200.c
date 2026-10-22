/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc69d200 (ELF vaddr 0xc59d200)
 * Label: caller-of-seed
 * Body:  [[0c69d200, 0c69d28d]]
 * Ghidra: FUN_0c69d200
 */


undefined8 FUN_0c69d200(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar5 = func_0x0c6ca820();
  if (*(long **)(param_2 + 0x1d0) != (long *)0x0) {
    cVar4 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x9f0))();
    if (cVar4 == '\0') {
      plVar6 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
      plVar3 = *(long **)(param_2 + 0x1c0);
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
      uVar7 = (**(code **)(*plVar3 + 0x68))(plVar3);
      func_0x0c69d290(uVar7,param_3,param_2);
    }
  }
  return uVar5;
}


