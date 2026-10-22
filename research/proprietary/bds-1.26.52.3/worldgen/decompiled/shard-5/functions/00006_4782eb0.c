/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882eb0 (ELF vaddr 0x4782eb0)
 * Label: callee-of:0x4de9260
 * Body:  [[04882eb0, 04882edc]]
 * Ghidra: FUN_04882eb0
 */


void FUN_04882eb0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x041086b0(8);
  func_0x0412a430(uVar2);
  func_0x041088a0(uVar2,&UNK_0eeebbc0,&SUB_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 04882eb0 */  PUSH RBX
/* 04882eb1 */  MOV EDI,0x8
/* 04882eb6 */  CALL 0x041086b0
/* 04882ebb */  MOV RBX,RAX
/* 04882ebe */  MOV RDI,RAX
/* 04882ec1 */  CALL 0x0412a430
/* 04882ec6 */  LEA RSI,[0xeeebbc0]
/* 04882ecd */  LEA RDX,[0x412a380]
/* 04882ed4 */  MOV RDI,RBX
/* 04882ed7 */  CALL 0x041088a0
/* 04882edc */  INT3
