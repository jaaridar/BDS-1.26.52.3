/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9b30 (ELF vaddr 0xd1d9b30)
 * Label: br::worldgen::UniformHeight::vslot1
 * Body:  [[0d2d9b30, 0d2d9b39]]
 * Ghidra: wg_br__worldgen__UniformHeight__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__UniformHeight__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


