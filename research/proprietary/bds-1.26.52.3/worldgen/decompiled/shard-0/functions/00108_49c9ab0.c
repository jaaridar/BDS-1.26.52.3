/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49c9ab0
 * Label: string:random_spread_canopy
 * Body:  [[049c9ab0, 049c9ab7]]
 * Ghidra: FUN_049c9ab0
 */


void FUN_049c9ab0(void)

{
  code *pcVar1;
  undefined4 unaff_EBX;
  
  func_0x0eee2d70(unaff_EBX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


