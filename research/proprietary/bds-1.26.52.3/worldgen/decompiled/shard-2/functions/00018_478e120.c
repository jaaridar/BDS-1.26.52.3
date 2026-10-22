/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x488e120 (ELF vaddr 0x478e120)
 * Label: callee-of:0xda370f0
 * Body:  [[0488e120, 0488e18e]]
 * Ghidra: FUN_0488e120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0488e120(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550ae8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550ae8), iVar1 != 0)) {
    _DAT_0f550ae0 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f550ae8);
  }
  *param_1 = _DAT_0f550ae0;
  param_1[1] = 0x48b5725f;
  *(undefined **)(param_1 + 2) = &UNK_01221a3b;
  param_1[4] = 4;
  param_1[5] = 0;
  return;
}



/* ---- assembly ---- */
/* 0488e120 */  MOVZX EAX,byte ptr [0x0f550ae8]
/* 0488e127 */  TEST AL,AL
/* 0488e129 */  JZ 0x0488e14e
/* 0488e12b */  MOV EAX,dword ptr [0x0f550ae0]
/* 0488e131 */  MOV dword ptr [RDI],EAX
/* 0488e133 */  MOV dword ptr [RDI + 0x4],0x48b5725f
/* 0488e13a */  LEA RAX,[0x1221a3b]
/* 0488e141 */  MOV qword ptr [RDI + 0x8],RAX
/* 0488e145 */  MOV qword ptr [RDI + 0x10],0x4
/* 0488e14d */  RET
/* 0488e14e */  PUSH RBX
/* 0488e14f */  LEA RAX,[0xf550ae8]
/* 0488e156 */  MOV RBX,RDI
/* 0488e159 */  MOV RDI,RAX
/* 0488e15c */  CALL 0x04108328
/* 0488e161 */  MOV RDI,RBX
/* 0488e164 */  TEST EAX,EAX
/* 0488e166 */  JZ 0x0488e18c
/* 0488e168 */  MOV EAX,dword ptr [0x0f550af0]
/* 0488e16e */  LEA ECX,[RAX + 0x1]
/* 0488e171 */  MOV dword ptr [0x0f550af0],ECX
/* 0488e177 */  MOV dword ptr [0x0f550ae0],EAX
/* 0488e17d */  LEA RDI,[0xf550ae8]
/* 0488e184 */  CALL 0x0410844d
/* 0488e189 */  MOV RDI,RBX
/* 0488e18c */  POP RBX
/* 0488e18d */  JMP 0x0488e12b
