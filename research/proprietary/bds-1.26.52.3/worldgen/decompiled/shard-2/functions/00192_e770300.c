/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe870300 (ELF vaddr 0xe770300)
 * Label: SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::vslot1
 * Body:  [[0e870300, 0e870316]]
 * Ghidra: wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0e86fff0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


