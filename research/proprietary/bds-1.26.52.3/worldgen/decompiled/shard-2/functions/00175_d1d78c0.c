/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d78c0
 * Label: br::worldgen::processors::BlockRules::TagMatch::vslot0
 * Body:  [[0d1d78c0, 0d1d78d1] [0d1d78d3, 0d1d7a1a]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__TagMatch__vslot0
 */


/* WARNING: Instruction at (ram,0x0d1d78d3) overlaps instruction at (ram,0x0d1d78d2)
    */
/* WARNING: Removing unreachable block (ram,0x0d1d79a0) */
/* WARNING: Type propagation algorithm not settling */

void wg_br__worldgen__processors__BlockRules__TagMatch__vslot0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long in_RAX;
  ulong *puVar6;
  long unaff_RBX;
  long *unaff_R14;
  bool in_CF;
  bool in_ZF;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  ulong in_stack_00000050;
  undefined8 in_stack_00000060;
  byte bStack0000000000000070;
  undefined7 uStack0000000000000071;
  undefined8 in_stack_00000080;
  long *in_stack_00000090;
  
  if (in_CF) {
    if (!in_ZF) {
      param_3 = *(undefined8 *)(unaff_RBX + 8);
    }
  }
  else {
    param_4 = (ulong)*(uint *)(in_RAX + 0x10);
  }
  puVar6 = (ulong *)func_0x0412f8c0(&stack0x00000070,param_2,param_3,param_4);
  uVar3 = puVar6[2];
  uVar4 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  (**(code **)(*unaff_R14 + 0x58))(&stack0x00000088);
  plVar5 = in_stack_00000090;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000090 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000090 + 0x10))(in_stack_00000090);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((uVar4 & 1) != 0) {
    func_0x0412a280(uVar3,uVar4 & 0xfffffffffffffffe);
  }
  if ((bStack0000000000000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,
                    CONCAT71(uStack0000000000000071,bStack0000000000000070) & 0xfffffffffffffffe);
  }
  if ((in_stack_00000050 & 1) != 0) {
    func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  return;
}


