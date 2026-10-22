/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe868960 (ELF vaddr 0xe768960)
 * Label: SharedTypes::v1_20_60::ClimateBiomeJsonComponent::vslot1
 * Body:  [[0e868960, 0e868969]]
 * Ghidra: wg_SharedTypes__v1_20_60__ClimateBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_20_60__ClimateBiomeJsonComponent__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


