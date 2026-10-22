/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4b5920 (ELF vaddr 0xe3b5920)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e4b5920, 0e4b5935]]
 * Ghidra: FUN_0e4b5920
 */


long FUN_0e4b5920(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e1d006) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


