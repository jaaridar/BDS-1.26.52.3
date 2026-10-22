/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629dfd0 (ELF vaddr 0x619dfd0)
 * Label: string:ZN12_GLOBAL__N_123EditorJigsawServiceAnon21_placeOrDeferSect
 * Body:  [[0629dfd0, 0629dfe5]]
 * Ghidra: FUN_0629dfd0
 */


long FUN_0629dfd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0172dddd) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


