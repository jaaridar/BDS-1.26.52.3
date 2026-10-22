/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4b03380 (ELF vaddr 0x4a03380)
 * Label: string:ZN14FeatureLoading28_addCaveFeatureMembersCommonIN8JsonUtil2
 * Body:  [[04b03380, 04b03395]]
 * Ghidra: FUN_04b03380
 */


long FUN_04b03380(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01594e05) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


