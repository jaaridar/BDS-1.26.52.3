/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeba4760
 * Label: callee-of:0xeba2170
 * Body:  [[0eba4760, 0eba48d3] [0eba4905, 0eba4935]]
 * Ghidra: FUN_0eba4760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eba4760(undefined4 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  undefined4 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  uStack0000000000000080 = *(undefined4 *)(param_2 + 0x10);
  uStack0000000000000084 = *(undefined4 *)(param_2 + 0x14);
  uStack0000000000000088 = *(undefined4 *)(param_2 + 0x18);
  uStack000000000000008c = *(undefined4 *)(param_2 + 0x1c);
  uStack0000000000000070 = param_1;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0ef46ef8;
  if (DAT_0f551bc8 == '\0') {
    iVar8 = func_0x04108328(&DAT_0f551bc8);
    if (iVar8 != 0) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
  }
  in_stack_00000008 = _DAT_0f551bb4;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  in_stack_00000010 = plVar10 + 3;
  plVar10[3] = (long)puVar9;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  in_stack_00000060 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000018 = plVar10;
  func_0x048afd20(&stack0x00000070,&stack0x00000008);
  plVar10 = in_stack_00000018;
  if (in_stack_00000018 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000018 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = in_stack_00000068;
  if (in_stack_00000068 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000068 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000068 + 0x10))(in_stack_00000068);
      func_0x0412c2d0(plVar10);
    }
  }
  unaff_RBX[6] = unaff_R14[6];
  uVar3 = *unaff_R14;
  uVar4 = unaff_R14[1];
  uVar5 = unaff_R14[2];
  uVar6 = unaff_R14[3];
  uVar7 = unaff_R14[5];
  unaff_RBX[4] = unaff_R14[4];
  unaff_RBX[5] = uVar7;
  unaff_RBX[2] = uVar5;
  unaff_RBX[3] = uVar6;
  *unaff_RBX = uVar3;
  unaff_RBX[1] = uVar4;
  return;
}


