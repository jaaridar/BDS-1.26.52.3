/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba6a490 (ELF vaddr 0xb96a490)
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[0ba6a490, 0ba6a4a5]]
 * Ghidra: FUN_0ba6a490
 */


long FUN_0ba6a490(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01c56229) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


