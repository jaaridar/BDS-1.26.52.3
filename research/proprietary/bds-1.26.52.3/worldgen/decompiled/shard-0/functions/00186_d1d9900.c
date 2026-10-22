/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9900
 * Label: br::worldgen::processors::PosRules::AlwaysTrue::vslot2
 * Body:  [[0d1d9900, 0d1d9980]]
 * Ghidra: wg_br__worldgen__processors__PosRules__AlwaysTrue__vslot2
 */


void wg_br__worldgen__processors__PosRules__AlwaysTrue__vslot2(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong in_RAX;
  long *unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  long *in_stack_00000030;
  
  (**(code **)((in_RAX & 0xffffffffffffff4c) + 8))((ulong)&stack0x00000000 & 0xffffffff);
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  func_0x0d21ed30(&stack0x00000028,*(undefined8 *)(unaff_R15 + 8),unaff_R14 + 0x10);
  plVar3 = in_stack_00000030;
  if (in_stack_00000030 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000030 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030);
      func_0x0412c2d0(plVar3);
    }
  }
  (**(code **)(*unaff_RBX + 8))();
  return;
}


