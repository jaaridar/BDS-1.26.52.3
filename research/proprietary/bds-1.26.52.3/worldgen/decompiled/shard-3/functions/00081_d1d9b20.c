/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9b20
 * Label: br::worldgen::UniformHeight::vslot0
 * Body:  [[0d1d9b20, 0d1d9b2f] [0d1d9b31, 0d1d9b38] [0d1d9b52, 0d1d9b5e] [0d1d9b60, 0d1d9b8f] [0d1d9b91, 0d1d9b95] [0d1d9ba0, 0d1d9c66]]
 * Ghidra: wg_br__worldgen__UniformHeight__vslot0
 */


undefined8
wg_br__worldgen__UniformHeight__vslot0(undefined1 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_RBX;
  long *plVar7;
  long lVar8;
  long unaff_R12;
  long *unaff_R13;
  undefined1 *puVar9;
  ulong unaff_retaddr;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar1 = in(param_3);
  *param_1 = uVar1;
  puVar9 = in_stack_00000010;
  if ((unaff_retaddr & 1) == 0) {
    in_stack_00000008 = unaff_retaddr >> 1 & 0x7f;
    puVar9 = &stack0x00000001;
  }
  plVar7 = (long *)(unaff_RBX + 0x10);
  do {
    bVar2 = *(byte *)(plVar7 + -2);
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = plVar7[-1];
    }
    if (uVar6 == in_stack_00000008) {
      if ((bVar2 & 1) == 0) {
        lVar8 = (long)plVar7 + -0xf;
      }
      else {
        lVar8 = *plVar7;
      }
      iVar4 = func_0x0eee3000(lVar8,puVar9,in_stack_00000008);
      if (iVar4 == 0) {
        bVar3 = true;
        goto LAB_0d1d9bb9;
      }
    }
    plVar5 = plVar7 + 2;
    plVar7 = plVar7 + 4;
    if (plVar5 == unaff_R13) {
      bVar3 = false;
LAB_0d1d9bb9:
      func_0x0412d6b0(in_stack_00000020);
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar3) {
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
  } while( true );
}


