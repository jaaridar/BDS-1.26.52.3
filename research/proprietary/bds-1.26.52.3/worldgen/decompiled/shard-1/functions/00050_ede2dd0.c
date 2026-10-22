/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede2dd0
 * Label: callee-of:0x517ab30
 * Body:  [[0ede2dc0, 0ede2e7f] [0ede2ea8, 0ede2efb]]
 * Ghidra: FUN_0ede2dd0
 */


void FUN_0ede2dd0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long in_RAX;
  undefined8 *unaff_RBX;
  int *unaff_R13;
  long unaff_R14;
  undefined8 unaff_retaddr;
  code *in_stack_00000010;
  code *in_stack_00000018;
  undefined4 uStack0000000000000020;
  char cStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  int *in_stack_00000040;
  
  while( true ) {
    pcVar1 = *(code **)(in_RAX + 0x40);
    (**(code **)(unaff_R13 + 4))();
    (*pcVar1)();
    if (*unaff_R13 == 0x2e32c148) {
      *unaff_RBX = 0;
      unaff_RBX[2] = in_stack_00000010;
      unaff_RBX[3] = in_stack_00000018;
      *(undefined4 *)(unaff_RBX + 4) = uStack0000000000000020;
      *(char *)((long)unaff_RBX + 0x24) = cStack0000000000000024;
      if (cStack0000000000000024 != '\0') {
        if (cStack0000000000000024 == '\x02') {
          (*in_stack_00000010)(5,&stack0x00000000);
        }
        else {
          *unaff_RBX = unaff_retaddr;
        }
      }
      *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000028;
      *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack000000000000002c;
      *(undefined4 *)(unaff_RBX + 6) = uStack0000000000000030;
      *(undefined4 *)((long)unaff_RBX + 0x34) = uStack0000000000000034;
      unaff_RBX[7] = in_stack_00000038;
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
      return;
    }
    func_0x0ede2ce0();
    lVar2 = unaff_RBX[7];
    if ((lVar2 == 0) && ((code *)unaff_RBX[3] != (code *)0x0)) {
      (*(code *)unaff_RBX[3])();
    }
    if (in_stack_00000018 != (code *)0x0) {
      (*in_stack_00000018)();
    }
    if (lVar2 != 0) break;
    if (unaff_R13 + 6 == in_stack_00000040) {
      uVar3 = *(undefined8 *)(unaff_R14 + 0x28);
      unaff_RBX[2] = &UNK_0488e0b0;
      *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
      unaff_RBX[3] = 0;
      *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
      *unaff_RBX = 0;
      unaff_RBX[5] = uVar3;
      unaff_RBX[6] = 0;
      unaff_RBX[7] = 0;
      return;
    }
    in_RAX = (**(code **)(unaff_R13 + 8))(*(undefined8 *)(unaff_R14 + 0x28));
    unaff_R13 = unaff_R13 + 6;
  }
  return;
}


