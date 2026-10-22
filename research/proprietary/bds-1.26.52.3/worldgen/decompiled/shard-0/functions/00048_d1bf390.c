/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1bf390
 * Label: br::worldgen::processors::Rule::vslot3
 * Body:  [[0d1bf390, 0d1bf3aa]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__Rule__vslot3(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x04a3a0b0(param_1 + 0x10);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


