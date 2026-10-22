/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc645cd0 (ELF vaddr 0xc545cd0)
 * Label: callee2-of:0x5bec150
 * Body:  [[0c645cd0, 0c645d50] [0c645d60, 0c645d8d] [0c645d90, 0c645df6] [0c645e00, 0c645e21]]
 * Ghidra: FUN_0c645cd0
 */


/* WARNING: Removing unreachable block (ram,0x0c645d49) */
/* WARNING: Removing unreachable block (ram,0x0c645d6d) */
/* WARNING: Removing unreachable block (ram,0x0c645d86) */
/* WARNING: Removing unreachable block (ram,0x0c645d60) */
/* WARNING: Removing unreachable block (ram,0x0c645dca) */
/* WARNING: Removing unreachable block (ram,0x0c645dd9) */

void FUN_0c645cd0(char *param_1)

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
    while ((plVar5 != plVar6 && (cVar3 = (**(code **)(*(long *)*plVar5 + 0x10))(), cVar3 != '\x01'))
          ) {
      plVar5 = plVar5 + 1;
    }
    plVar4 = plVar5 + 1;
    if (plVar4 != plVar6 && plVar5 != plVar6) {
      do {
        cVar3 = (**(code **)(*(long *)*plVar4 + 0x10))();
        if (cVar3 != '\x01') {
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


