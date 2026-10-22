/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52be650 (ELF vaddr 0x51be650)
 * Label: string:ZN7Bedrock9Threading20InstancedThreadLocalIN18OverworldGener
 * Body:  [[052be650, 052be665]]
 * Ghidra: FUN_052be650
 */


long FUN_052be650(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01643d37) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


