/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe645310
 * Label: string:minecraft:biome_music
 * Body:  [[0e644d2c, 0e6452eb] [0e645310, 0e6453f5]]
 * Ghidra: FUN_0e645310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e645310(void)

{
  long *plVar1;
  int in_EAX;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *in_RCX;
  ulong uVar7;
  long unaff_RBX;
  ulong *unaff_R14;
  ulong unaff_R15;
  byte in_CF;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined *in_stack_00000048;
  undefined *in_stack_00000050;
  long in_stack_00000058;
  undefined *in_stack_00000060;
  long in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  long *in_stack_00000090;
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
  
  *in_RCX = *in_RCX + in_EAX + (uint)in_CF;
  func_0x0410844d();
  if ((DAT_0f75b978 == '\0') && (iVar2 = func_0x04108328(&DAT_0f75b978), iVar2 != 0)) {
    func_0x0e644a00();
    func_0x0410844d(&DAT_0f75b978);
  }
  in_stack_00000020 = (long *)&DAT_0f75b960;
  in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,_DAT_0f75b964);
  in_stack_00000030 = 0;
  in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,0x80);
  in_stack_00000040 = 2;
  in_stack_00000048 = &UNK_0e644830;
  in_stack_00000050 = &UNK_0e644a80;
  in_stack_00000058 = 0;
  in_stack_00000060 = &UNK_0e644c50;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000080 = 0;
  _uStack0000000000000088 = 0;
  in_stack_00000090 = (long *)0x0;
  in_stack_00000098 = 0;
  func_0x048aee30(unaff_R14 + 1,unaff_RBX + 0x18,&stack0x00000020,0x60da6ff2);
  lVar3 = in_stack_00000098;
  in_stack_00000098 = 0;
  if (lVar3 != 0) {
    func_0x048ae940(lVar3);
    func_0x0412a280(lVar3,0x78);
  }
  plVar6 = in_stack_00000090;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000090 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_00000090 + 0x10))(in_stack_00000090);
      func_0x0412c2d0(plVar6);
    }
  }
  *(undefined4 *)(unaff_R14 + 5) = 0;
  if ((DAT_0f75b978 == '\0') && (iVar2 = func_0x04108328(&DAT_0f75b978), iVar2 != 0)) {
    func_0x0e644a00();
    func_0x0410844d(&DAT_0f75b978);
  }
  *(undefined4 *)((long)unaff_R14 + 0x2c) = _DAT_0f75b964;
  *(undefined1 *)(unaff_R14 + 6) = 0;
  if (unaff_R15 < 0xfffffffffffffff8) {
    if (unaff_R15 < 0x17) {
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,(char)unaff_R15 * '\x02');
      lVar3 = (long)&stack0x00000008 + 1;
      if (unaff_R15 != 0) goto LAB_0e644ec7;
    }
    else {
      uVar7 = 0x1a;
      if ((unaff_R15 | 7) != 0x17) {
        uVar7 = (unaff_R15 | 7) + 1;
      }
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (lVar3 == 0) {
        func_0x0eec74c0(uVar7,0);
      }
      in_stack_00000008 = uVar7 | 1;
      in_stack_00000010 = unaff_R15;
      in_stack_00000018 = lVar3;
LAB_0e644ec7:
      func_0x0eee2f00(lVar3);
    }
    *(undefined1 *)(lVar3 + unaff_R15) = 0;
    unaff_R15 = *unaff_R14;
    if (DAT_0f75b958 != '\0') goto LAB_0e644eed;
  }
  else {
    func_0x04882e30();
  }
  iVar2 = func_0x04108328(&DAT_0f75b958);
  if (iVar2 != 0) {
    func_0x0e6448f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b8d8,0xf53dab8);
    func_0x0410844d(&DAT_0f75b958);
  }
LAB_0e644eed:
  plVar6 = (long *)(*(long *)(unaff_R15 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_R15 + 0x20) - *(long *)(unaff_R15 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f75b8d8 + 4)) * 8);
  do {
    lVar3 = *plVar6;
    if (lVar3 == -1) goto LAB_0e644f40;
    plVar6 = (long *)(*(long *)(unaff_R15 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(unaff_R15 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f75b8d8 + 4)
          );
  if (plVar6 == *(long **)(unaff_R15 + 0x38)) {
LAB_0e644f40:
    puVar4 = &DAT_0f75b8d8;
    iVar2 = iRam000000000f75b938;
  }
  else {
    puVar4 = (undefined *)plVar6[2];
    iVar2 = *(int *)(puVar4 + 0x60);
  }
  if ((iVar2 == -0x2b3da790) && (*(long *)(puVar4 + 0x68) != 0)) {
    *(undefined1 *)(unaff_R14 + 6) = 1;
  }
  else {
    in_stack_00000070 = 0;
    uStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    uStack000000000000007c = 0;
    in_stack_00000060 = (undefined *)0x0;
    in_stack_00000068 = 0;
    in_stack_00000050 = (undefined *)0x0;
    in_stack_00000058 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = (undefined *)0x0;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_stack_00000020 = (long *)0x0;
    in_stack_00000028 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    _uStack0000000000000088 = CONCAT44(uStack000000000000008c,0x3f600000);
    func_0x048afb10(&stack0x00000058,8);
    _uStack00000000000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000a0 = 0;
    _uStack00000000000000a8 = 0;
    in_stack_00000090 = (long *)0x0;
    in_stack_00000098 = 0;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar5 = &UNK_0f4c4038;
    if (in_stack_00000020 != (long *)0x0) {
      lVar3 = *in_stack_00000020;
      in_stack_00000020 = puVar5;
      (**(code **)(lVar3 + 8))();
      puVar5 = in_stack_00000020;
    }
    in_stack_00000020 = puVar5;
    if ((in_stack_00000028 & 1) == 0) {
      if ((in_stack_00000008 & 1) == 0) {
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000010;
      }
      else {
        func_0x04885070(&stack0x00000028,in_stack_00000018,in_stack_00000010);
      }
    }
    else {
      uVar7 = in_stack_00000008 >> 1 & 0x7f;
      lVar3 = (long)&stack0x00000008 + 1;
      if ((in_stack_00000008 & 1) != 0) {
        uVar7 = in_stack_00000010;
        lVar3 = in_stack_00000018;
      }
      func_0x04885120(&stack0x00000028,lVar3,uVar7);
    }
    if ((DAT_0f5509f0 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5509f0), iVar2 != 0)) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
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
    plVar6[8] = (long)in_stack_00000048;
    plVar6[9] = (long)in_stack_00000050;
    in_stack_00000040 = 0;
    in_stack_00000048 = (undefined *)0x0;
    in_stack_00000050 = (undefined *)0x0;
    plVar6[10] = in_stack_00000058;
    plVar6[0xb] = (long)in_stack_00000060;
    plVar6[0xc] = in_stack_00000068;
    in_stack_00000058 = 0;
    in_stack_00000060 = (undefined *)0x0;
    in_stack_00000068 = 0;
    plVar6[0xd] = CONCAT44(uStack0000000000000074,in_stack_00000070);
    plVar6[0xe] = CONCAT44(uStack000000000000007c,in_stack_00000078);
    plVar6[0xf] = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    in_stack_00000070 = 0;
    uStack0000000000000074 = 0;
    in_stack_00000078 = 0;
    uStack000000000000007c = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    *(undefined4 *)(plVar6 + 0x10) = uStack0000000000000088;
    plVar6[0x11] = (long)in_stack_00000090;
    plVar6[0x12] = in_stack_00000098;
    plVar6[0x13] = in_stack_000000a0;
    in_stack_00000090 = (long *)0x0;
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
    func_0x048afd20(unaff_R14 + 1,&stack0x000000c8);
    plVar6 = in_stack_000000d8;
    if (in_stack_000000d8 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000000d8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = in_stack_000000e8;
    if (in_stack_000000e8 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000000e8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x048aeca0(&stack0x00000020);
  }
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


