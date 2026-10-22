/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc3e3c0 (ELF vaddr 0xcb3e3c0)
 * Label: callee-of:0x5a1f120
 * Body:  [[0412c2d0, 0412c2f1] [0cc3e3c0, 0cc3e3ef]]
 * Ghidra: FUN_0cc3e3c0
 */


void FUN_0cc3e3c0(long param_1)

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
/* 0cc3e3c0 */  PUSH RBX
/* 0cc3e3c1 */  MOV RBX,qword ptr [RDI + 0x8]
/* 0cc3e3c5 */  TEST RBX,RBX
/* 0cc3e3c8 */  JZ 0x0cc3e3dc
/* 0cc3e3ca */  MOV RAX,-0x1
/* 0cc3e3d1 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0cc3e3d7 */  TEST RAX,RAX
/* 0cc3e3da */  JZ 0x0cc3e3de
/* 0cc3e3dc */  POP RBX
/* 0cc3e3dd */  RET
/* 0cc3e3de */  MOV RAX,qword ptr [RBX]
/* 0cc3e3e1 */  MOV RDI,RBX
/* 0cc3e3e4 */  CALL qword ptr [RAX + 0x10]
/* 0cc3e3e7 */  MOV RDI,RBX
/* 0cc3e3ea */  POP RBX
/* 0cc3e3eb */  JMP 0x0412c2d0
