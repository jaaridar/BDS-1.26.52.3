/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe156ce0 (ELF vaddr 0xe056ce0)
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot5
 * Body:  [[0e156ce0, 0e156ce9]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot5(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


