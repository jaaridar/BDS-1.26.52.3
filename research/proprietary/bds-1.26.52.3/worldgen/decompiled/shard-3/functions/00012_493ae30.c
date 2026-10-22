/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3ae30 (ELF vaddr 0x493ae30)
 * Label: BiomeSource3d::vslot6
 * Body:  [[04a3ae30, 04a3affd]]
 * Ghidra: wg_BiomeSource3d__vslot6
 */


undefined1  [16]
wg_BiomeSource3d__vslot6(int *param_1,long param_2,int *param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_58;
  int iStack_50;
  undefined1 uStack_4c;
  long lStack_48;
  int *piStack_40;
  long lStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar6 = param_3[3] - *param_3;
  uVar8 = param_3[5] - param_3[2];
  uVar5 = param_3[4] - param_3[1];
  param_1[1] = uVar5 / param_4;
  iVar7 = (uVar6 / param_4) * (uVar5 / param_4);
  *param_1 = iVar7;
  iVar7 = (uVar8 / param_4) * iVar7;
  uStack_58 = 0;
  lStack_48 = param_2;
  lStack_38 = param_5;
  if (iVar7 != 0) {
    FUN_0c859e50(param_1 + 2,iVar7,&uStack_58);
    uVar6 = param_3[3] - *param_3;
    uVar5 = param_3[4] - param_3[1];
    uVar8 = param_3[5] - param_3[2];
  }
  uVar4 = (long)(int)uVar8 % (long)(int)param_4 & 0xffffffff;
  if ((((int)uVar6 / (int)param_4 != 0) && ((int)uVar8 / (int)param_4 != 0)) &&
     ((int)uVar5 / (int)param_4 != 0)) {
    lStack_48 = lStack_48 + 8;
    iVar7 = 0;
    piStack_40 = param_1 + 2;
    do {
      iVar1 = *param_3;
      iVar9 = 0;
      do {
        iVar2 = param_3[2];
        iVar10 = 0;
        iVar11 = 0;
        do {
          uStack_4c = *(undefined1 *)(lStack_38 + 0xc);
          uStack_58 = CONCAT44(param_3[1] + iVar10,iVar7 * param_4 + iVar1);
          iStack_50 = iVar9 * param_4 + iVar2;
          uVar3 = func_0x04a3b2a0(lStack_48,&uStack_58);
          uVar4 = (ulong)(uint)(*param_1 * iVar9 + param_1[1] * iVar7 + iVar11);
          *(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8) = uVar3;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + param_4;
        } while ((int)uVar5 / (int)param_4 != iVar11);
        iVar9 = iVar9 + 1;
      } while (iVar9 != (int)uVar8 / (int)param_4);
      iVar7 = iVar7 + 1;
    } while (iVar7 != (int)uVar6 / (int)param_4);
  }
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* ---- assembly ---- */
/* 04a3ae30 */  PUSH RBP
/* 04a3ae31 */  PUSH R15
/* 04a3ae33 */  PUSH R14
/* 04a3ae35 */  PUSH R13
/* 04a3ae37 */  PUSH R12
/* 04a3ae39 */  PUSH RBX
/* 04a3ae3a */  SUB RSP,0x48
/* 04a3ae3e */  MOV qword ptr [RSP + 0x40],R8
/* 04a3ae43 */  MOV qword ptr [RSP + 0x30],RSI
/* 04a3ae48 */  MOV RBX,RDI
/* 04a3ae4b */  LEA R15,[RDI + 0x8]
/* 04a3ae4f */  XORPS XMM0,XMM0
/* 04a3ae52 */  MOVUPS xmmword ptr [RDI + 0x8],XMM0
/* 04a3ae56 */  MOV qword ptr [RDI + 0x18],0x0
/* 04a3ae5e */  MOV EDI,dword ptr [RDX + 0xc]
/* 04a3ae61 */  SUB EDI,dword ptr [RDX]
/* 04a3ae63 */  MOV ESI,dword ptr [RDX + 0x10]
/* 04a3ae66 */  MOV R10D,dword ptr [RDX + 0x14]
/* 04a3ae6a */  SUB R10D,dword ptr [RDX + 0x8]
/* 04a3ae6e */  MOV qword ptr [RSP + 0x10],RDX
/* 04a3ae73 */  SUB ESI,dword ptr [RDX + 0x4]
/* 04a3ae76 */  MOV EAX,ESI
/* 04a3ae78 */  XOR EDX,EDX
/* 04a3ae7a */  DIV ECX
/* 04a3ae7c */  MOV R8D,EAX
/* 04a3ae7f */  MOV dword ptr [RBX + 0x4],EAX
/* 04a3ae82 */  MOV EAX,EDI
/* 04a3ae84 */  XOR EDX,EDX
/* 04a3ae86 */  DIV ECX
/* 04a3ae88 */  MOV R9D,EAX
/* 04a3ae8b */  IMUL R9D,R8D
/* 04a3ae8f */  MOV dword ptr [RBX],R9D
/* 04a3ae92 */  MOV EAX,R10D
/* 04a3ae95 */  XOR EDX,EDX
/* 04a3ae97 */  MOV dword ptr [RSP + 0x4],ECX
/* 04a3ae9b */  DIV ECX
/* 04a3ae9d */  IMUL EAX,R9D
/* 04a3aea1 */  MOV qword ptr [RSP + 0x20],0x0
/* 04a3aeaa */  TEST EAX,EAX
/* 04a3aeac */  JZ 0x04a3aed5
/* 04a3aeae */  MOV ESI,EAX
/* 04a3aeb0 */  LEA RDX,[RSP + 0x20]
/* 04a3aeb5 */  MOV RDI,R15
/* 04a3aeb8 */  CALL 0x0c859e50
/* 04a3aebd */  MOV RAX,qword ptr [RSP + 0x10]
/* 04a3aec2 */  MOV EDI,dword ptr [RAX + 0xc]
/* 04a3aec5 */  MOV ESI,dword ptr [RAX + 0x10]
/* 04a3aec8 */  MOV R10D,dword ptr [RAX + 0x14]
/* 04a3aecc */  SUB EDI,dword ptr [RAX]
/* 04a3aece */  SUB ESI,dword ptr [RAX + 0x4]
/* 04a3aed1 */  SUB R10D,dword ptr [RAX + 0x8]
/* 04a3aed5 */  MOV qword ptr [RSP + 0x38],R15
/* 04a3aeda */  MOV EAX,EDI
/* 04a3aedc */  CDQ
/* 04a3aedd */  MOV ECX,dword ptr [RSP + 0x4]
/* 04a3aee1 */  IDIV ECX
/* 04a3aee3 */  MOV EDI,EAX
/* 04a3aee5 */  MOV EAX,ESI
/* 04a3aee7 */  CDQ
/* 04a3aee8 */  IDIV ECX
/* 04a3aeea */  MOV dword ptr [RSP + 0xc],EAX
/* 04a3aeee */  MOV EAX,R10D
/* 04a3aef1 */  CDQ
/* 04a3aef2 */  IDIV ECX
/* 04a3aef4 */  MOV dword ptr [RSP + 0x8],EAX
/* 04a3aef8 */  MOV dword ptr [RSP + 0x18],EDI
/* 04a3aefc */  TEST EDI,EDI
/* 04a3aefe */  JZ 0x04a3afec
/* 04a3af04 */  CMP dword ptr [RSP + 0x8],0x0
/* 04a3af09 */  JZ 0x04a3afec
/* 04a3af0f */  CMP dword ptr [RSP + 0xc],0x0
/* 04a3af14 */  JZ 0x04a3afec
/* 04a3af1a */  ADD qword ptr [RSP + 0x30],0x8
/* 04a3af20 */  XOR R13D,R13D
/* 04a3af23 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 04a3af30 */  MOV ECX,R13D
/* 04a3af33 */  IMUL ECX,dword ptr [RSP + 0x4]
/* 04a3af38 */  MOV RAX,qword ptr [RSP + 0x10]
/* 04a3af3d */  ADD ECX,dword ptr [RAX]
/* 04a3af3f */  MOV dword ptr [RSP + 0x1c],ECX
/* 04a3af43 */  XOR R12D,R12D
/* 04a3af46 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 04a3af50 */  MOV EBP,R12D
/* 04a3af53 */  IMUL EBP,dword ptr [RSP + 0x4]
/* 04a3af58 */  MOV RAX,qword ptr [RSP + 0x10]
/* 04a3af5d */  ADD EBP,dword ptr [RAX + 0x8]
/* 04a3af60 */  XOR R14D,R14D
/* 04a3af63 */  XOR R15D,R15D
/* 04a3af66 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 04a3af70 */  MOV RAX,qword ptr [RSP + 0x10]
/* 04a3af75 */  MOV EAX,dword ptr [RAX + 0x4]
/* 04a3af78 */  ADD EAX,R14D
/* 04a3af7b */  MOV RCX,qword ptr [RSP + 0x40]
/* 04a3af80 */  MOVZX ECX,byte ptr [RCX + 0xc]
/* 04a3af84 */  MOV EDX,dword ptr [RSP + 0x1c]
/* 04a3af88 */  MOV dword ptr [RSP + 0x20],EDX
/* 04a3af8c */  MOV dword ptr [RSP + 0x24],EAX
/* 04a3af90 */  MOV dword ptr [RSP + 0x28],EBP
/* 04a3af94 */  MOV byte ptr [RSP + 0x2c],CL
/* 04a3af98 */  MOV RDI,qword ptr [RSP + 0x30]
/* 04a3af9d */  LEA RSI,[RSP + 0x20]
/* 04a3afa2 */  CALL 0x04a3b2a0
/* 04a3afa7 */  MOV ECX,dword ptr [RBX + 0x4]
/* 04a3afaa */  IMUL ECX,R13D
/* 04a3afae */  MOV EDX,dword ptr [RBX]
/* 04a3afb0 */  IMUL EDX,R12D
/* 04a3afb4 */  ADD EDX,ECX
/* 04a3afb6 */  ADD EDX,R15D
/* 04a3afb9 */  MOV RCX,qword ptr [RBX + 0x8]
/* 04a3afbd */  MOV qword ptr [RCX + RDX*0x8],RAX
/* 04a3afc1 */  INC R15D
/* 04a3afc4 */  ADD R14D,dword ptr [RSP + 0x4]
/* 04a3afc9 */  CMP dword ptr [RSP + 0xc],R15D
/* 04a3afce */  JNZ 0x04a3af70
/* 04a3afd0 */  INC R12D
/* 04a3afd3 */  CMP R12D,dword ptr [RSP + 0x8]
/* 04a3afd8 */  JNZ 0x04a3af50
/* 04a3afde */  INC R13D
/* 04a3afe1 */  CMP R13D,dword ptr [RSP + 0x18]
/* 04a3afe6 */  JNZ 0x04a3af30
/* 04a3afec */  MOV RAX,RBX
/* 04a3afef */  ADD RSP,0x48
/* 04a3aff3 */  POP RBX
/* 04a3aff4 */  POP R12
/* 04a3aff6 */  POP R13
/* 04a3aff8 */  POP R14
/* 04a3affa */  POP R15
/* 04a3affc */  POP RBP
/* 04a3affd */  RET
