/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe86d070 (ELF vaddr 0xe76d070)
 * Label: SharedTypes::v1_20_60::MultinoiseGenerationRulesBiomeJsonComponent::vslot1
 * Body:  [[0e86d070, 0e86d079]]
 * Ghidra: wg_SharedTypes__v1_20_60__MultinoiseGenerationRulesBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_SharedTypes__v1_20_60__MultinoiseGenerationRulesBiomeJsonComponent__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


