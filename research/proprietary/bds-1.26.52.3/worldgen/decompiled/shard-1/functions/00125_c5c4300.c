/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c4300
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_20BlockRandomTickEven
 * Body:  [[0c5c4300, 0c5c4326] [0c5c4370, 0c5c438c] [0c5c43d5, 0c5c43e6]]
 * Ghidra: FUN_0c5c4300
 */


void FUN_0c5c4300(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  
  func_0x05625350();
  uVar2 = func_0x0eee2d70();
  uVar2 = func_0x04882e20(uVar2);
  func_0x056253a0(&stack0x00000078);
  func_0x05625350(&stack0x00000078);
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


