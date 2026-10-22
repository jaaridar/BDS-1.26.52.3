/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd30bae0 (ELF vaddr 0xd20bae0)
 * Label: string:ZN25FeatureTerrainAdjustments13setBeardifierERK11BoundingBox
 * Body:  [[0d30bae0, 0d30baf5]]
 * Ghidra: FUN_0d30bae0
 */


long FUN_0d30bae0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9e226) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


