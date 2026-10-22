/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede2f40
 * Label: callee-of:0x6142da0
 * Body:  [[0ede2f40, 0ede2f75]]
 * Ghidra: FUN_0ede2f40
 */


void FUN_0ede2f40(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long in_RCX;
  code *in_stack_00000018;
  
  *(char *)(in_RCX + -0x3876b70b) = *(char *)(in_RCX + -0x3876b70b) + '\x01';
  uVar2 = func_0x04882e20();
  uVar2 = func_0x04882e20(uVar2);
  if (in_stack_00000018 != (code *)0x0) {
    (*in_stack_00000018)(&stack0x00000000);
  }
  uVar2 = func_0x0eee2d70(uVar2);
  func_0x04882e20(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


