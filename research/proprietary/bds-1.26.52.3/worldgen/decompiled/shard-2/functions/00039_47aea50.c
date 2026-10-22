/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48aea50 (ELF vaddr 0x47aea50)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[048aea50, 048aeacb]]
 * Ghidra: FUN_048aea50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_048aea50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long in_RAX;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    in_RAX = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (in_RAX == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      in_RAX = FUN_0412c2d0(plVar2);
      lVar3 = *(long *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto joined_r0x048aeac2;
    }
  }
  lVar3 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
joined_r0x048aeac2:
  if (lVar3 != 0) {
    lVar4 = FUN_048aea50(lVar3);
    if (lVar3 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
    }
    return lVar4;
  }
  return in_RAX;
}


