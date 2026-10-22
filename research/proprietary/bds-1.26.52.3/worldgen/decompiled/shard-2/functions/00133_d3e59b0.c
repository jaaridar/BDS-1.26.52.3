/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e59b0
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d3e5903, 0d3e590d] [0d3e59a0, 0d3e5ada]]
 * Ghidra: FUN_0d3e59b0
 */


undefined1  [16] FUN_0d3e59b0(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  byte unaff_BPL;
  byte bVar8;
  ulong uVar9;
  byte unaff_R12B;
  byte bVar10;
  int unaff_R13D;
  long unaff_R14;
  long *unaff_R15;
  undefined1 auVar11 [16];
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int in_stack_00000018;
  int in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
  while (unaff_R13D = unaff_R13D + 1, in_EAX != 1) {
    sVar1 = (**(code **)(*unaff_R15 + 0xb8))();
    iVar5 = (int)sVar1;
    if (((*(char *)(unaff_R14 + 0x34) == '\x01') && (iStack0000000000000008 < iVar5)) ||
       ((*(char *)(unaff_R14 + 0x44) == '\x01' && (iVar5 < iStack0000000000000010))))
    goto LAB_0d3e5a6f;
    unaff_BPL = unaff_BPL | iStack000000000000000c <= iVar5;
    unaff_R12B = unaff_R12B | iVar5 <= iStack0000000000000014;
    in_EAX = in_stack_00000018 + unaff_R13D + 1;
  }
  iVar5 = -1;
  do {
    bVar10 = unaff_R12B;
    bVar8 = unaff_BPL;
    sVar1 = (**(code **)(*unaff_R15 + 0xb8))();
    iVar6 = (int)sVar1;
    if (((*(char *)(unaff_R14 + 0x34) == '\x01') && (iStack0000000000000008 < iVar6)) ||
       ((*(char *)(unaff_R14 + 0x44) == '\x01' && (iVar6 < iStack0000000000000010))))
    goto LAB_0d3e5a6f;
    iVar2 = in_stack_00000020 + iVar5;
    iVar5 = iVar5 + -1;
    unaff_BPL = bVar8 | iStack000000000000000c <= iVar6;
    unaff_R12B = bVar10 | iVar6 <= iStack0000000000000014;
  } while (iVar2 != 0);
  uVar7 = 0;
  if ((bVar8 & 1) == 0 && iStack000000000000000c > iVar6) {
    uVar4 = 0;
    uVar3 = 0;
    uVar9 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar9 = 0;
    if ((bVar10 & 1) != 0 || iVar6 <= iStack0000000000000014) {
      auVar11 = (**(code **)(**(long **)(*(long *)(in_stack_00000028 + 0x18) + in_stack_00000030 * 8
                                        ) + 0x10))();
      uVar9 = auVar11._0_8_ & 0xff;
      uVar3 = auVar11._0_8_ & 0xffffffffffffff00;
      uVar7 = auVar11._8_8_ & 0xff00000000;
      uVar4 = auVar11._8_8_ & 0xffffffff;
    }
  }
LAB_0d3e5ac6:
  auVar11._8_8_ = uVar7 | uVar4;
  auVar11._0_8_ = uVar3 | uVar9;
  return auVar11;
LAB_0d3e5a6f:
  uVar4 = 0;
  uVar3 = 0;
  uVar9 = 0;
  uVar7 = 0;
  goto LAB_0d3e5ac6;
}


