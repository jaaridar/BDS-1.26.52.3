/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7b560 (ELF vaddr 0xc97b560)
 * Label: callee-of:0xc97b620
 * Body:  [[0ca7b560, 0ca7b580] [0ca7b590, 0ca7b5f1]]
 * Ghidra: FUN_0ca7b560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ca7b560(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_RAX;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX;
  }
  lVar5 = param_1[1];
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
    lVar4 = *param_1;
  }
  param_1[1] = lVar2;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
  }
  return in_RAX;
}


