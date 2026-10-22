/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca750
 * Label: XoroshiroRandom::vslot3
 * Body:  [[048ca750, 048ca759] [048ca9eb, 048caa1a] [048caacb, 048caafb]]
 * Ghidra: wg_XoroshiroRandom__vslot3
 */


void wg_XoroshiroRandom__vslot3(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_RBP;
  byte in_stack_00000480;
  undefined7 in_stack_00000481;
  undefined8 in_stack_00000490;
  
  *(int *)(unaff_RBP + 0x4c) = *(int *)(unaff_RBP + 0x4c) + param_2;
  func_0x048c3ac0(&stack0x000009c0);
  if ((in_stack_00000480 & 1) != 0) {
    func_0x0412a280(in_stack_00000490,
                    CONCAT71(in_stack_00000481,in_stack_00000480) & 0xfffffffffffffffe);
  }
  func_0x048dc5a0(&stack0x000001a8);
  uVar2 = func_0x0eee2d70();
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


