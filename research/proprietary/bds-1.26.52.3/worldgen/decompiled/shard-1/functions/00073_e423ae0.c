/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe423ae0
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e423ae0, 0e423cdf] [0e423cf1, 0e423d01]]
 * Ghidra: FUN_0e423ae0
 */


void FUN_0e423ae0(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *in_RAX;
  undefined8 *unaff_R14;
  long *unaff_R15;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
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
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  if (in_RAX == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  lVar3 = in_stack_00000020;
  in_RAX[1] = 0;
  in_RAX[2] = 0;
  *in_RAX = (long)&UNK_0ef43980;
  in_stack_000000d0 = in_RAX + 3;
  in_stack_00000020 = 0;
  in_RAX[3] = lVar3;
  in_RAX[6] = unaff_R15[2];
  lVar3 = unaff_R15[1];
  in_RAX[4] = *unaff_R15;
  in_RAX[5] = lVar3;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  in_RAX[7] = in_stack_00000040;
  in_RAX[8] = in_stack_00000048;
  in_RAX[9] = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_RAX[10] = in_stack_00000058;
  in_RAX[0xb] = in_stack_00000060;
  in_RAX[0xc] = in_stack_00000068;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  in_RAX[0xd] = in_stack_00000070;
  in_RAX[0xe] = in_stack_00000078;
  in_RAX[0xf] = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  *(undefined4 *)(in_RAX + 0x10) = in_stack_00000088;
  in_RAX[0x11] = in_stack_00000090;
  in_RAX[0x12] = in_stack_00000098;
  in_RAX[0x13] = in_stack_000000a0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_RAX[0x16] = in_stack_000000b8;
  *(undefined4 *)(in_RAX + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)in_RAX + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(in_RAX + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)in_RAX + 0xac) = uStack00000000000000b4;
  _uStack00000000000000a8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000d8 = in_RAX;
  func_0x048afd20();
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(in_stack_000000d8);
    }
  }
  plVar1 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000000e8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar1);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


