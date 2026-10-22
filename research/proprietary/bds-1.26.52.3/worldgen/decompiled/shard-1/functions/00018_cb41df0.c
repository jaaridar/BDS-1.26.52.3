/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc41df0 (ELF vaddr 0xcb41df0)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0cc41df0, 0cc41e9f]]
 * Ghidra: FUN_0cc41df0
 */


undefined8 FUN_0cc41df0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  uStack_38 = *(undefined4 *)(param_1 + 0x148);
  uStack_34 = *(undefined4 *)(param_1 + 0x14c);
  uStack_30 = *(undefined4 *)(param_1 + 0x150);
  uStack_2c = *(undefined4 *)(param_1 + 0x154);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46520(auStack_28,&uStack_38);
  plVar1 = (long *)CONCAT44(uStack_2c,uStack_30);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar3 = func_0x0cc422f0(param_1,param_2,0,0,0);
  if (lVar3 == 0) {
    uVar4 = FUN_0cc41df0(param_1,&DAT_0f6eaec0,0);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x200);
  }
  func_0x0cc465d0(auStack_28);
  return uVar4;
}



/* ---- assembly ---- */
/* 0cc41df0 */  PUSH R15
/* 0cc41df2 */  PUSH R14
/* 0cc41df4 */  PUSH RBX
/* 0cc41df5 */  SUB RSP,0x20
/* 0cc41df9 */  MOV R14,RSI
/* 0cc41dfc */  MOV RBX,RDI
/* 0cc41dff */  MOV RAX,qword ptr [RDI + 0x150]
/* 0cc41e06 */  MOVUPS XMM0,xmmword ptr [RDI + 0x148]
/* 0cc41e0d */  MOVAPS xmmword ptr [RSP],XMM0
/* 0cc41e11 */  TEST RAX,RAX
/* 0cc41e14 */  JZ 0x0cc41e1b
/* 0cc41e16 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0cc41e1b */  LEA RDI,[RSP + 0x10]
/* 0cc41e20 */  MOV RSI,RSP
/* 0cc41e23 */  CALL 0x0cc46520
/* 0cc41e28 */  MOV R15,qword ptr [RSP + 0x8]
/* 0cc41e2d */  TEST R15,R15
/* 0cc41e30 */  JZ 0x0cc41e55
/* 0cc41e32 */  MOV RAX,-0x1
/* 0cc41e39 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0cc41e3f */  TEST RAX,RAX
/* 0cc41e42 */  JNZ 0x0cc41e55
/* 0cc41e44 */  MOV RAX,qword ptr [R15]
/* 0cc41e47 */  MOV RDI,R15
/* 0cc41e4a */  CALL qword ptr [RAX + 0x10]
/* 0cc41e4d */  MOV RDI,R15
/* 0cc41e50 */  CALL 0x0412c2d0
/* 0cc41e55 */  MOV RDI,RBX
/* 0cc41e58 */  MOV RSI,R14
/* 0cc41e5b */  XOR EDX,EDX
/* 0cc41e5d */  XOR ECX,ECX
/* 0cc41e5f */  XOR R8D,R8D
/* 0cc41e62 */  CALL 0x0cc422f0
/* 0cc41e67 */  TEST RAX,RAX
/* 0cc41e6a */  JZ 0x0cc41e75
/* 0cc41e6c */  MOV RBX,qword ptr [RAX + 0x200]
/* 0cc41e73 */  JMP 0x0cc41e89
/* 0cc41e75 */  LEA RSI,[0xf6eaec0]
/* 0cc41e7c */  MOV RDI,RBX
/* 0cc41e7f */  XOR EDX,EDX
/* 0cc41e81 */  CALL 0x0cc41df0
/* 0cc41e86 */  MOV RBX,RAX
/* 0cc41e89 */  LEA RDI,[RSP + 0x10]
/* 0cc41e8e */  CALL 0x0cc465d0
/* 0cc41e93 */  MOV RAX,RBX
/* 0cc41e96 */  ADD RSP,0x20
/* 0cc41e9a */  POP RBX
/* 0cc41e9b */  POP R14
/* 0cc41e9d */  POP R15
/* 0cc41e9f */  RET
