/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeec74c0 (ELF vaddr 0xedc74c0)
 * Label: callee-of:0x485b6e0
 * Body:  [[0eec74c0, 0eec7540]]
 * Ghidra: FUN_0eec74c0
 */


void FUN_0eec74c0(ulong param_1,undefined8 param_2)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  
  if (DAT_0f7b9d08 == '\0') {
    DAT_0f7b9d08 = '\x01';
    puVar2 = &UNK_013a8e32;
    if (0x1f400000 < param_1) {
      puVar2 = &UNK_012a0bfc;
    }
    cVar1 = func_0x0eeddcf0(puVar2,&UNK_01198d5e,0x47,&UNK_0145bad8,&UNK_01306baf,param_1,param_2,
                            0x1f400000);
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = (code *)&UNK_0eec7550;
      if (0x1f400000 < param_1) {
        UNRECOVERED_JUMPTABLE = (code *)&UNK_0eede830;
      }
                    /* WARNING: Could not recover jumptable at 0x0eec753d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0eec74c0 */  PUSH RBX
/* 0eec74c1 */  CMP byte ptr [0x0f7b9d08],0x0
/* 0eec74c8 */  JNZ 0x0eec753f
/* 0eec74ca */  MOV R10,RSI
/* 0eec74cd */  MOV RBX,RDI
/* 0eec74d0 */  MOV byte ptr [0x0f7b9d08],0x1
/* 0eec74d7 */  CMP RDI,0x1f400001
/* 0eec74de */  LEA RAX,[0x12a0bfc]
/* 0eec74e5 */  LEA RDI,[0x13a8e32]
/* 0eec74ec */  CMOVNC RDI,RAX
/* 0eec74f0 */  LEA RSI,[0x1198d5e]
/* 0eec74f7 */  LEA RCX,[0x145bad8]
/* 0eec74fe */  LEA R8,[0x1306baf]
/* 0eec7505 */  MOV EDX,0x47
/* 0eec750a */  MOV R9,RBX
/* 0eec750d */  XOR EAX,EAX
/* 0eec750f */  PUSH 0x1f400000
/* 0eec7514 */  PUSH R10
/* 0eec7516 */  CALL 0x0eeddcf0
/* 0eec751b */  ADD RSP,0x10
/* 0eec751f */  TEST AL,AL
/* 0eec7521 */  JZ 0x0eec753f
/* 0eec7523 */  CMP RBX,0x1f400001
/* 0eec752a */  LEA RAX,[0xeede830]
/* 0eec7531 */  LEA RCX,[0xeec7550]
/* 0eec7538 */  CMOVNC RCX,RAX
/* 0eec753c */  POP RBX
/* 0eec753d */  JMP RCX
/* 0eec753f */  POP RBX
/* 0eec7540 */  RET
