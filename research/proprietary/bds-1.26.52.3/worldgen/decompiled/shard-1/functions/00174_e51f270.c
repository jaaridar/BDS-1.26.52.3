/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe61f270 (ELF vaddr 0xe51f270)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e61f270, 0e61f285]]
 * Ghidra: FUN_0e61f270
 */


long FUN_0e61f270(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e2624e) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


