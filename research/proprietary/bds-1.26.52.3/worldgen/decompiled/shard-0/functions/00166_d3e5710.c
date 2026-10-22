/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4e5710 (ELF vaddr 0xd3e5710)
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d4e5710, 0d4e5725]]
 * Ghidra: FUN_0d4e5710
 */


long FUN_0d4e5710(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01dbfe97) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


