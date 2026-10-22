/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a78d20 (ELF vaddr 0x4978d20)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes8
 * Body:  [[04a78d20, 04a78d35]]
 * Ghidra: FUN_04a78d20
 */


long FUN_04a78d20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158cdd3) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


