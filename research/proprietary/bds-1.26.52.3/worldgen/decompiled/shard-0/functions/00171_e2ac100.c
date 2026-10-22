/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3ac100 (ELF vaddr 0xe2ac100)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__113unordered_mapImN11S
 * Body:  [[0e3ac100, 0e3ac115]]
 * Ghidra: FUN_0e3ac100
 */


long FUN_0e3ac100(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01e1773f) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


