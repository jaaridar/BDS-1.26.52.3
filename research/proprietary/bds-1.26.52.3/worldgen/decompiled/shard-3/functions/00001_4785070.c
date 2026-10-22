/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4885070 (ELF vaddr 0x4785070)
 * Label: callee-of:0x4de9260
 * Body:  [[04885070, 0488511f]]
 * Ghidra: FUN_04885070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_04885070(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 < 0x17) {
    pcVar2 = (char *)((long)param_1 + 1);
    *(char *)param_1 = (char)param_3 * '\x02';
    if (param_3 != 0) {
      func_0x0eee2ee0(pcVar2,param_2,param_3);
    }
  }
  else {
    if (param_3 + 9 < 0x1f) {
      func_0x04882e30();
      pcVar1 = (code *)swi(3);
      puVar3 = (ulong *)(*pcVar1)();
      return puVar3;
    }
    uVar4 = 0x2c;
    if (0x2c < param_3) {
      uVar4 = param_3;
    }
    uVar4 = (uVar4 | 7) + 1;
    pcVar2 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar4);
    if (pcVar2 == (char *)0x0) {
      FUN_0eec74c0(uVar4,0);
    }
    func_0x0eee2f00(pcVar2,param_2,param_3);
    param_1[2] = (ulong)pcVar2;
    *param_1 = uVar4 | 1;
    param_1[1] = param_3;
  }
  pcVar2[param_3] = '\0';
  return param_1;
}



/* ---- assembly ---- */
/* 04885070 */  PUSH R15
/* 04885072 */  PUSH R14
/* 04885074 */  PUSH R13
/* 04885076 */  PUSH R12
/* 04885078 */  PUSH RBX
/* 04885079 */  MOV RBX,RDX
/* 0488507c */  MOV R14,RDI
/* 0488507f */  CMP RDX,0x16
/* 04885083 */  JA 0x048850a1
/* 04885085 */  LEA R15,[R14 + 0x1]
/* 04885089 */  LEA EAX,[RBX + RBX*0x1]
/* 0488508c */  MOV byte ptr [R14],AL
/* 0488508f */  TEST RBX,RBX
/* 04885092 */  JZ 0x048850fc
/* 04885094 */  MOV RDI,R15
/* 04885097 */  MOV RDX,RBX
/* 0488509a */  CALL 0x0eee2ee0
/* 0488509f */  JMP 0x048850fc
/* 048850a1 */  LEA RAX,[RBX + 0x9]
/* 048850a5 */  CMP RAX,0x1e
/* 048850a9 */  JBE 0x0488511a
/* 048850ab */  MOV R13,RSI
/* 048850ae */  CMP RBX,0x2d
/* 048850b2 */  MOV R12D,0x2c
/* 048850b8 */  CMOVNC R12,RBX
/* 048850bc */  OR R12,0x7
/* 048850c0 */  INC R12
/* 048850c3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 048850ca */  LEA RDI,[0xf5463b0]
/* 048850d1 */  MOV RSI,R12
/* 048850d4 */  CALL qword ptr [RAX + 0x10]
/* 048850d7 */  MOV R15,RAX
/* 048850da */  TEST RAX,RAX
/* 048850dd */  JZ 0x0488510e
/* 048850df */  MOV RDI,R15
/* 048850e2 */  MOV RSI,R13
/* 048850e5 */  MOV RDX,RBX
/* 048850e8 */  CALL 0x0eee2f00
/* 048850ed */  MOV qword ptr [R14 + 0x10],R15
/* 048850f1 */  OR R12,0x1
/* 048850f5 */  MOV qword ptr [R14],R12
/* 048850f8 */  MOV qword ptr [R14 + 0x8],RBX
/* 048850fc */  MOV byte ptr [R15 + RBX*0x1],0x0
/* 04885101 */  MOV RAX,R14
/* 04885104 */  POP RBX
/* 04885105 */  POP R12
/* 04885107 */  POP R13
/* 04885109 */  POP R14
/* 0488510b */  POP R15
/* 0488510d */  RET
/* 0488510e */  MOV RDI,R12
/* 04885111 */  XOR ESI,ESI
/* 04885113 */  CALL 0x0eec74c0
/* 04885118 */  JMP 0x048850df
/* 0488511a */  CALL 0x04882e30
/* 0488511f */  INT3
