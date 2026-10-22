/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb2f0d0 (ELF vaddr 0xca2f0d0)
 * Label: WorldGenerator::vslot36
 * Body:  [[0cb2f0d0, 0cb2f1a7]]
 * Ghidra: wg_WorldGenerator__vslot36
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_WorldGenerator__vslot36(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_2 + 0x30) == (long *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,200);
    if (puVar1 == (undefined8 *)0x0) {
      FUN_0eec74c0(200,0);
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &UNK_0f3f2120;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[3] = puVar1 + 4;
    func_0x0412d440(puVar1 + 7);
    *param_1 = puVar1 + 3;
    param_1[1] = puVar1;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x120))(param_1);
  }
  return param_1;
}



/* ---- assembly ---- */
/* 0cb2f0d0 */  PUSH R15
/* 0cb2f0d2 */  PUSH R14
/* 0cb2f0d4 */  PUSH RBX
/* 0cb2f0d5 */  MOV RBX,RDI
/* 0cb2f0d8 */  MOV RSI,qword ptr [RSI + 0x30]
/* 0cb2f0dc */  TEST RSI,RSI
/* 0cb2f0df */  JZ 0x0cb2f0f2
/* 0cb2f0e1 */  MOV RAX,qword ptr [RSI]
/* 0cb2f0e4 */  MOV RDI,RBX
/* 0cb2f0e7 */  CALL qword ptr [RAX + 0x120]
/* 0cb2f0ed */  JMP 0x0cb2f18e
/* 0cb2f0f2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0cb2f0f9 */  LEA RDI,[0xf5463b0]
/* 0cb2f100 */  MOV ESI,0xc8
/* 0cb2f105 */  CALL qword ptr [RAX + 0x10]
/* 0cb2f108 */  MOV R14,RAX
/* 0cb2f10b */  TEST RAX,RAX
/* 0cb2f10e */  JZ 0x0cb2f197
/* 0cb2f114 */  XORPS XMM0,XMM0
/* 0cb2f117 */  MOVUPS xmmword ptr [R14 + 0x8],XMM0
/* 0cb2f11c */  LEA RAX,[0xf3f2120]
/* 0cb2f123 */  MOV qword ptr [R14],RAX
/* 0cb2f126 */  LEA R15,[R14 + 0x18]
/* 0cb2f12a */  LEA RAX,[R14 + 0x20]
/* 0cb2f12e */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0cb2f133 */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0cb2f138 */  MOVUPS xmmword ptr [R14 + 0x40],XMM0
/* 0cb2f13d */  MOVUPS xmmword ptr [R14 + 0x50],XMM0
/* 0cb2f142 */  MOVUPS xmmword ptr [R14 + 0x60],XMM0
/* 0cb2f147 */  MOVUPS xmmword ptr [R14 + 0x70],XMM0
/* 0cb2f14c */  MOVUPS xmmword ptr [R14 + 0x80],XMM0
/* 0cb2f154 */  MOVUPS xmmword ptr [R14 + 0x90],XMM0
/* 0cb2f15c */  MOVUPS xmmword ptr [R14 + 0xa0],XMM0
/* 0cb2f164 */  MOVUPS xmmword ptr [R14 + 0xb0],XMM0
/* 0cb2f16c */  MOV qword ptr [R14 + 0xc0],0x0
/* 0cb2f177 */  MOV qword ptr [R14 + 0x18],RAX
/* 0cb2f17b */  MOV RDI,R14
/* 0cb2f17e */  ADD RDI,0x38
/* 0cb2f182 */  CALL 0x0412d440
/* 0cb2f187 */  MOV qword ptr [RBX],R15
/* 0cb2f18a */  MOV qword ptr [RBX + 0x8],R14
/* 0cb2f18e */  MOV RAX,RBX
/* 0cb2f191 */  POP RBX
/* 0cb2f192 */  POP R14
/* 0cb2f194 */  POP R15
/* 0cb2f196 */  RET
/* 0cb2f197 */  MOV EDI,0xc8
/* 0cb2f19c */  XOR ESI,ESI
/* 0cb2f19e */  CALL 0x0eec74c0
/* 0cb2f1a3 */  JMP 0x0cb2f114
