/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd04ee40 (ELF vaddr 0xcf4ee40)
 * Label: string:ZN18SculkBlockBehavior15_canPlaceGrowthER17IBlockWorldGenAPI
 * Body:  [[0d04ee40, 0d04ee55]]
 * Ghidra: FUN_0d04ee40
 */


long FUN_0d04ee40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d7cbe8) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


