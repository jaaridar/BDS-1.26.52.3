/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b02610 (ELF vaddr 0x4a02610)
 * Label: string:ZNK24SpeleothemClusterFeature12_placeColumnER17IBlockWorldGe
 * Body:  [[04b02610, 04b02625]]
 * Ghidra: FUN_04b02610
 */


long FUN_04b02610(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01594a94) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


