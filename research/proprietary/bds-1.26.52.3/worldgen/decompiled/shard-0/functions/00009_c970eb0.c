/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc970eb0
 * Label: WorldGenerator::vslot45
 * Body:  [[0c970eb0, 0c970ebe] [0c970ec0, 0c970f26]]
 * Ghidra: wg_WorldGenerator__vslot45
 */


void wg_WorldGenerator__vslot45(void)

{
  long in_RAX;
  long unaff_RBX;
  ulong unaff_RBP;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  bool bVar1;
  long *in_stack_00000010;
  
  *(int *)(in_RAX + -0x73) = *(int *)(in_RAX + -0x73) + -1;
  do {
    *unaff_R14 = unaff_R13;
    if (*(uint *)(unaff_R14 + 0x12) != unaff_RBP) {
      (**(code **)(unaff_RBX + (ulong)*(uint *)(unaff_R14 + 0x12) * 8))
                (&stack0x0000000f,unaff_R14 + 0x10);
    }
    *(undefined4 *)(unaff_R14 + 0x12) = 0xffffffff;
    func_0x0c44e610(unaff_R14);
    bVar1 = unaff_R14 != unaff_R12;
    unaff_R14 = unaff_R14 + -0x15;
  } while (bVar1);
  in_stack_00000010[1] = (long)unaff_R12;
  func_0x0412a280(*in_stack_00000010,in_stack_00000010[2] - *in_stack_00000010);
  return;
}



/* ---- assembly ---- */
/* 0c970eb0 */  DEC dword ptr [RAX + -0x73]
/* 0c970eb3 */  SBB EAX,0x2a77640
/* 0c970eb8 */  LEA R15,[RSP + 0xf]
/* 0c970ebd */  JMP 0x0c970ee2
/* 0c970ec0 */  MOV dword ptr [R14 + 0x90],0xffffffff
/* 0c970ecb */  MOV RDI,R14
/* 0c970ece */  CALL 0x0c44e610
/* 0c970ed3 */  LEA RAX,[R14 + -0xa8]
/* 0c970eda */  CMP R14,R12
/* 0c970edd */  MOV R14,RAX
/* 0c970ee0 */  JZ 0x0c970f00
/* 0c970ee2 */  MOV qword ptr [R14],R13
/* 0c970ee5 */  MOV EAX,dword ptr [R14 + 0x90]
/* 0c970eec */  CMP RAX,RBP
/* 0c970eef */  JZ 0x0c970ec0
/* 0c970ef1 */  LEA RSI,[R14 + 0x80]
/* 0c970ef8 */  MOV RDI,R15
/* 0c970efb */  CALL qword ptr [RBX + RAX*0x8]
/* 0c970efe */  JMP 0x0c970ec0
/* 0c970f00 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0c970f05 */  MOV RDI,qword ptr [RAX]
/* 0c970f08 */  MOV qword ptr [RAX + 0x8],R12
/* 0c970f0c */  MOV RSI,qword ptr [RAX + 0x10]
/* 0c970f10 */  SUB RSI,RDI
/* 0c970f13 */  CALL 0x0412a280
/* 0c970f18 */  ADD RSP,0x18
/* 0c970f1c */  POP RBX
/* 0c970f1d */  POP R12
/* 0c970f1f */  POP R13
/* 0c970f21 */  POP R14
/* 0c970f23 */  POP R15
/* 0c970f25 */  POP RBP
/* 0c970f26 */  RET
