/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c4000 (ELF vaddr 0xc5c4000)
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_15BlockPlaceEventEE9s
 * Body:  [[0c6c4000, 0c6c4015]]
 * Ghidra: FUN_0c6c4000
 */


long FUN_0c6c4000(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d1287a) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


