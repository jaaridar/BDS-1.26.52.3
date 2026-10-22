/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a79ed0 (ELF vaddr 0x4979ed0)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes8
 * Body:  [[04a79ed0, 04a79ee5]]
 * Ghidra: FUN_04a79ed0
 */


long FUN_04a79ed0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158e0ed) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


