/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce1d0
 * Label: JigsawBlock::vslot100
 * Body:  [[0c5ce1d0, 0c5ce1d9]]
 * Ghidra: wg_JigsawBlock__vslot100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot100(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


