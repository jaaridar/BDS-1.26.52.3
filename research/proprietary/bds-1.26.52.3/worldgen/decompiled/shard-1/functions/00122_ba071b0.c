/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba071b0
 * Label: string:ZN6Editor7Network22PayloadServiceProvider16_registerPayloadI
 * Body:  [[0ba071b0, 0ba071b5] [0ba071c1, 0ba071e2]]
 * Ghidra: FUN_0ba071b0
 */


void FUN_0ba071b0(void)

{
  code *pcVar1;
  ulong in_RAX;
  undefined8 uVar2;
  code *in_stack_00000070;
  
  (*(code *)(in_RAX & 0xffffffffffffff18))();
  if (in_stack_00000070 != (code *)0x0) {
    (*in_stack_00000070)(&stack0x00000058);
  }
  uVar2 = func_0x0eee2d70();
  func_0x04882e20(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


