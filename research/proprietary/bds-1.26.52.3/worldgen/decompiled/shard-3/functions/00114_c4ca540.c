/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4ca540
 * Label: string:is_temperature_value
 * Body:  [[0c4ca540, 0c4ca5a5] [0c4ca6e3, 0c4ca750]]
 * Ghidra: FUN_0c4ca540
 */


void FUN_0c4ca540(void)

{
  undefined8 *unaff_RBX;
  undefined8 *unaff_R15;
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
  
  func_0x0c4caaf0();
  func_0x06fd6bf0();
  if (unaff_RBX != unaff_R15) {
    if ((code *)unaff_RBX[3] != (code *)0x0) {
      (*(code *)unaff_RBX[3])();
    }
    if (cStack0000000000000024 != '\0') {
      if (cStack0000000000000024 == '\x02') {
        (*in_stack_00000010)(5,&stack0x00000000);
      }
      else {
        *unaff_RBX = unaff_retaddr;
      }
    }
    unaff_RBX[2] = in_stack_00000010;
    unaff_RBX[3] = in_stack_00000018;
    *(undefined4 *)(unaff_RBX + 4) = uStack0000000000000020;
    *(char *)((long)unaff_RBX + 0x24) = cStack0000000000000024;
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


