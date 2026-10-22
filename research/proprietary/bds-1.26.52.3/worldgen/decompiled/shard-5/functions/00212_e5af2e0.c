/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6af2e0 (ELF vaddr 0xe5af2e0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e6af2e0, 0e6af2f5]]
 * Ghidra: FUN_0e6af2e0
 */


long FUN_0e6af2e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e29349) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


