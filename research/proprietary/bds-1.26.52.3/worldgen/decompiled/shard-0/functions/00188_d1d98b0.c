/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d98b0
 * Label: br::worldgen::processors::PosRules::Test::vslot3
 * Body:  [[0d1d98b0, 0d1d98fc]]
 * Ghidra: wg_br__worldgen__processors__PosRules__Test__vslot3
 */


void wg_br__worldgen__processors__PosRules__Test__vslot3(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_RBX;
  long unaff_RBP;
  long *unaff_R12;
  undefined8 *unaff_R13;
  long unaff_R14;
  long unaff_R15;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  long *in_stack_00000030;
  
  *(undefined **)(unaff_RBP + 0x38) = &UNK_0f47e0b0;
  *(long *)(unaff_RBP + 0x40) = unaff_R12[1];
  lVar2 = unaff_R12[2];
  *(long *)(unaff_RBP + 0x48) = lVar2;
  lVar3 = unaff_R12[3];
  *(long *)(unaff_RBP + 0x50) = lVar3;
  if (lVar3 == 0) {
    *(long *)(unaff_RBP + 0x40) = unaff_RBP + 0x48;
  }
  else {
    *(long *)(lVar2 + 0x10) = unaff_RBP + 0x48;
    unaff_R12[1] = (long)unaff_R13;
    *unaff_R13 = 0;
    unaff_R13[1] = 0;
  }
  *(undefined4 *)(unaff_RBP + 0x60) = 10;
  (**(code **)(*unaff_R12 + 8))();
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  func_0x0d21ed30(&stack0x00000028,*(undefined8 *)(unaff_R15 + 8),unaff_R14 + 0x10);
  plVar4 = in_stack_00000030;
  if (in_stack_00000030 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000030 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030);
      func_0x0412c2d0(plVar4);
    }
  }
  (**(code **)(*unaff_RBX + 8))();
  return;
}


