/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe79e140
 * Label: callee-of:0xe706340
 * Body:  [[0e79e140, 0e79e144]]
 * Ghidra: FUN_0e79e140
 */


void FUN_0e79e140(void)

{
  byte *pbVar1;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x41);
  *pbVar1 = *pbVar1 | unaff_BL;
  return;
}


