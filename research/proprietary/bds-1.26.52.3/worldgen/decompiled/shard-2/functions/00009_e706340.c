/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe706340
 * Label: caller-of-seed
 * Body:  [[0e7062ff, 0e706307] [0e706340, 0e70635b]]
 * Ghidra: FUN_0e706340
 */


void FUN_0e706340(void)

{
  ulong uVar1;
  uint in_EAX;
  long in_RCX;
  uint in_stack_00000008;
  
  uVar1 = *(ulong *)(in_RCX + 0x30);
  while (uVar1 != in_stack_00000008) {
    in_RCX = *(long *)(in_RCX + 0x38);
    uVar1 = *(ulong *)(in_RCX + 0x30);
  }
  *(uint *)(in_RCX + 0x10) = *(uint *)(in_RCX + 0x10) | in_EAX;
  return;
}



/* ---- assembly ---- */
/* 0e7062ff */  OR dword ptr [RCX + 0x10],EAX
/* 0e706302 */  ADD RSP,0x20
/* 0e706306 */  POP RBX
/* 0e706307 */  RET
/* 0e706340 */  MOV EDX,dword ptr [RSP + 0x8]
/* 0e706344 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e706348 */  JZ 0x0e7062ff
/* 0e70634a */  NOP word ptr [RAX + RAX*0x1]
/* 0e706350 */  MOV RCX,qword ptr [RCX + 0x38]
/* 0e706354 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e706358 */  JNZ 0x0e706350
/* 0e70635a */  JMP 0x0e7062ff
