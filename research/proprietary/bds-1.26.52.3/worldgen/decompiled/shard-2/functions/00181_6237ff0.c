/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6337ff0 (ELF vaddr 0x6237ff0)
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[06337ff0, 06338005]]
 * Ghidra: FUN_06337ff0
 */


long FUN_06337ff0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01738272) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


