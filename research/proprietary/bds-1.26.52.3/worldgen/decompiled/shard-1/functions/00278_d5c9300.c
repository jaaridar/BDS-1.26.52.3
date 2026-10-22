/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c9300 (ELF vaddr 0xd5c9300)
 * Label: callee-of:0xc9687f0
 * Body:  [[0d6c9300, 0d6c930d]]
 * Ghidra: FUN_0d6c9300
 */


void FUN_0d6c9300(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


