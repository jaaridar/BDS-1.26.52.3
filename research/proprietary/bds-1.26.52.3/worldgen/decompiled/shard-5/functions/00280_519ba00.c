/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x529ba00 (ELF vaddr 0x519ba00)
 * Label: callee-of:0xca32c90
 * Body:  [[0529ba00, 0529ba33]]
 * Ghidra: FUN_0529ba00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0529ba00(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    uVar3 = func_0x0cadbac0(lVar2);
    if (lVar2 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
    }
    return uVar3;
  }
  return in_RAX;
}


