/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b10d0
 * Label: callee-of:0x7e0b3b0
 * Body:  [[047b0fcc, 047b0fe1] [047b10d0, 047b113c]]
 * Ghidra: FUN_047b10d0
 */


ulong FUN_047b10d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  code *unaff_R14;
  ulong uVar3;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  
  pbVar1 = (byte *)(param_4 * 5 + -0x11);
  *pbVar1 = *pbVar1 & (byte)param_4;
  iVar2 = (*unaff_R14)(param_1,in_stack_00000018,in_stack_00000018);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = (*unaff_R14)();
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      iVar2 = func_0x04771470();
      uVar3 = (ulong)(iVar2 != 0);
    }
  }
  func_0x047729b0();
  func_0x047726d0(in_stack_00000040);
  return uVar3;
}


