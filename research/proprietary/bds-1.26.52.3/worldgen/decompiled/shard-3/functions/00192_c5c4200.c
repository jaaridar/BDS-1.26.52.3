/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c4200 (ELF vaddr 0xc5c4200)
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_24BlockPlayerInteract
 * Body:  [[0c6c4200, 0c6c4215]]
 * Ghidra: FUN_0c6c4200
 */


long FUN_0c6c4200(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d12bb7) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


