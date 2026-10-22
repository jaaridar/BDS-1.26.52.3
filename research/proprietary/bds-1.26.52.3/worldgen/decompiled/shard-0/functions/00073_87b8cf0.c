/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x87b8cf0
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[087b8cf0, 087b9042] [087b9088, 087b90b8]]
 * Ghidra: FUN_087b8cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_087b8cf0(void)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *unaff_R14;
  uint unaff_retaddr;
  undefined4 unaff_retaddr_00;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *plStack0000000000000020;
  ulong uStack0000000000000028;
  ulong uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  long lStack0000000000000050;
  long lStack0000000000000058;
  long lStack0000000000000060;
  long lStack0000000000000068;
  long lStack0000000000000070;
  long lStack0000000000000078;
  long lStack0000000000000080;
  undefined4 uStack0000000000000088;
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
  
  lStack0000000000000070 = 0;
  lStack0000000000000078 = 0;
  lStack0000000000000060 = 0;
  lStack0000000000000068 = 0;
  lStack0000000000000050 = 0;
  lStack0000000000000058 = 0;
  lStack0000000000000040 = 0;
  lStack0000000000000048 = 0;
  uStack0000000000000030 = 0;
  puStack0000000000000038 = (undefined1 *)0x0;
  plStack0000000000000020 = (long *)0x0;
  uStack0000000000000028 = 0;
  lStack0000000000000080 = 0;
  uStack0000000000000088 = 0x3f600000;
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
  *puVar5 = &UNK_0f12c638;
  if (plStack0000000000000020 != (long *)0x0) {
    lVar2 = *plStack0000000000000020;
    plStack0000000000000020 = puVar5;
    (**(code **)(lVar2 + 8))();
    puVar5 = plStack0000000000000020;
  }
  plStack0000000000000020 = puVar5;
  if ((uStack0000000000000028 & 1) == 0) {
    if ((unaff_retaddr & 1) == 0) {
      puStack0000000000000038 = in_stack_00000010;
      uStack0000000000000028 = CONCAT44(unaff_retaddr_00,unaff_retaddr);
      uStack0000000000000030 = in_stack_00000008;
    }
    else {
      func_0x04885070(&stack0x00000028,in_stack_00000010,in_stack_00000008);
    }
  }
  else {
    uVar7 = (ulong)(byte)((byte)unaff_retaddr >> 1);
    puVar3 = &stack0x00000001;
    if ((unaff_retaddr & 1) != 0) {
      uVar7 = in_stack_00000008;
      puVar3 = in_stack_00000010;
    }
    func_0x04885120(&stack0x00000028,puVar3,uVar7);
  }
  if ((DAT_0f5509f0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5509f0), iVar4 != 0)) {
    func_0x048afe70(0xf5509d8);
    func_0x0410844d(&DAT_0f5509f0);
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar5 = plStack0000000000000020;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef43980;
  in_stack_000000d0 = plVar6 + 3;
  plStack0000000000000020 = (long *)0x0;
  plVar6[3] = (long)puVar5;
  plVar6[6] = (long)puStack0000000000000038;
  plVar6[4] = uStack0000000000000028;
  plVar6[5] = uStack0000000000000030;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  puStack0000000000000038 = (undefined1 *)0x0;
  plVar6[7] = lStack0000000000000040;
  plVar6[8] = lStack0000000000000048;
  plVar6[9] = lStack0000000000000050;
  lStack0000000000000040 = 0;
  lStack0000000000000048 = 0;
  lStack0000000000000050 = 0;
  plVar6[10] = lStack0000000000000058;
  plVar6[0xb] = lStack0000000000000060;
  plVar6[0xc] = lStack0000000000000068;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  plVar6[0xd] = lStack0000000000000070;
  plVar6[0xe] = lStack0000000000000078;
  plVar6[0xf] = lStack0000000000000080;
  lStack0000000000000070 = 0;
  lStack0000000000000078 = 0;
  lStack0000000000000080 = 0;
  *(undefined4 *)(plVar6 + 0x10) = uStack0000000000000088;
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
  func_0x048afd20(in_stack_00000018,&stack0x000000c8);
  plVar6 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT44(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return;
}


