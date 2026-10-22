/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412bcc0 (ELF vaddr 0x402bcc0)
 * Label: br::worldgen::Structure::vslot2
 * Body:  [[0412bcc0, 0412bccf]]
 * Ghidra: wg_br__worldgen__Structure__vslot2
 */


void wg_br__worldgen__Structure__vslot2(void)

{
  code *pcVar1;
  
  FUN_041085a0(&UNK_01198df7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0412bcc0 */  PUSH RAX
/* 0412bcc1 */  LEA RDI,[0x1198df7]
/* 0412bcc8 */  XOR EAX,EAX
/* 0412bcca */  CALL 0x041085a0
/* 0412bccf */  INT3
