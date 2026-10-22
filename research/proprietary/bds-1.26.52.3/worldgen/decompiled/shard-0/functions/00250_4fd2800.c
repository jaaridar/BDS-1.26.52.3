/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x50d2800 (ELF vaddr 0x4fd2800)
 * Label: callee-of:0x61416e0
 * Body:  [[050d2800, 050d290e]]
 * Ghidra: FUN_050d2800
 */


/* WARNING: Possible PIC construction at 0x050d28cf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x050d28d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_050d2800(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (((ulong)param_1[7] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[7] & 0xff00ffffffffffff) - 8);
  }
  param_1[7] = 0;
  if ((param_1[6] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[6] & 0xff00ffffffffffff) - 8);
  }
  param_1[6] = 0;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar3 == (long *)0x0) {
    param_1[2] = 0;
    return;
  }
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[1];
    param_1[2] = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        goto SUB_0412c2d0;
      }
    }
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
SUB_0412c2d0:
  if (plVar3[2] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}


