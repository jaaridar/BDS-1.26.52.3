/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70eb0 (ELF vaddr 0xc970eb0)
 * Label: WorldGenerator::vslot45
 * Body:  [[0ca70eb0, 0ca70f4b]]
 * Ghidra: wg_WorldGenerator__vslot45
 */


undefined8 wg_WorldGenerator__vslot45(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  if (&uStack_38 != param_2) {
    if ((param_2[1] & 1) == 0) {
      uStack_20 = param_2[3];
      uStack_30 = param_2[1];
      uStack_28 = param_2[2];
    }
    else {
      func_0x04885070(&uStack_30,param_2[3],param_2[2]);
    }
  }
  uStack_38 = *param_2;
  uVar1 = func_0x0d352d10(uVar1,&uStack_38);
  if ((uStack_30 & 1) != 0) {
    func_0x0412a280(uStack_20,uStack_30 & 0xfffffffffffffffe);
  }
  return uVar1;
}



/* ---- assembly ---- */
/* 0ca70eb0 */  PUSH R14
/* 0ca70eb2 */  PUSH RBX
/* 0ca70eb3 */  SUB RSP,0x28
/* 0ca70eb7 */  MOV RDI,qword ptr [RDI + 0x78]
/* 0ca70ebb */  MOV RAX,RSP
/* 0ca70ebe */  XORPS XMM0,XMM0
/* 0ca70ec1 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0ca70ec6 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0ca70eca */  MOV qword ptr [RSP + 0x20],0x0
/* 0ca70ed3 */  CMP RAX,RSI
/* 0ca70ed6 */  JZ 0x0ca70f15
/* 0ca70ed8 */  LEA RAX,[RSP + 0x8]
/* 0ca70edd */  LEA RCX,[RSI + 0x8]
/* 0ca70ee1 */  TEST byte ptr [RCX],0x1
/* 0ca70ee4 */  JNZ 0x0ca70ef6
/* 0ca70ee6 */  MOV RDX,qword ptr [RCX + 0x10]
/* 0ca70eea */  MOV qword ptr [RAX + 0x10],RDX
/* 0ca70eee */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0ca70ef1 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0ca70ef4 */  JMP 0x0ca70f15
/* 0ca70ef6 */  MOV RDX,qword ptr [RSI + 0x10]
/* 0ca70efa */  MOV RCX,qword ptr [RSI + 0x18]
/* 0ca70efe */  MOV RBX,RDI
/* 0ca70f01 */  MOV RDI,RAX
/* 0ca70f04 */  MOV R14,RSI
/* 0ca70f07 */  MOV RSI,RCX
/* 0ca70f0a */  CALL 0x04885070
/* 0ca70f0f */  MOV RSI,R14
/* 0ca70f12 */  MOV RDI,RBX
/* 0ca70f15 */  MOV RAX,qword ptr [RSI]
/* 0ca70f18 */  MOV qword ptr [RSP],RAX
/* 0ca70f1c */  MOV RSI,RSP
/* 0ca70f1f */  CALL 0x0d352d10
/* 0ca70f24 */  TEST byte ptr [RSP + 0x8],0x1
/* 0ca70f29 */  JZ 0x0ca70f44
/* 0ca70f2b */  MOV RSI,qword ptr [RSP + 0x8]
/* 0ca70f30 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0ca70f35 */  AND RSI,-0x2
/* 0ca70f39 */  MOV RBX,RAX
/* 0ca70f3c */  CALL 0x0412a280
/* 0ca70f41 */  MOV RAX,RBX
/* 0ca70f44 */  ADD RSP,0x28
/* 0ca70f48 */  POP RBX
/* 0ca70f49 */  POP R14
/* 0ca70f4b */  RET
