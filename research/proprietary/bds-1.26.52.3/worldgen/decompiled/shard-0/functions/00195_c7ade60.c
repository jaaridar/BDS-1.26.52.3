/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ade60 (ELF vaddr 0xc7ade60)
 * Label: string:ZN12BinaryStream15writeVectorListI28BiomeWeightedTemperature
 * Body:  [[0c8ade60, 0c8ade75]]
 * Ghidra: FUN_0c8ade60
 */


long FUN_0c8ade60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d33d3e) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


