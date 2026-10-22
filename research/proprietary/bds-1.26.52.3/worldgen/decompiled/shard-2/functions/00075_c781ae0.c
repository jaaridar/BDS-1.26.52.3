/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc881ae0 (ELF vaddr 0xc781ae0)
 * Label: string:ZN18BiomeSurfaceSystem28resolveBuilderImplementationER13Biom
 * Body:  [[0c881ae0, 0c881af5]]
 * Ghidra: FUN_0c881ae0
 */


long FUN_0c881ae0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d315a5) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


