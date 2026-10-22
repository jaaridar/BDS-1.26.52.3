/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6246370 (ELF vaddr 0x6146370)
 * Label: callee-of:0x61416e0
 * Body:  [[06246370, 0624639b] [062463a0, 0624644a]]
 * Ghidra: FUN_06246370
 */


/* WARNING: Possible PIC construction at 0x062463d1: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062463d6) */

void FUN_06246370(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &UNK_0f02ea88;
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar5 = param_1[9];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        plVar3 = *(long **)(lVar5 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            goto SUB_0412c2d0;
          }
        }
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != lVar2);
      lVar4 = param_1[8];
    }
    param_1[9] = lVar2;
    func_0x0412a280(lVar4,param_1[10] - lVar4);
  }
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1[1] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
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
  }
  return;
}


