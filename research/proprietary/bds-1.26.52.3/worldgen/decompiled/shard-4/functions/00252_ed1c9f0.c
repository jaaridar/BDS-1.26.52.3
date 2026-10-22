/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee1c9f0 (ELF vaddr 0xed1c9f0)
 * Label: callee-of:0x61416e0
 * Body:  [[0ee1c9f0, 0ee1ca11] [0ee1ca20, 0ee1ca82] [0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0ee1c9f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ee1c9f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_RAX;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return in_RAX;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  lVar4 = lVar2;
  if (lVar2 != lVar5) {
    do {
      plVar3 = *(long **)(lVar5 + -8);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        in_RAX = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (in_RAX == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          in_RAX = func_0x0412c2d0(plVar3);
        }
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != lVar2);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  *(long *)(param_1 + 0x30) = lVar2;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
  }
  return in_RAX;
}


