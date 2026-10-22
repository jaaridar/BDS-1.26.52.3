/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9dc4b0 (ELF vaddr 0xe8dc4b0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e9dc4b0, 0e9dc4c5]]
 * Ghidra: FUN_0e9dc4b0
 */


long FUN_0e9dc4b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e37a14) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


