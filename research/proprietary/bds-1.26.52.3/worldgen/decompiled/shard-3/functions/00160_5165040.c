/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5265040 (ELF vaddr 0x5165040)
 * Label: callee-of:0x517c470
 * Body:  [[05265040, 05265066] [05265070, 052650e3]]
 * Ghidra: FUN_05265040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05265040(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_RAX;
  long lVar4;
  long lVar5;
  
  if (((char)param_1[3] == '\x01') && (lVar2 = *param_1, lVar2 != 0)) {
    lVar5 = param_1[1];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        if (*(char *)(lVar5 + -8) == '\x01') {
          in_RAX = func_0x0412d6b0(*(undefined8 *)(lVar5 + -0x10));
        }
        plVar3 = *(long **)(lVar5 + -0x18);
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
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != lVar2);
      lVar4 = *param_1;
    }
    param_1[1] = lVar2;
    if (lVar4 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
    }
    return in_RAX;
  }
  return in_RAX;
}


