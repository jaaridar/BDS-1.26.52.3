/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe49cba0 (ELF vaddr 0xe39cba0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e49cba0, 0e49cbb5]]
 * Ghidra: FUN_0e49cba0
 */


long FUN_0e49cba0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e1c8f0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


