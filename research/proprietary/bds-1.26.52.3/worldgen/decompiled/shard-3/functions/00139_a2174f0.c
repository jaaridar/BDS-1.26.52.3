/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa3174f0 (ELF vaddr 0xa2174f0)
 * Label: string:ZN9Scripting18EnumBindingBuilderINSt3__112basic_stringIcNS1_
 * Body:  [[0a3174f0, 0a317505]]
 * Ghidra: FUN_0a3174f0
 */


long FUN_0a3174f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01a83a37) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


