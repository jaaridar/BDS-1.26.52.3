/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4890760 (ELF vaddr 0x4790760)
 * Label: callee-of:0x493b030
 * Body:  [[04890760, 04890766]]
 * Ghidra: FUN_04890760
 */


void FUN_04890760(void)

{
  code *pcVar1;
  
  func_0x04109e60();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


