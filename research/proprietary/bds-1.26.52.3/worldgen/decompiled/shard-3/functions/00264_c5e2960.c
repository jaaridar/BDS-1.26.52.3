/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e2960 (ELF vaddr 0xc5e2960)
 * Label: callee-of:0xc5ce6a0
 * Body:  [[0c6e2960, 0c6e296d]]
 * Ghidra: FUN_0c6e2960
 */


void FUN_0c6e2960(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


