/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc752060
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot2
 * Body:  [[0c752060, 0c752088] [0c752464, 0c752481]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot2
 */


void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot2(void)

{
  int in_EAX;
  long unaff_R14;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  *(ulong *)(unaff_R14 + 0x38) = (ulong)(in_EAX + 0x2d2c27b);
  *(undefined4 *)(unaff_R14 + 0x40) = 3;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


