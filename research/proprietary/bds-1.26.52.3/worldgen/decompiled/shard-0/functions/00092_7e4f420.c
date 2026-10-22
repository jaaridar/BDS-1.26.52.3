/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7e4f420
 * Label: callee-of:0x7e0b3b0
 * Body:  [[07e4f420, 07e4f45f]]
 * Ghidra: FUN_07e4f420
 */


void FUN_07e4f420(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  int in_ECX;
  long unaff_RBX;
  long unaff_R14;
  char in_CF;
  
  cVar1 = in_AL + (char)unaff_R14 + in_CF;
  if (CONCAT71(in_register_00000001,cVar1) != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + CONCAT71(in_register_00000001,cVar1) * 8))
              (&stack0x00000010,unaff_RBX + -0x18);
    in_ECX = *(int *)(unaff_R14 + 0x10);
  }
  *(undefined4 *)(unaff_RBX + -0x10) = 0xffffffff;
  *(int *)(unaff_R14 + 0x10) = in_ECX + -1;
  return;
}


