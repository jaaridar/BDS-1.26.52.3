/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd34be40 (ELF vaddr 0xd24be40)
 * Label: string:ZN20StructurePoolElement6singleENSt3__117basic_string_viewIc
 * Body:  [[0d34be40, 0d34be55]]
 * Ghidra: FUN_0d34be40
 */


long FUN_0d34be40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d9fe91) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


