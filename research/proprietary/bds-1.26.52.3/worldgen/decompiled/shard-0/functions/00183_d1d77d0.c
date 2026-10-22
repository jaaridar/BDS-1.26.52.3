/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d77d0
 * Label: br::worldgen::processors::BlockRules::TagMatch::vslot2
 * Body:  [[0d1d77d0, 0d1d77e2] [0d1d782f, 0d1d78ef] [0d1d78f1, 0d1d7a1a]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__TagMatch__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d79a0) */
/* WARNING: Type propagation algorithm not settling */

void wg_br__worldgen__processors__BlockRules__TagMatch__vslot2(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  byte in_AL;
  ulong *puVar4;
  ulong uVar5;
  byte *unaff_RBX;
  byte *pbVar6;
  long *unaff_R14;
  long unaff_R15;
  bool bVar7;
  byte bStack0000000000000018;
  undefined7 uStack0000000000000019;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long *in_stack_00000090;
  
  bStack0000000000000018 = in_AL;
  if (unaff_R15 == 0) {
    unaff_R15 = 0;
  }
  else {
    func_0x0eee2f00((long)&stack0x00000018 + 1);
  }
  *(undefined1 *)((long)&stack0x00000018 + 1 + unaff_R15) = 0;
  puVar4 = (ulong *)func_0x0412f0e0(&stack0x00000018,0,&UNK_01d96991,0x12);
  in_stack_00000060 = puVar4[2];
  in_stack_00000050 = *puVar4;
  in_stack_00000058 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (ulong *)func_0x0412f8c0(&stack0x00000050,&UNK_01358b46,1);
  in_stack_00000080 = puVar4[2];
  in_stack_00000070 = *puVar4;
  in_stack_00000078 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  bVar7 = (*unaff_RBX & 1) != 0;
  pbVar6 = unaff_RBX + 1;
  if (bVar7) {
    pbVar6 = *(byte **)(unaff_RBX + 0x10);
  }
  uVar5 = (ulong)(*unaff_RBX >> 1);
  if (bVar7) {
    uVar5 = *(ulong *)(unaff_RBX + 8);
  }
  puVar4 = (ulong *)func_0x0412f8c0(&stack0x00000070,pbVar6,uVar5);
  in_stack_00000040 = puVar4[2];
  in_stack_00000030 = *puVar4;
  in_stack_00000038 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  (**(code **)(*unaff_R14 + 0x58))(&stack0x00000088);
  plVar3 = in_stack_00000090;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000090 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000090 + 0x10))(in_stack_00000090);
      func_0x0412c2d0(plVar3);
    }
  }
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,in_stack_00000070 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000050 & 1) != 0) {
    func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
  }
  if ((bStack0000000000000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,
                    CONCAT71(uStack0000000000000019,bStack0000000000000018) & 0xfffffffffffffffe);
  }
  return;
}


