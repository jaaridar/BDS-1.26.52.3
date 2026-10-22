/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69b70 (ELF vaddr 0xc969b70)
 * Label: Dimension::vslot4
 * Body:  [[0ca69b70, 0ca69bc2]]
 * Ghidra: wg_Dimension__vslot4
 */


void wg_Dimension__vslot4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  param_1[0x7e] = param_1[0x7d];
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_4,param_1 + 0x7d);
  plVar1 = (long *)(**(code **)(*(long *)param_1[0x14] + 0xa48))();
                    /* WARNING: Could not recover jumptable at 0x0ca69bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 0x7d,param_3,*(code **)(*plVar1 + 0x40));
  return;
}


