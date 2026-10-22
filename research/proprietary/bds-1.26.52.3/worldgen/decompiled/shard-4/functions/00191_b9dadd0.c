/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbadadd0 (ELF vaddr 0xb9dadd0)
 * Label: string:ZN9Scripting8internal19BaseScriptComponentC1IN6Editor12Scrip
 * Body:  [[0badadd0, 0badade5]]
 * Ghidra: FUN_0badadd0
 */


long FUN_0badadd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01c616cb) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


