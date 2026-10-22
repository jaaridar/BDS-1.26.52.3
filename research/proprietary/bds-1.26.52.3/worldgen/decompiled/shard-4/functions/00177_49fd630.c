/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4afd630 (ELF vaddr 0x49fd630)
 * Label: string:ZN14FeatureLoading28_addCaveFeatureMembersCommonIN8JsonUtil2
 * Body:  [[04afd630, 04afd645]]
 * Ghidra: FUN_04afd630
 */


long FUN_04afd630(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01593d19) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


