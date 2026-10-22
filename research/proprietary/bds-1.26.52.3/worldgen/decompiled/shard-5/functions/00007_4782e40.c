/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882e40 (ELF vaddr 0x4782e40)
 * Label: callee2-of:0x4782e30
 * Body:  [[04882e40, 04882e88]]
 * Ghidra: FUN_04882e40
 */


void FUN_04882e40(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = func_0x041086b0(0x10);
  func_0x04882e90(uVar2,param_1);
  uVar3 = func_0x041088a0(uVar2,&UNK_0eeec938,&SUB_0412bce0);
  func_0x04108780(uVar2);
  func_0x0eee2d70(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 04882e40 */  PUSH R14
/* 04882e42 */  PUSH RBX
/* 04882e43 */  PUSH RAX
/* 04882e44 */  MOV R14,RDI
/* 04882e47 */  MOV EDI,0x10
/* 04882e4c */  CALL 0x041086b0
/* 04882e51 */  MOV RBX,RAX
/* 04882e54 */  MOV RDI,RAX
/* 04882e57 */  MOV RSI,R14
/* 04882e5a */  CALL 0x04882e90
/* 04882e5f */  LEA RSI,[0xeeec938]
/* 04882e66 */  LEA RDX,[0x412bce0]
/* 04882e6d */  MOV RDI,RBX
/* 04882e70 */  CALL 0x041088a0
/* 04882e75 */  MOV R14,RAX
/* 04882e78 */  MOV RDI,RBX
/* 04882e7b */  CALL 0x04108780
/* 04882e80 */  MOV RDI,R14
/* 04882e83 */  CALL 0x0eee2d70
/* 04882e88 */  INT3
