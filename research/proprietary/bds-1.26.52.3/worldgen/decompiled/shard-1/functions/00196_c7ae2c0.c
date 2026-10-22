/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ae2c0 (ELF vaddr 0xc7ae2c0)
 * Label: string:ZN20ReadOnlyBinaryStream14readVectorListI28BiomeWeightedTemp
 * Body:  [[0c8ae2c0, 0c8ae2d5]]
 * Ghidra: FUN_0c8ae2c0
 */


long FUN_0c8ae2c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d33f10) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


