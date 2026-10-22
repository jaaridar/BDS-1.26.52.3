/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c4300 (ELF vaddr 0xc5c4300)
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_20BlockRandomTickEven
 * Body:  [[0c6c4300, 0c6c4315]]
 * Ghidra: FUN_0c6c4300
 */


long FUN_0c6c4300(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d12d5a) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


