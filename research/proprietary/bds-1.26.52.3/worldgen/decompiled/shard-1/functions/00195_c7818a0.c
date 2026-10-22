/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8818a0 (ELF vaddr 0xc7818a0)
 * Label: string:ZNK22VanillaSurfaceBuilders20CappedSurfaceBuilder14buildSurf
 * Body:  [[0c8818a0, 0c8818b5]]
 * Ghidra: FUN_0c8818a0
 */


long FUN_0c8818a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d312af) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


