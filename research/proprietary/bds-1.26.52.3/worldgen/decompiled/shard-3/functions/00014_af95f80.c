/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xaf95f80
 * Label: string:Spawn rules for minecraft:density_limit in {} need to be put
 * Body:  [[0af95d58, 0af95d69] [0af95f80, 0af96021] [0af9603d, 0af9604a]]
 * Ghidra: FUN_0af95f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0af95f80(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_RBX;
  undefined8 *unaff_R15;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  lVar2 = _DAT_0f54fd90;
  *unaff_RBX = 0;
  unaff_RBX[2] = (long)&UNK_0af9a960;
  *(undefined4 *)(unaff_RBX + 4) = 0xd7b6e5dc;
  unaff_RBX[3] = (long)&UNK_0af9ac20;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 1;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *puVar3 = in_stack_00000010;
  *(undefined4 *)(puVar3 + 1) = in_stack_00000018;
  uVar1 = unaff_R15[1];
  puVar3[2] = *unaff_R15;
  puVar3[3] = uVar1;
  *unaff_RBX = (long)puVar3;
  unaff_RBX[5] = lVar2;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = (long)&UNK_0af9a680;
  return;
}



/* ---- assembly ---- */
/* 0af95d58 */  MOV RAX,RBX
/* 0af95d5b */  ADD RSP,0x48
/* 0af95d5f */  POP RBX
/* 0af95d60 */  POP R12
/* 0af95d62 */  POP R13
/* 0af95d64 */  POP R14
/* 0af95d66 */  POP R15
/* 0af95d68 */  POP RBP
/* 0af95d69 */  RET
/* 0af95f80 */  STC
/* 0af95f81 */  MOV R12,qword ptr [0x0f54fd90]
/* 0af95f88 */  MOV qword ptr [RBX],0x0
/* 0af95f8f */  LEA RAX,[0xaf9a960]
/* 0af95f96 */  MOV qword ptr [RBX + 0x10],RAX
/* 0af95f9a */  MOV dword ptr [RBX + 0x20],0xd7b6e5dc
/* 0af95fa1 */  LEA RAX,[0xaf9ac20]
/* 0af95fa8 */  MOV qword ptr [RBX + 0x18],RAX
/* 0af95fac */  MOV byte ptr [RBX + 0x24],0x1
/* 0af95fb0 */  LEA RDI,[0xf5463b0]
/* 0af95fb7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0af95fbe */  MOV ESI,0x20
/* 0af95fc3 */  CALL qword ptr [RAX + 0x10]
/* 0af95fc6 */  MOV R14,RAX
/* 0af95fc9 */  TEST RAX,RAX
/* 0af95fcc */  JZ 0x0af9603d
/* 0af95fce */  MOV RAX,qword ptr [RSP + 0x10]
/* 0af95fd3 */  MOV qword ptr [R14],RAX
/* 0af95fd6 */  MOV EAX,dword ptr [RSP + 0x18]
/* 0af95fda */  MOV dword ptr [R14 + 0x8],EAX
/* 0af95fde */  MOVUPS XMM0,xmmword ptr [R15]
/* 0af95fe2 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0af95fe7 */  MOV dword ptr [RSP + 0x18],0x0
/* 0af95fef */  MOV RAX,0xffffffffffffff
/* 0af95ff9 */  MOV qword ptr [RSP + 0x20],RAX
/* 0af95ffe */  MOV byte ptr [RSP + 0x28],0x0
/* 0af96003 */  MOV qword ptr [RBX],R14
/* 0af96006 */  MOV qword ptr [RBX + 0x28],R12
/* 0af9600a */  MOV qword ptr [RBX + 0x30],0x0
/* 0af96012 */  LEA RAX,[0xaf9a680]
/* 0af96019 */  MOV qword ptr [RBX + 0x38],RAX
/* 0af9601d */  JMP 0x0af95d58
/* 0af9603d */  MOV EDI,0x20
/* 0af96042 */  XOR ESI,ESI
/* 0af96044 */  CALL 0x0eec74c0
/* 0af96049 */  JMP 0x0af95fce
