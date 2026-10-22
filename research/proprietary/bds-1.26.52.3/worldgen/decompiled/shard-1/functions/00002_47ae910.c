/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ae910 (ELF vaddr 0x47ae910)
 * Label: callee-of:0x871a310
 * Body:  [[0412c2d0, 0412c2f1] [048ae910, 048ae93f]]
 * Ghidra: FUN_048ae910
 */


void FUN_048ae910(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
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
/* 048ae910 */  PUSH RBX
/* 048ae911 */  MOV RBX,qword ptr [RDI + 0x10]
/* 048ae915 */  TEST RBX,RBX
/* 048ae918 */  JZ 0x048ae92c
/* 048ae91a */  MOV RAX,-0x1
/* 048ae921 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 048ae927 */  TEST RAX,RAX
/* 048ae92a */  JZ 0x048ae92e
/* 048ae92c */  POP RBX
/* 048ae92d */  RET
/* 048ae92e */  MOV RAX,qword ptr [RBX]
/* 048ae931 */  MOV RDI,RBX
/* 048ae934 */  CALL qword ptr [RAX + 0x10]
/* 048ae937 */  MOV RDI,RBX
/* 048ae93a */  POP RBX
/* 048ae93b */  JMP 0x0412c2d0
