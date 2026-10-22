/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0d20 (ELF vaddr 0x47b0d20)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b0d20, 048b0dd2]]
 * Ghidra: FUN_048b0d20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048b0d20(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar5 == 0) {
    func_0x048b0de0(&uStack_28,&uStack_29);
    _DAT_0f54fd90 = (undefined4)uStack_28;
    uRam000000000f54fd94 = uStack_28._4_4_;
    uVar3 = (undefined4)uStack_20;
    uVar4 = uStack_20._4_4_;
    uStack_28 = 0;
    uStack_20 = (long *)0x0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    plVar2 = uStack_20;
    if (uStack_20 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_20 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*uStack_20 + 0x10))(uStack_20);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  param_1[1] = lVar5;
  return;
}



/* ---- assembly ---- */
/* 048b0d20 */  PUSH R14
/* 048b0d22 */  PUSH RBX
/* 048b0d23 */  SUB RSP,0x28
/* 048b0d27 */  MOV RBX,RDI
/* 048b0d2a */  MOV qword ptr [RDI],0x0
/* 048b0d31 */  MOV RAX,qword ptr [0x0f54fd90]
/* 048b0d38 */  TEST RAX,RAX
/* 048b0d3b */  JNZ 0x048b0dc7
/* 048b0d41 */  LEA RDI,[RSP + 0x10]
/* 048b0d46 */  LEA RSI,[RSP + 0xf]
/* 048b0d4b */  CALL 0x048b0de0
/* 048b0d50 */  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
/* 048b0d55 */  XORPS XMM1,XMM1
/* 048b0d58 */  MOVAPS xmmword ptr [RSP + 0x10],XMM1
/* 048b0d5d */  MOV R14,qword ptr [0x0f54fd98]
/* 048b0d64 */  MOVUPS xmmword ptr [0x0f54fd90],XMM0
/* 048b0d6b */  TEST R14,R14
/* 048b0d6e */  JZ 0x048b0d93
/* 048b0d70 */  MOV RAX,-0x1
/* 048b0d77 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 048b0d7d */  TEST RAX,RAX
/* 048b0d80 */  JNZ 0x048b0d93
/* 048b0d82 */  MOV RAX,qword ptr [R14]
/* 048b0d85 */  MOV RDI,R14
/* 048b0d88 */  CALL qword ptr [RAX + 0x10]
/* 048b0d8b */  MOV RDI,R14
/* 048b0d8e */  CALL 0x0412c2d0
/* 048b0d93 */  MOV R14,qword ptr [RSP + 0x18]
/* 048b0d98 */  TEST R14,R14
/* 048b0d9b */  JZ 0x048b0dc0
/* 048b0d9d */  MOV RAX,-0x1
/* 048b0da4 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 048b0daa */  TEST RAX,RAX
/* 048b0dad */  JNZ 0x048b0dc0
/* 048b0daf */  MOV RAX,qword ptr [R14]
/* 048b0db2 */  MOV RDI,R14
/* 048b0db5 */  CALL qword ptr [RAX + 0x10]
/* 048b0db8 */  MOV RDI,R14
/* 048b0dbb */  CALL 0x0412c2d0
/* 048b0dc0 */  MOV RAX,qword ptr [0x0f54fd90]
/* 048b0dc7 */  MOV qword ptr [RBX + 0x8],RAX
/* 048b0dcb */  ADD RSP,0x28
/* 048b0dcf */  POP RBX
/* 048b0dd0 */  POP R14
/* 048b0dd2 */  RET
