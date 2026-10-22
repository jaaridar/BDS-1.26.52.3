/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358cb0 (ELF vaddr 0x5258cb0)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot1
 * Body:  [[05358cb0, 05358cc6]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SurfaceBuilderBiomeComponentGlue__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x05358b90();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


