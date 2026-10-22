/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa3bf3c0
 * Label: string:JigsawPlaceOptions
 * Body:  [[0a3bf3c0, 0a3bf41a]]
 * Ghidra: FUN_0a3bf3c0
 */


void FUN_0a3bf3c0(void)

{
  uint uVar1;
  char *in_RAX;
  uint in_ECX;
  undefined2 *unaff_RBX;
  char *in_R8;
  code *in_stack_00000020;
  code *in_stack_00000060;
  
  uVar1 = *(uint *)(in_RAX + -0x39);
  *in_R8 = *in_R8 - (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RBX = *(undefined2 *)((ulong)in_RAX & 0xffffffffffffff02);
  *(ulong *)(unaff_RBX + 0x14) = (ulong)(in_ECX & uVar1);
  *(undefined8 *)(unaff_RBX + 0x18) = 0;
  *(undefined **)(unaff_RBX + 0x1c) = &UNK_05de4790;
  if (in_stack_00000020 != (code *)0x0) {
    (*in_stack_00000020)(&stack0x00000008);
  }
  if (in_stack_00000060 != (code *)0x0) {
    (*in_stack_00000060)(&stack0x00000048);
  }
  return;
}


