/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9ba0
 * Label: br::worldgen::processors::PosRules::AxisAlignedLinear::vslot1
 * Body:  [[0d1d9b60, 0d1d9b95] [0d1d9ba0, 0d1d9baf] [0d1d9bb1, 0d1d9bff] [0d1d9c01, 0d1d9c0f] [0d1d9c27, 0d1d9c54]]
 * Ghidra: wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot1
 */


undefined8 wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot1(void)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  ulong in_RAX;
  ulong uVar4;
  long *unaff_RBX;
  ulong unaff_RBP;
  long lVar5;
  long unaff_R12;
  long *unaff_R13;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
code_r0x0d1d9ba0:
  uVar4 = in_RAX >> 1 & 0x7fffffff;
  plVar2 = unaff_RBX;
  do {
    if (uVar4 == unaff_RBP) {
      if ((in_RAX & 1) == 0) {
        lVar5 = (long)plVar2 + -0xf;
      }
      else {
        lVar5 = *plVar2;
      }
      iVar3 = func_0x0eee3000(lVar5);
      if (iVar3 == 0) {
        bVar1 = true;
        goto LAB_0d1d9bb9;
      }
    }
    unaff_RBX = plVar2 + 4;
    if (plVar2 + 2 == unaff_R13) {
      bVar1 = false;
LAB_0d1d9bb9:
      func_0x0412d6b0(in_stack_00000020);
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar1) {
        in_stack_00000038 = &UNK_01254d89;
        in_stack_00000040 = 0;
        func_0x041b3a30(in_stack_00000028,3,&stack0x00000000,&stack0x00000038);
      }
      else {
        func_0x0412d680(unaff_R12 + 0xd0);
        (**(code **)(**(long **)(unaff_R12 + 0x10) + 0x10))(in_stack_00000028);
        func_0x0412d6b0(unaff_R12 + 0xd0);
      }
      return in_stack_00000028;
    }
    in_RAX = (ulong)*(byte *)(plVar2 + 2);
    if ((*(byte *)(plVar2 + 2) & 1) == 0) goto code_r0x0d1d9ba0;
    uVar4 = plVar2[3];
    plVar2 = unaff_RBX;
  } while( true );
}


