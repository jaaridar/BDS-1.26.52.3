/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535b5d0 (ELF vaddr 0x525b5d0)
 * Label: callee-of:0x5253d60
 * Body:  [[0535b5d0, 0535b5dd]]
 * Ghidra: FUN_0535b5d0
 */


void FUN_0535b5d0(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


