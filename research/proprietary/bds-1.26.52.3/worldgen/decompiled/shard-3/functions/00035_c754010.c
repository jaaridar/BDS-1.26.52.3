/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc754010
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot6
 * Body:  [[0c754010, 0c75405a] [0c7544c7, 0c7544e3]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot6
 */


void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot6(void)

{
  long in_RAX;
  long unaff_R14;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined8 in_stack_00000020;
  
  if (in_RAX != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + in_RAX * 8))(&stack0x00000008,unaff_R14 + 0x38);
  }
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 0xf;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,bStack0000000000000010) & 0xfffffffffffffffe);
  }
  return;
}


