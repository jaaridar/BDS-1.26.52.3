/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ad330
 * Label: string:const std::vector<Holder<const StructureProcessor>> &br::wor
 * Body:  [[0d2ad330, 0d2ad353] [0d2ad411, 0d2ad45b]]
 * Ghidra: FUN_0d2ad330
 */


undefined8 * FUN_0d2ad330(void)

{
  char in_CL;
  undefined8 unaff_RBX;
  long unaff_R13;
  char in_CF;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  
  *(char *)(unaff_R13 + -0x7b) = *(char *)(unaff_R13 + -0x7b) + in_CL + in_CF;
  func_0x0412a280();
  *in_stack_00000040 = in_stack_00000038;
  in_stack_00000040[1] = &UNK_0d2ad7d0;
  in_stack_00000040[4] = &UNK_0d2ad850;
  *(undefined4 *)(in_stack_00000040 + 6) = 0xe11b92ac;
  in_stack_00000040[5] = 0;
  *(undefined1 *)((long)in_stack_00000040 + 0x34) = 2;
  in_stack_00000040[2] = unaff_RBX;
  return in_stack_00000040;
}


