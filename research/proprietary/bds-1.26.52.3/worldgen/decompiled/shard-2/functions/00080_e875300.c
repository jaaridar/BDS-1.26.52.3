/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe875300
 * Label: callee-of:0xe706340
 * Body:  [[0e874ddc, 0e874ded] [0e875300, 0e87532e]]
 * Ghidra: FUN_0e875300
 */


undefined1 FUN_0e875300(undefined8 param_1)

{
  byte in_AL;
  undefined7 in_register_00000001;
  long unaff_R14;
  undefined8 in_XMM0_Qb;
  undefined8 in_stack_00000038;
  
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) + (in_AL & 0x30);
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) + (in_AL & 0x30);
  *(undefined8 *)(unaff_R14 + 0x28) = param_1;
  *(undefined8 *)(unaff_R14 + 0x30) = in_XMM0_Qb;
  *(undefined8 *)(unaff_R14 + 0x38) = in_stack_00000038;
  if ((CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30) != 0) {
    (*(code *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff30))();
  }
  return 1;
}


