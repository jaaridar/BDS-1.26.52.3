/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5346f70 (ELF vaddr 0x5246f70)
 * Label: DefaultOverworldBiomeSurfaceFlag::vslot1
 * Body:  [[05346f70, 05346f79]]
 * Ghidra: wg_DefaultOverworldBiomeSurfaceFlag__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_DefaultOverworldBiomeSurfaceFlag__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


