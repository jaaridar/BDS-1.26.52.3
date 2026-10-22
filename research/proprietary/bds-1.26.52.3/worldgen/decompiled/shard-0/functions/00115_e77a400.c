/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe87a400 (ELF vaddr 0xe77a400)
 * Label: SharedTypes::v1_21_100::FrozenNoiseBasedBiomeJsonComponent::vslot1
 * Body:  [[0e87a400, 0e87a409] [0ee326a0, 0ee326bb]]
 * Ghidra: wg_SharedTypes__v1_21_100__FrozenNoiseBasedBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_21_100__FrozenNoiseBasedBiomeJsonComponent__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


