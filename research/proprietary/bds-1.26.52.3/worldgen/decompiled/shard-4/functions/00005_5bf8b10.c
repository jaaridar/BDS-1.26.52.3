/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf8b10 (ELF vaddr 0x5bf8b10)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cf8b10, 05cf8b62] [05cf8b70, 05cf8c05] [05cf8c10, 05cf8d27]]
 * Ghidra: FUN_05cf8b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_05cf8b10(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  
  if ((long *)param_1[1] == (long *)0x0) {
    plVar9 = param_1 + 1;
    plVar11 = plVar9;
  }
  else {
    if (((byte)param_2[1] & 1) == 0) {
      uVar14 = (ulong)(byte)((byte)param_2[1] >> 1);
      uVar7 = (long)param_2 + 9;
    }
    else {
      uVar14 = param_2[2];
      uVar7 = param_2[3];
    }
    uVar1 = *param_2;
    plVar6 = (long *)param_1[1];
    do {
      while( true ) {
        plVar9 = plVar6;
        uVar12 = plVar9[4];
        if (uVar1 == uVar12) break;
        if (uVar12 <= uVar1) {
          if (uVar1 <= uVar12) goto LAB_05cf8d00;
          goto LAB_05cf8c1c;
        }
LAB_05cf8b70:
        plVar6 = (long *)*plVar9;
        plVar11 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_05cf8c2d;
      }
      bVar15 = (*(byte *)(plVar9 + 5) & 1) != 0;
      lVar10 = (long)plVar9 + 0x29;
      if (bVar15) {
        lVar10 = plVar9[7];
      }
      uVar12 = (ulong)(*(byte *)(plVar9 + 5) >> 1);
      if (bVar15) {
        uVar12 = plVar9[6];
      }
      uVar13 = uVar12;
      if (uVar14 <= uVar12) {
        uVar13 = uVar14;
      }
      iVar5 = memcmp(uVar7,lVar10,uVar13);
      bVar15 = uVar14 < uVar12;
      if (iVar5 != 0) {
        bVar15 = iVar5 < 0;
      }
      if (bVar15) goto LAB_05cf8b70;
      iVar5 = memcmp(lVar10,uVar7,uVar13);
      bVar15 = uVar12 < uVar14;
      if (iVar5 != 0) {
        bVar15 = iVar5 < 0;
      }
      if (!bVar15) {
LAB_05cf8d00:
        uVar8 = 0;
        plVar6 = plVar9;
        goto LAB_05cf8d05;
      }
LAB_05cf8c1c:
      plVar6 = (long *)plVar9[1];
    } while ((long *)plVar9[1] != (long *)0x0);
    plVar11 = plVar9 + 1;
  }
LAB_05cf8c2d:
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  plVar2 = (long *)*param_4;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  if (plVar6 + 4 != plVar2) {
    if ((*(byte *)(plVar2 + 1) & 1) == 0) {
      plVar6[7] = plVar2[3];
      uVar3 = *(undefined4 *)((long)plVar2 + 0xc);
      lVar10 = plVar2[2];
      uVar4 = *(undefined4 *)((long)plVar2 + 0x14);
      *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(plVar2 + 1);
      *(undefined4 *)((long)plVar6 + 0x2c) = uVar3;
      *(int *)(plVar6 + 6) = (int)lVar10;
      *(undefined4 *)((long)plVar6 + 0x34) = uVar4;
    }
    else {
      func_0x04885070(plVar6 + 5,plVar2[3],plVar2[2]);
    }
  }
  plVar6[4] = *plVar2;
  plVar6[9] = 0;
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = (long)plVar9;
  *plVar11 = (long)plVar6;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x048bed00(param_1[1],plVar6);
  param_1[2] = param_1[2] + 1;
  uVar8 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
LAB_05cf8d05:
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = plVar6;
  return auVar16;
}



/* ---- assembly ---- */
/* 05cf8b10 */  PUSH RBP
/* 05cf8b11 */  PUSH R15
/* 05cf8b13 */  PUSH R14
/* 05cf8b15 */  PUSH R13
/* 05cf8b17 */  PUSH R12
/* 05cf8b19 */  PUSH RBX
/* 05cf8b1a */  SUB RSP,0x38
/* 05cf8b1e */  MOV qword ptr [RSP + 0x10],RCX
/* 05cf8b23 */  MOV RAX,qword ptr [RDI + 0x8]
/* 05cf8b27 */  TEST RAX,RAX
/* 05cf8b2a */  MOV qword ptr [RSP + 0x18],RDI
/* 05cf8b2f */  JZ 0x05cf8b46
/* 05cf8b31 */  MOVZX R15D,byte ptr [RSI + 0x8]
/* 05cf8b36 */  TEST R15B,0x1
/* 05cf8b3a */  JZ 0x05cf8b52
/* 05cf8b3c */  MOV R15,qword ptr [RSI + 0x10]
/* 05cf8b40 */  MOV RCX,qword ptr [RSI + 0x18]
/* 05cf8b44 */  JMP 0x05cf8b59
/* 05cf8b46 */  LEA R12,[RDI + 0x8]
/* 05cf8b4a */  MOV RBP,R12
/* 05cf8b4d */  JMP 0x05cf8c2d
/* 05cf8b52 */  SHR R15D,0x1
/* 05cf8b55 */  LEA RCX,[RSI + 0x9]
/* 05cf8b59 */  MOV qword ptr [RSP + 0x8],RCX
/* 05cf8b5e */  MOV RBX,qword ptr [RSI]
/* 05cf8b61 */  JMP 0x05cf8b80
/* 05cf8b70 */  MOV RAX,qword ptr [RBP]
/* 05cf8b74 */  MOV R12,RBP
/* 05cf8b77 */  TEST RAX,RAX
/* 05cf8b7a */  JZ 0x05cf8c2d
/* 05cf8b80 */  MOV RBP,RAX
/* 05cf8b83 */  MOV RAX,qword ptr [RAX + 0x20]
/* 05cf8b87 */  CMP RBX,RAX
/* 05cf8b8a */  JNZ 0x05cf8c10
/* 05cf8b90 */  MOVZX EAX,byte ptr [RBP + 0x28]
/* 05cf8b94 */  LEA R12,[RBP + 0x29]
/* 05cf8b98 */  MOV R13D,EAX
/* 05cf8b9b */  SHR R13D,0x1
/* 05cf8b9e */  TEST AL,0x1
/* 05cf8ba0 */  CMOVNZ R12,qword ptr [RBP + 0x38]
/* 05cf8ba5 */  CMOVNZ R13,qword ptr [RBP + 0x30]
/* 05cf8baa */  MOV R14,R13
/* 05cf8bad */  CMP R13,R15
/* 05cf8bb0 */  JC 0x05cf8bb5
/* 05cf8bb2 */  MOV R14,R15
/* 05cf8bb5 */  MOV RDI,qword ptr [RSP + 0x8]
/* 05cf8bba */  MOV RSI,R12
/* 05cf8bbd */  MOV RDX,R14
/* 05cf8bc0 */  CALL 0x0eee2ff0
/* 05cf8bc5 */  XOR ECX,ECX
/* 05cf8bc7 */  CMP R15,R13
/* 05cf8bca */  SETC CL
/* 05cf8bcd */  XOR EDX,EDX
/* 05cf8bcf */  TEST EAX,EAX
/* 05cf8bd1 */  SETS DL
/* 05cf8bd4 */  CMOVNZ ECX,EDX
/* 05cf8bd7 */  TEST CL,CL
/* 05cf8bd9 */  JNZ 0x05cf8b70
/* 05cf8bdb */  MOV RDI,R12
/* 05cf8bde */  MOV RSI,qword ptr [RSP + 0x8]
/* 05cf8be3 */  MOV RDX,R14
/* 05cf8be6 */  CALL 0x0eee2ff0
/* 05cf8beb */  XOR ECX,ECX
/* 05cf8bed */  CMP R13,R15
/* 05cf8bf0 */  SETC CL
/* 05cf8bf3 */  XOR EDX,EDX
/* 05cf8bf5 */  TEST EAX,EAX
/* 05cf8bf7 */  SETS DL
/* 05cf8bfa */  CMOVNZ ECX,EDX
/* 05cf8bfd */  TEST CL,CL
/* 05cf8bff */  JNZ 0x05cf8c1c
/* 05cf8c01 */  JMP 0x05cf8d00
/* 05cf8c10 */  JC 0x05cf8b70
/* 05cf8c16 */  JBE 0x05cf8d00
/* 05cf8c1c */  MOV RAX,qword ptr [RBP + 0x8]
/* 05cf8c20 */  TEST RAX,RAX
/* 05cf8c23 */  JNZ 0x05cf8b80
/* 05cf8c29 */  LEA R12,[RBP + 0x8]
/* 05cf8c2d */  MOV RAX,qword ptr [0x0f5463b0]
/* 05cf8c34 */  LEA RDI,[0xf5463b0]
/* 05cf8c3b */  MOV ESI,0x50
/* 05cf8c40 */  CALL qword ptr [RAX + 0x10]
/* 05cf8c43 */  MOV R15,RAX
/* 05cf8c46 */  TEST RAX,RAX
/* 05cf8c49 */  JZ 0x05cf8d17
/* 05cf8c4f */  MOV qword ptr [RSP + 0x20],R15
/* 05cf8c54 */  MOV R13,qword ptr [RSP + 0x18]
/* 05cf8c59 */  MOV qword ptr [RSP + 0x28],R13
/* 05cf8c5e */  MOV qword ptr [RSP + 0x30],0x0
/* 05cf8c67 */  LEA RAX,[R15 + 0x20]
/* 05cf8c6b */  MOV RCX,qword ptr [RSP + 0x10]
/* 05cf8c70 */  MOV RBX,qword ptr [RCX]
/* 05cf8c73 */  XORPS XMM1,XMM1
/* 05cf8c76 */  MOVUPS xmmword ptr [R15 + 0x30],XMM1
/* 05cf8c7b */  MOVUPS xmmword ptr [R15 + 0x20],XMM1
/* 05cf8c80 */  MOV qword ptr [R15 + 0x40],0x0
/* 05cf8c88 */  CMP RAX,RBX
/* 05cf8c8b */  JZ 0x05cf8cc1
/* 05cf8c8d */  MOV R14,R15
/* 05cf8c90 */  ADD R14,0x28
/* 05cf8c94 */  LEA RAX,[RBX + 0x8]
/* 05cf8c98 */  TEST byte ptr [RAX],0x1
/* 05cf8c9b */  JNZ 0x05cf8cae
/* 05cf8c9d */  MOV RCX,qword ptr [RAX + 0x10]
/* 05cf8ca1 */  MOV qword ptr [R14 + 0x10],RCX
/* 05cf8ca5 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 05cf8ca8 */  MOVUPS xmmword ptr [R14],XMM0
/* 05cf8cac */  JMP 0x05cf8cc1
/* 05cf8cae */  MOV RDX,qword ptr [RBX + 0x10]
/* 05cf8cb2 */  MOV RSI,qword ptr [RBX + 0x18]
/* 05cf8cb6 */  MOV RDI,R14
/* 05cf8cb9 */  CALL 0x04885070
/* 05cf8cbe */  XORPS XMM1,XMM1
/* 05cf8cc1 */  MOV RAX,qword ptr [RBX]
/* 05cf8cc4 */  MOV qword ptr [R15 + 0x20],RAX
/* 05cf8cc8 */  MOV qword ptr [R15 + 0x48],0x0
/* 05cf8cd0 */  MOVUPS xmmword ptr [R15],XMM1
/* 05cf8cd4 */  MOV qword ptr [R15 + 0x10],RBP
/* 05cf8cd8 */  MOV qword ptr [R12],R15
/* 05cf8cdc */  MOV RAX,qword ptr [R13]
/* 05cf8ce0 */  MOV RAX,qword ptr [RAX]
/* 05cf8ce3 */  TEST RAX,RAX
/* 05cf8ce6 */  JZ 0x05cf8cec
/* 05cf8ce8 */  MOV qword ptr [R13],RAX
/* 05cf8cec */  MOV RDI,qword ptr [R13 + 0x8]
/* 05cf8cf0 */  MOV RSI,R15
/* 05cf8cf3 */  CALL 0x048bed00
/* 05cf8cf8 */  INC qword ptr [R13 + 0x10]
/* 05cf8cfc */  MOV DL,0x1
/* 05cf8cfe */  JMP 0x05cf8d05
/* 05cf8d00 */  XOR EDX,EDX
/* 05cf8d02 */  MOV R15,RBP
/* 05cf8d05 */  MOV RAX,R15
/* 05cf8d08 */  ADD RSP,0x38
/* 05cf8d0c */  POP RBX
/* 05cf8d0d */  POP R12
/* 05cf8d0f */  POP R13
/* 05cf8d11 */  POP R14
/* 05cf8d13 */  POP R15
/* 05cf8d15 */  POP RBP
/* 05cf8d16 */  RET
/* 05cf8d17 */  MOV EDI,0x50
/* 05cf8d1c */  XOR ESI,ESI
/* 05cf8d1e */  CALL 0x0eec74c0
/* 05cf8d23 */  JMP 0x05cf8c4f
