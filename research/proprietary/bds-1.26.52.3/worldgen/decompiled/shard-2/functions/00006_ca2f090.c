/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca2f090
 * Label: WorldGenerator::vslot34
 * Body:  [[0ca2ee1c, 0ca2ee35] [0ca2f090, 0ca2f122]]
 * Ghidra: wg_WorldGenerator__vslot34
 */


void wg_WorldGenerator__vslot34(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_RAX;
  undefined8 *unaff_RBX;
  undefined8 unaff_R14;
  char in_stack_00000088;
  long *in_stack_000000f8;
  uint in_stack_00000310;
  
  (**(code **)(in_RAX + 0x10))();
  if ((ulong)in_stack_00000310 != 0xffffffff) {
    (**(code **)(&UNK_0f3ebcb8 + (ulong)in_stack_00000310 * 8))(&stack0x000000b8,&stack0x00000110);
  }
  plVar3 = in_stack_000000f8;
  if (in_stack_000000f8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000f8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000f8 + 0x10))(in_stack_000000f8);
      func_0x0412c2d0(plVar3);
    }
  }
  *(undefined1 *)(unaff_RBX + 7) = 1;
  *unaff_RBX = unaff_R14;
  if (in_stack_00000088 == '\0') {
    func_0x0693d110(&stack0x00000050);
  }
  return;
}



/* ---- assembly ---- */
/* 0ca2ee1c */  CALL 0x0693d110
/* 0ca2ee21 */  MOV RAX,RBX
/* 0ca2ee24 */  ADD RSP,0x358
/* 0ca2ee2b */  POP RBX
/* 0ca2ee2c */  POP R12
/* 0ca2ee2e */  POP R13
/* 0ca2ee30 */  POP R14
/* 0ca2ee32 */  POP R15
/* 0ca2ee34 */  POP RBP
/* 0ca2ee35 */  RET
/* 0ca2f090 */  LEA RDX,[RSP + 0xb8]
/* 0ca2f098 */  MOV RSI,R14
/* 0ca2f09b */  CALL qword ptr [RAX + 0x10]
/* 0ca2f09e */  MOV EAX,dword ptr [RSP + 0x310]
/* 0ca2f0a5 */  MOV ECX,0xffffffff
/* 0ca2f0aa */  CMP RAX,RCX
/* 0ca2f0ad */  JZ 0x0ca2f0c9
/* 0ca2f0af */  LEA RSI,[RSP + 0x110]
/* 0ca2f0b7 */  LEA RCX,[0xf3ebcb8]
/* 0ca2f0be */  LEA RDI,[RSP + 0xb8]
/* 0ca2f0c6 */  CALL qword ptr [RCX + RAX*0x8]
/* 0ca2f0c9 */  MOV dword ptr [RSP + 0x310],0xffffffff
/* 0ca2f0d4 */  MOV R15,qword ptr [RSP + 0xf8]
/* 0ca2f0dc */  TEST R15,R15
/* 0ca2f0df */  JZ 0x0ca2f104
/* 0ca2f0e1 */  MOV RAX,-0x1
/* 0ca2f0e8 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0ca2f0ee */  TEST RAX,RAX
/* 0ca2f0f1 */  JNZ 0x0ca2f104
/* 0ca2f0f3 */  MOV RAX,qword ptr [R15]
/* 0ca2f0f6 */  MOV RDI,R15
/* 0ca2f0f9 */  CALL qword ptr [RAX + 0x10]
/* 0ca2f0fc */  MOV RDI,R15
/* 0ca2f0ff */  CALL 0x0412c2d0
/* 0ca2f104 */  MOV byte ptr [RBX + 0x38],0x1
/* 0ca2f108 */  MOV qword ptr [RBX],R14
/* 0ca2f10b */  CMP byte ptr [RSP + 0x88],0x0
/* 0ca2f113 */  JNZ 0x0ca2ee21
/* 0ca2f119 */  LEA RDI,[RSP + 0x50]
/* 0ca2f11e */  JMP 0x0ca2ee1c
