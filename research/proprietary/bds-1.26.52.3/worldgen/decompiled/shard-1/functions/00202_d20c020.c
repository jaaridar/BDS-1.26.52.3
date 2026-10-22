/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd30c020 (ELF vaddr 0xd20c020)
 * Label: string:ZN25FeatureTerrainAdjustments17setBeardAndShaverERK11Boundin
 * Body:  [[0d30c020, 0d30c035]]
 * Ghidra: FUN_0d30c020
 */


long FUN_0d30c020(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9e309) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


