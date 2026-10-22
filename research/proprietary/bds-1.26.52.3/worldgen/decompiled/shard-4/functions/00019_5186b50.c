/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286b50 (ELF vaddr 0x5186b50)
 * Label: OverworldGeneratorMultinoise::vslot59
 * Body:  [[05286b50, 05286c30]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot59
 */


undefined8 * wg_OverworldGeneratorMultinoise__vslot59(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x440))();
  uVar1 = uVar1 ^ 0x6a09e667f3bcc909;
  uVar3 = (uVar1 >> 0x1e ^ uVar1) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  uVar3 = uVar3 >> 0x1f ^ uVar3;
  uVar1 = (uVar1 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar1 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
  uVar1 = uVar1 >> 0x1f ^ uVar1;
  if (uVar1 == 0 && uVar3 == 0) {
    uVar3 = 0x9e3779b97f4a7c15;
    uVar1 = 0x6a09e667f3bcc909;
  }
  uVar2 = uVar1 ^ uVar3;
  uVar4 = uVar2 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar2;
  uVar2 = (uVar2 << 0x1c | uVar2 >> 0x24) + uVar4;
  *param_1 = &UNK_0ef51388;
  param_1[1] = ((uVar1 + uVar3) * 0x20000 | uVar1 + uVar3 >> 0x2f) + uVar3;
  param_1[2] = (uVar2 * 0x20000 | uVar2 >> 0x2f) + uVar4;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* ---- assembly ---- */
/* 05286b50 */  PUSH RBX
/* 05286b51 */  MOV RBX,RDI
/* 05286b54 */  MOV RDI,qword ptr [RSI + 0x20]
/* 05286b58 */  MOV RAX,qword ptr [RDI]
/* 05286b5b */  CALL qword ptr [RAX + 0x440]
/* 05286b61 */  MOV RCX,0x6a09e667f3bcc909
/* 05286b6b */  XOR RAX,RCX
/* 05286b6e */  MOV RDX,RAX
/* 05286b71 */  SHR RDX,0x1e
/* 05286b75 */  XOR RDX,RAX
/* 05286b78 */  MOV RSI,-0x40a7b892e31b1a47
/* 05286b82 */  IMUL RDX,RSI
/* 05286b86 */  MOV RDI,RDX
/* 05286b89 */  SHR RDI,0x1b
/* 05286b8d */  XOR RDI,RDX
/* 05286b90 */  MOV R8,-0x6b2fb644ecceee15
/* 05286b9a */  IMUL RDI,R8
/* 05286b9e */  MOV RDX,RDI
/* 05286ba1 */  SHR RDX,0x1f
/* 05286ba5 */  XOR RDX,RDI
/* 05286ba8 */  MOV RDI,-0x61c8864680b583eb
/* 05286bb2 */  ADD RAX,RDI
/* 05286bb5 */  MOV R9,RAX
/* 05286bb8 */  SHR R9,0x1e
/* 05286bbc */  XOR R9,RAX
/* 05286bbf */  IMUL R9,RSI
/* 05286bc3 */  MOV RSI,R9
/* 05286bc6 */  SHR RSI,0x1b
/* 05286bca */  XOR RSI,R9
/* 05286bcd */  IMUL RSI,R8
/* 05286bd1 */  MOV RAX,RSI
/* 05286bd4 */  SHR RAX,0x1f
/* 05286bd8 */  XOR RAX,RSI
/* 05286bdb */  MOV RSI,RAX
/* 05286bde */  OR RSI,RDX
/* 05286be1 */  CMOVZ RDX,RDI
/* 05286be5 */  CMOVZ RAX,RCX
/* 05286be9 */  LEA RCX,[RAX + RDX*0x1]
/* 05286bed */  ROL RCX,0x11
/* 05286bf1 */  ADD RCX,RDX
/* 05286bf4 */  XOR RAX,RDX
/* 05286bf7 */  ROL RDX,0x31
/* 05286bfb */  MOV RSI,RAX
/* 05286bfe */  SHL RSI,0x15
/* 05286c02 */  XOR RSI,RDX
/* 05286c05 */  XOR RSI,RAX
/* 05286c08 */  ROL RAX,0x1c
/* 05286c0c */  ADD RAX,RSI
/* 05286c0f */  ROL RAX,0x11
/* 05286c13 */  ADD RAX,RSI
/* 05286c16 */  LEA RDX,[0xef51388]
/* 05286c1d */  MOV qword ptr [RBX],RDX
/* 05286c20 */  MOV qword ptr [RBX + 0x8],RCX
/* 05286c24 */  MOV qword ptr [RBX + 0x10],RAX
/* 05286c28 */  MOV byte ptr [RBX + 0x18],0x1
/* 05286c2c */  MOV RAX,RBX
/* 05286c2f */  POP RBX
/* 05286c30 */  RET
