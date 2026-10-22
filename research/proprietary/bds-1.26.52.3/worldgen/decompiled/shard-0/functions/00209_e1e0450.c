/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2e0450 (ELF vaddr 0xe1e0450)
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot5
 * Body:  [[0e2e0450, 0e2e0459] [0ee326a0, 0ee326bb]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot5(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


