/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b02710 (ELF vaddr 0x4a02710)
 * Label: string:ZNK24SpeleothemClusterFeature12_placeColumnER17IBlockWorldGe
 * Body:  [[04b02710, 04b02725]]
 * Ghidra: FUN_04b02710
 */


long FUN_04b02710(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01594b88) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


