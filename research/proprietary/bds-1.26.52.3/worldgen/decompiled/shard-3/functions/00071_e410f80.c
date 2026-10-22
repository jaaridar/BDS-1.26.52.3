/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe410f80
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::v1_21_20::Ji
 * Body:  [[0e410f80, 0e4114ab] [0e411512, 0e4115b5]]
 * Ghidra: FUN_0e410f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e410f80(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_RAX;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char in_CL;
  ulong uVar8;
  ulong *unaff_R14;
  ulong unaff_R15;
  ulong unaff_retaddr;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  long *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  undefined1 *in_stack_00000030;
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
  long *in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  long in_stack_000000b0;
  undefined4 in_stack_000000c0;
  long *in_stack_000000c8;
  long *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  
  *(char *)(in_RAX + -0x73) = *(char *)(in_RAX + -0x73) + in_CL;
  func_0x048aee30();
  lVar2 = in_stack_00000090;
  in_stack_00000090 = 0;
  if (lVar2 != 0) {
    func_0x048ae940(lVar2);
    func_0x0412a280(lVar2,0x78);
  }
  plVar7 = in_stack_00000088;
  if (in_stack_00000088 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000088 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000088 + 0x10))(in_stack_00000088);
      func_0x0412c2d0(plVar7);
    }
  }
  *(undefined4 *)(unaff_R14 + 5) = 0;
  if ((DAT_0f751688 == '\0') && (iVar3 = func_0x04108328(&DAT_0f751688), iVar3 != 0)) {
    func_0x0e410900();
    func_0x0410844d(&DAT_0f751688);
  }
  *(undefined4 *)((long)unaff_R14 + 0x2c) = _DAT_0f751674;
  *(undefined1 *)(unaff_R14 + 6) = 0;
  if (unaff_R15 < 0xfffffffffffffff8) {
    if (unaff_R15 < 0x17) {
      unaff_retaddr = CONCAT71((int7)(unaff_retaddr >> 8),(char)unaff_R15 * '\x02');
      puVar4 = &stack0x00000001;
      if (unaff_R15 != 0) goto LAB_0e411087;
    }
    else {
      uVar8 = 0x1a;
      if ((unaff_R15 | 7) != 0x17) {
        uVar8 = (unaff_R15 | 7) + 1;
      }
      puVar4 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
      if (puVar4 == (undefined1 *)0x0) {
        func_0x0eec74c0(uVar8,0);
      }
      unaff_retaddr = uVar8 | 1;
      in_stack_00000008 = unaff_R15;
      in_stack_00000010 = puVar4;
LAB_0e411087:
      func_0x0eee2f00(puVar4);
    }
    puVar4[unaff_R15] = 0;
    unaff_R15 = *unaff_R14;
    if (DAT_0f751668 != '\0') goto LAB_0e4110ad;
  }
  else {
    func_0x04882e30();
  }
  iVar3 = func_0x04108328(&DAT_0f751668);
  if (iVar3 != 0) {
    func_0x0e4107f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7515e8,0xf53dab8);
    func_0x0410844d(&DAT_0f751668);
  }
LAB_0e4110ad:
  plVar7 = (long *)(*(long *)(unaff_R15 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_R15 + 0x20) - *(long *)(unaff_R15 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f7515e8 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_0e411100;
    plVar7 = (long *)(*(long *)(unaff_R15 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(unaff_R15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f7515e8 + 4)
          );
  if (plVar7 == *(long **)(unaff_R15 + 0x38)) {
LAB_0e411100:
    puVar5 = &DAT_0f7515e8;
    iVar3 = iRam000000000f751648;
  }
  else {
    puVar5 = (undefined *)plVar7[2];
    iVar3 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar3 == -0x2b3da790) && (*(long *)(puVar5 + 0x68) != 0)) {
    *(undefined1 *)(unaff_R14 + 6) = 1;
  }
  else {
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = (undefined1 *)0x0;
    in_stack_00000018 = (long *)0x0;
    in_stack_00000020 = 0;
    in_stack_00000078 = 0;
    in_stack_00000080 = 0x3f600000;
    func_0x048afb10(&stack0x00000050,8);
    _uStack00000000000000a8 = 0;
    in_stack_000000b0 = 0;
    in_stack_00000098 = 0;
    _uStack00000000000000a0 = 0;
    in_stack_00000088 = (long *)0x0;
    in_stack_00000090 = 0;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f4b9960;
    if (in_stack_00000018 != (long *)0x0) {
      lVar2 = *in_stack_00000018;
      in_stack_00000018 = puVar6;
      (**(code **)(lVar2 + 8))();
      puVar6 = in_stack_00000018;
    }
    in_stack_00000018 = puVar6;
    if ((in_stack_00000020 & 1) == 0) {
      if ((unaff_retaddr & 1) == 0) {
        in_stack_00000030 = in_stack_00000010;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = unaff_retaddr;
      }
      else {
        func_0x04885070(&stack0x00000020,in_stack_00000010,in_stack_00000008);
      }
    }
    else {
      uVar8 = unaff_retaddr >> 1 & 0x7f;
      puVar4 = &stack0x00000001;
      if ((unaff_retaddr & 1) != 0) {
        uVar8 = in_stack_00000008;
        puVar4 = in_stack_00000010;
      }
      func_0x04885120(&stack0x00000020,puVar4,uVar8);
    }
    if ((DAT_0f5509f0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5509f0), iVar3 != 0)) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
    in_stack_000000c0 = _DAT_0f5509dc;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0xb8,0);
    }
    puVar6 = in_stack_00000018;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef43980;
    in_stack_000000c8 = plVar7 + 3;
    in_stack_00000018 = (long *)0x0;
    plVar7[3] = (long)puVar6;
    plVar7[6] = (long)in_stack_00000030;
    plVar7[4] = in_stack_00000020;
    plVar7[5] = in_stack_00000028;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = (undefined1 *)0x0;
    plVar7[7] = in_stack_00000038;
    plVar7[8] = in_stack_00000040;
    plVar7[9] = in_stack_00000048;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    plVar7[10] = in_stack_00000050;
    plVar7[0xb] = in_stack_00000058;
    plVar7[0xc] = in_stack_00000060;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    plVar7[0xd] = in_stack_00000068;
    plVar7[0xe] = in_stack_00000070;
    plVar7[0xf] = in_stack_00000078;
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    *(undefined4 *)(plVar7 + 0x10) = in_stack_00000080;
    plVar7[0x11] = (long)in_stack_00000088;
    plVar7[0x12] = in_stack_00000090;
    plVar7[0x13] = in_stack_00000098;
    in_stack_00000088 = (long *)0x0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    plVar7[0x16] = in_stack_000000b0;
    *(undefined4 *)(plVar7 + 0x14) = uStack00000000000000a0;
    *(undefined4 *)((long)plVar7 + 0xa4) = uStack00000000000000a4;
    *(undefined4 *)(plVar7 + 0x15) = uStack00000000000000a8;
    *(undefined4 *)((long)plVar7 + 0xac) = uStack00000000000000ac;
    _uStack00000000000000a0 = 0;
    _uStack00000000000000a8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000e0 = (long *)0x0;
    in_stack_000000d0 = plVar7;
    func_0x048afd20();
    plVar7 = in_stack_000000d0;
    if (in_stack_000000d0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000000d0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_stack_000000d0 + 0x10))(in_stack_000000d0);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = in_stack_000000e0;
    if (in_stack_000000e0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000000e0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_stack_000000e0 + 0x10))(in_stack_000000e0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x048aeca0(&stack0x00000018);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
  }
  return;
}


