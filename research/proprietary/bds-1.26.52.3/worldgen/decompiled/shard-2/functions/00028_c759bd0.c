/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759bd0
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot1
 * Body:  [[0c759bd0, 0c759c0e] [0c75a2cb, 0c75a2f0]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot1
 */


void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot1
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  char unaff_BL;
  char in_CF;
  byte in_stack_00000010;
  undefined5 uStack0000000000000011;
  undefined2 uStack0000000000000016;
  undefined1 uStack0000000000000018;
  undefined5 uStack0000000000000019;
  undefined1 uStack000000000000001e;
  undefined8 in_stack_00000020;
  
  *param_3 = *param_3 + unaff_BL + in_CF;
  uStack0000000000000011 = 0x6767697274;
  uStack0000000000000016 = 0x7265;
  uStack0000000000000018 = 0x65;
  uStack0000000000000019 = 0x7469625f64;
  uStack000000000000001e = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT26(uStack0000000000000016,
                             CONCAT51(uStack0000000000000011,in_stack_00000010)) &
                    0xfffffffffffffffe);
  }
  return;
}


