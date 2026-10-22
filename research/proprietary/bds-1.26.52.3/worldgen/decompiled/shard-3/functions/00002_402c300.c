/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412c300 (ELF vaddr 0x402c300)
 * Label: callee-of:0x5a1f120
 * Body:  [[0412c300, 0412c32b]]
 * Ghidra: FUN_0412c300
 */


long FUN_0412c300(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  do {
    if (lVar1 == -1) {
      return 0;
    }
    LOCK();
    lVar2 = *(long *)(param_1 + 8);
    bVar3 = lVar1 == lVar2;
    if (bVar3) {
      *(long *)(param_1 + 8) = lVar1 + 1;
      lVar2 = lVar1;
    }
    UNLOCK();
    lVar1 = lVar2;
  } while (!bVar3);
  return param_1;
}



/* ---- assembly ---- */
/* 0412c300 */  MOV RAX,qword ptr [RDI + 0x8]
/* 0412c304 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0412c310 */  CMP RAX,-0x1
/* 0412c314 */  JZ 0x0412c326
/* 0412c316 */  LEA RCX,[RAX + 0x1]
/* 0412c31a */  CMPXCHG.LOCK qword ptr [RDI + 0x8],RCX
/* 0412c320 */  JNZ 0x0412c310
/* 0412c322 */  MOV RAX,RDI
/* 0412c325 */  RET
/* 0412c326 */  XOR EDI,EDI
/* 0412c328 */  MOV RAX,RDI
/* 0412c32b */  RET
