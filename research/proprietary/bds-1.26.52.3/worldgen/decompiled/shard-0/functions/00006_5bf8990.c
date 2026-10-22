/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf8990 (ELF vaddr 0x5bf8990)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cf8990, 05cf89d0] [05cf89e0, 05cf8a2a] [05cf8a30, 05cf8b05]]
 * Ghidra: FUN_05cf8990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_05cf8990(long *param_1,byte *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    plVar5 = param_1 + 1;
    plVar7 = plVar5;
  }
  else {
    bVar11 = (*param_2 & 1) != 0;
    pbVar10 = param_2 + 1;
    if (bVar11) {
      pbVar10 = *(byte **)(param_2 + 0x10);
    }
    uVar9 = (ulong)(*param_2 >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        plVar5 = plVar2;
        bVar11 = (*(byte *)(plVar5 + 4) & 1) != 0;
        lVar6 = (long)plVar5 + 0x21;
        if (bVar11) {
          lVar6 = plVar5[6];
        }
        uVar4 = (ulong)(*(byte *)(plVar5 + 4) >> 1);
        if (bVar11) {
          uVar4 = plVar5[5];
        }
        uVar8 = uVar9;
        if (uVar4 < uVar9) {
          uVar8 = uVar4;
        }
        iVar1 = func_0x0eee2ff0(pbVar10,lVar6,uVar8);
        if (iVar1 != 0) break;
        if (uVar4 <= uVar9) goto LAB_05cf8a35;
LAB_05cf89e0:
        plVar2 = (long *)*plVar5;
        plVar7 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_05cf8a6d;
      }
      if (iVar1 < 0) goto LAB_05cf89e0;
LAB_05cf8a35:
      iVar1 = func_0x0eee2ff0(lVar6,pbVar10,uVar8);
      if (iVar1 == 0) {
        if (uVar4 < uVar9) goto LAB_05cf8a57;
LAB_05cf8ae1:
        uVar3 = 0;
        plVar2 = plVar5;
        goto LAB_05cf8ae6;
      }
      if (-1 < iVar1) goto LAB_05cf8ae1;
LAB_05cf8a57:
      plVar2 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar7 = plVar5 + 1;
  }
LAB_05cf8a6d:
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar2 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar2[6] = param_3[2];
  lVar6 = param_3[1];
  plVar2[4] = *param_3;
  plVar2[5] = lVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar5;
  *plVar7 = (long)plVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x048bed00(param_1[1],plVar2);
  param_1[2] = param_1[2] + 1;
  uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
LAB_05cf8ae6:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar2;
  return auVar12;
}



/* ---- assembly ---- */
/* 05cf8990 */  PUSH RBP
/* 05cf8991 */  PUSH R15
/* 05cf8993 */  PUSH R14
/* 05cf8995 */  PUSH R13
/* 05cf8997 */  PUSH R12
/* 05cf8999 */  PUSH RBX
/* 05cf899a */  SUB RSP,0x18
/* 05cf899e */  MOV qword ptr [RSP + 0x8],RDX
/* 05cf89a3 */  MOV RAX,qword ptr [RDI + 0x8]
/* 05cf89a7 */  TEST RAX,RAX
/* 05cf89aa */  MOV qword ptr [RSP + 0x10],RDI
/* 05cf89af */  JZ 0x05cf8a66
/* 05cf89b5 */  MOVZX ECX,byte ptr [RSI]
/* 05cf89b8 */  LEA R15,[RSI + 0x1]
/* 05cf89bc */  MOV R14D,ECX
/* 05cf89bf */  SHR R14D,0x1
/* 05cf89c2 */  TEST CL,0x1
/* 05cf89c5 */  CMOVNZ R15,qword ptr [RSI + 0x10]
/* 05cf89ca */  CMOVNZ R14,qword ptr [RSI + 0x8]
/* 05cf89cf */  JMP 0x05cf89f0
/* 05cf89e0 */  MOV RAX,qword ptr [RBP]
/* 05cf89e4 */  MOV R12,RBP
/* 05cf89e7 */  TEST RAX,RAX
/* 05cf89ea */  JZ 0x05cf8a6d
/* 05cf89f0 */  MOV RBP,RAX
/* 05cf89f3 */  MOVZX EAX,byte ptr [RAX + 0x20]
/* 05cf89f7 */  LEA R12,[RBP + 0x21]
/* 05cf89fb */  MOV EBX,EAX
/* 05cf89fd */  SHR EBX,0x1
/* 05cf89ff */  TEST AL,0x1
/* 05cf8a01 */  CMOVNZ R12,qword ptr [RBP + 0x30]
/* 05cf8a06 */  CMOVNZ RBX,qword ptr [RBP + 0x28]
/* 05cf8a0b */  CMP RBX,R14
/* 05cf8a0e */  MOV R13,R14
/* 05cf8a11 */  CMOVC R13,RBX
/* 05cf8a15 */  MOV RDI,R15
/* 05cf8a18 */  MOV RSI,R12
/* 05cf8a1b */  MOV RDX,R13
/* 05cf8a1e */  CALL 0x0eee2ff0
/* 05cf8a23 */  TEST EAX,EAX
/* 05cf8a25 */  JZ 0x05cf8a30
/* 05cf8a27 */  JS 0x05cf89e0
/* 05cf8a29 */  JMP 0x05cf8a35
/* 05cf8a30 */  CMP R14,RBX
/* 05cf8a33 */  JC 0x05cf89e0
/* 05cf8a35 */  MOV RDI,R12
/* 05cf8a38 */  MOV RSI,R15
/* 05cf8a3b */  MOV RDX,R13
/* 05cf8a3e */  CALL 0x0eee2ff0
/* 05cf8a43 */  TEST EAX,EAX
/* 05cf8a45 */  JZ 0x05cf8a4e
/* 05cf8a47 */  JS 0x05cf8a57
/* 05cf8a49 */  JMP 0x05cf8ae1
/* 05cf8a4e */  CMP RBX,R14
/* 05cf8a51 */  JNC 0x05cf8ae1
/* 05cf8a57 */  MOV RAX,qword ptr [RBP + 0x8]
/* 05cf8a5b */  TEST RAX,RAX
/* 05cf8a5e */  JNZ 0x05cf89f0
/* 05cf8a60 */  LEA R12,[RBP + 0x8]
/* 05cf8a64 */  JMP 0x05cf8a6d
/* 05cf8a66 */  LEA R12,[RDI + 0x8]
/* 05cf8a6a */  MOV RBP,R12
/* 05cf8a6d */  MOV RAX,qword ptr [0x0f5463b0]
/* 05cf8a74 */  LEA RDI,[0xf5463b0]
/* 05cf8a7b */  MOV ESI,0x38
/* 05cf8a80 */  CALL qword ptr [RAX + 0x10]
/* 05cf8a83 */  MOV R15,RAX
/* 05cf8a86 */  TEST RAX,RAX
/* 05cf8a89 */  JZ 0x05cf8af8
/* 05cf8a8b */  MOV RCX,qword ptr [RSP + 0x8]
/* 05cf8a90 */  MOV RAX,qword ptr [RCX + 0x10]
/* 05cf8a94 */  MOV qword ptr [R15 + 0x30],RAX
/* 05cf8a98 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 05cf8a9b */  MOVUPS xmmword ptr [R15 + 0x20],XMM0
/* 05cf8aa0 */  XORPS XMM0,XMM0
/* 05cf8aa3 */  MOVUPS xmmword ptr [RCX],XMM0
/* 05cf8aa6 */  MOV qword ptr [RCX + 0x10],0x0
/* 05cf8aae */  MOVUPS xmmword ptr [R15],XMM0
/* 05cf8ab2 */  MOV qword ptr [R15 + 0x10],RBP
/* 05cf8ab6 */  MOV qword ptr [R12],R15
/* 05cf8aba */  MOV RBX,qword ptr [RSP + 0x10]
/* 05cf8abf */  MOV RAX,qword ptr [RBX]
/* 05cf8ac2 */  MOV RAX,qword ptr [RAX]
/* 05cf8ac5 */  TEST RAX,RAX
/* 05cf8ac8 */  JZ 0x05cf8acd
/* 05cf8aca */  MOV qword ptr [RBX],RAX
/* 05cf8acd */  MOV RDI,qword ptr [RBX + 0x8]
/* 05cf8ad1 */  MOV RSI,R15
/* 05cf8ad4 */  CALL 0x048bed00
/* 05cf8ad9 */  INC qword ptr [RBX + 0x10]
/* 05cf8add */  MOV DL,0x1
/* 05cf8adf */  JMP 0x05cf8ae6
/* 05cf8ae1 */  XOR EDX,EDX
/* 05cf8ae3 */  MOV R15,RBP
/* 05cf8ae6 */  MOV RAX,R15
/* 05cf8ae9 */  ADD RSP,0x18
/* 05cf8aed */  POP RBX
/* 05cf8aee */  POP R12
/* 05cf8af0 */  POP R13
/* 05cf8af2 */  POP R14
/* 05cf8af4 */  POP R15
/* 05cf8af6 */  POP RBP
/* 05cf8af7 */  RET
/* 05cf8af8 */  MOV EDI,0x38
/* 05cf8afd */  XOR ESI,ESI
/* 05cf8aff */  CALL 0x0eec74c0
/* 05cf8b04 */  JMP 0x05cf8a8b
