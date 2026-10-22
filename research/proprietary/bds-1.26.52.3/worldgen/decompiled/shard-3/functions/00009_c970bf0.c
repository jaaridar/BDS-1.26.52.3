/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70bf0 (ELF vaddr 0xc970bf0)
 * Label: WorldGenerator::vslot43
 * Body:  [[0ca70bf0, 0ca70c96]]
 * Ghidra: wg_WorldGenerator__vslot43
 */


ulong wg_WorldGenerator__vslot43(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  if (&uStack_48 != param_3) {
    if ((param_3[1] & 1) == 0) {
      uStack_30 = param_3[3];
      uStack_40 = param_3[1];
      uStack_38 = param_3[2];
    }
    else {
      func_0x04885070(&uStack_40,param_3[3],param_3[2]);
    }
  }
  uStack_48 = *param_3;
  uVar2 = func_0x0d3530d0(uVar1,param_2,&uStack_48);
  if ((uStack_40 & 1) != 0) {
    uVar2 = uVar2 & 0xffffffff;
    func_0x0412a280(uStack_30,uStack_40 & 0xfffffffffffffffe);
  }
  return uVar2;
}



/* ---- assembly ---- */
/* 0ca70bf0 */  PUSH R15
/* 0ca70bf2 */  PUSH R14
/* 0ca70bf4 */  PUSH RBX
/* 0ca70bf5 */  SUB RSP,0x30
/* 0ca70bf9 */  MOV RDI,qword ptr [RDI + 0x78]
/* 0ca70bfd */  MOV RAX,RSP
/* 0ca70c00 */  XORPS XMM0,XMM0
/* 0ca70c03 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0ca70c08 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0ca70c0c */  MOV qword ptr [RSP + 0x20],0x0
/* 0ca70c15 */  CMP RAX,RDX
/* 0ca70c18 */  JZ 0x0ca70c60
/* 0ca70c1a */  LEA RAX,[RSP + 0x8]
/* 0ca70c1f */  LEA RCX,[RDX + 0x8]
/* 0ca70c23 */  TEST byte ptr [RCX],0x1
/* 0ca70c26 */  JNZ 0x0ca70c38
/* 0ca70c28 */  MOV R8,qword ptr [RCX + 0x10]
/* 0ca70c2c */  MOV qword ptr [RAX + 0x10],R8
/* 0ca70c30 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0ca70c33 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0ca70c36 */  JMP 0x0ca70c60
/* 0ca70c38 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0ca70c3c */  MOV R8,qword ptr [RDX + 0x18]
/* 0ca70c40 */  MOV RBX,RDI
/* 0ca70c43 */  MOV RDI,RAX
/* 0ca70c46 */  MOV R14,RSI
/* 0ca70c49 */  MOV RSI,R8
/* 0ca70c4c */  MOV R15,RDX
/* 0ca70c4f */  MOV RDX,RCX
/* 0ca70c52 */  CALL 0x04885070
/* 0ca70c57 */  MOV RDX,R15
/* 0ca70c5a */  MOV RDI,RBX
/* 0ca70c5d */  MOV RSI,R14
/* 0ca70c60 */  MOV RAX,qword ptr [RDX]
/* 0ca70c63 */  MOV qword ptr [RSP],RAX
/* 0ca70c67 */  MOV RDX,RSP
/* 0ca70c6a */  CALL 0x0d3530d0
/* 0ca70c6f */  TEST byte ptr [RSP + 0x8],0x1
/* 0ca70c74 */  JZ 0x0ca70c8d
/* 0ca70c76 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0ca70c7b */  MOV RDI,qword ptr [RSP + 0x18]
/* 0ca70c80 */  AND RSI,-0x2
/* 0ca70c84 */  MOV EBX,EAX
/* 0ca70c86 */  CALL 0x0412a280
/* 0ca70c8b */  MOV EAX,EBX
/* 0ca70c8d */  ADD RSP,0x30
/* 0ca70c91 */  POP RBX
/* 0ca70c92 */  POP R14
/* 0ca70c94 */  POP R15
/* 0ca70c96 */  RET
