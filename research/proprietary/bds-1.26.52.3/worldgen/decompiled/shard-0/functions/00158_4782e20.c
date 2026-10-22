/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882e20 (ELF vaddr 0x4782e20)
 * Label: callee-of:0x48cac20
 * Body:  [[04882e20, 04882e2b]]
 * Ghidra: FUN_04882e20
 */


void FUN_04882e20(void)

{
  code *pcVar1;
  
  func_0x04108700();
  func_0x04109e60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


