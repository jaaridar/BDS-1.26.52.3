/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358970 (ELF vaddr 0x5258970)
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot1
 * Body:  [[05358970, 05358979]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


