/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0af0 (ELF vaddr 0x47b0af0)
 * Label: callee-of:0x871a310
 * Body:  [[048b0af0, 048b0b5e]]
 * Ghidra: FUN_048b0af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048b0af0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550a30 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550a30), iVar1 != 0)) {
    _DAT_0f550a28 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f550a30);
  }
  *param_1 = _DAT_0f550a28;
  param_1[1] = -0x45dcb126;
  *(undefined **)(param_1 + 2) = &UNK_01447205;
  param_1[4] = 0x2f;
  param_1[5] = 0;
  return;
}



/* ---- assembly ---- */
/* 048b0af0 */  MOVZX EAX,byte ptr [0x0f550a30]
/* 048b0af7 */  TEST AL,AL
/* 048b0af9 */  JZ 0x048b0b1e
/* 048b0afb */  MOV EAX,dword ptr [0x0f550a28]
/* 048b0b01 */  MOV dword ptr [RDI],EAX
/* 048b0b03 */  MOV dword ptr [RDI + 0x4],0xba234eda
/* 048b0b0a */  LEA RAX,[0x1447205]
/* 048b0b11 */  MOV qword ptr [RDI + 0x8],RAX
/* 048b0b15 */  MOV qword ptr [RDI + 0x10],0x2f
/* 048b0b1d */  RET
/* 048b0b1e */  PUSH RBX
/* 048b0b1f */  LEA RAX,[0xf550a30]
/* 048b0b26 */  MOV RBX,RDI
/* 048b0b29 */  MOV RDI,RAX
/* 048b0b2c */  CALL 0x04108328
/* 048b0b31 */  MOV RDI,RBX
/* 048b0b34 */  TEST EAX,EAX
/* 048b0b36 */  JZ 0x048b0b5c
/* 048b0b38 */  MOV EAX,dword ptr [0x0f550af0]
/* 048b0b3e */  LEA ECX,[RAX + 0x1]
/* 048b0b41 */  MOV dword ptr [0x0f550af0],ECX
/* 048b0b47 */  MOV dword ptr [0x0f550a28],EAX
/* 048b0b4d */  LEA RDI,[0xf550a30]
/* 048b0b54 */  CALL 0x0410844d
/* 048b0b59 */  MOV RDI,RBX
/* 048b0b5c */  POP RBX
/* 048b0b5d */  JMP 0x048b0afb
