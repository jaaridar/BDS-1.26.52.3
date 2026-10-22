/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69950 (ELF vaddr 0xc969950)
 * Label: Dimension::vslot36
 * Body:  [[0ca69950, 0ca699c2]]
 * Ghidra: wg_Dimension__vslot36
 */


void wg_Dimension__vslot36(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  long *plStack_20;
  
  param_1[0x7e] = param_1[0x7d];
  puStack_28 = &uStack_30;
  uStack_30 = param_3;
  plStack_20 = param_1 + 0x7d;
  (**(code **)(*param_1 + 0x58))(param_1,&UNK_0ca74eb0,&puStack_28);
  plVar1 = (long *)(**(code **)(*(long *)param_1[0x14] + 0xa48))();
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 0x7d,param_2);
  return;
}


