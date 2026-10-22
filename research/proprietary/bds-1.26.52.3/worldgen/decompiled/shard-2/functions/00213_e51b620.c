/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe61b620 (ELF vaddr 0xe51b620)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e61b620, 0e61b635]]
 * Ghidra: FUN_0e61b620
 */


long FUN_0e61b620(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e26047) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


