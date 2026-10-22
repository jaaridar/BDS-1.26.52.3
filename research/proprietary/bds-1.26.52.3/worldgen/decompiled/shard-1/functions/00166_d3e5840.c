/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4e5840 (ELF vaddr 0xd3e5840)
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d4e5840, 0d4e5855]]
 * Ghidra: FUN_0d4e5840
 */


long FUN_0d4e5840(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01dbff7f) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


