/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xec5f1e0
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot6
 * Body:  [[0ec5ecf9, 0ec5f1c1] [0ec5f1e0, 0ec5f259]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot6(void)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int unaff_EBP;
  long *plVar8;
  long *unaff_R14;
  long *unaff_R15;
  ulong unaff_retaddr;
  long *in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined4 *in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  long *in_stack_00000030;
  undefined1 *in_stack_00000038;
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
  
  func_0x0410844d(&DAT_0f6e63c8);
  *(uint *)((long)unaff_R14 + 0x2c) = _DAT_0f6e63b4;
  *(undefined1 *)(unaff_R14 + 6) = 0;
  if (unaff_R15 < (long *)0xfffffffffffffff8) {
    if (unaff_R15 < (long *)0x17) {
      unaff_retaddr = CONCAT71((int7)(unaff_retaddr >> 8),(char)unaff_R15 * '\x02');
      puVar3 = &stack0x00000001;
      if (unaff_R15 != (long *)0x0) goto LAB_0ec5ed83;
    }
    else {
      uVar7 = 0x1a;
      if (((ulong)unaff_R15 | 7) != 0x17) {
        uVar7 = ((ulong)unaff_R15 | 7) + 1;
      }
      puVar3 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (puVar3 == (undefined1 *)0x0) {
        func_0x0eec74c0(uVar7,0);
      }
      unaff_retaddr = uVar7 | 1;
      in_stack_00000008 = unaff_R15;
      in_stack_00000010 = puVar3;
LAB_0ec5ed83:
      func_0x0eee2f00(puVar3);
      puVar3[(long)unaff_R15] = 0;
    }
    if (unaff_EBP == 2) {
      lVar4 = *unaff_R14;
      if ((DAT_0f6e63c8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f6e63c8), iVar2 != 0)) {
        func_0x0c4b9a90(0xf6e63b0);
        func_0x0410844d(&DAT_0f6e63c8);
      }
      plVar6 = (long *)(*(long *)(lVar4 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18)) >> 3
                                    ) - 1U & _DAT_0f6e63b4) * 8);
      do {
        plVar8 = plVar6;
        lVar1 = *plVar8;
        if (lVar1 == -1) goto LAB_0ec5ee06;
        plVar6 = (long *)(*(long *)(lVar4 + 0x30) + lVar1 * 0x18);
      } while (*(uint *)(*(long *)(lVar4 + 0x30) + 8 + lVar1 * 0x18) != _DAT_0f6e63b4);
      *plVar8 = *plVar6;
      func_0x048af970(lVar4 + 0x18);
LAB_0ec5ee06:
      func_0x0ec5f2d0(&stack0x00000020,*unaff_R14 + 0x18);
      *(long **)(in_stack_00000018 + 4) = in_stack_00000030;
      *(undefined1 **)(in_stack_00000018 + 6) = in_stack_00000038;
      *in_stack_00000018 = uStack0000000000000020;
      in_stack_00000018[1] = uStack0000000000000024;
      in_stack_00000018[2] = uStack0000000000000028;
      in_stack_00000018[3] = uStack000000000000002c;
    }
    lVar4 = func_0x0c4b9b00(*unaff_R14 + 0x18);
    if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (*(long *)(lVar4 + 0x68) != 0)) {
      *(bool *)(unaff_R14 + 6) = unaff_EBP == 0;
      goto joined_r0x0ec5f16b;
    }
    unaff_R14 = &stack0x00000058;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000030 = (long *)0x0;
    in_stack_00000038 = (undefined1 *)0x0;
    _uStack0000000000000020 = (long *)0x0;
    _uStack0000000000000028 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0x3f600000;
    func_0x048afb10(unaff_R14,8);
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
    *puVar5 = &UNK_0f4df1d8;
    if (_uStack0000000000000020 != (long *)0x0) {
      lVar4 = *_uStack0000000000000020;
      _uStack0000000000000020 = puVar5;
      (**(code **)(lVar4 + 8))();
      puVar5 = _uStack0000000000000020;
    }
    _uStack0000000000000020 = puVar5;
    unaff_R15 = (long *)&stack0x00000028;
    if ((_uStack0000000000000028 & 1) == 0) {
      if ((unaff_retaddr & 1) == 0) {
        in_stack_00000030 = in_stack_00000008;
        _uStack0000000000000028 = unaff_retaddr;
        in_stack_00000038 = in_stack_00000010;
      }
      else {
        func_0x04885070(unaff_R15,in_stack_00000010,in_stack_00000008);
      }
    }
    else {
      plVar6 = (long *)(unaff_retaddr >> 1 & 0x7f);
      puVar3 = &stack0x00000001;
      if ((unaff_retaddr & 1) != 0) {
        plVar6 = in_stack_00000008;
        puVar3 = in_stack_00000010;
      }
      func_0x04885120(unaff_R15,puVar3,plVar6);
    }
    if (DAT_0f5509f0 == '\0') goto LAB_0ec5f1f8;
  }
  else {
    func_0x04882e30();
LAB_0ec5f1f8:
    iVar2 = func_0x04108328(&DAT_0f5509f0);
    if (iVar2 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar5 = _uStack0000000000000020;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef43980;
  _uStack0000000000000020 = (undefined8 *)0x0;
  plVar6[3] = (long)puVar5;
  plVar6[6] = unaff_R15[2];
  lVar4 = unaff_R15[1];
  plVar6[4] = *unaff_R15;
  plVar6[5] = lVar4;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
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
  in_stack_000000d0 = plVar6 + 3;
  in_stack_000000d8 = plVar6;
  func_0x048afd20(in_stack_00000018,&stack0x000000c8);
  plVar6 = in_stack_000000d8;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar8 = in_stack_000000d8 + 1;
    lVar4 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar8 = in_stack_000000e8 + 1;
    lVar4 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x048aeca0(&stack0x00000020);
joined_r0x0ec5f16b:
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
  }
  return;
}


