/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd200630
 * Label: string:auto Puv::SlicedLoader<SharedTypes::v1_21_20::JigsawStructur
 * Body:  [[0d200630, 0d200698] [0d20069f, 0d200799]]
 * Ghidra: FUN_0d200630
 */


/* WARNING: Instruction at (ram,0x0d20069f) overlaps instruction at (ram,0x0d200699)
    */

void FUN_0d200630(void)

{
  int iVar1;
  long *plVar2;
  byte in_AL;
  undefined8 uVar3;
  char in_CL;
  undefined *puVar4;
  long lVar5;
  undefined1 *unaff_RBX;
  long *plVar6;
  undefined1 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined1 in_stack_00000020 [16];
  undefined *in_stack_00000080;
  long *in_stack_000000a0;
  
  uVar3 = 0x61636f6c;
  if ((in_AL & 0x20) != 0xb8) {
    if ((in_AL & 0x20) < 0xb8) {
      in_stack_00000020._1_8_ = 0x61636f6c;
      in_stack_00000020._9_2_ = 0x7261;
      in_stack_00000020[0xb] = 0;
      unaff_RBX = (undefined1 *)func_0x0d201960();
      unaff_RBX[1] = 1;
      if (*(int *)(unaff_RBX + 8) != 1) {
        *(undefined4 *)(unaff_RBX + 8) = 1;
      }
      unaff_RBX[4] = 0;
      uStack0000000000000008 = 1;
      uStack000000000000000c = 1;
      func_0x0d1fe8b0(unaff_RBX,&stack0x00000008,0,0);
      *unaff_RBX = 0;
      *(undefined4 *)(unaff_RBX + 0x28) = 0x10001;
      uVar3 = 0x3000000001;
    }
    else {
      cRam0000000061636f24 = cRam0000000061636f24 + in_CL;
      iVar1 = iRam0000000061636f6c + 0x61636f6c;
      iRam0000000061636f6c._0_1_ = (char)iVar1;
      iRam0000000061636f6c =
           CONCAT31((int3)((uint)iVar1 >> 8),((char)iRam0000000061636f6c + 0x6cU ^ 0x6c) + 0x6c);
    }
  }
  *(undefined8 *)(unaff_RBX + 0xa8) = uVar3;
  puVar4 = &UNK_0f45b188;
  in_stack_00000080 = &UNK_0f45b188;
  in_stack_000000a0 = (long *)&stack0x00000080;
  *(undefined4 *)(unaff_RBX + 0xe0) = 0x11;
  unaff_RBX[0xe4] = 1;
  plVar6 = (long *)(unaff_RBX + 0xb0);
  plVar2 = *(long **)(unaff_RBX + 0xd0);
  *(undefined8 *)(unaff_RBX + 0xd0) = 0;
  if (plVar2 == plVar6) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (plVar2 == (long *)0x0) goto LAB_0d20074f;
  }
  (**(code **)(*plVar2 + lVar5))(plVar2);
  if (in_stack_000000a0 == (long *)0x0) {
    *(undefined8 *)(unaff_RBX + 0xd0) = 0;
    return;
  }
  if ((undefined **)in_stack_000000a0 != &stack0x00000080) {
    *(long **)(unaff_RBX + 0xd0) = in_stack_000000a0;
    return;
  }
  puVar4 = (undefined *)*in_stack_000000a0;
LAB_0d20074f:
  *(long **)(unaff_RBX + 0xd0) = plVar6;
  (**(code **)(puVar4 + 0x18))(in_stack_000000a0,plVar6);
  if ((undefined **)in_stack_000000a0 == &stack0x00000080) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (in_stack_000000a0 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*in_stack_000000a0 + lVar5))();
  return;
}



/* ---- assembly ---- */
/* 0d200630 */  AND AL,0x20
/* 0d200632 */  ADC AL,0x48
/* 0d200634 */  MOV EAX,0x61636f6c
/* 0d200639 */  JZ 0x0d2006aa
/* 0d20063b */  JC 0x0d20069f
/* 0d20063d */  MOV qword ptr [RSP + 0x21],RAX
/* 0d200642 */  MOV word ptr [RSP + 0x29],0x7261
/* 0d200649 */  MOV byte ptr [RSP + 0x2b],0x0
/* 0d20064e */  LEA RSI,[RSP + 0x20]
/* 0d200653 */  MOV RDI,RBX
/* 0d200656 */  MOV EDX,0x12
/* 0d20065b */  CALL 0x0d201960
/* 0d200660 */  MOV RBX,RAX
/* 0d200663 */  MOV byte ptr [RAX + 0x1],0x1
/* 0d200667 */  CMP dword ptr [RAX + 0x8],0x1
/* 0d20066b */  JZ 0x0d200674
/* 0d20066d */  MOV dword ptr [RBX + 0x8],0x1
/* 0d200674 */  MOV byte ptr [RBX + 0x4],0x0
/* 0d200678 */  MOV byte ptr [RSP + 0x8],0x1
/* 0d20067d */  MOV dword ptr [RSP + 0xc],0x1
/* 0d200685 */  LEA RSI,[RSP + 0x8]
/* 0d20068a */  MOV RDI,RBX
/* 0d20068d */  XOR EDX,EDX
/* 0d20068f */  XOR ECX,ECX
/* 0d200691 */  CALL 0x0d1fe8b0
/* 0d200696 */  MOV byte ptr [RBX],0x0
/* 0d20069f */  ADD byte ptr [RAX + -0x48],CL
/* 0d2006a2 */  ADD dword ptr [RAX],EAX
/* 0d2006a4 */  ADD byte ptr [RAX],AL
/* 0d2006a6 */  XOR byte ptr [RAX],AL
/* 0d2006a8 */  ADD byte ptr [RAX],AL
/* 0d2006aa */  MOV qword ptr [RBX + 0xa8],RAX
/* 0d2006b1 */  LEA RCX,[0xf45b188]
/* 0d2006b8 */  MOV qword ptr [RSP + 0x80],RCX
/* 0d2006c0 */  LEA RDI,[RSP + 0x80]
/* 0d2006c8 */  MOV qword ptr [RSP + 0xa0],RDI
/* 0d2006d0 */  MOV dword ptr [RBX + 0xe0],0x11
/* 0d2006da */  MOV byte ptr [RBX + 0xe4],0x1
/* 0d2006e1 */  MOV R14,RBX
/* 0d2006e4 */  ADD R14,0xb0
/* 0d2006eb */  MOV RAX,qword ptr [RBX + 0xd0]
/* 0d2006f2 */  MOV qword ptr [RBX + 0xd0],0x0
/* 0d2006fd */  CMP RAX,R14
/* 0d200700 */  JZ 0x0d20070e
/* 0d200702 */  MOV EDX,0x28
/* 0d200707 */  TEST RAX,RAX
/* 0d20070a */  JNZ 0x0d200713
/* 0d20070c */  JMP 0x0d20074f
/* 0d20070e */  MOV EDX,0x20
/* 0d200713 */  MOV RCX,qword ptr [RAX]
/* 0d200716 */  MOV RDI,RAX
/* 0d200719 */  CALL qword ptr [RCX + RDX*0x1]
/* 0d20071c */  MOV RDI,qword ptr [RSP + 0xa0]
/* 0d200724 */  TEST RDI,RDI
/* 0d200727 */  JZ 0x0d20073f
/* 0d200729 */  LEA RAX,[RSP + 0x80]
/* 0d200731 */  CMP RDI,RAX
/* 0d200734 */  JZ 0x0d20074c
/* 0d200736 */  MOV qword ptr [RBX + 0xd0],RDI
/* 0d20073d */  JMP 0x0d200788
/* 0d20073f */  MOV qword ptr [RBX + 0xd0],0x0
/* 0d20074a */  JMP 0x0d200788
/* 0d20074c */  MOV RCX,qword ptr [RDI]
/* 0d20074f */  MOV qword ptr [RBX + 0xd0],R14
/* 0d200756 */  MOV RSI,R14
/* 0d200759 */  CALL qword ptr [RCX + 0x18]
/* 0d20075c */  MOV RDI,qword ptr [RSP + 0xa0]
/* 0d200764 */  LEA RAX,[RSP + 0x80]
/* 0d20076c */  CMP RDI,RAX
/* 0d20076f */  JZ 0x0d20077d
/* 0d200771 */  MOV EAX,0x28
/* 0d200776 */  TEST RDI,RDI
/* 0d200779 */  JNZ 0x0d200782
/* 0d20077b */  JMP 0x0d200788
/* 0d20077d */  MOV EAX,0x20
/* 0d200782 */  MOV RCX,qword ptr [RDI]
/* 0d200785 */  CALL qword ptr [RCX + RAX*0x1]
/* 0d200788 */  ADD RSP,0x208
/* 0d20078f */  POP RBX
/* 0d200790 */  POP R12
/* 0d200792 */  POP R13
/* 0d200794 */  POP R14
/* 0d200796 */  POP R15
/* 0d200798 */  POP RBP
/* 0d200799 */  RET
