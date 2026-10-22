/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b08120 (ELF vaddr 0x4a08120)
 * Label: string:ZN14FeatureLoading12_buildSchemaI21UnderwaterCaveFeatureEEvR
 * Body:  [[04b08120, 04b08135]]
 * Ghidra: FUN_04b08120
 */


long FUN_04b08120(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01595c69) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


