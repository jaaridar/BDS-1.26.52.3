/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4894d10 (ELF vaddr 0x4794d10)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[0412c2d0, 0412c2f1] [04894d10, 04894d3f]]
 * Ghidra: FUN_04894d10
 */


void FUN_04894d10(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0412c2d0 */  MOV RAX,qword ptr [RDI + 0x10]
/* 0412c2d4 */  TEST RAX,RAX
/* 0412c2d7 */  JZ 0x0412c2ec
/* 0412c2d9 */  MOV RAX,-0x1
/* 0412c2e0 */  XADD.LOCK qword ptr [RDI + 0x10],RAX
/* 0412c2e6 */  TEST RAX,RAX
/* 0412c2e9 */  JZ 0x0412c2ec
/* 0412c2eb */  RET
/* 0412c2ec */  MOV RAX,qword ptr [RDI]
/* 0412c2ef */  JMP qword ptr [RAX + 0x20]
/* 04894d10 */  PUSH RBX
/* 04894d11 */  MOV RBX,qword ptr [RDI + 0x8]
/* 04894d15 */  TEST RBX,RBX
/* 04894d18 */  JZ 0x04894d2c
/* 04894d1a */  MOV RAX,-0x1
/* 04894d21 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 04894d27 */  TEST RAX,RAX
/* 04894d2a */  JZ 0x04894d2e
/* 04894d2c */  POP RBX
/* 04894d2d */  RET
/* 04894d2e */  MOV RAX,qword ptr [RBX]
/* 04894d31 */  MOV RDI,RBX
/* 04894d34 */  CALL qword ptr [RAX + 0x10]
/* 04894d37 */  MOV RDI,RBX
/* 04894d3a */  POP RBX
/* 04894d3b */  JMP 0x0412c2d0
