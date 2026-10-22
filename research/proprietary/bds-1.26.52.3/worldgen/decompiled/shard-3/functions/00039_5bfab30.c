/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfab30 (ELF vaddr 0x5bfab30)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[05cfab30, 05cfabb0] [05cfabc0, 05cfabed] [05cfabf0, 05cfac56] [05cfac60, 05cfac81]]
 * Ghidra: FUN_05cfab30
 */


/* WARNING: Removing unreachable block (ram,0x05cfaba9) */
/* WARNING: Removing unreachable block (ram,0x05cfabcd) */
/* WARNING: Removing unreachable block (ram,0x05cfabe6) */
/* WARNING: Removing unreachable block (ram,0x05cfabc0) */
/* WARNING: Removing unreachable block (ram,0x05cfac2a) */
/* WARNING: Removing unreachable block (ram,0x05cfac39) */

void FUN_05cfab30(char *param_1)

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
    while ((plVar5 != plVar6 && (cVar3 = (**(code **)(*(long *)*plVar5 + 0x10))(), cVar3 != '\a')))
    {
      plVar5 = plVar5 + 1;
    }
    plVar4 = plVar5 + 1;
    if (plVar4 != plVar6 && plVar5 != plVar6) {
      do {
        cVar3 = (**(code **)(*(long *)*plVar4 + 0x10))();
        if (cVar3 != '\a') {
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


