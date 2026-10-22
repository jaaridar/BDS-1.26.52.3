/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85858f0 (ELF vaddr 0x84858f0)
 * Label: FeatureRegistryPacket::vslot14
 * Body:  [[085858f0, 085858f3]]
 * Ghidra: wg_FeatureRegistryPacket__vslot14
 */


void wg_FeatureRegistryPacket__vslot14(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}


