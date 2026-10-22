/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759ae0
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot0
 * Body:  [[0c759ae0, 0c759b34] [0c75a2cb, 0c75a2f0]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot0
 */


/* WARNING: Removing unreachable block (ram,0x0c75a2d2) */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot0
               (undefined8 param_1,int param_2,long param_3)

{
  int *piVar1;
  long unaff_RBX;
  undefined5 uStack0000000000000011;
  undefined2 uStack0000000000000016;
  undefined5 uStack0000000000000019;
  undefined1 uStack000000000000001e;
  uint in_stack_00000028;
  undefined8 in_stack_00000038;
  
  piVar1 = (int *)(unaff_RBX + 0x48 + param_3);
  *piVar1 = *piVar1 + param_2;
  func_0x0412a280(in_stack_00000038,in_stack_00000028 & 0xfffffffe);
  uStack0000000000000011 = 0x6767697274;
  uStack0000000000000016 = 0x7265;
  uStack0000000000000019 = 0x7469625f64;
  uStack000000000000001e = 0;
  func_0x0d6bbef0();
  return;
}


