/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd30c3d0 (ELF vaddr 0xd20c3d0)
 * Label: string:ZN25FeatureTerrainAdjustments7setBuryERK11BoundingBoxE3$_0
 * Body:  [[0d30c3d0, 0d30c3e5]]
 * Ghidra: FUN_0d30c3d0
 */


long FUN_0d30c3d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9e3e4) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


