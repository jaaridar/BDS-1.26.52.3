/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe76d070
 * Label: SharedTypes::v1_20_60::MultinoiseGenerationRulesBiomeJsonComponent::vslot1
 * Body:  [[0e76d070, 0e76d3ac] [0e76d495, 0e76d4c5]]
 * Ghidra: wg_SharedTypes__v1_20_60__MultinoiseGenerationRulesBiomeJsonComponent__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_20_60__MultinoiseGenerationRulesBiomeJsonComponent__vslot1(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *unaff_R14;
  bool bVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  byte bStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  long *plStack0000000000000020;
  ulong uStack0000000000000028;
  long *plStack0000000000000030;
  long lStack0000000000000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
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
  
  lStack0000000000000038 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  uStack0000000000000028 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  lStack0000000000000080 = 0;
  uStack0000000000000088 = 0x3f600000;
  plStack0000000000000020 = param_1;
  plStack0000000000000030 = param_1;
  func_0x048afb10();
  _uStack00000000000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar3 = &UNK_0f4c9760;
  if (plStack0000000000000020 != (long *)0x0) {
    lVar6 = *plStack0000000000000020;
    plStack0000000000000020 = puVar3;
    (**(code **)(lVar6 + 8))();
    puVar3 = plStack0000000000000020;
  }
  plStack0000000000000020 = puVar3;
  if ((uStack0000000000000028 & 1) == 0) {
    if ((_bStack0000000000000008 & 1) == 0) {
      lStack0000000000000038 = in_stack_00000018;
      uStack0000000000000028 = CONCAT44(uStack000000000000000c,_bStack0000000000000008);
      plStack0000000000000030 = (long *)CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    else {
      func_0x04885070(&stack0x00000028,in_stack_00000018,
                      CONCAT44(uStack0000000000000014,uStack0000000000000010));
    }
  }
  else {
    bVar7 = (_bStack0000000000000008 & 1) != 0;
    lVar6 = (long)&stack0x00000008 + 1;
    if (bVar7) {
      lVar6 = in_stack_00000018;
    }
    uVar5 = (ulong)(bStack0000000000000008 >> 1);
    if (bVar7) {
      uVar5 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    func_0x04885120(&stack0x00000028,lVar6,uVar5);
  }
  if (DAT_0f5509f0 == '\0') {
    iVar2 = func_0x04108328(&DAT_0f5509f0);
    if (iVar2 != 0) {
      func_0x048afe70(0xf5509d8);
      func_0x0410844d(&DAT_0f5509f0);
    }
  }
  in_stack_000000c8 = _DAT_0f5509dc;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  puVar3 = plStack0000000000000020;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0ef43980;
  in_stack_000000d0 = plVar4 + 3;
  plStack0000000000000020 = (long *)0x0;
  plVar4[3] = (long)puVar3;
  plVar4[6] = lStack0000000000000038;
  plVar4[4] = uStack0000000000000028;
  plVar4[5] = (long)plStack0000000000000030;
  uStack0000000000000028 = 0;
  plStack0000000000000030 = (long *)0x0;
  lStack0000000000000038 = 0;
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
  plVar4[0xf] = lStack0000000000000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  lStack0000000000000080 = 0;
  *(undefined4 *)(plVar4 + 0x10) = uStack0000000000000088;
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
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar4);
    }
  }
  plVar4 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((_bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT44(uStack000000000000000c,_bStack0000000000000008) & 0xfffffffffffffffe);
  }
  return;
}


