/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeeb81b0 (ELF vaddr 0xedb81b0)
 * Label: callee-of:0x524f1c0
 * Body:  [[0eeb81b0, 0eeb8292]]
 * Ghidra: FUN_0eeb81b0
 */


/* WARNING: Possible PIC construction at 0x0eeb8279: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0eeb827e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eeb81b0(char *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (((*param_1 == '\x01') && (*(long *)(param_1 + 0x10) != 0)) &&
     (plVar2 = (long *)FUN_0412c300(), plVar2 != (long *)0x0)) {
    if (*(long *)(param_1 + 8) != 0) {
      plVar3 = (long *)func_0x0eec09c0(*(long *)(param_1 + 8) + 0x10);
      lVar1 = plVar3[1];
      if ((*plVar3 != lVar1) && (*(char **)(lVar1 + -8) == param_1)) {
        if ((*(ulong *)(lVar1 + -0x10) >> 0x37 & 1) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(*(ulong *)(lVar1 + -0x10) & 0xff00ffffffffffff) - 8);
        }
        *(undefined8 *)(lVar1 + -0x10) = 0;
        plVar3[1] = lVar1 + -0x28;
      }
    }
    LOCK();
    plVar3 = plVar2 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      goto SUB_0412c2d0;
    }
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    return;
  }
SUB_0412c2d0:
  if (plVar2[2] != 0) {
    LOCK();
    plVar3 = plVar2 + 2;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))();
  return;
}


