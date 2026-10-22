/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258b90
 * Label: SurfaceBuilderBiomeComponentGlue::vslot0
 * Body:  [[05258b90, 05258baf] [05258c01, 05258c0f]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SurfaceBuilderBiomeComponentGlue__vslot0(void)

{
  undefined8 in_RAX;
  long unaff_R13;
  bool in_ZF;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  if (!in_ZF) {
    uStack0000000000000040 = in_RAX;
    if (unaff_R13 != 0) {
      uStack0000000000000038 = 0xee326ba;
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
    return uStack0000000000000040;
  }
  return in_RAX;
}


