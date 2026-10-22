/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8add30 (ELF vaddr 0xc7add30)
 * Label: string:ZN12BinaryStream15writeVectorListI28BiomeWeightedTemperature
 * Body:  [[0c8add30, 0c8add45]]
 * Ghidra: FUN_0c8add30
 */


long FUN_0c8add30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d33ba4) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


