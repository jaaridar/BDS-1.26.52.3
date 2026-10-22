/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3eaa0
 * Label: JigsawBlockActor::vslot5
 * Body:  [[0cd3eaa0, 0cd3eaab]]
 * Ghidra: wg_JigsawBlockActor__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlockActor__vslot5(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


