/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a79780 (ELF vaddr 0x4979780)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes8
 * Body:  [[04a79780, 04a79795]]
 * Ghidra: FUN_04a79780
 */


long FUN_04a79780(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158d947) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


