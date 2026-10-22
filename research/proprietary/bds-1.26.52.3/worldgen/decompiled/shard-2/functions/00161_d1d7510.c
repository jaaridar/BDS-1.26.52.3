/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d7510
 * Label: br::worldgen::processors::BlockRules::RandomBlockMatch::vslot3
 * Body:  [[0d1d7510, 0d1d762a]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot3
 */


/* WARNING: Removing unreachable block (ram,0x0d1d75f6) */

void wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot3(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  long *unaff_RBX;
  ulong unaff_R12;
  long unaff_R14;
  long unaff_R15;
  ulong uStack0000000000000018;
  undefined8 in_stack_00000028;
  long *in_stack_00000058;
  
  uStack0000000000000018 = unaff_R12 | 1;
  func_0x0eee2f00();
  *(undefined1 *)(unaff_R15 + unaff_R14) = 0;
  puVar6 = (ulong *)func_0x0412f0e0(&stack0x00000018,0,&UNK_01d96991,0x12);
  uVar3 = puVar6[2];
  uVar4 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  (**(code **)(*unaff_RBX + 0x58))(&stack0x00000050);
  plVar5 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000058 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((uVar4 & 1) != 0) {
    func_0x0412a280(uVar3,uVar4 & 0xfffffffffffffffe);
  }
  if ((uStack0000000000000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,uStack0000000000000018 & 0xfffffffffffffffe);
  }
  return;
}


