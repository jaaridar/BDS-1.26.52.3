/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f38d0
 * Label: string:minecraft:ore_feature
 * Body:  [[0d2f38d0, 0d2f38d4] [0d2f38fe, 0d2f392a] [0d2f3938, 0d2f398f]]
 * Ghidra: FUN_0d2f38d0
 */


void FUN_0d2f38d0(undefined1 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_RBX;
  long in_stack_00000010;
  
  uVar1 = in(param_3);
  *param_1 = uVar1;
  func_0x0412a280();
  func_0x0d2f3990(&stack0x00000150);
  uVar3 = func_0x0eee2d70();
  func_0x0624d960(&stack0x000000d0);
  func_0x0412a280(in_stack_00000010,unaff_RBX - in_stack_00000010);
  func_0x0624d960(&stack0x00000240);
  func_0x0624dcb0(&stack0x000001e8);
  func_0x0624dcf0(&stack0x00000198);
  func_0x0d2f3990(&stack0x00000150);
  func_0x0eee2d70(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


