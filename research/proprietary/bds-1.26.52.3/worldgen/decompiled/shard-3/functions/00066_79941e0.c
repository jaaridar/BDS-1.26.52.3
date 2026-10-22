/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x79941e0
 * Label: string:SubChunk_BiomeData
 * Body:  [[079941e0, 079946c0] [07994735, 0799479b]]
 * Ghidra: FUN_079941e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_079941e0(void)

{
  long *plVar1;
  int iVar2;
  char *in_RAX;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_R14;
  long *unaff_R15;
  ulong in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined *puStack0000000000000060;
  long lStack0000000000000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  long *plStack0000000000000090;
  long lStack0000000000000098;
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
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  puStack0000000000000060 = &UNK_079940c0;
  lStack0000000000000068 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000080 = 0;
  _uStack0000000000000088 = 0;
  plStack0000000000000090 = (long *)0x0;
  lStack0000000000000098 = 0;
  func_0x048aee30();
  lVar3 = lStack0000000000000098;
  lStack0000000000000098 = 0;
  if (lVar3 != 0) {
    func_0x048ae940(lVar3);
    func_0x0412a280(lVar3,0x78);
  }
  plVar5 = plStack0000000000000090;
  if (plStack0000000000000090 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000090 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000090 + 0x10))(plStack0000000000000090);
      func_0x0412c2d0(plVar5);
    }
  }
  *(undefined4 *)(unaff_R14 + 5) = 0;
  if ((DAT_0f5b2fc8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5b2fc8), iVar2 != 0)) {
    func_0x07993cf0(0xf5b2fb0);
    func_0x0410844d(&DAT_0f5b2fc8);
  }
  *(undefined4 *)((long)unaff_R14 + 0x2c) = _DAT_0f5b2fb4;
  *(undefined1 *)(unaff_R14 + 6) = 0;
  if (unaff_R15 < (long *)0xfffffffffffffff8) {
    if (unaff_R15 < (long *)0x17) {
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,(char)unaff_R15 * '\x02');
      lVar3 = (long)&stack0x00000008 + 1;
      if (unaff_R15 != (long *)0x0) goto LAB_07994317;
    }
    else {
      uVar6 = 0x1a;
      if (((ulong)unaff_R15 | 7) != 0x17) {
        uVar6 = ((ulong)unaff_R15 | 7) + 1;
      }
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
      if (lVar3 == 0) {
        func_0x0eec74c0(uVar6,0);
      }
      in_stack_00000008 = uVar6 | 1;
      in_stack_00000010 = unaff_R15;
      in_stack_00000018 = lVar3;
LAB_07994317:
      func_0x0eee2f00(lVar3);
    }
    *(undefined1 *)(lVar3 + (long)unaff_R15) = 0;
    lVar3 = func_0x07993b00(*unaff_R14 + 0x18);
    if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (*(long *)(lVar3 + 0x68) != 0)) {
      *(undefined1 *)(unaff_R14 + 6) = 1;
      goto joined_r0x07994669;
    }
    unaff_R14 = &stack0x00000058;
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    puStack0000000000000060 = (undefined *)0x0;
    lStack0000000000000068 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000030 = (long *)0x0;
    in_stack_00000038 = 0;
    in_stack_00000020 = (long *)0x0;
    in_stack_00000028 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    _uStack0000000000000088 = CONCAT44(uStack000000000000008c,0x3f600000);
    func_0x048afb10(unaff_R14,8);
    _uStack00000000000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000a0 = 0;
    _uStack00000000000000a8 = 0;
    plStack0000000000000090 = (long *)0x0;
    lStack0000000000000098 = 0;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar4 = &UNK_0f0ed640;
    if (in_stack_00000020 != (long *)0x0) {
      lVar3 = *in_stack_00000020;
      in_stack_00000020 = puVar4;
      (**(code **)(lVar3 + 8))();
      puVar4 = in_stack_00000020;
    }
    in_stack_00000020 = puVar4;
    unaff_R15 = (long *)&stack0x00000028;
    if ((in_stack_00000028 & 1) == 0) {
      if ((in_stack_00000008 & 1) == 0) {
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000010;
      }
      else {
        func_0x04885070(unaff_R15,in_stack_00000018,in_stack_00000010);
      }
    }
    else {
      plVar5 = (long *)(in_stack_00000008 >> 1 & 0x7f);
      lVar3 = (long)&stack0x00000008 + 1;
      if ((in_stack_00000008 & 1) != 0) {
        plVar5 = in_stack_00000010;
        lVar3 = in_stack_00000018;
      }
      func_0x04885120(unaff_R15,lVar3,plVar5);
    }
    if (DAT_0f5509f0 == '\0') goto LAB_0799476b;
  }
  else {
    func_0x04882e30();
LAB_0799476b:
    iVar2 = func_0x04108328(&DAT_0f5509f0);
    if (iVar2 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar4 = in_stack_00000020;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef43980;
  in_stack_00000020 = (undefined8 *)0x0;
  plVar5[3] = (long)puVar4;
  plVar5[6] = unaff_R15[2];
  lVar3 = unaff_R15[1];
  plVar5[4] = *unaff_R15;
  plVar5[5] = lVar3;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  plVar5[7] = in_stack_00000040;
  plVar5[8] = in_stack_00000048;
  plVar5[9] = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  plVar5[10] = in_stack_00000058;
  plVar5[0xb] = (long)puStack0000000000000060;
  plVar5[0xc] = lStack0000000000000068;
  *unaff_R14 = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  plVar5[0xd] = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  plVar5[0xe] = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  plVar5[0xf] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000084 = 0;
  *(undefined4 *)(plVar5 + 0x10) = uStack0000000000000088;
  plVar5[0x11] = (long)plStack0000000000000090;
  plVar5[0x12] = lStack0000000000000098;
  plVar5[0x13] = in_stack_000000a0;
  plStack0000000000000090 = (long *)0x0;
  lStack0000000000000098 = 0;
  in_stack_000000a0 = 0;
  plVar5[0x16] = in_stack_000000b8;
  *(undefined4 *)(plVar5 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)plVar5 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(plVar5 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)plVar5 + 0xac) = uStack00000000000000b4;
  _uStack00000000000000a8 = 0;
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000d0 = plVar5 + 3;
  in_stack_000000d8 = plVar5;
  func_0x048afd20();
  plVar5 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000d8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x048aeca0(&stack0x00000020);
joined_r0x07994669:
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


