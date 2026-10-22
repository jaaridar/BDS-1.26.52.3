/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412c2d0 (ELF vaddr 0x402c2d0)
 * Label: callee-of:0x4de9260
 * Body:  [[0412c2d0, 0412c2f1]]
 * Ghidra: FUN_0412c2d0
 */


void FUN_0412c2d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1[2] != 0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
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
