/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a67380 (ELF vaddr 0x4967380)
 * Label: callee-of:0x495e290
 * Body:  [[04a67380, 04a67399] [04a673a0, 04a673dd]]
 * Ghidra: FUN_04a67380
 */


void FUN_04a67380(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != *(long **)(param_1 + 8)) {
    plVar2 = *(long **)(param_1 + 8) + -6;
    do {
      if (*plVar2 != 0) {
        FUN_04a67380(plVar2);
        func_0x0412a280(*plVar2,plVar2[2] - *plVar2);
      }
      plVar1 = plVar2 + -0xe;
      plVar2 = plVar2 + -0x14;
    } while (plVar1 != param_2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


