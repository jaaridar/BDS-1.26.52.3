/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7baa0 (ELF vaddr 0xc97baa0)
 * Label: callee-of:0xc97b620
 * Body:  [[0ca7baa0, 0ca7baad]]
 * Ghidra: FUN_0ca7baa0
 */


void FUN_0ca7baa0(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


