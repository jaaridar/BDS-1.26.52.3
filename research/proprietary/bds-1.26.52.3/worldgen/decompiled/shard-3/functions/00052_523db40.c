/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533db40 (ELF vaddr 0x523db40)
 * Label: VanillaSurfaceBuilders::TheEndSurfaceBuilder::vslot1
 * Body:  [[0533db40, 0533db49]]
 * Ghidra: wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


