/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe617a80 (ELF vaddr 0xe517a80)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e617a80, 0e617a95]]
 * Ghidra: FUN_0e617a80
 */


long FUN_0e617a80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e25e30) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


