/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf8dc0 (ELF vaddr 0x5bf8dc0)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cf8dc0, 05cf8f29]]
 * Ghidra: FUN_05cf8dc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_05cf8dc0(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_RDX;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 uStack_19;
  ulong *puStack_18;
  
  uVar8 = (param_1[1] - *param_1 >> 3) - 1U & *param_2;
  plVar1 = (long *)(*param_1 + uVar8 * 8);
  plVar9 = plVar1;
  do {
    if (*plVar9 == -1) {
      plVar2 = (long *)param_1[4];
      goto LAB_05cf8e11;
    }
    lVar5 = *plVar9 * 0x38;
    plVar9 = (long *)(param_1[3] + lVar5);
  } while (*(ulong *)(param_1[3] + 8 + lVar5) != *param_2);
  plVar2 = (long *)param_1[4];
  if (plVar9 == plVar2) {
LAB_05cf8e11:
    puStack_18 = param_2;
    if (plVar2 < (long *)param_1[5]) {
      *plVar2 = *plVar1;
      plVar2[1] = *param_2;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2 = plVar2 + 7;
    }
    else {
      plVar2 = (long *)func_0x05cf8f30(param_1 + 3,plVar1,&UNK_01563a4f,&puStack_18,&uStack_19);
    }
    param_1[4] = (long)plVar2;
    lVar5 = *param_1;
    lVar4 = param_1[3];
    lVar3 = (long)plVar2 - lVar4;
    uVar6 = (lVar3 >> 3) * 0x6db6db6db6db6db7;
    *(ulong *)(lVar5 + uVar8 * 8) = uVar6 - 1;
    lVar5 = param_1[1] - lVar5;
    fVar10 = (float)(ulong)(lVar5 >> 3) * *(float *)(param_1 + 6);
    uVar8 = (ulong)fVar10;
    uVar8 = (long)(fVar10 - _DAT_01198778) & (long)uVar8 >> 0x3f | uVar8;
    if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
      func_0x05cf9120(param_1,lVar5 >> 2);
      lVar4 = param_1[3];
      lVar3 = param_1[4] - lVar4;
      uVar6 = extraout_RDX;
    }
    plVar9 = (long *)(lVar4 + lVar3 + -0x38);
    uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
    uVar7 = 0;
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = plVar9;
  return auVar11;
}



/* ---- assembly ---- */
/* 05cf8dc0 */  PUSH R14
/* 05cf8dc2 */  PUSH RBX
/* 05cf8dc3 */  SUB RSP,0x18
/* 05cf8dc7 */  MOV RAX,qword ptr [RSI]
/* 05cf8dca */  MOV RCX,qword ptr [RDI]
/* 05cf8dcd */  MOV RBX,qword ptr [RDI + 0x8]
/* 05cf8dd1 */  SUB RBX,RCX
/* 05cf8dd4 */  SAR RBX,0x3
/* 05cf8dd8 */  DEC RBX
/* 05cf8ddb */  AND RBX,RAX
/* 05cf8dde */  LEA R10,[RCX + RBX*0x8]
/* 05cf8de2 */  LEA R9,[RDI + 0x18]
/* 05cf8de6 */  MOV RCX,qword ptr [RDI + 0x18]
/* 05cf8dea */  MOV R8,R10
/* 05cf8ded */  NOP dword ptr [RAX]
/* 05cf8df0 */  MOV RDX,qword ptr [R8]
/* 05cf8df3 */  CMP RDX,-0x1
/* 05cf8df7 */  JZ 0x05cf8e42
/* 05cf8df9 */  IMUL RDX,RDX,0x38
/* 05cf8dfd */  LEA R8,[RCX + RDX*0x1]
/* 05cf8e01 */  CMP qword ptr [RCX + RDX*0x1 + 0x8],RAX
/* 05cf8e06 */  JNZ 0x05cf8df0
/* 05cf8e08 */  MOV RAX,qword ptr [RDI + 0x20]
/* 05cf8e0c */  CMP R8,RAX
/* 05cf8e0f */  JNZ 0x05cf8e4e
/* 05cf8e11 */  MOV qword ptr [RSP + 0x10],RSI
/* 05cf8e16 */  CMP RAX,qword ptr [RDI + 0x28]
/* 05cf8e1a */  JNC 0x05cf8e55
/* 05cf8e1c */  MOV RCX,qword ptr [R10]
/* 05cf8e1f */  MOV qword ptr [RAX],RCX
/* 05cf8e22 */  MOV RCX,qword ptr [RSI]
/* 05cf8e25 */  MOV qword ptr [RAX + 0x8],RCX
/* 05cf8e29 */  XORPS XMM0,XMM0
/* 05cf8e2c */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 05cf8e30 */  MOVUPS xmmword ptr [RAX + 0x20],XMM0
/* 05cf8e34 */  MOV qword ptr [RAX + 0x30],0x0
/* 05cf8e3c */  ADD RAX,0x38
/* 05cf8e40 */  JMP 0x05cf8e77
/* 05cf8e42 */  MOV RAX,qword ptr [RDI + 0x20]
/* 05cf8e46 */  MOV R8,RAX
/* 05cf8e49 */  CMP R8,RAX
/* 05cf8e4c */  JZ 0x05cf8e11
/* 05cf8e4e */  XOR EDX,EDX
/* 05cf8e50 */  JMP 0x05cf8f1f
/* 05cf8e55 */  LEA RDX,[0x1563a4f]
/* 05cf8e5c */  LEA RCX,[RSP + 0x10]
/* 05cf8e61 */  LEA R8,[RSP + 0xf]
/* 05cf8e66 */  MOV R14,RDI
/* 05cf8e69 */  MOV RDI,R9
/* 05cf8e6c */  MOV RSI,R10
/* 05cf8e6f */  CALL 0x05cf8f30
/* 05cf8e74 */  MOV RDI,R14
/* 05cf8e77 */  MOV qword ptr [RDI + 0x20],RAX
/* 05cf8e7b */  MOV R8,qword ptr [RDI]
/* 05cf8e7e */  MOV RCX,qword ptr [RDI + 0x18]
/* 05cf8e82 */  SUB RAX,RCX
/* 05cf8e85 */  MOV RSI,RAX
/* 05cf8e88 */  SAR RSI,0x3
/* 05cf8e8c */  MOV RDX,0x6db6db6db6db6db7
/* 05cf8e96 */  IMUL RDX,RSI
/* 05cf8e9a */  LEA RSI,[RDX + -0x1]
/* 05cf8e9e */  MOV qword ptr [R8 + RBX*0x8],RSI
/* 05cf8ea2 */  MOV RSI,qword ptr [RDI + 0x8]
/* 05cf8ea6 */  SUB RSI,R8
/* 05cf8ea9 */  MOV R8,RSI
/* 05cf8eac */  SAR R8,0x3
/* 05cf8eb0 */  JS 0x05cf8ebc
/* 05cf8eb2 */  XORPS XMM0,XMM0
/* 05cf8eb5 */  CVTSI2SS XMM0,R8
/* 05cf8eba */  JMP 0x05cf8ed5
/* 05cf8ebc */  MOV R9,R8
/* 05cf8ebf */  SHR R9,0x1
/* 05cf8ec2 */  AND R8D,0x1
/* 05cf8ec6 */  OR R8,R9
/* 05cf8ec9 */  XORPS XMM0,XMM0
/* 05cf8ecc */  CVTSI2SS XMM0,R8
/* 05cf8ed1 */  ADDSS XMM0,XMM0
/* 05cf8ed5 */  MULSS XMM0,dword ptr [RDI + 0x30]
/* 05cf8eda */  CVTTSS2SI R8,XMM0
/* 05cf8edf */  MOV R9,R8
/* 05cf8ee2 */  SUBSS XMM0,dword ptr [0x01198778]
/* 05cf8eea */  CVTTSS2SI R10,XMM0
/* 05cf8eef */  SAR R9,0x3f
/* 05cf8ef3 */  AND R10,R9
/* 05cf8ef6 */  OR R10,R8
/* 05cf8ef9 */  CMP RDX,R10
/* 05cf8efc */  JBE 0x05cf8f15
/* 05cf8efe */  SAR RSI,0x2
/* 05cf8f02 */  MOV RBX,RDI
/* 05cf8f05 */  CALL 0x05cf9120
/* 05cf8f0a */  MOV RCX,qword ptr [RBX + 0x18]
/* 05cf8f0e */  MOV RAX,qword ptr [RBX + 0x20]
/* 05cf8f12 */  SUB RAX,RCX
/* 05cf8f15 */  LEA R8,[RCX + RAX*0x1]
/* 05cf8f19 */  ADD R8,-0x38
/* 05cf8f1d */  MOV DL,0x1
/* 05cf8f1f */  MOV RAX,R8
/* 05cf8f22 */  ADD RSP,0x18
/* 05cf8f26 */  POP RBX
/* 05cf8f27 */  POP R14
/* 05cf8f29 */  RET
