/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4e55f0 (ELF vaddr 0xd3e55f0)
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d4e55f0, 0d4e5605]]
 * Ghidra: FUN_0d4e55f0
 */


long FUN_0d4e55f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01dbfdaf) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


