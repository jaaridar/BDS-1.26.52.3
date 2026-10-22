/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede3000
 * Label: callee-of:0x4de9260
 * Body:  [[0ede3000, 0ede3033] [0ede3035, 0ede3138]]
 * Ghidra: FUN_0ede3000
 */


/* WARNING: Instruction at (ram,0x0ede3035) overlaps instruction at (ram,0x0ede3034)
    */

undefined * FUN_0ede3000(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long in_RAX;
  undefined8 *puVar4;
  char *in_RCX;
  undefined8 *unaff_RBX;
  bool bVar5;
  undefined8 in_stack_00000008;
  code *in_stack_00000018;
  code *in_stack_00000020;
  undefined4 in_stack_00000028;
  char cStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  
  bVar5 = *(byte *)(in_RAX + -0x75) < (byte)in_RCX;
  if (bVar5) {
    puVar4 = (undefined8 *)func_0x0488e200();
    if (*(char *)(puVar4 + 3) == '\0') {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 1;
    }
  }
  else {
    *in_RCX = (*in_RCX - (char)in_RAX) - bVar5;
  }
  _uStack0000000000000030 = unaff_RBX[5];
  in_stack_00000018 = (code *)&UNK_0488e0b0;
  in_stack_00000028 = 0x48b5725f;
  in_stack_00000020 = (code *)0x0;
  cStack000000000000002c = '\0';
  in_stack_00000008 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000040 = 0;
  if ((code *)unaff_RBX[7] != (code *)0x0) {
    (*(code *)unaff_RBX[7])(0x100);
  }
  if (unaff_RBX != &stack0x00000008) {
    if ((code *)unaff_RBX[3] != (code *)0x0) {
      (*(code *)unaff_RBX[3])();
    }
    uVar1 = in_stack_00000008;
    if (cStack000000000000002c != '\0') {
      if (cStack000000000000002c == '\x02') {
        (*in_stack_00000018)(5,&stack0x00000008);
      }
      else {
        in_stack_00000008 = 0;
        *unaff_RBX = uVar1;
      }
    }
    unaff_RBX[2] = in_stack_00000018;
    unaff_RBX[3] = in_stack_00000020;
    *(undefined4 *)(unaff_RBX + 4) = in_stack_00000028;
    *(char *)((long)unaff_RBX + 0x24) = cStack000000000000002c;
  }
  uVar1 = in_stack_00000040;
  uVar2 = uStack0000000000000038;
  uVar3 = uStack000000000000003c;
  _uStack0000000000000038 = 0;
  *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000030;
  *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack0000000000000034;
  *(undefined4 *)(unaff_RBX + 6) = uVar2;
  *(undefined4 *)((long)unaff_RBX + 0x34) = uVar3;
  in_stack_00000040 = 0;
  unaff_RBX[7] = uVar1;
  if (in_stack_00000020 != (code *)0x0) {
    (*in_stack_00000020)(&stack0x00000008);
  }
  return &UNK_0f4e5fe8;
}


