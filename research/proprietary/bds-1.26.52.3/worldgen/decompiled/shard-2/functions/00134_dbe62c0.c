/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdbe62c0
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dbe5e32, 0dbe5e43] [0dbe62c0, 0dbe62d9] [0dbe62fd, 0dbe63ad] [0dbe63b0, 0dbe63d2] [0dbe63e8, 0dbe643d] [0dbe6498, 0dbe64c0]]
 * Ghidra: FUN_0dbe62c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0dbe62c0(void)

{
  undefined8 *puVar1;
  long in_RAX;
  long lVar2;
  long unaff_RBP;
  long unaff_R14;
  long unaff_R15;
  long lVar3;
  long lStack0000000000000008;
  long lStack0000000000000018;
  long lStack0000000000000020;
  undefined8 in_stack_00000058;
  
  lVar2 = (**(code **)(in_RAX + 0x10))(&DAT_0f5463b0);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x0eec74c0();
  }
  lVar3 = unaff_R15 - unaff_R14;
  lStack0000000000000018 = lVar2 + lVar3;
  lStack0000000000000020 = lVar2 + unaff_RBP;
  lStack0000000000000008 = lVar2;
  if (lVar3 == unaff_RBP) {
    if (unaff_R15 == unaff_R14) {
      lStack0000000000000018 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (lStack0000000000000018 == 0) {
        func_0x0eec74c0(0x40,0);
      }
      lStack0000000000000020 = lStack0000000000000018 + 0x40;
      lStack0000000000000008 = lStack0000000000000018;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,lVar3);
      }
    }
    else {
      lStack0000000000000018 =
           lStack0000000000000018 +
           (((lVar3 >> 6) - ((lVar3 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe) * -0x20;
    }
  }
  func_0x0dbe6a90(lStack0000000000000018,in_stack_00000058);
  func_0x06fd70e0();
  lVar2 = lStack0000000000000018 + 0x40;
  while (lStack0000000000000018 != lVar2) {
    lVar3 = lVar2 + -0x40;
    puVar1 = (undefined8 *)(lVar2 + -0x28);
    lVar2 = lVar3;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  if (lStack0000000000000008 != 0) {
    func_0x0412a280(lStack0000000000000008,lStack0000000000000020 - lStack0000000000000008);
  }
  return 1;
}


