/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8df6a0
 * Label: string:virtual void cereal::internal::TypeSchema<std::array<std::va
 * Body:  [[0e8df6a0, 0e8df85a]]
 * Ghidra: FUN_0e8df6a0
 */


void FUN_0e8df6a0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong in_RAX;
  long *in_RCX;
  long *unaff_R12;
  long *unaff_R14;
  long *unaff_R15;
  char in_CF;
  long *in_XMM0_Qb;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  long in_stack_000000b0;
  ulong uStack00000000000000c8;
  long lStack00000000000000d8;
  long *plStack00000000000000e0;
  
  *(char *)((long)in_RCX + -0x77) = *(char *)((long)in_RCX + -0x77) + (char)in_RCX + in_CF;
  uStack00000000000000c8 = in_RAX & 0xffffffffffffff30;
  lVar2 = unaff_R15[1];
  unaff_R12[4] = *unaff_R15;
  unaff_R12[5] = lVar2;
  *unaff_R15 = param_1;
  unaff_R15[1] = (long)in_XMM0_Qb;
  unaff_R15[2] = 0;
  unaff_R12[7] = in_stack_00000038;
  unaff_R12[8] = in_stack_00000040;
  unaff_R12[9] = in_stack_00000048;
  in_stack_00000048 = 0;
  unaff_R12[10] = in_stack_00000050;
  unaff_R12[0xb] = in_stack_00000058;
  unaff_R12[0xc] = in_stack_00000060;
  *unaff_R14 = param_1;
  unaff_R14[1] = (long)in_XMM0_Qb;
  unaff_R14[2] = 0;
  unaff_R12[0xd] = in_stack_00000068;
  unaff_R12[0xe] = in_stack_00000070;
  unaff_R12[0xf] = in_stack_00000078;
  in_stack_00000078 = 0;
  *(undefined4 *)(unaff_R12 + 0x10) = in_stack_00000080;
  unaff_R12[0x11] = in_stack_00000088;
  unaff_R12[0x12] = in_stack_00000090;
  unaff_R12[0x13] = in_stack_00000098;
  *in_RCX = param_1;
  in_RCX[1] = (long)in_XMM0_Qb;
  in_RCX[2] = 0;
  unaff_R12[0x16] = in_stack_000000b0;
  *(undefined4 *)(unaff_R12 + 0x14) = uStack00000000000000a0;
  *(undefined4 *)((long)unaff_R12 + 0xa4) = uStack00000000000000a4;
  *(undefined4 *)(unaff_R12 + 0x15) = uStack00000000000000a8;
  *(undefined4 *)((long)unaff_R12 + 0xac) = uStack00000000000000ac;
  in_stack_000000b0 = 0;
  in_stack_00000038 = param_1;
  in_stack_00000068 = param_1;
  _uStack00000000000000a0 = param_1;
  lStack00000000000000d8 = param_1;
  plStack00000000000000e0 = in_XMM0_Qb;
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
  if (plStack00000000000000e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack00000000000000e0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack00000000000000e0 + 0x10))(plStack00000000000000e0);
      func_0x0412c2d0(plStack00000000000000e0);
    }
  }
  func_0x048aeca0(&stack0x00000018);
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return;
}


