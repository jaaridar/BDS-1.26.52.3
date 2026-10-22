/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe439c40
 * Label: callee-of:0xe4118a0
 * Body:  [[0e439c40, 0e439e0a]]
 * Ghidra: FUN_0e439c40
 */


void FUN_0e439c40(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9,
                 undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  long *unaff_R12;
  long *unaff_R14;
  long *unaff_R15;
  long *in_XMM0_Qb;
  undefined4 uStack0000000000000020;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined4 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  long in_stack_000000b8;
  long lStack00000000000000e0;
  long *plStack00000000000000e8;
  
  uStack0000000000000020 = 0;
  unaff_R12[3] = param_4;
  unaff_R12[6] = unaff_R15[2];
  lVar2 = unaff_R15[1];
  unaff_R12[4] = *unaff_R15;
  unaff_R12[5] = lVar2;
  *unaff_R15 = param_1;
  unaff_R15[1] = (long)in_XMM0_Qb;
  unaff_R15[2] = 0;
  unaff_R12[7] = in_stack_00000040;
  unaff_R12[8] = in_stack_00000048;
  unaff_R12[9] = in_stack_00000050;
  in_stack_00000050 = 0;
  unaff_R12[10] = in_stack_00000058;
  unaff_R12[0xb] = in_stack_00000060;
  unaff_R12[0xc] = in_stack_00000068;
  *unaff_R14 = param_1;
  unaff_R14[1] = (long)in_XMM0_Qb;
  unaff_R14[2] = 0;
  unaff_R12[0xd] = in_stack_00000070;
  unaff_R12[0xe] = in_stack_00000078;
  unaff_R12[0xf] = in_stack_00000080;
  in_stack_00000080 = 0;
  *(undefined4 *)(unaff_R12 + 0x10) = in_stack_00000088;
  unaff_R12[0x11] = in_stack_00000090;
  unaff_R12[0x12] = in_stack_00000098;
  unaff_R12[0x13] = in_stack_000000a0;
  *param_5 = param_1;
  param_5[1] = (long)in_XMM0_Qb;
  param_5[2] = 0;
  unaff_R12[0x16] = in_stack_000000b8;
  *(undefined4 *)(unaff_R12 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)unaff_R12 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(unaff_R12 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)unaff_R12 + 0xac) = uStack00000000000000b4;
  in_stack_000000b8 = 0;
  in_stack_00000040 = param_1;
  in_stack_00000070 = param_1;
  _uStack00000000000000a8 = param_1;
  lStack00000000000000e0 = param_1;
  plStack00000000000000e8 = in_XMM0_Qb;
  func_0x048afd20();
  if (unaff_R12 != (long *)0x0) {
    LOCK();
    plVar1 = unaff_R12 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_R12 + 0x10))(unaff_R12);
      func_0x0412c2d0(unaff_R12);
    }
  }
  if (plStack00000000000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack00000000000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack00000000000000e8 + 0x10))(plStack00000000000000e8);
      func_0x0412c2d0(plStack00000000000000e8);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((param_8 & 1) != 0) {
    func_0x0412a280(param_10,param_8 & 0xfffffffffffffffe);
  }
  return;
}


