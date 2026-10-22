/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb57b80 (ELF vaddr 0xca57b80)
 * Label: callee-of:0xca314e0
 * Body:  [[0cb57b80, 0cb57bdf]]
 * Ghidra: FUN_0cb57b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cb57b80(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((char)param_1[2] == '\x01') && (plVar3 = *(long **)(lVar2 + 0x20), plVar3 != (long *)0x0)) {
    LOCK();
    plVar1 = plVar3 + 1;
    param_1 = (long *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (param_1 == (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      param_1 = (long *)func_0x0412c2d0(plVar3);
    }
  }
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return param_1;
}


