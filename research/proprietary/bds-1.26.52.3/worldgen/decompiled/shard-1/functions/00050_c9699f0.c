/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca699f0 (ELF vaddr 0xc9699f0)
 * Label: Dimension::vslot14
 * Body:  [[0ca699f0, 0ca69a25]]
 * Ghidra: wg_Dimension__vslot14
 */


void wg_Dimension__vslot14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  long *plStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  puStack_10 = (undefined1 *)&uStack_28;
  uStack_28 = param_3;
  plStack_20 = param_1;
  uStack_18 = param_4;
  uStack_8 = param_2;
  (**(code **)(*param_1 + 0x58))(param_1,&UNK_0ca74ff0,&plStack_20);
  return;
}


