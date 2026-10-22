/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70cc0 (ELF vaddr 0xc970cc0)
 * Label: WorldGenerator::vslot44
 * Body:  [[0ca70cc0, 0ca70e3d]]
 * Ghidra: wg_WorldGenerator__vslot44
 */


ulong wg_WorldGenerator__vslot44
                (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                undefined1 param_5,ulong *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1[5];
  lVar2 = param_1[0xf];
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  if (&uStack_68 != param_2) {
    if ((param_2[1] & 1) == 0) {
      uStack_50 = param_2[3];
      uStack_60 = param_2[1];
      uStack_58 = param_2[2];
    }
    else {
      func_0x04885070(&uStack_60,param_2[3],param_2[2]);
    }
  }
  uStack_68 = *param_2;
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1);
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  cStack_70 = '\0';
  if ((char)param_6[5] == '\x01') {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    if (&uStack_98 != param_6) {
      if ((param_6[1] & 1) == 0) {
        uStack_80 = param_6[3];
        uStack_90 = param_6[1];
        uStack_88 = param_6[2];
      }
      else {
        func_0x04885070(&uStack_90,param_6[3],param_6[2]);
      }
    }
    uStack_98 = *param_6;
    cStack_70 = '\x01';
  }
  uVar4 = func_0x0d353580(lVar2,lVar1,param_1 + 0xe,&uStack_68,uStack_40,uStack_38,uVar3,param_5,
                          &uStack_98);
  if ((cStack_70 == '\x01') && ((uStack_90 & 1) != 0)) {
    uVar4 = uVar4 & 0xffffffff;
    func_0x0412a280(uStack_80,uStack_90 & 0xfffffffffffffffe);
  }
  if ((uStack_60 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff;
    func_0x0412a280(uStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return uVar4;
}



/* ---- assembly ---- */
/* 0ca70cc0 */  PUSH RBP
/* 0ca70cc1 */  PUSH R15
/* 0ca70cc3 */  PUSH R14
/* 0ca70cc5 */  PUSH R13
/* 0ca70cc7 */  PUSH R12
/* 0ca70cc9 */  PUSH RBX
/* 0ca70cca */  SUB RSP,0x68
/* 0ca70cce */  MOV RBX,R9
/* 0ca70cd1 */  MOV EBP,R8D
/* 0ca70cd4 */  MOV qword ptr [RSP + 0x60],RCX
/* 0ca70cd9 */  MOV qword ptr [RSP + 0x58],RDX
/* 0ca70cde */  MOV R15,RDI
/* 0ca70ce1 */  MOV R12,qword ptr [RDI + 0x28]
/* 0ca70ce5 */  MOV R13,qword ptr [RDI + 0x78]
/* 0ca70ce9 */  LEA RAX,[RSP + 0x30]
/* 0ca70cee */  XORPS XMM0,XMM0
/* 0ca70cf1 */  MOVAPS xmmword ptr [RSP + 0x40],XMM0
/* 0ca70cf6 */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0ca70cfb */  MOV qword ptr [RSP + 0x50],0x0
/* 0ca70d04 */  CMP RAX,RSI
/* 0ca70d07 */  JZ 0x0ca70d3d
/* 0ca70d09 */  LEA RDI,[RSP + 0x38]
/* 0ca70d0e */  LEA RAX,[RSI + 0x8]
/* 0ca70d12 */  TEST byte ptr [RAX],0x1
/* 0ca70d15 */  JNZ 0x0ca70d27
/* 0ca70d17 */  MOV RCX,qword ptr [RAX + 0x10]
/* 0ca70d1b */  MOV qword ptr [RDI + 0x10],RCX
/* 0ca70d1f */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0ca70d22 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0ca70d25 */  JMP 0x0ca70d3d
/* 0ca70d27 */  MOV RDX,qword ptr [RSI + 0x10]
/* 0ca70d2b */  MOV RAX,qword ptr [RSI + 0x18]
/* 0ca70d2f */  MOV R14,RSI
/* 0ca70d32 */  MOV RSI,RAX
/* 0ca70d35 */  CALL 0x04885070
/* 0ca70d3a */  MOV RSI,R14
/* 0ca70d3d */  MOV RAX,qword ptr [RSI]
/* 0ca70d40 */  MOV qword ptr [RSP + 0x30],RAX
/* 0ca70d45 */  MOV RAX,qword ptr [R15]
/* 0ca70d48 */  MOV RDI,R15
/* 0ca70d4b */  CALL qword ptr [RAX + 0x188]
/* 0ca70d51 */  MOV R14,RAX
/* 0ca70d54 */  MOV byte ptr [RSP],0x0
/* 0ca70d58 */  MOV byte ptr [RSP + 0x28],0x0
/* 0ca70d5d */  CMP byte ptr [RBX + 0x28],0x1
/* 0ca70d61 */  MOV R10,RSP
/* 0ca70d64 */  JNZ 0x0ca70dba
/* 0ca70d66 */  XORPS XMM0,XMM0
/* 0ca70d69 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0ca70d6e */  MOVAPS xmmword ptr [RSP],XMM0
/* 0ca70d72 */  MOV qword ptr [RSP + 0x20],0x0
/* 0ca70d7b */  CMP R10,RBX
/* 0ca70d7e */  JZ 0x0ca70dae
/* 0ca70d80 */  LEA RDI,[RSP + 0x8]
/* 0ca70d85 */  LEA RAX,[RBX + 0x8]
/* 0ca70d89 */  TEST byte ptr [RAX],0x1
/* 0ca70d8c */  JNZ 0x0ca70d9e
/* 0ca70d8e */  MOV RCX,qword ptr [RAX + 0x10]
/* 0ca70d92 */  MOV qword ptr [RDI + 0x10],RCX
/* 0ca70d96 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0ca70d99 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0ca70d9c */  JMP 0x0ca70dae
/* 0ca70d9e */  MOV RDX,qword ptr [RBX + 0x10]
/* 0ca70da2 */  MOV RSI,qword ptr [RBX + 0x18]
/* 0ca70da6 */  CALL 0x04885070
/* 0ca70dab */  MOV R10,RSP
/* 0ca70dae */  MOV RAX,qword ptr [RBX]
/* 0ca70db1 */  MOV qword ptr [RSP],RAX
/* 0ca70db5 */  MOV byte ptr [RSP + 0x28],0x1
/* 0ca70dba */  ADD R15,0x70
/* 0ca70dbe */  SUB RSP,0x8
/* 0ca70dc2 */  MOVZX EAX,BPL
/* 0ca70dc6 */  LEA RCX,[RSP + 0x38]
/* 0ca70dcb */  MOV RDI,R13
/* 0ca70dce */  MOV RSI,R12
/* 0ca70dd1 */  MOV RDX,R15
/* 0ca70dd4 */  MOV R8,qword ptr [RSP + 0x60]
/* 0ca70dd9 */  MOV R9,qword ptr [RSP + 0x68]
/* 0ca70dde */  PUSH R10
/* 0ca70de0 */  PUSH RAX
/* 0ca70de1 */  PUSH R14
/* 0ca70de3 */  CALL 0x0d353580
/* 0ca70de8 */  ADD RSP,0x20
/* 0ca70dec */  CMP byte ptr [RSP + 0x28],0x1
/* 0ca70df1 */  JNZ 0x0ca70e11
/* 0ca70df3 */  TEST byte ptr [RSP + 0x8],0x1
/* 0ca70df8 */  JZ 0x0ca70e11
/* 0ca70dfa */  MOV RSI,qword ptr [RSP + 0x8]
/* 0ca70dff */  MOV RDI,qword ptr [RSP + 0x18]
/* 0ca70e04 */  AND RSI,-0x2
/* 0ca70e08 */  MOV EBX,EAX
/* 0ca70e0a */  CALL 0x0412a280
/* 0ca70e0f */  MOV EAX,EBX
/* 0ca70e11 */  TEST byte ptr [RSP + 0x38],0x1
/* 0ca70e16 */  JZ 0x0ca70e2f
/* 0ca70e18 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0ca70e1d */  MOV RDI,qword ptr [RSP + 0x48]
/* 0ca70e22 */  AND RSI,-0x2
/* 0ca70e26 */  MOV EBX,EAX
/* 0ca70e28 */  CALL 0x0412a280
/* 0ca70e2d */  MOV EAX,EBX
/* 0ca70e2f */  ADD RSP,0x68
/* 0ca70e33 */  POP RBX
/* 0ca70e34 */  POP R12
/* 0ca70e36 */  POP R13
/* 0ca70e38 */  POP R14
/* 0ca70e3a */  POP R15
/* 0ca70e3c */  POP RBP
/* 0ca70e3d */  RET
