/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf9c30 (ELF vaddr 0x5bf9c30)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[05cf9c30, 05cf9cb0] [05cf9cc0, 05cf9ced] [05cf9cf0, 05cf9d56] [05cf9d60, 05cf9d81]]
 * Ghidra: FUN_05cf9c30
 */


/* WARNING: Removing unreachable block (ram,0x05cf9ca9) */
/* WARNING: Removing unreachable block (ram,0x05cf9ccd) */
/* WARNING: Removing unreachable block (ram,0x05cf9ce6) */
/* WARNING: Removing unreachable block (ram,0x05cf9cc0) */
/* WARNING: Removing unreachable block (ram,0x05cf9d2a) */
/* WARNING: Removing unreachable block (ram,0x05cf9d39) */

void FUN_05cf9c30(char *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (*param_1 == '\0') {
    plVar5 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    while ((plVar5 != plVar6 && (cVar3 = (**(code **)(*(long *)*plVar5 + 0x10))(), cVar3 != '\x04'))
          ) {
      plVar5 = plVar5 + 1;
    }
    plVar4 = plVar5 + 1;
    if (plVar4 != plVar6 && plVar5 != plVar6) {
      do {
        cVar3 = (**(code **)(*(long *)*plVar4 + 0x10))();
        if (cVar3 != '\x04') {
          lVar1 = *plVar4;
          *plVar4 = 0;
          plVar2 = (long *)*plVar5;
          *plVar5 = lVar1;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar5 = plVar5 + 1;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar6);
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar5 != plVar6) {
      for (; plVar5 != plVar6; plVar6 = plVar6 + -1) {
        plVar4 = (long *)plVar6[-1];
        plVar6[-1] = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      *(long **)(param_1 + 0x10) = plVar5;
    }
  }
  return;
}


