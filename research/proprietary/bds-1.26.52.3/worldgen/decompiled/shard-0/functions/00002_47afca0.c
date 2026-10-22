/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afca0 (ELF vaddr 0x47afca0)
 * Label: callee-of:0x871a310
 * Body:  [[048afca0, 048afcbd] [048afcc0, 048afd0f]]
 * Ghidra: FUN_048afca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048afca0(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar3 = param_1[1];
  lVar2 = lVar1;
  if (lVar1 != lVar3) {
    do {
      in_RAX = 0;
      if (*(code **)(lVar3 + -0x10) != (code *)0x0) {
        in_RAX = (**(code **)(lVar3 + -0x10))(lVar3 + -0x28);
      }
      if ((*(byte *)(lVar3 + -0x48) & 1) != 0) {
        in_RAX = thunk_FUN_0ee326a0(*(undefined8 *)(lVar3 + -0x38),
                                    *(ulong *)(lVar3 + -0x48) & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != lVar1);
    lVar2 = *param_1;
  }
  param_1[1] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_RAX;
}



/* ---- assembly ---- */
/* 048afca0 */  PUSH R15
/* 048afca2 */  PUSH R14
/* 048afca4 */  PUSH RBX
/* 048afca5 */  MOV R14,qword ptr [RDI]
/* 048afca8 */  TEST R14,R14
/* 048afcab */  JZ 0x048afd0a
/* 048afcad */  MOV RBX,RDI
/* 048afcb0 */  MOV R15,qword ptr [RDI + 0x8]
/* 048afcb4 */  MOV RDI,R14
/* 048afcb7 */  CMP R14,R15
/* 048afcba */  JNZ 0x048afcc9
/* 048afcbc */  JMP 0x048afcf5
/* 048afcc0 */  ADD R15,-0x50
/* 048afcc4 */  CMP R15,R14
/* 048afcc7 */  JZ 0x048afcf2
/* 048afcc9 */  MOV RAX,qword ptr [R15 + -0x10]
/* 048afccd */  TEST RAX,RAX
/* 048afcd0 */  JZ 0x048afcd8
/* 048afcd2 */  LEA RDI,[R15 + -0x28]
/* 048afcd6 */  CALL RAX
/* 048afcd8 */  TEST byte ptr [R15 + -0x48],0x1
/* 048afcdd */  JZ 0x048afcc0
/* 048afcdf */  MOV RSI,qword ptr [R15 + -0x48]
/* 048afce3 */  MOV RDI,qword ptr [R15 + -0x38]
/* 048afce7 */  AND RSI,-0x2
/* 048afceb */  CALL 0x0412a280
/* 048afcf0 */  JMP 0x048afcc0
/* 048afcf2 */  MOV RDI,qword ptr [RBX]
/* 048afcf5 */  MOV qword ptr [RBX + 0x8],R14
/* 048afcf9 */  MOV RSI,qword ptr [RBX + 0x10]
/* 048afcfd */  SUB RSI,RDI
/* 048afd00 */  POP RBX
/* 048afd01 */  POP R14
/* 048afd03 */  POP R15
/* 048afd05 */  JMP 0x0412a280
/* 048afd0a */  POP RBX
/* 048afd0b */  POP R14
/* 048afd0d */  POP R15
/* 048afd0f */  RET
