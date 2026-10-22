/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8bf340 (ELF vaddr 0xc7bf340)
 * Label: SurfaceBuilderComponent::vslot1
 * Body:  [[0c8bf340, 0c8bf349]]
 * Ghidra: wg_SurfaceBuilderComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SurfaceBuilderComponent__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


