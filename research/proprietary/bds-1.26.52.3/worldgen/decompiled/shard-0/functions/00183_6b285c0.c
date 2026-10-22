/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6c285c0 (ELF vaddr 0x6b285c0)
 * Label: string:ZN6Editor12ScriptModule19ScriptJigsawServiceC1EPNS_8Services
 * Body:  [[06c285c0, 06c285d5]]
 * Ghidra: FUN_06c285c0
 */


long FUN_06c285c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_017e0a51) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


