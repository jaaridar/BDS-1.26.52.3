/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5348470 (ELF vaddr 0x5248470)
 * Label: NoiseGradientBiomeSurfaceComponent::vslot1
 * Body:  [[05348470, 05348486]]
 * Ghidra: wg_NoiseGradientBiomeSurfaceComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_NoiseGradientBiomeSurfaceComponent__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x05348370();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


