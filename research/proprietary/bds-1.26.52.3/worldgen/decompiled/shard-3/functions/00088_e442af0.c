/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe442af0
 * Label: callee-of:0xe4118a0
 * Body:  [[0e442af0, 0e442b24]]
 * Ghidra: FUN_0e442af0
 */


void FUN_0e442af0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  char in_CF;
  undefined1 *in_stack_00000010;
  
  *(char *)(param_3 + -1) = *(char *)(param_3 + -1) + (char)((ulong)unaff_RBX >> 8) + in_CF;
  if (param_4 != param_3) {
    in_stack_00000010 = &stack0x00000018;
    (**(code **)(&UNK_0f4bab38 + param_4 * 8))(&stack0x00000010);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


