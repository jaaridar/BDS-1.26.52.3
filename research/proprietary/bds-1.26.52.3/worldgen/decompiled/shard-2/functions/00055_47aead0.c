/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47aead0
 * Label: callee-of:0xda65110
 * Body:  [[047aead0, 047aeb0f] [047aeb13, 047aeb3c]]
 * Ghidra: FUN_047aead0
 */


long FUN_047aead0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_R14;
  long unaff_R15;
  
  iVar1 = func_0x04775d30(param_1,param_2,(ulong)&stack0x00000000 & 0xffffffff);
  if (iVar1 != 0) {
    iVar1 = func_0x04771470();
    if (iVar1 == 0) goto LAB_047aeb23;
    func_0x047c6f20(3,0x79,0x6f,&UNK_0123b9d0,0x15f);
  }
  if (unaff_R15 != unaff_R14) {
    func_0x04770750();
  }
  unaff_R15 = 0;
LAB_047aeb23:
  func_0x047729b0();
  return unaff_R15;
}


