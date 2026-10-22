/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4e59b0 (ELF vaddr 0xd3e59b0)
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d4e59b0, 0d4e59c5]]
 * Ghidra: FUN_0d4e59b0
 */


long FUN_0d4e59b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01dc0067) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


