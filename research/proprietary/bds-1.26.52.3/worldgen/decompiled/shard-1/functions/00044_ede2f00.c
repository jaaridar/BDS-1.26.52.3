/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede2f00
 * Label: callee-of:0x4de9260
 * Body:  [[0ede2f00, 0ede2f32]]
 * Ghidra: FUN_0ede2f00
 */


void FUN_0ede2f00(undefined8 param_1)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char in_CL;
  long unaff_RBX;
  undefined8 in_XMM0_Qb;
  undefined8 in_stack_00000038;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x39);
  *pcVar1 = *pcVar1 - in_CL;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) + (in_AL & 0x30);
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) + (in_AL & 0x30);
  *(undefined8 *)(unaff_RBX + 0x28) = param_1;
  *(undefined8 *)(unaff_RBX + 0x30) = in_XMM0_Qb;
  *(undefined8 *)(unaff_RBX + 0x38) = in_stack_00000038;
  if ((CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) != 0) {
    (*(code *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30))();
  }
  return;
}


