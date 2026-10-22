/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc751630
 * Label: FixedBiomeSource::vslot11
 * Body:  [[0c751630, 0c75165e] [0c7518a6, 0c7518c2]]
 * Ghidra: wg_FixedBiomeSource__vslot11
 */


void wg_FixedBiomeSource__vslot11(void)

{
  long unaff_R14;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 2;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


