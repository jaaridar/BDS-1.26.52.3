/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd30ae50 (ELF vaddr 0xd20ae50)
 * Label: string:M21JigsawStructureLoaderFbNSt3__117basic_string_viewIcNS0_11
 * Body:  [[0d30ae50, 0d30ae65]]
 * Ghidra: FUN_0d30ae50
 */


long FUN_0d30ae50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9e00c) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


