/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf9f90 (ELF vaddr 0x5bf9f90)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[0412c2d0, 0412c2f1] [05cf9f90, 05cfa014]]
 * Ghidra: FUN_05cf9f90
 */


/* WARNING: Possible PIC construction at 0x05cf9fff: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05cfa004) */

void FUN_05cf9f90(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[1] != 0) {
    plVar3 = (long *)func_0x0412c300();
    if (plVar3 != (long *)0x0) {
      if (*param_1 != 0) {
        (**(code **)(**(long **)(*param_1 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        goto SUB_0412c2d0;
      }
    }
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
SUB_0412c2d0:
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
/* 05cf9f90 */  PUSH R14
/* 05cf9f92 */  PUSH RBX
/* 05cf9f93 */  SUB RSP,0x18
/* 05cf9f97 */  MOV RBX,RDI
/* 05cf9f9a */  MOV RDI,qword ptr [RDI + 0x8]
/* 05cf9f9e */  TEST RDI,RDI
/* 05cf9fa1 */  JZ 0x05cfa00d
/* 05cf9fa3 */  CALL 0x0412c300
/* 05cf9fa8 */  MOV qword ptr [RSP + 0x10],RAX
/* 05cf9fad */  TEST RAX,RAX
/* 05cf9fb0 */  JZ 0x05cf9fde
/* 05cf9fb2 */  MOV R14,RAX
/* 05cf9fb5 */  MOV RSI,qword ptr [RBX]
/* 05cf9fb8 */  MOV qword ptr [RSP + 0x8],RSI
/* 05cf9fbd */  TEST RSI,RSI
/* 05cf9fc0 */  JZ 0x05cf9fcc
/* 05cf9fc2 */  MOV RDI,qword ptr [RSI + 0x28]
/* 05cf9fc6 */  MOV RAX,qword ptr [RDI]
/* 05cf9fc9 */  CALL qword ptr [RAX + 0x10]
/* 05cf9fcc */  MOV RAX,-0x1
/* 05cf9fd3 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 05cf9fd9 */  TEST RAX,RAX
/* 05cf9fdc */  JZ 0x05cf9ff3
/* 05cf9fde */  MOV RDI,qword ptr [RBX + 0x8]
/* 05cf9fe2 */  TEST RDI,RDI
/* 05cf9fe5 */  JZ 0x05cfa00d
/* 05cf9fe7 */  ADD RSP,0x18
/* 05cf9feb */  POP RBX
/* 05cf9fec */  POP R14
/* 05cf9fee */  JMP 0x0412c2d0
/* 05cf9ff3 */  MOV RAX,qword ptr [R14]
/* 05cf9ff6 */  MOV RDI,R14
/* 05cf9ff9 */  CALL qword ptr [RAX + 0x10]
/* 05cf9ffc */  MOV RDI,R14
/* 05cf9fff */  CALL 0x0412c2d0
/* 05cfa004 */  MOV RDI,qword ptr [RBX + 0x8]
/* 05cfa008 */  TEST RDI,RDI
/* 05cfa00b */  JNZ 0x05cf9fe7
/* 05cfa00d */  ADD RSP,0x18
/* 05cfa011 */  POP RBX
/* 05cfa012 */  POP R14
/* 05cfa014 */  RET
