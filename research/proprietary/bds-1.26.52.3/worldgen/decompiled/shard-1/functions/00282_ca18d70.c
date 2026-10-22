/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb18d70 (ELF vaddr 0xca18d70)
 * Label: callee-of:0xca2f0d0
 * Body:  [[0cb18d70, 0cb18dd3]]
 * Ghidra: FUN_0cb18d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cb18d70(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long in_RAX;
  long lVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_0cb18d70(param_1,*param_2);
    lVar3 = FUN_0cb18d70(param_1,param_2[1]);
    plVar2 = (long *)param_2[6];
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar3 = func_0x0412c2d0(plVar2);
      }
    }
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_2);
    }
    return lVar3;
  }
  return in_RAX;
}


