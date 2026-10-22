/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e1af0 (ELF vaddr 0xd1e1af0)
 * Label: callee-of:0xd1d87a0
 * Body:  [[0d2e1af0, 0d2e1afd]]
 * Ghidra: FUN_0d2e1af0
 */


void FUN_0d2e1af0(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


