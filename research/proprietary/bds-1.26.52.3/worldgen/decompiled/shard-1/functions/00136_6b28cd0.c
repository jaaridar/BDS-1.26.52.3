/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6c28cd0 (ELF vaddr 0x6b28cd0)
 * Label: string:ZN6Editor12ScriptModule19ScriptJigsawServiceC1EPNS_8Services
 * Body:  [[06c28cd0, 06c28ce5]]
 * Ghidra: FUN_06c28cd0
 */


long FUN_06c28cd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_017e0c65) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


