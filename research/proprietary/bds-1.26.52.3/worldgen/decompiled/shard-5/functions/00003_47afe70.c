/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afe70 (ELF vaddr 0x47afe70)
 * Label: callee2-of:0x7e4b530
 * Body:  [[048afe70, 048afede]]
 * Ghidra: FUN_048afe70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048afe70(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550a00 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550a00), iVar1 != 0)) {
    _DAT_0f5509f8 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    FUN_0410844d(&DAT_0f550a00);
  }
  *param_1 = _DAT_0f5509f8;
  param_1[1] = -0x2b3da790;
  *(undefined **)(param_1 + 2) = &UNK_013c48c4;
  param_1[4] = 0x2d;
  param_1[5] = 0;
  return;
}



/* ---- assembly ---- */
/* 048afe70 */  MOVZX EAX,byte ptr [0x0f550a00]
/* 048afe77 */  TEST AL,AL
/* 048afe79 */  JZ 0x048afe9e
/* 048afe7b */  MOV EAX,dword ptr [0x0f5509f8]
/* 048afe81 */  MOV dword ptr [RDI],EAX
/* 048afe83 */  MOV dword ptr [RDI + 0x4],0xd4c25870
/* 048afe8a */  LEA RAX,[0x13c48c4]
/* 048afe91 */  MOV qword ptr [RDI + 0x8],RAX
/* 048afe95 */  MOV qword ptr [RDI + 0x10],0x2d
/* 048afe9d */  RET
/* 048afe9e */  PUSH RBX
/* 048afe9f */  LEA RAX,[0xf550a00]
/* 048afea6 */  MOV RBX,RDI
/* 048afea9 */  MOV RDI,RAX
/* 048afeac */  CALL 0x04108328
/* 048afeb1 */  MOV RDI,RBX
/* 048afeb4 */  TEST EAX,EAX
/* 048afeb6 */  JZ 0x048afedc
/* 048afeb8 */  MOV EAX,dword ptr [0x0f550af0]
/* 048afebe */  LEA ECX,[RAX + 0x1]
/* 048afec1 */  MOV dword ptr [0x0f550af0],ECX
/* 048afec7 */  MOV dword ptr [0x0f5509f8],EAX
/* 048afecd */  LEA RDI,[0xf550a00]
/* 048afed4 */  CALL 0x0410844d
/* 048afed9 */  MOV RDI,RBX
/* 048afedc */  POP RBX
/* 048afedd */  JMP 0x048afe7b
