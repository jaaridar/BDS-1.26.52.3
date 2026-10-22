/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3a59c0 (ELF vaddr 0xe2a59c0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e3a59c0, 0e3a59d5]]
 * Ghidra: FUN_0e3a59c0
 */


long FUN_0e3a59c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e17436) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


