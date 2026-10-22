/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede2d70
 * Label: callee-of:0x493a160
 * Body:  [[0ede2d70, 0ede2f32]]
 * Ghidra: FUN_0ede2d70
 */


void FUN_0ede2d70(void)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long in_RCX;
  int *piVar6;
  undefined8 *unaff_RBX;
  long unaff_R14;
  undefined8 unaff_retaddr;
  code *in_stack_00000010;
  code *in_stack_00000018;
  undefined4 uStack0000000000000020;
  char cStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  uVar4 = (ulong)*(uint *)(in_RCX + 0x78);
  if (uVar4 != 0) {
    for (piVar6 = *(int **)(uVar4 + 0x30); piVar6 != *(int **)(uVar4 + 0x38); piVar6 = piVar6 + 4) {
      if (*piVar6 == 0x2e32c148) {
                    /* WARNING: Could not recover jumptable at 0x0ede2ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar6 + 2))();
        return;
      }
    }
    piVar1 = *(int **)(uVar4 + 0x20);
    for (piVar6 = *(int **)(uVar4 + 0x18); piVar6 != piVar1; piVar6 = piVar6 + 6) {
      lVar5 = (**(code **)(piVar6 + 2))(*(undefined8 *)(unaff_R14 + 0x28));
      pcVar2 = *(code **)(lVar5 + 0x40);
      (**(code **)(piVar6 + 4))();
      (*pcVar2)();
      if (*piVar6 == 0x2e32c148) {
        *unaff_RBX = 0;
        unaff_RBX[2] = in_stack_00000010;
        unaff_RBX[3] = in_stack_00000018;
        *(undefined4 *)(unaff_RBX + 4) = uStack0000000000000020;
        *(char *)((long)unaff_RBX + 0x24) = cStack0000000000000024;
        if (cStack0000000000000024 != '\0') {
          if (cStack0000000000000024 == '\x02') {
            (*in_stack_00000010)(5,&stack0x00000000);
          }
          else {
            *unaff_RBX = unaff_retaddr;
          }
        }
        *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000028;
        *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack000000000000002c;
        *(undefined4 *)(unaff_RBX + 6) = uStack0000000000000030;
        *(undefined4 *)((long)unaff_RBX + 0x34) = uStack0000000000000034;
        unaff_RBX[7] = in_stack_00000038;
        if (in_stack_00000018 == (code *)0x0) {
          return;
        }
        (*in_stack_00000018)(&stack0x00000000);
        return;
      }
      func_0x0ede2ce0();
      lVar5 = unaff_RBX[7];
      if ((lVar5 == 0) && ((code *)unaff_RBX[3] != (code *)0x0)) {
        (*(code *)unaff_RBX[3])();
      }
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)();
      }
      if (lVar5 != 0) {
        return;
      }
    }
  }
  uVar3 = *(undefined8 *)(unaff_R14 + 0x28);
  unaff_RBX[2] = &UNK_0488e0b0;
  *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
  unaff_RBX[3] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
  *unaff_RBX = 0;
  unaff_RBX[5] = uVar3;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  return;
}



/* ---- assembly ---- */
/* 0ede2d70 */  MOV EAX,dword ptr [RCX + 0x78]
/* 0ede2d73 */  TEST RAX,RAX
/* 0ede2d76 */  JZ 0x0ede2e3d
/* 0ede2d7c */  MOV RCX,qword ptr [RAX + 0x30]
/* 0ede2d80 */  MOV RDX,qword ptr [RAX + 0x38]
/* 0ede2d84 */  CMP RCX,RDX
/* 0ede2d87 */  JZ 0x0ede2da5
/* 0ede2d89 */  NOP dword ptr [RAX]
/* 0ede2d90 */  CMP dword ptr [RCX],0x2e32c148
/* 0ede2d96 */  JZ 0x0ede2e80
/* 0ede2d9c */  ADD RCX,0x10
/* 0ede2da0 */  CMP RCX,RDX
/* 0ede2da3 */  JNZ 0x0ede2d90
/* 0ede2da5 */  MOV R13,qword ptr [RAX + 0x18]
/* 0ede2da9 */  MOV RAX,qword ptr [RAX + 0x20]
/* 0ede2dad */  MOV qword ptr [RSP + 0x40],RAX
/* 0ede2db2 */  CMP R13,RAX
/* 0ede2db5 */  JZ 0x0ede2e3d
/* 0ede2dbb */  MOV R15,RSP
/* 0ede2dbe */  NOP
/* 0ede2dc0 */  MOV RDI,qword ptr [R14 + 0x28]
/* 0ede2dc4 */  CALL qword ptr [R13 + 0x8]
/* 0ede2dc8 */  CMP byte ptr [R14 + 0x24],0x2
/* 0ede2dcd */  MOV RDI,R14
/* 0ede2dd0 */  JZ 0x0ede2dd5
/* 0ede2dd2 */  MOV RDI,qword ptr [R14]
/* 0ede2dd5 */  MOV RBP,qword ptr [RAX + 0x40]
/* 0ede2dd9 */  MOV R12,qword ptr [R14 + 0x28]
/* 0ede2ddd */  CALL qword ptr [R13 + 0x10]
/* 0ede2de1 */  MOV RDI,R15
/* 0ede2de4 */  MOV RSI,R12
/* 0ede2de7 */  XOR EDX,EDX
/* 0ede2de9 */  MOV RCX,RAX
/* 0ede2dec */  CALL RBP
/* 0ede2dee */  CMP dword ptr [R13],0x2e32c148
/* 0ede2df6 */  JZ 0x0ede2ea8
/* 0ede2dfc */  MOV RDI,RBX
/* 0ede2dff */  MOV RSI,R15
/* 0ede2e02 */  CALL 0x0ede2ce0
/* 0ede2e07 */  MOV R12,qword ptr [RBX + 0x38]
/* 0ede2e0b */  TEST R12,R12
/* 0ede2e0e */  JNZ 0x0ede2e1e
/* 0ede2e10 */  MOV RAX,qword ptr [RBX + 0x18]
/* 0ede2e14 */  TEST RAX,RAX
/* 0ede2e17 */  JZ 0x0ede2e1e
/* 0ede2e19 */  MOV RDI,RBX
/* 0ede2e1c */  CALL RAX
/* 0ede2e1e */  MOV RAX,qword ptr [RSP + 0x18]
/* 0ede2e23 */  TEST RAX,RAX
/* 0ede2e26 */  JZ 0x0ede2e2d
/* 0ede2e28 */  MOV RDI,R15
/* 0ede2e2b */  CALL RAX
/* 0ede2e2d */  TEST R12,R12
/* 0ede2e30 */  JNZ 0x0ede2e71
/* 0ede2e32 */  ADD R13,0x18
/* 0ede2e36 */  CMP R13,qword ptr [RSP + 0x40]
/* 0ede2e3b */  JNZ 0x0ede2dc0
/* 0ede2e3d */  MOV RAX,qword ptr [R14 + 0x28]
/* 0ede2e41 */  LEA RCX,[0x488e0b0]
/* 0ede2e48 */  MOV qword ptr [RBX + 0x10],RCX
/* 0ede2e4c */  MOV dword ptr [RBX + 0x20],0x48b5725f
/* 0ede2e53 */  MOV qword ptr [RBX + 0x18],0x0
/* 0ede2e5b */  MOV byte ptr [RBX + 0x24],0x0
/* 0ede2e5f */  MOV qword ptr [RBX],0x0
/* 0ede2e66 */  MOV qword ptr [RBX + 0x28],RAX
/* 0ede2e6a */  XORPS XMM0,XMM0
/* 0ede2e6d */  MOVUPS xmmword ptr [RBX + 0x30],XMM0
/* 0ede2e71 */  ADD RSP,0x48
/* 0ede2e75 */  POP RBX
/* 0ede2e76 */  POP R12
/* 0ede2e78 */  POP R13
/* 0ede2e7a */  POP R14
/* 0ede2e7c */  POP R15
/* 0ede2e7e */  POP RBP
/* 0ede2e7f */  RET
/* 0ede2e80 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0ede2e84 */  MOV RSI,qword ptr [R14 + 0x28]
/* 0ede2e88 */  CMP byte ptr [R14 + 0x24],0x2
/* 0ede2e8d */  JZ 0x0ede2e92
/* 0ede2e8f */  MOV R14,qword ptr [R14]
/* 0ede2e92 */  MOV RDI,RBX
/* 0ede2e95 */  MOV RDX,R14
/* 0ede2e98 */  ADD RSP,0x48
/* 0ede2e9c */  POP RBX
/* 0ede2e9d */  POP R12
/* 0ede2e9f */  POP R13
/* 0ede2ea1 */  POP R14
/* 0ede2ea3 */  POP R15
/* 0ede2ea5 */  POP RBP
/* 0ede2ea6 */  JMP RAX
/* 0ede2ea8 */  MOV qword ptr [RBX],0x0
/* 0ede2eaf */  MOV RCX,qword ptr [RSP + 0x10]
/* 0ede2eb4 */  MOV qword ptr [RBX + 0x10],RCX
/* 0ede2eb8 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0ede2ebd */  MOV qword ptr [RBX + 0x18],RAX
/* 0ede2ec1 */  MOV EDX,dword ptr [RSP + 0x20]
/* 0ede2ec5 */  MOV dword ptr [RBX + 0x20],EDX
/* 0ede2ec8 */  MOVZX EDX,byte ptr [RSP + 0x24]
/* 0ede2ecd */  MOV byte ptr [RBX + 0x24],DL
/* 0ede2ed0 */  TEST EDX,EDX
/* 0ede2ed2 */  JZ 0x0ede2efc
/* 0ede2ed4 */  CMP EDX,0x2
/* 0ede2ed7 */  JNZ 0x0ede2eed
/* 0ede2ed9 */  MOV RSI,RSP
/* 0ede2edc */  MOV EDI,0x5
/* 0ede2ee1 */  MOV RDX,RBX
/* 0ede2ee4 */  CALL RCX
/* 0ede2ee6 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0ede2eeb */  JMP 0x0ede2efc
/* 0ede2eed */  MOV RCX,qword ptr [RSP]
/* 0ede2ef1 */  MOV qword ptr [RSP],0x0
/* 0ede2ef9 */  MOV qword ptr [RBX],RCX
/* 0ede2efc */  MOVUPS XMM0,xmmword ptr [RSP + 0x28]
/* 0ede2f01 */  MOV qword ptr [RSP + 0x30],0x0
/* 0ede2f0a */  MOVUPS xmmword ptr [RBX + 0x28],XMM0
/* 0ede2f0e */  MOV RCX,qword ptr [RSP + 0x38]
/* 0ede2f13 */  MOV qword ptr [RSP + 0x38],0x0
/* 0ede2f1c */  MOV qword ptr [RBX + 0x38],RCX
/* 0ede2f20 */  TEST RAX,RAX
/* 0ede2f23 */  JZ 0x0ede2e71
/* 0ede2f29 */  MOV RDI,RSP
/* 0ede2f2c */  CALL RAX
/* 0ede2f2e */  JMP 0x0ede2e71
