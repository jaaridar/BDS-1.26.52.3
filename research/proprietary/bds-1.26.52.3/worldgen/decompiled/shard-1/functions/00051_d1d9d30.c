/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9d30
 * Label: br::worldgen::processors::BlockRules::RandomBlockStateMatch::vslot0
 * Body:  [[0d1d9d30, 0d1d9d38] [0d1d9d59, 0d1d9d5e] [0d1d9d60, 0d1d9d95] [0d1d9da0, 0d1d9e66]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot0
 */


undefined8 wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot0(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_RBX;
  long *plVar6;
  ulong unaff_RBP;
  long lVar7;
  long unaff_R12;
  long *unaff_R13;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  plVar6 = (long *)(unaff_RBX + 0x10);
  do {
    bVar1 = *(byte *)(plVar6 + -2);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = plVar6[-1];
    }
    if (uVar5 == unaff_RBP) {
      if ((bVar1 & 1) == 0) {
        lVar7 = (long)plVar6 + -0xf;
      }
      else {
        lVar7 = *plVar6;
      }
      iVar3 = func_0x0eee3000(lVar7,in_stack_00000010);
      if (iVar3 == 0) {
        bVar2 = true;
        goto LAB_0d1d9db9;
      }
    }
    plVar4 = plVar6 + 2;
    plVar6 = plVar6 + 4;
    if (plVar4 == unaff_R13) {
      bVar2 = false;
LAB_0d1d9db9:
      func_0x0412d6b0(in_stack_00000020);
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar2) {
        in_stack_00000038 = &UNK_01254d89;
        in_stack_00000040 = 0;
        func_0x041b3a30(in_stack_00000028,3,&stack0x00000000,&stack0x00000038);
      }
      else {
        func_0x0412d680(unaff_R12 + 0xd0);
        (**(code **)(**(long **)(unaff_R12 + 0x10) + 0x18))(in_stack_00000028);
        func_0x0412d6b0(unaff_R12 + 0xd0);
      }
      return in_stack_00000028;
    }
  } while( true );
}


