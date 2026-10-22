/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe558630
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e558630, 0e55895c] [0e558a45, 0e558a75]]
 * Ghidra: FUN_0e558630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e558630(void)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong in_RAX;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_R14;
  bool bVar9;
  byte bStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
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
  
  pcVar4 = (char *)(in_RAX & 0xffffffffffffff80);
  cVar2 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[0x3f] = pcVar4[0x3f] + (char)((ulong)pcVar4 >> 8);
  func_0x048afb10();
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f4bde28;
  if (in_stack_00000020 != (long *)0x0) {
    lVar8 = *in_stack_00000020;
    in_stack_00000020 = puVar5;
    (**(code **)(lVar8 + 8))();
    puVar5 = in_stack_00000020;
  }
  in_stack_00000020 = puVar5;
  if ((in_stack_00000028 & 1) == 0) {
    if ((_bStack0000000000000008 & 1) == 0) {
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000028 = CONCAT44(uStack000000000000000c,_bStack0000000000000008);
      in_stack_00000030 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    else {
      func_0x04885070(&stack0x00000028,in_stack_00000018,
                      CONCAT44(uStack0000000000000014,uStack0000000000000010));
    }
  }
  else {
    bVar9 = (_bStack0000000000000008 & 1) != 0;
    lVar8 = (long)&stack0x00000008 + 1;
    if (bVar9) {
      lVar8 = in_stack_00000018;
    }
    uVar7 = (ulong)(bStack0000000000000008 >> 1);
    if (bVar9) {
      uVar7 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    func_0x04885120(&stack0x00000028,lVar8,uVar7);
  }
  if (DAT_0f5509f0 == '\0') {
    iVar3 = func_0x04108328(&DAT_0f5509f0);
    if (iVar3 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar5 = in_stack_00000020;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef43980;
  in_stack_000000d0 = plVar6 + 3;
  in_stack_00000020 = (long *)0x0;
  plVar6[3] = (long)puVar5;
  plVar6[6] = in_stack_00000038;
  plVar6[4] = in_stack_00000028;
  plVar6[5] = in_stack_00000030;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  plVar6[7] = in_stack_00000040;
  plVar6[8] = in_stack_00000048;
  plVar6[9] = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  plVar6[10] = in_stack_00000058;
  plVar6[0xb] = in_stack_00000060;
  plVar6[0xc] = in_stack_00000068;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  plVar6[0xd] = in_stack_00000070;
  plVar6[0xe] = in_stack_00000078;
  plVar6[0xf] = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  *(undefined4 *)(plVar6 + 0x10) = in_stack_00000088;
  plVar6[0x11] = in_stack_00000090;
  plVar6[0x12] = in_stack_00000098;
  plVar6[0x13] = in_stack_000000a0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  plVar6[0x16] = in_stack_000000b8;
  *(undefined4 *)(plVar6 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)plVar6 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(plVar6 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack00000000000000b4;
  _uStack00000000000000a8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000d8 = plVar6;
  func_0x048afd20();
  plVar6 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((_bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT44(uStack000000000000000c,_bStack0000000000000008) & 0xfffffffffffffffe);
  }
  return;
}


