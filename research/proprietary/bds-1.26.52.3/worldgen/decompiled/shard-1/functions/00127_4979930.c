/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a79930 (ELF vaddr 0x4979930)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes8
 * Body:  [[04a79930, 04a79945]]
 * Ghidra: FUN_04a79930
 */


long FUN_04a79930(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158db53) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


