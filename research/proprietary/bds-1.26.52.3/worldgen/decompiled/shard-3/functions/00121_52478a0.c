/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53478a0 (ELF vaddr 0x52478a0)
 * Label: TheEndBiomeSurfaceFlag::vslot1
 * Body:  [[053478a0, 053478a9]]
 * Ghidra: wg_TheEndBiomeSurfaceFlag__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_TheEndBiomeSurfaceFlag__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


