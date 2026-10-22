/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882e30 (ELF vaddr 0x4782e30)
 * Label: callee-of:0x5a1f120
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



/* ---- assembly ---- */
/* 04882e30 */  PUSH RAX
/* 04882e31 */  LEA RDI,[0x1429271]
/* 04882e38 */  CALL 0x04882e40
/* 04882e3d */  INT3
