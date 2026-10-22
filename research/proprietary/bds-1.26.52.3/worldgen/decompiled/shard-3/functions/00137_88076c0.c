/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x89076c0 (ELF vaddr 0x88076c0)
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorI28BiomeWeight
 * Body:  [[089076c0, 089076d5]]
 * Ghidra: FUN_089076c0
 */


long FUN_089076c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_018e5afd) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


