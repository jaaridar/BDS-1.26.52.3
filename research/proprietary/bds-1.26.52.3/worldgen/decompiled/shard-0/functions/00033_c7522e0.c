/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7522e0
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot4
 * Body:  [[0c7522e0, 0c752320] [0c752464, 0c752481]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot4
 */


void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot4(void)

{
  long in_RAX;
  long unaff_R14;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  (**(code **)(&UNK_0f47e8c0 + in_RAX * 8))(&stack0x00000020,unaff_R14 + 0x38);
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 0xd;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


