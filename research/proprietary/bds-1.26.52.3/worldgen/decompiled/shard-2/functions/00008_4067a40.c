/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4167a40 (ELF vaddr 0x4067a40)
 * Label: callee-of:0x4de9260
 * Body:  [[04167a40, 04167a67]]
 * Ghidra: FUN_04167a40
 */


void FUN_04167a40(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0xf5478c0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x04167a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* ---- assembly ---- */
/* 04167a40 */  MOV RDI,qword ptr [RDI]
/* 04167a43 */  LEA RAX,[0xf5478c0]
/* 04167a4a */  CMP RDI,RAX
/* 04167a4d */  JZ 0x04167a61
/* 04167a4f */  MOV RAX,-0x1
/* 04167a56 */  XADD.LOCK qword ptr [RDI + 0x8],RAX
/* 04167a5c */  TEST RAX,RAX
/* 04167a5f */  JZ 0x04167a62
/* 04167a61 */  RET
/* 04167a62 */  MOV RAX,qword ptr [RDI]
/* 04167a65 */  JMP qword ptr [RAX + 0x10]
