/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe55fde0 (ELF vaddr 0xe45fde0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e55fde0, 0e55fdf5]]
 * Ghidra: FUN_0e55fde0
 */


long FUN_0e55fde0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e1fd59) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


