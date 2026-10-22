/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0ac0 (ELF vaddr 0x47b0ac0)
 * Label: callee-of:0x871a310
 * Body:  [[0412c2d0, 0412c2f1] [048b0ac0, 048b0aef]]
 * Ghidra: FUN_048b0ac0
 */


void FUN_048b0ac0(long param_1)

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
/* 048b0ac0 */  PUSH RBX
/* 048b0ac1 */  MOV RBX,qword ptr [RDI + 0x8]
/* 048b0ac5 */  TEST RBX,RBX
/* 048b0ac8 */  JZ 0x048b0adc
/* 048b0aca */  MOV RAX,-0x1
/* 048b0ad1 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 048b0ad7 */  TEST RAX,RAX
/* 048b0ada */  JZ 0x048b0ade
/* 048b0adc */  POP RBX
/* 048b0add */  RET
/* 048b0ade */  MOV RAX,qword ptr [RBX]
/* 048b0ae1 */  MOV RDI,RBX
/* 048b0ae4 */  CALL qword ptr [RAX + 0x10]
/* 048b0ae7 */  MOV RDI,RBX
/* 048b0aea */  POP RBX
/* 048b0aeb */  JMP 0x0412c2d0
