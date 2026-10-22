/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3aaf0 (ELF vaddr 0x493aaf0)
 * Label: BiomeSource3d::vslot4
 * Body:  [[04a3aaf0, 04a3aca8] [04a3acb0, 04a3acd1] [04a3ace0, 04a3ad55]]
 * Ghidra: wg_BiomeSource3d__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_BiomeSource3d__vslot4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  sVar2 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa);
  sVar3 = *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  uVar5 = *(ulong *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x40);
  uStack_38 = param_1;
  uVar9 = (**(code **)(**(long **)(param_2 + 0x28) + 0x438))();
  iStack_70 = uVar4 - 8;
  lStack_78 = ((ulong)((int)uVar5 - 8) | uVar5 & 0xffffffff00000000) - 0x800000000;
  uVar10 = (uint)(short)(sVar2 - sVar3);
  iStack_6c = (uVar10 >> 3) + 2;
  uVar11 = iStack_6c * 0x10;
  lVar1 = (ulong)uVar11 * 8;
  uStack_48 = uVar5;
  uStack_40 = (ulong)uVar4;
  lStack_90 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_90 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_80 = lStack_90 + (ulong)uVar11 * 8;
  lStack_88 = lStack_90;
  if ((param_3 == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x53,&UNK_012d6c22,&UNK_011b82db),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x04a3a2f0(uStack_38,&lStack_90,param_3);
  func_0x0c84f340(&lStack_a8,&lStack_90,uVar10,uStack_48,uStack_40,uVar9);
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  lStack_58 = lStack_98;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  func_0x0caf8fb0(param_2,&lStack_68);
  lVar7 = lStack_68;
  lVar1 = lStack_60;
  if (lStack_68 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x0412a280(lVar7,lStack_58 - lVar7);
  }
  lVar7 = lStack_a8;
  lVar1 = lStack_a0;
  if (lStack_a8 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    lStack_a0 = lVar7;
    func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    func_0x0412a280(lStack_90,lStack_80 - lStack_90);
  }
  return;
}



/* ---- assembly ---- */
/* 04a3aaf0 */  PUSH RBP
/* 04a3aaf1 */  PUSH R15
/* 04a3aaf3 */  PUSH R14
/* 04a3aaf5 */  PUSH R13
/* 04a3aaf7 */  PUSH R12
/* 04a3aaf9 */  PUSH RBX
/* 04a3aafa */  SUB RSP,0x88
/* 04a3ab01 */  MOV R14,RDX
/* 04a3ab04 */  MOV RBX,RSI
/* 04a3ab07 */  MOV qword ptr [RSP + 0x80],RDI
/* 04a3ab0f */  MOV RAX,qword ptr [RSI + 0x30]
/* 04a3ab13 */  MOVZX EBP,word ptr [RAX + 0xaa]
/* 04a3ab1a */  SUB BP,word ptr [RAX + 0xa8]
/* 04a3ab21 */  MOV RDI,qword ptr [RSI + 0x28]
/* 04a3ab25 */  MOV R12,qword ptr [RSI + 0x38]
/* 04a3ab29 */  MOV R15D,dword ptr [RSI + 0x40]
/* 04a3ab2d */  MOV RAX,qword ptr [RDI]
/* 04a3ab30 */  CALL qword ptr [RAX + 0x438]
/* 04a3ab36 */  MOV dword ptr [RSP + 0xc],EAX
/* 04a3ab3a */  LEA EAX,[R12 + -0x8]
/* 04a3ab3f */  MOV qword ptr [RSP + 0x78],R15
/* 04a3ab44 */  LEA ECX,[R15 + -0x8]
/* 04a3ab48 */  MOV RDX,-0x100000000
/* 04a3ab52 */  MOV qword ptr [RSP + 0x70],R12
/* 04a3ab57 */  AND RDX,R12
/* 04a3ab5a */  OR RAX,RDX
/* 04a3ab5d */  MOV RDX,-0x800000000
/* 04a3ab67 */  ADD RDX,RAX
/* 04a3ab6a */  MOV qword ptr [RSP + 0x40],RDX
/* 04a3ab6f */  MOV dword ptr [RSP + 0x48],ECX
/* 04a3ab73 */  MOVSX EBP,BP
/* 04a3ab76 */  MOV R12D,EBP
/* 04a3ab79 */  SHR R12D,0x3
/* 04a3ab7d */  ADD R12D,0x2
/* 04a3ab81 */  MOV dword ptr [RSP + 0x4c],R12D
/* 04a3ab86 */  SHL R12D,0x4
/* 04a3ab8a */  LEA R13,[R12*0x8]
/* 04a3ab92 */  MOV RAX,qword ptr [0x0f5463b0]
/* 04a3ab99 */  LEA RDI,[0xf5463b0]
/* 04a3aba0 */  MOV RSI,R13
/* 04a3aba3 */  CALL qword ptr [RAX + 0x10]
/* 04a3aba6 */  MOV R15,RAX
/* 04a3aba9 */  TEST RAX,RAX
/* 04a3abac */  JZ 0x04a3ad47
/* 04a3abb2 */  LEA RAX,[R15 + R12*0x8]
/* 04a3abb6 */  MOV qword ptr [RSP + 0x28],R15
/* 04a3abbb */  MOV qword ptr [RSP + 0x30],R15
/* 04a3abc0 */  MOV qword ptr [RSP + 0x38],RAX
/* 04a3abc5 */  TEST R14,R14
/* 04a3abc8 */  JNZ 0x04a3ac01
/* 04a3abca */  LEA RDI,[0x1221f1d]
/* 04a3abd1 */  LEA RSI,[0x1390418]
/* 04a3abd8 */  LEA RCX,[0x12d6c22]
/* 04a3abdf */  LEA R8,[0x11b82db]
/* 04a3abe6 */  MOV EDX,0x53
/* 04a3abeb */  XOR EAX,EAX
/* 04a3abed */  CALL 0x0eeddcf0
/* 04a3abf2 */  TEST AL,AL
/* 04a3abf4 */  JZ 0x04a3ac01
/* 04a3abf6 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 04a3ac01 */  LEA RSI,[RSP + 0x28]
/* 04a3ac06 */  MOV RDI,qword ptr [RSP + 0x80]
/* 04a3ac0e */  MOV RDX,R14
/* 04a3ac11 */  CALL 0x04a3a2f0
/* 04a3ac16 */  LEA RDI,[RSP + 0x10]
/* 04a3ac1b */  LEA RSI,[RSP + 0x28]
/* 04a3ac20 */  MOV EDX,EBP
/* 04a3ac22 */  MOV RCX,qword ptr [RSP + 0x70]
/* 04a3ac27 */  MOV R8,qword ptr [RSP + 0x78]
/* 04a3ac2c */  MOV R9D,dword ptr [RSP + 0xc]
/* 04a3ac31 */  CALL 0x0c84f340
/* 04a3ac36 */  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
/* 04a3ac3b */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 04a3ac40 */  MOV RAX,qword ptr [RSP + 0x20]
/* 04a3ac45 */  MOV qword ptr [RSP + 0x60],RAX
/* 04a3ac4a */  XORPS XMM0,XMM0
/* 04a3ac4d */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 04a3ac52 */  MOV qword ptr [RSP + 0x20],0x0
/* 04a3ac5b */  LEA RSI,[RSP + 0x50]
/* 04a3ac60 */  MOV RDI,RBX
/* 04a3ac63 */  CALL 0x0caf8fb0
/* 04a3ac68 */  MOV RBX,qword ptr [RSP + 0x50]
/* 04a3ac6d */  TEST RBX,RBX
/* 04a3ac70 */  JZ 0x04a3ac8c
/* 04a3ac72 */  MOV R14,qword ptr [RSP + 0x58]
/* 04a3ac77 */  CMP RBX,R14
/* 04a3ac7a */  JNZ 0x04a3acb9
/* 04a3ac7c */  MOV RSI,qword ptr [RSP + 0x60]
/* 04a3ac81 */  SUB RSI,RBX
/* 04a3ac84 */  MOV RDI,RBX
/* 04a3ac87 */  CALL 0x0412a280
/* 04a3ac8c */  MOV RBX,qword ptr [RSP + 0x10]
/* 04a3ac91 */  TEST RBX,RBX
/* 04a3ac94 */  JZ 0x04a3ad19
/* 04a3ac9a */  MOV R14,qword ptr [RSP + 0x18]
/* 04a3ac9f */  MOV RDI,RBX
/* 04a3aca2 */  CMP RBX,R14
/* 04a3aca5 */  JNZ 0x04a3ace9
/* 04a3aca7 */  JMP 0x04a3ad07
/* 04a3acb0 */  ADD R14,-0x8
/* 04a3acb4 */  CMP R14,RBX
/* 04a3acb7 */  JZ 0x04a3ac7c
/* 04a3acb9 */  MOV RDI,qword ptr [R14 + -0x8]
/* 04a3acbd */  MOV qword ptr [R14 + -0x8],0x0
/* 04a3acc5 */  TEST RDI,RDI
/* 04a3acc8 */  JZ 0x04a3acb0
/* 04a3acca */  MOV RAX,qword ptr [RDI]
/* 04a3accd */  CALL qword ptr [RAX + 0x8]
/* 04a3acd0 */  JMP 0x04a3acb0
/* 04a3ace0 */  ADD R14,-0x8
/* 04a3ace4 */  CMP R14,RBX
/* 04a3ace7 */  JZ 0x04a3ad02
/* 04a3ace9 */  MOV RDI,qword ptr [R14 + -0x8]
/* 04a3aced */  MOV qword ptr [R14 + -0x8],0x0
/* 04a3acf5 */  TEST RDI,RDI
/* 04a3acf8 */  JZ 0x04a3ace0
/* 04a3acfa */  MOV RAX,qword ptr [RDI]
/* 04a3acfd */  CALL qword ptr [RAX + 0x8]
/* 04a3ad00 */  JMP 0x04a3ace0
/* 04a3ad02 */  MOV RDI,qword ptr [RSP + 0x10]
/* 04a3ad07 */  MOV qword ptr [RSP + 0x18],RBX
/* 04a3ad0c */  MOV RSI,qword ptr [RSP + 0x20]
/* 04a3ad11 */  SUB RSI,RDI
/* 04a3ad14 */  CALL 0x0412a280
/* 04a3ad19 */  MOV RDI,qword ptr [RSP + 0x28]
/* 04a3ad1e */  TEST RDI,RDI
/* 04a3ad21 */  JZ 0x04a3ad35
/* 04a3ad23 */  MOV qword ptr [RSP + 0x30],RDI
/* 04a3ad28 */  MOV RSI,qword ptr [RSP + 0x38]
/* 04a3ad2d */  SUB RSI,RDI
/* 04a3ad30 */  CALL 0x0412a280
/* 04a3ad35 */  ADD RSP,0x88
/* 04a3ad3c */  POP RBX
/* 04a3ad3d */  POP R12
/* 04a3ad3f */  POP R13
/* 04a3ad41 */  POP R14
/* 04a3ad43 */  POP R15
/* 04a3ad45 */  POP RBP
/* 04a3ad46 */  RET
/* 04a3ad47 */  MOV RDI,R13
/* 04a3ad4a */  XOR ESI,ESI
/* 04a3ad4c */  CALL 0x0eec74c0
/* 04a3ad51 */  JMP 0x04a3abb2
