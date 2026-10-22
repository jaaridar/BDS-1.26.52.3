/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9e09b0 (ELF vaddr 0xe8e09b0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__15arrayINS2_7variantIJ
 * Body:  [[0e9e09b0, 0e9e09c5]]
 * Ghidra: FUN_0e9e09b0
 */


long FUN_0e9e09b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e37ce3) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


