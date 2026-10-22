/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbaedb30 (ELF vaddr 0xb9edb30)
 * Label: string:ZN9Scripting8internal19BaseScriptComponentC1IN6Editor12Scrip
 * Body:  [[0baedb30, 0baedb45]]
 * Ghidra: FUN_0baedb30
 */


long FUN_0baedb30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01c628e4) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


