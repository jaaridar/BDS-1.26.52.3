/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe40ba60
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e40ba60, 0e40bbda]]
 * Ghidra: FUN_0e40ba60
 */


void FUN_0e40ba60(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_RCX;
  long *unaff_R12;
  undefined8 *unaff_R14;
  char in_CF;
  long *in_XMM0_Qb;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  char in_stack_00000058;
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
  undefined8 uStack00000000000000e0;
  long *plStack00000000000000e8;
  
  in_stack_00000058 = in_stack_00000058 + (char)in_RCX + in_CF;
  *(int *)(unaff_R12 + 10) = (int)param_2;
  *(int *)((long)unaff_R12 + 0x54) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(unaff_R12 + 0xb) = in_XMM1_Dc;
  *(undefined4 *)((long)unaff_R12 + 0x5c) = in_XMM1_Dd;
  unaff_R12[0xc] = in_stack_00000068;
  *unaff_R14 = param_1;
  unaff_R14[1] = in_XMM0_Qb;
  unaff_R14[2] = 0;
  unaff_R12[0xd] = in_stack_00000070;
  unaff_R12[0xe] = in_stack_00000078;
  unaff_R12[0xf] = in_stack_00000080;
  in_stack_00000080 = 0;
  *(undefined4 *)(unaff_R12 + 0x10) = in_stack_00000088;
  unaff_R12[0x11] = in_stack_00000090;
  unaff_R12[0x12] = in_stack_00000098;
  unaff_R12[0x13] = in_stack_000000a0;
  *in_RCX = param_1;
  in_RCX[1] = in_XMM0_Qb;
  in_RCX[2] = 0;
  unaff_R12[0x16] = in_stack_000000b8;
  *(undefined4 *)(unaff_R12 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)unaff_R12 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(unaff_R12 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)unaff_R12 + 0xac) = uStack00000000000000b4;
  in_stack_000000b8 = 0;
  in_stack_00000070 = param_1;
  _uStack00000000000000a8 = param_1;
  uStack00000000000000e0 = param_1;
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
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


