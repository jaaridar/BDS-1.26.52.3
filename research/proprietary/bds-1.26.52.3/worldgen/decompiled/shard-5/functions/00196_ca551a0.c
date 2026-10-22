/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb551a0 (ELF vaddr 0xca551a0)
 * Label: string:ZN19ChunkLoadActionList13_loadRequestsER12LevelStorageR20ICo
 * Body:  [[0cb551a0, 0cb551b5]]
 * Ghidra: FUN_0cb551a0
 */


long FUN_0cb551a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d4739e) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


