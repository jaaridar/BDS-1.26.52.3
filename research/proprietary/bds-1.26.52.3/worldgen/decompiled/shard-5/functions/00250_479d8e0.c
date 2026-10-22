/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x489d8e0 (ELF vaddr 0x479d8e0)
 * Label: callee-of:0x61416e0
 * Body:  [[0489d8e0, 0489d94c]]
 * Ghidra: FUN_0489d8e0
 */


void FUN_0489d8e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x220) != 0xffffffff) {
    (**(code **)(&UNK_0ef423b8 + (ulong)*(uint *)(param_1 + 0x220) * 8))(&uStack_9,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0412c2d0(plVar3);
      return;
    }
  }
  return;
}


