/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412e5e0 (ELF vaddr 0x402e5e0)
 * Label: callee-of:0x4de9260
 * Body:  [[0412e5e0, 0412e656] [0eee2ee0, 0eee2ee5]]
 * Ghidra: FUN_0412e5e0
 */


void FUN_0412e5e0(long *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_3 < 0x17) {
    *(char *)param_1 = (char)param_3 * '\x02';
    pcVar3 = (char *)((long)param_1 + 1);
  }
  else {
    if (0xfffffffffffffff7 < param_3) {
      func_0x04882e30();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      lVar2 = (param_3 | 7) + 1;
    }
    pcVar3 = (char *)func_0x0ee32660(lVar2);
    param_1[2] = (long)pcVar3;
    *param_1 = lVar2 + 1;
    param_1[1] = param_3;
  }
  (*(code *)PTR_memmove_0f546508)(pcVar3,param_2,param_3 + 1);
  return;
}



/* ---- assembly ---- */
/* 0412e5e0 */  PUSH R15
/* 0412e5e2 */  PUSH R14
/* 0412e5e4 */  PUSH R12
/* 0412e5e6 */  PUSH RBX
/* 0412e5e7 */  PUSH RAX
/* 0412e5e8 */  CMP RDX,0x16
/* 0412e5ec */  JA 0x0412e5f8
/* 0412e5ee */  LEA EAX,[RDX + RDX*0x1]
/* 0412e5f1 */  MOV byte ptr [RDI],AL
/* 0412e5f3 */  INC RDI
/* 0412e5f6 */  JMP 0x0412e63e
/* 0412e5f8 */  CMP RDX,-0x8
/* 0412e5fc */  JNC 0x0412e651
/* 0412e5fe */  MOV R15,RDI
/* 0412e601 */  MOV R14,RSI
/* 0412e604 */  MOV RAX,RDX
/* 0412e607 */  OR RAX,0x7
/* 0412e60b */  LEA RCX,[RAX + 0x1]
/* 0412e60f */  CMP RAX,0x17
/* 0412e613 */  MOV EBX,0x1a
/* 0412e618 */  CMOVNZ RBX,RCX
/* 0412e61c */  MOV RDI,RBX
/* 0412e61f */  MOV R12,RDX
/* 0412e622 */  CALL 0x0ee32660
/* 0412e627 */  MOV RDX,R12
/* 0412e62a */  MOV qword ptr [R15 + 0x10],RAX
/* 0412e62e */  INC RBX
/* 0412e631 */  MOV qword ptr [R15],RBX
/* 0412e634 */  MOV qword ptr [R15 + 0x8],R12
/* 0412e638 */  MOV RDI,RAX
/* 0412e63b */  MOV RSI,R14
/* 0412e63e */  INC RDX
/* 0412e641 */  ADD RSP,0x8
/* 0412e645 */  POP RBX
/* 0412e646 */  POP R12
/* 0412e648 */  POP R14
/* 0412e64a */  POP R15
/* 0412e64c */  JMP 0x0eee2ee0
/* 0412e651 */  CALL 0x04882e30
/* 0412e656 */  INT3
/* 0eee2ee0 */  JMP qword ptr [0x0f546508]
