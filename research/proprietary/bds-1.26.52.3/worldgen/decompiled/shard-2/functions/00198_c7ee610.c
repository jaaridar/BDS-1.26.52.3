/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ee610 (ELF vaddr 0xc7ee610)
 * Label: string:ZN13BiomeRegistry21loadAllBiomeDocumentsERK19ResourcePackMan
 * Body:  [[0c8ee610, 0c8ee625]]
 * Ghidra: FUN_0c8ee610
 */


long FUN_0c8ee610(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d38084) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


