/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc859ad0 (ELF vaddr 0xc759ad0)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot1
 * Body:  [[0c859ad0, 0c859ad9]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


