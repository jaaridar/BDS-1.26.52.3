/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1bf350
 * Label: br::worldgen::processors::Capped::vslot2
 * Body:  [[0d1bf350, 0d1bf358]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__Capped__vslot2(long param_1)

{
  undefined8 in_RAX;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = in_RAX;
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uStack0000000000000008;
}


