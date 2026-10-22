/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7a310 (ELF vaddr 0x497a310)
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes4
 * Body:  [[04a7a310, 04a7a325]]
 * Ghidra: FUN_04a7a310
 */


long FUN_04a7a310(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_0158e451) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


