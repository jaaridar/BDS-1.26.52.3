/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533f340 (ELF vaddr 0x523f340)
 * Label: callee-of:0x5254ab0
 * Body:  [[0533f340, 0533f34d]]
 * Ghidra: FUN_0533f340
 */


void FUN_0533f340(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


