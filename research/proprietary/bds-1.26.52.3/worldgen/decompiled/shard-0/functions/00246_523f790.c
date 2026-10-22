/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533f790 (ELF vaddr 0x523f790)
 * Label: callee-of:0x52518f0
 * Body:  [[0533f790, 0533f79d]]
 * Ghidra: FUN_0533f790
 */


void FUN_0533f790(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


