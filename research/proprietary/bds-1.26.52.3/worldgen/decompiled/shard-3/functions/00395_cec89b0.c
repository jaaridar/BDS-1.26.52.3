/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc89b0 (ELF vaddr 0xcec89b0)
 * Label: caller-of-seed
 * Body:  [[0cfc89b0, 0cfc8a2f]]
 * Ghidra: FUN_0cfc89b0
 */


undefined8 FUN_0cfc89b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar3 = func_0x0c6ca820();
  plVar4 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar2 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar6 = plVar4 + 1;
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
  }
  uVar5 = (**(code **)(*plVar2 + 0x68))(plVar2);
  plVar6 = (long *)func_0x0bf6c8a0(uVar5,param_3);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))(plVar6);
  }
  return uVar3;
}


