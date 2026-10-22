/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe44dc40
 * Label: callee-of:0xe4118a0
 * Body:  [[0e44d93d, 0e44db5f] [0e44db71, 0e44db81] [0e44dc40, 0e44dc6b]]
 * Ghidra: FUN_0e44dc40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e44dc40(void)

{
  long *plVar1;
  long lVar2;
  char in_AL;
  int iVar3;
  long *plVar4;
  char *in_RCX;
  undefined8 *unaff_R14;
  long *unaff_R15;
  char in_CF;
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
  undefined4 in_stack_000000c8;
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  *in_RCX = *in_RCX + in_AL + in_CF;
  iVar3 = func_0x04108328();
  if (iVar3 != 0) {
    func_0x048afe70(0xf5509d8);
    func_0x0410844d(&DAT_0f5509f0);
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  lVar2 = in_stack_00000020;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0ef43980;
  in_stack_000000d0 = plVar4 + 3;
  in_stack_00000020 = 0;
  plVar4[3] = lVar2;
  plVar4[6] = unaff_R15[2];
  lVar2 = unaff_R15[1];
  plVar4[4] = *unaff_R15;
  plVar4[5] = lVar2;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  plVar4[7] = in_stack_00000040;
  plVar4[8] = in_stack_00000048;
  plVar4[9] = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  plVar4[10] = in_stack_00000058;
  plVar4[0xb] = in_stack_00000060;
  plVar4[0xc] = in_stack_00000068;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  plVar4[0xd] = in_stack_00000070;
  plVar4[0xe] = in_stack_00000078;
  plVar4[0xf] = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  *(undefined4 *)(plVar4 + 0x10) = in_stack_00000088;
  plVar4[0x11] = in_stack_00000090;
  plVar4[0x12] = in_stack_00000098;
  plVar4[0x13] = in_stack_000000a0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  plVar4[0x16] = in_stack_000000b8;
  *(undefined4 *)(plVar4 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)plVar4 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(plVar4 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)plVar4 + 0xac) = uStack00000000000000b4;
  _uStack00000000000000a8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000d8 = plVar4;
  func_0x048afd20();
  plVar4 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar4);
    }
  }
  plVar4 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


