/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614d960
 * Label: br::worldgen::WorldGenRandom::vslot0
 * Body:  [[0614d960, 0614d9bd] [0614da06, 0614da65]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot0
 */


void wg_br__worldgen__WorldGenRandom__vslot0(void)

{
  char *in_RAX;
  undefined8 in_RCX;
  long unaff_RBX;
  undefined8 unaff_retaddr;
  long in_stack_00000008;
  long in_stack_00000010;
  
  in_RAX[0x2e0bb] = in_RAX[0x2e0bb] + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (*in_RAX == '\0') {
    *(undefined8 *)(unaff_RBX + 0x2c8) = unaff_retaddr;
    *(long *)(unaff_RBX + 0x2d0) = in_stack_00000008;
    *(undefined8 *)(unaff_RBX + 0x2d8) = in_RCX;
  }
  else {
    func_0x049060a0((long *)(unaff_RBX + 0x2c8),*(undefined8 *)(unaff_RBX + 0x2d0));
    *(undefined8 *)(unaff_RBX + 0x2c8) = unaff_retaddr;
    *(long *)(unaff_RBX + 0x2d0) = in_stack_00000008;
    *(long *)(unaff_RBX + 0x2d8) = in_stack_00000010;
    if (in_stack_00000010 == 0) {
      *(long *)(unaff_RBX + 0x2c8) = unaff_RBX + 0x2d0;
      goto LAB_0614da40;
    }
  }
  *(long *)(in_stack_00000008 + 0x10) = unaff_RBX + 0x2d0;
  in_stack_00000008 = 0;
LAB_0614da40:
  *(undefined1 *)(unaff_RBX + 0x2e0) = 1;
  func_0x049060a0(&stack0x00000000,in_stack_00000008);
  return;
}


