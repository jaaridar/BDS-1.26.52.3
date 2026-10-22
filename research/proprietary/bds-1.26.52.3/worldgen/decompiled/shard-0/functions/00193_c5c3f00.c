/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c3f00 (ELF vaddr 0xc5c3f00)
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_18ActorInternalEventE
 * Body:  [[0c6c3f00, 0c6c3f15]]
 * Ghidra: FUN_0c6c3f00
 */


long FUN_0c6c3f00(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d126e2) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


