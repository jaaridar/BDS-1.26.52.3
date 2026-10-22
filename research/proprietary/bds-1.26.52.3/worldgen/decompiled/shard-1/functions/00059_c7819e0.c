/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7819e0
 * Label: string:ZNK22VanillaSurfaceBuilders20CappedSurfaceBuilder14buildSurf
 * Body:  [[0c7819e0, 0c7819ed] [0c781adb, 0c781b01]]
 * Ghidra: FUN_0c7819e0
 */


void FUN_0c7819e0(void)

{
  int *in_RAX;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  func_0x0d6bbef0();
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


