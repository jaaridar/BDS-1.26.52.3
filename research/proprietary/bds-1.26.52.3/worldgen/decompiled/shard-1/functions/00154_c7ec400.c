/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ec400 (ELF vaddr 0xc7ec400)
 * Label: string:ZN23BiomeJsonDocumentLoaderC1ERN6cereal13ReflectionCtxEN7Bed
 * Body:  [[0c8ec400, 0c8ec415]]
 * Ghidra: FUN_0c8ec400
 */


long FUN_0c8ec400(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01d37cef) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


