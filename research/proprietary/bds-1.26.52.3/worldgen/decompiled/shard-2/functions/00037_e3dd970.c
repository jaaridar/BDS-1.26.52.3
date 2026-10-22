/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3dd970
 * Label: caller-of-seed
 * Body:  [[0e3dd5ff, 0e3dd6f7] [0e3dd970, 0e3dd97d]]
 * Ghidra: FUN_0e3dd970
 */


/* WARNING: Removing unreachable block (ram,0x0e3dd6b0) */
/* WARNING: Removing unreachable block (ram,0x0e3dd6c2) */

void FUN_0e3dd970(undefined8 param_1)

{
  char *in_RAX;
  undefined8 *unaff_RBX;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  long *in_stack_00000088;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  func_0x0eec74c0(param_1,0);
  *unaff_RBX = &UNK_0f4b8458;
  if (in_stack_00000088 != (long *)0x0) {
    (**(code **)(*in_stack_00000088 + 8))();
  }
  in_stack_00000008 = in_stack_00000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0e2fd230;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e48d110(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  return;
}


