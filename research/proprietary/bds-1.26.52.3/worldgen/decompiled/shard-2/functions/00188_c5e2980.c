/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e2980 (ELF vaddr 0xc5e2980)
 * Label: callee-of:0x51f3a70
 * Body:  [[0c6e2980, 0c6e298d]]
 * Ghidra: FUN_0c6e2980
 */


void FUN_0c6e2980(void)

{
  code *pcVar1;
  
  func_0x04882ef0(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


