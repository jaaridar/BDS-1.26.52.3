/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535b5c0 (ELF vaddr 0x525b5c0)
 * Label: callee-of:0x5254ab0
 * Body:  [[0535b5c0, 0535b5cd]]
 * Ghidra: FUN_0535b5c0
 */


void FUN_0535b5c0(void)

{
  code *pcVar1;
  
  func_0x04882ef0(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


