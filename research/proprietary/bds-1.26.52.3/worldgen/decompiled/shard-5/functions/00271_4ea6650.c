/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4fa6650 (ELF vaddr 0x4ea6650)
 * Label: callee-of:0xc961580
 * Body:  [[04fa6650, 04fa665d]]
 * Ghidra: FUN_04fa6650
 */


void FUN_04fa6650(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


