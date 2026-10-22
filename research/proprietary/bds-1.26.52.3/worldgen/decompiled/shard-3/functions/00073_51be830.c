/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52be830 (ELF vaddr 0x51be830)
 * Label: string:ZN18OverworldGenerator9loadChunkER10LevelChunkbE3$_0
 * Body:  [[052be830, 052be845]]
 * Ghidra: FUN_052be830
 */


long FUN_052be830(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01643e5b) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


