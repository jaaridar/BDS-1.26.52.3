/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d6bb0
 * Label: br::worldgen::processors::BlockIgnore::vslot0
 * Body:  [[0d1d6bb0, 0d1d6bb1]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot0
 */


void wg_br__worldgen__processors__BlockIgnore__vslot0(void)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long *in_stack_00000068;
  
  func_0x0d20be50(&stack0x000005d0);
  plVar1 = (long *)*in_stack_00000068;
  *in_stack_00000068 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar3 = func_0x0eee2d70();
  func_0x048c3ac0(&stack0x000001c8);
  *unaff_RBX = 0;
  func_0x0eee2d70(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


