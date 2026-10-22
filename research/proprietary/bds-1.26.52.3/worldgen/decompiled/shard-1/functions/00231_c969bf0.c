/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69bf0 (ELF vaddr 0xc969bf0)
 * Label: Dimension::vslot5
 * Body:  [[0ca69bf0, 0ca69c6c]]
 * Ghidra: wg_Dimension__vslot5
 */


void wg_Dimension__vslot5(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  long *plStack_20;
  
  param_1[0x7e] = param_1[0x7d];
  puStack_30 = &uStack_40;
  uStack_40 = param_4;
  plStack_38 = param_1 + 0x7d;
  uStack_28 = param_2;
  plStack_20 = param_1;
  (**(code **)(*param_1 + 0x58))(param_1,&UNK_0ca75300,&plStack_38);
  plVar1 = (long *)(**(code **)(*(long *)param_1[0x14] + 0xa48))();
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 0x7d,param_3);
  return;
}


