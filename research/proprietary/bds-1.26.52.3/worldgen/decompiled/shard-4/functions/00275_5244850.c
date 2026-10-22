/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5344850 (ELF vaddr 0x5244850)
 * Label: callee-of:0xc967b50
 * Body:  [[05344850, 0534485d]]
 * Ghidra: FUN_05344850
 */


void FUN_05344850(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


