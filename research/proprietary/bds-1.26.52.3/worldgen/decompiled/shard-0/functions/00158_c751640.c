/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc751640
 * Label: FixedBiomeSource::vslot5
 * Body:  [[0c751640, 0c75165e]]
 * Ghidra: wg_FixedBiomeSource__vslot5
 */


void wg_FixedBiomeSource__vslot5(undefined8 param_1,long param_2)

{
  long unaff_R14;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  
  *(undefined4 *)(param_2 + 0x40) = 2;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


