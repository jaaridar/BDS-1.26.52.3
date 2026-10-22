/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8585ad0 (ELF vaddr 0x8485ad0)
 * Label: FeatureRegistryPacket::vslot7
 * Body:  [[08585ad0, 08585ada]]
 * Ghidra: wg_FeatureRegistryPacket__vslot7
 */


void wg_FeatureRegistryPacket__vslot7(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x08585ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}


