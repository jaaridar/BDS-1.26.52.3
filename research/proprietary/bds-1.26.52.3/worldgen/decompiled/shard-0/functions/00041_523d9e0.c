/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533d9e0 (ELF vaddr 0x523d9e0)
 * Label: VanillaSurfaceBuilders::NoiseGradientSurfaceBuilder::vslot1
 * Body:  [[0533d9e0, 0533d9e9]]
 * Ghidra: wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


