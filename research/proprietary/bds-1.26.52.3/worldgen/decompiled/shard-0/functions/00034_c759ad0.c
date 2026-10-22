/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759ad0
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot1
 * Body:  [[0c759ad0, 0c759adb]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot1
 */


/* WARNING: Removing unreachable block (ram,0x0c75a2d2) */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot1(void)

{
  char cVar1;
  char *in_RAX;
  long unaff_R15;
  undefined5 uStack0000000000000011;
  undefined2 uStack0000000000000016;
  undefined5 uStack0000000000000019;
  undefined1 uStack000000000000001e;
  ulong in_stack_00000028;
  undefined8 in_stack_00000038;
  char *pcVar2;
  
  cVar1 = (char)in_RAX + *in_RAX;
  pcVar2 = (char *)CONCAT71((int7)((ulong)in_RAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *(undefined4 *)(unaff_R15 + 0x60) = 3;
  if ((in_stack_00000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,in_stack_00000028 & 0xfffffffffffffffe);
  }
  uStack0000000000000011 = 0x6767697274;
  uStack0000000000000016 = 0x7265;
  uStack0000000000000019 = 0x7469625f64;
  uStack000000000000001e = 0;
  func_0x0d6bbef0();
  return;
}


