/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c4100 (ELF vaddr 0xc5c4100)
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_20BlockQueuedTickEven
 * Body:  [[0c6c4100, 0c6c4115]]
 * Ghidra: FUN_0c6c4100
 */


long FUN_0c6c4100(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d12a14) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


