/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe67f470 (ELF vaddr 0xe57f470)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorINS2_7variantI
 * Body:  [[0e67f470, 0e67f485]]
 * Ghidra: FUN_0e67f470
 */


long FUN_0e67f470(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e2846d) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


