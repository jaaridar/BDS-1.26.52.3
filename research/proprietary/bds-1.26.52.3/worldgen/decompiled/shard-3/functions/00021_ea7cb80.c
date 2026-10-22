/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xea7cb80
 * Label: string:Spawn DensityLimit
 * Body:  [[0ea7cb80, 0ea7cba9] [0ea7cc1f, 0ea7cca7] [0ea7d1c6, 0ea7d1d7]]
 * Ghidra: FUN_0ea7cb80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ea7cb80(void)

{
  ulong unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  ulong uVar1;
  long unaff_R14;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  
  func_0x0eee2f00(unaff_R13 + 8U);
  *(undefined1 *)(unaff_R12 + 8 + unaff_R14) = 0;
  uVar1 = unaff_R13 + 8U & 0xff00ffffffffffff;
  func_0x0ed5ffe0();
  if (((uVar1 | unaff_RBP) & unaff_RBP) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar1 | unaff_RBP & 0xff00ffffffffffff) - 8);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  if ((in_stack_00000040 & 1) != 0) {
    func_0x0412a280(in_stack_00000050,in_stack_00000040 & 0xfffffffffffffffe);
  }
  return;
}


