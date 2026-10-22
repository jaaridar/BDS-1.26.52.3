/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9e6940 (ELF vaddr 0xe8e6940)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e9e6940, 0e9e6955]]
 * Ghidra: FUN_0e9e6940
 */


long FUN_0e9e6940(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e381d4) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


