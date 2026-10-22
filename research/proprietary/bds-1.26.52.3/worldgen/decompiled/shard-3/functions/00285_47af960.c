/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48af960 (ELF vaddr 0x47af960)
 * Label: callee-of:0xd1d78f0
 * Body:  [[048af960, 048af96d]]
 * Ghidra: FUN_048af960
 */


void FUN_048af960(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


