/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd31f400 (ELF vaddr 0xd21f400)
 * Label: string:ZN2br8worldgen15JigsawAssembler9constructERNS0_17GenerationC
 * Body:  [[0d31f400, 0d31f415]]
 * Ghidra: FUN_0d31f400
 */


long FUN_0d31f400(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9eea3) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


