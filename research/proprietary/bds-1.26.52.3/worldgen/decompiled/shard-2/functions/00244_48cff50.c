/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cff50 (ELF vaddr 0x48cff50)
 * Label: callee-of:0x5250120
 * Body:  [[049cff50, 049cff5d]]
 * Ghidra: FUN_049cff50
 */


void FUN_049cff50(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


