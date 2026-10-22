/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3271d0 (ELF vaddr 0xd2271d0)
 * Label: string:ZN21JigsawStructureLoader23loadJigsawStructureDataER19Resour
 * Body:  [[0d3271d0, 0d3271e5]]
 * Ghidra: FUN_0d3271d0
 */


long FUN_0d3271d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9f22e) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


