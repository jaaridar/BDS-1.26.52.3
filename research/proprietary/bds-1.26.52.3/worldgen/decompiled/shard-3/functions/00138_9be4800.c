/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9ce4800 (ELF vaddr 0x9be4800)
 * Label: string:ZN12_GLOBAL__N_116PlaceCommandAnon21_placeOrDeferSectionsER1
 * Body:  [[09ce4800, 09ce4815]]
 * Ghidra: FUN_09ce4800
 */


long FUN_09ce4800(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01a2a5ef) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


