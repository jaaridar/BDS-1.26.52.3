/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759b50
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot1
 * Body:  [[0c759b50, 0c759c0e] [0c75a2cb, 0c75a2f0]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot1
 */


void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot1(void)

{
  long lVar1;
  undefined8 unaff_R14;
  byte bStack0000000000000010;
  undefined5 uStack0000000000000011;
  undefined2 uStack0000000000000016;
  undefined1 in_stack_00000018;
  undefined5 uStack0000000000000019;
  undefined1 uStack000000000000001e;
  undefined8 in_stack_00000020;
  byte bStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined8 in_stack_00000038;
  
  bStack0000000000000010 = (byte)unaff_R14;
  uStack0000000000000011 = (undefined5)((ulong)unaff_R14 >> 8);
  uStack0000000000000016 = (undefined2)((ulong)unaff_R14 >> 0x30);
  lVar1 = func_0x0d6c9580();
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000010,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 7;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,
                    CONCAT71(uStack0000000000000029,bStack0000000000000028) & 0xfffffffffffffffe);
  }
  bStack0000000000000010 = 0x1a;
  uStack0000000000000011 = 0x6767697274;
  uStack0000000000000016 = 0x7265;
  in_stack_00000018 = 0x65;
  uStack0000000000000019 = 0x7469625f64;
  uStack000000000000001e = 0;
  func_0x0d6bbef0();
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT26(uStack0000000000000016,
                             CONCAT51(uStack0000000000000011,bStack0000000000000010)) &
                    0xfffffffffffffffe);
  }
  return;
}


