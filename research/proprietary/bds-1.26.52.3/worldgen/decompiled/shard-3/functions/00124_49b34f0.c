/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ab34f0 (ELF vaddr 0x49b34f0)
 * Label: string:ZN14FeatureLoading28_addCaveFeatureMembersCommonIN8JsonUtil2
 * Body:  [[04ab34f0, 04ab3505]]
 * Ghidra: FUN_04ab34f0
 */


long FUN_04ab34f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01590b00) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


