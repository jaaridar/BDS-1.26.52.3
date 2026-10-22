/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afe40 (ELF vaddr 0x47afe40)
 * Label: callee2-of:0x7e4b530
 * Body:  [[048afe40, 048afe6f]]
 * Ghidra: FUN_048afe40
 */


void FUN_048afe40(long param_1)

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
/* 048afe40 */  PUSH RBX
/* 048afe41 */  MOV RBX,qword ptr [RDI + 0x8]
/* 048afe45 */  TEST RBX,RBX
/* 048afe48 */  JZ 0x048afe5c
/* 048afe4a */  MOV RAX,-0x1
/* 048afe51 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 048afe57 */  TEST RAX,RAX
/* 048afe5a */  JZ 0x048afe5e
/* 048afe5c */  POP RBX
/* 048afe5d */  RET
/* 048afe5e */  MOV RAX,qword ptr [RBX]
/* 048afe61 */  MOV RDI,RBX
/* 048afe64 */  CALL qword ptr [RAX + 0x10]
/* 048afe67 */  MOV RDI,RBX
/* 048afe6a */  POP RBX
/* 048afe6b */  JMP 0x0412c2d0
