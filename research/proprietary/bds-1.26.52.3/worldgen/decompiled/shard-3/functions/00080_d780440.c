/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd780440
 * Label: callee-of:0xe1d0880
 * Body:  [[0d780440, 0d7804c9]]
 * Ghidra: FUN_0d780440
 */


void FUN_0d780440(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  uint in_EAX;
  undefined8 uVar3;
  long unaff_RBX;
  undefined1 *puVar4;
  ulong in_stack_000000b8;
  undefined1 *in_stack_000000c0;
  byte in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined1 *in_stack_000000f0;
  
  puVar4 = &stack0x000000b1;
  uVar2 = (ulong)(in_EAX >> 1);
  if ((in_EAX & 1) != 0) {
    puVar4 = in_stack_000000c0;
    uVar2 = in_stack_000000b8;
  }
  func_0x0412f5e0(param_1,puVar4,uVar2);
  puVar4 = &stack0x000000e1;
  uVar2 = (ulong)(in_stack_000000e0 >> 1);
  if ((in_stack_000000e0 & 1) != 0) {
    puVar4 = in_stack_000000f0;
    uVar2 = in_stack_000000e8;
  }
  func_0x0412f5e0(*(long *)(unaff_RBX + 0x20) + 0x78,puVar4,uVar2);
  lVar1 = *(long *)(unaff_RBX + 0x20);
  uVar3 = func_0x0eee3790(0);
  *(undefined8 *)(lVar1 + 0xa8) = uVar3;
  func_0x04948fd0(&stack0x00000080);
  return;
}


