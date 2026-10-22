/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cab60
 * Label: br::worldgen::WorldGenRandom::vslot15
 * Body:  [[0412a280, 0412a284] [048cab60, 048cab6e]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__WorldGenRandom__vslot15(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + 0x10) = in_RAX;
  if (param_1 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)(unaff_retaddr + 8) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)(unaff_retaddr + 0x10);
}


