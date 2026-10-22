/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d6be0
 * Label: br::worldgen::processors::BlockIgnore::vslot2
 * Body:  [[0d1d6be0, 0d1d6c5b]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot2
 */


void wg_br__worldgen__processors__BlockIgnore__vslot2(void)

{
  long *plVar1;
  code *pcVar2;
  undefined4 in_EAX;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long *in_stack_00000068;
  ulong in_stack_000000f0;
  undefined8 in_stack_00000100;
  
  uVar3 = func_0x04882e20(in_EAX);
  if ((in_stack_000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,in_stack_000000f0 & 0xfffffffffffffffe);
  }
  func_0x0d20be50(&stack0x000005d0);
  plVar1 = (long *)*in_stack_00000068;
  *in_stack_00000068 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar3 = func_0x0eee2d70(uVar3);
  func_0x048c3ac0(&stack0x000001c8);
  *unaff_RBX = 0;
  func_0x0eee2d70(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


