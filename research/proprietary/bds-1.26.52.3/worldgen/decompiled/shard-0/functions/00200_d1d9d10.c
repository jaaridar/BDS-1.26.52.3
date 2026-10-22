/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9d10 (ELF vaddr 0xd1d9d10)
 * Label: br::worldgen::processors::BlockRules::RandomBlockMatch::vslot1
 * Body:  [[0d2d9d10, 0d2d9d19]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


