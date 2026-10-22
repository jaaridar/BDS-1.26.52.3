/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47ae910
 * Label: callee-of:0x871a310
 * Body:  [[047ae910, 047ae929]]
 * Ghidra: FUN_047ae910
 */


undefined8 FUN_047ae910(void)

{
  char *pcVar1;
  long in_RCX;
  long unaff_RBP;
  
  *(char *)(unaff_RBP + 0x39) = *(char *)(unaff_RBP + 0x39) + (char)in_RCX;
  pcVar1 = (char *)(in_RCX * 5 + -1);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  func_0x047707e0();
  return 0;
}


