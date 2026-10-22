/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a4dc0
 * Label: FlatWorldGenerator::vslot11
 * Body:  [[0d2a4dc0, 0d2a4fbb] [0d2a4fdf, 0d2a4ff0]]
 * Ghidra: wg_FlatWorldGenerator__vslot11
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_FlatWorldGenerator__vslot11(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *unaff_RBP;
  ulong unaff_R13;
  long unaff_R15;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined2 in_stack_00000060;
  undefined2 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000c0;
  
  lVar1 = unaff_R15 + 9;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
  if (lVar1 != 0 && plVar4 == (long *)0x0) {
    func_0x0eec74c0(lVar1,8);
  }
  *plVar4 = unaff_R15;
  func_0x0eee2f00(plVar4 + 1);
  uVar3 = in_stack_00000028;
  puVar2 = in_stack_00000020;
  *(undefined1 *)((long)plVar4 + unaff_R15 + 8) = 0;
  in_stack_00000018 = (ulong)(plVar4 + 1) & 0xff00ffffffffffff | unaff_R13;
  in_stack_00000030 = *unaff_RBP;
  in_stack_00000038 = unaff_RBP[1];
  in_stack_00000040 = unaff_RBP[2];
  in_stack_00000048 = *(undefined4 *)(unaff_RBP + 3);
  uStack000000000000004c = *(undefined4 *)((long)unaff_RBP + 0x1c);
  unaff_RBP[1] = 0;
  unaff_RBP[2] = 0;
  in_stack_00000050 = unaff_RBP[4];
  in_stack_00000058 = unaff_RBP[5];
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0;
  in_stack_00000060 = *(undefined2 *)(unaff_RBP + 6);
  func_0x0d2a5070(in_stack_00000028,&stack0x00000008,&stack0x00000030,in_stack_00000078,
                  in_stack_00000080,*in_stack_00000070);
  *puVar2 = uVar3;
  if ((in_stack_00000058 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000058 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000058 = 0;
  if ((in_stack_00000050 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000050 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000050 = 0;
  if ((in_stack_00000040 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000040 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000040 = 0;
  if ((in_stack_00000038 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000038 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000038 = 0;
  if ((in_stack_00000018 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000018 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000018 = 0;
  if ((in_stack_00000010 & unaff_R13) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000010 & 0xff00ffffffffffff) - 8);
  }
  return puVar2;
}


