/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6c3bc00 (ELF vaddr 0x6b3bc00)
 * Label: string:ZN9Scripting18EnumBindingBuilderIN6Editor8Services14JigsawJs
 * Body:  [[06c3bc00, 06c3bc15]]
 * Ghidra: FUN_06c3bc00
 */


long FUN_06c3bc00(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_017e1b4f) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


