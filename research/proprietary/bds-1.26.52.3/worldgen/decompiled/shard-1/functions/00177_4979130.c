/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a79130 (ELF vaddr 0x4979130)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes9
 * Body:  [[04a79130, 04a79145]]
 * Ghidra: FUN_04a79130
 */


long FUN_04a79130(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158d1a8) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


