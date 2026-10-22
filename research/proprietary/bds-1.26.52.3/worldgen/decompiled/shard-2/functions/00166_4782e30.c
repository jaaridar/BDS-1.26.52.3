/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882e30 (ELF vaddr 0x4782e30)
 * Label: callee-of:0x6140f00
 * Body:  [[04882e30, 04882e3d]]
 * Ghidra: FUN_04882e30
 */


void FUN_04882e30(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_01429271);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


