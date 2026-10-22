/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x529bce0 (ELF vaddr 0x519bce0)
 * Label: OverworldGenerator2d::vslot1
 * Body:  [[0529bce0, 0529bcfd]]
 * Ghidra: wg_OverworldGenerator2d__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGenerator2d__vslot1(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x70;
  uVar1 = func_0x0529ba70(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


