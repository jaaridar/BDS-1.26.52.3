/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7b3f0 (ELF vaddr 0x497b3f0)
 * Label: BiomeDimensionAttributes::vslot1
 * Body:  [[04a7b3f0, 04a7b3f9]]
 * Ghidra: wg_BiomeDimensionAttributes__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_BiomeDimensionAttributes__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


