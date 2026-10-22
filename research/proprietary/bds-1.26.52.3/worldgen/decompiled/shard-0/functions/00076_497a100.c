/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7a100 (ELF vaddr 0x497a100)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentITkNSt3__112deri
 * Body:  [[04a7a100, 04a7a115]]
 * Ghidra: FUN_04a7a100
 */


long FUN_04a7a100(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158e295) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


