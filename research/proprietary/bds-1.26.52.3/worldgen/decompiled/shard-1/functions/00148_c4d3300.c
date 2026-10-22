/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5d3300 (ELF vaddr 0xc4d3300)
 * Label: string:ZN12_GLOBAL__N_114FilterListAnon20_addFilterDefinitionI25Fil
 * Body:  [[0c5d3300, 0c5d3315]]
 * Ghidra: FUN_0c5d3300
 */


long FUN_0c5d3300(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01cf6d9e) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


