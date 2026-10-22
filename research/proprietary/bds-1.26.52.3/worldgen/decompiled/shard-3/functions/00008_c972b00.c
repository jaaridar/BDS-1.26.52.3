/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972b00
 * Label: WorldGenerator::vslot41
 * Body:  [[0c972b00, 0c972b29]]
 * Ghidra: wg_WorldGenerator__vslot41
 */


void wg_WorldGenerator__vslot41(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0b935480(&stack0x00000020);
  uVar2 = func_0x0eee2d70();
  func_0x09e00460(&stack0x00000050);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0c972b00 */  ADC AL,0x1
/* 0c972b02 */  LEA RDI,[RSP + 0x20]
/* 0c972b07 */  CALL 0x0b935480
/* 0c972b0c */  MOV RDI,RBX
/* 0c972b0f */  CALL 0x0eee2d70
/* 0c972b14 */  MOV RBX,RAX
/* 0c972b17 */  LEA RDI,[RSP + 0x50]
/* 0c972b1c */  CALL 0x09e00460
/* 0c972b21 */  MOV RDI,RBX
/* 0c972b24 */  CALL 0x0eee2d70
/* 0c972b29 */  INT3
