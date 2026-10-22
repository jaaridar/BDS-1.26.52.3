/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b05a0 (ELF vaddr 0x47b05a0)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b05a0, 048b06b4]]
 * Ghidra: FUN_048b05a0
 */


void FUN_048b05a0(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined8 uVar19;
  
  *(undefined4 *)(param_1 + 0x1c) = 1;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x18) = iVar2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  piVar4 = *(int **)(lVar3 + 0x50);
  for (piVar18 = *(int **)(lVar3 + 0x48); piVar18 != piVar4; piVar18 = piVar18 + 0x1a) {
    if (*piVar18 == iVar2) {
      if ((*(long *)(piVar18 + 0x10) != *(long *)(param_2 + 0x10)) ||
         (*(long *)(piVar18 + 0x12) != *(long *)(param_2 + 0x12))) {
        uVar19 = *(undefined8 *)(param_2 + 0x12);
        *(undefined8 *)(piVar18 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(piVar18 + 0x12) = uVar19;
        uVar19 = *(undefined8 *)param_2;
        uVar12 = *(undefined8 *)(param_2 + 2);
        uVar13 = *(undefined8 *)(param_2 + 4);
        uVar14 = *(undefined8 *)(param_2 + 6);
        iVar2 = param_2[8];
        iVar6 = param_2[9];
        iVar7 = param_2[10];
        iVar8 = param_2[0xb];
        iVar9 = param_2[0xd];
        iVar10 = param_2[0xe];
        iVar11 = param_2[0xf];
        piVar18[0xc] = param_2[0xc];
        piVar18[0xd] = iVar9;
        piVar18[0xe] = iVar10;
        piVar18[0xf] = iVar11;
        piVar18[8] = iVar2;
        piVar18[9] = iVar6;
        piVar18[10] = iVar7;
        piVar18[0xb] = iVar8;
        *(undefined8 *)(piVar18 + 4) = uVar13;
        *(undefined8 *)(piVar18 + 6) = uVar14;
        *(undefined8 *)piVar18 = uVar19;
        *(undefined8 *)(piVar18 + 2) = uVar12;
        piVar18[0x14] = param_2[0x14];
        iVar2 = param_2[0x16];
        iVar6 = param_2[0x17];
        iVar7 = param_2[0x18];
        iVar8 = param_2[0x19];
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        plVar5 = *(long **)(piVar18 + 0x18);
        piVar18[0x16] = iVar2;
        piVar18[0x17] = iVar6;
        piVar18[0x18] = iVar7;
        piVar18[0x19] = iVar8;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            if (plVar5[2] != 0) {
              LOCK();
              plVar1 = plVar5 + 2;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 != 0) {
                return;
              }
            }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x20))();
            return;
          }
        }
      }
      return;
    }
  }
  if (piVar4 < *(int **)(lVar3 + 0x58)) {
    uVar19 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(piVar4 + 0x12) = uVar19;
    uVar19 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)(param_2 + 4);
    uVar14 = *(undefined8 *)(param_2 + 6);
    uVar15 = *(undefined8 *)(param_2 + 8);
    uVar16 = *(undefined8 *)(param_2 + 10);
    uVar17 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(piVar4 + 0xe) = uVar17;
    *(undefined8 *)(piVar4 + 8) = uVar15;
    *(undefined8 *)(piVar4 + 10) = uVar16;
    *(undefined8 *)(piVar4 + 4) = uVar13;
    *(undefined8 *)(piVar4 + 6) = uVar14;
    *(undefined8 *)piVar4 = uVar19;
    *(undefined8 *)(piVar4 + 2) = uVar12;
    piVar4[0x14] = param_2[0x14];
    uVar19 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(piVar4 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(piVar4 + 0x18) = uVar19;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    *(int **)(lVar3 + 0x50) = piVar4 + 0x1a;
    return;
  }
  uVar19 = func_0x048b06d0(lVar3 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar19;
  return;
}



/* ---- assembly ---- */
/* 048b05a0 */  PUSH RBX
/* 048b05a1 */  MOV dword ptr [RDI + 0x1c],0x1
/* 048b05a8 */  MOV EDX,dword ptr [RSI]
/* 048b05aa */  MOV dword ptr [RDI + 0x18],EDX
/* 048b05ad */  MOV RAX,qword ptr [RDI + 0x10]
/* 048b05b1 */  MOV RBX,qword ptr [RAX + 0x78]
/* 048b05b5 */  MOV RAX,qword ptr [RBX + 0x48]
/* 048b05b9 */  MOV RCX,qword ptr [RBX + 0x50]
/* 048b05bd */  CMP RAX,RCX
/* 048b05c0 */  JZ 0x048b05dd
/* 048b05c2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 048b05d0 */  CMP dword ptr [RAX],EDX
/* 048b05d2 */  JZ 0x048b0637
/* 048b05d4 */  ADD RAX,0x68
/* 048b05d8 */  CMP RAX,RCX
/* 048b05db */  JNZ 0x048b05d0
/* 048b05dd */  CMP RCX,qword ptr [RBX + 0x58]
/* 048b05e1 */  JNC 0x048b0628
/* 048b05e3 */  MOVUPS XMM0,xmmword ptr [RSI + 0x40]
/* 048b05e7 */  MOVUPS xmmword ptr [RCX + 0x40],XMM0
/* 048b05eb */  MOVUPS XMM0,xmmword ptr [RSI]
/* 048b05ee */  MOVUPS XMM1,xmmword ptr [RSI + 0x10]
/* 048b05f2 */  MOVUPS XMM2,xmmword ptr [RSI + 0x20]
/* 048b05f6 */  MOVUPS XMM3,xmmword ptr [RSI + 0x30]
/* 048b05fa */  MOVUPS xmmword ptr [RCX + 0x30],XMM3
/* 048b05fe */  MOVUPS xmmword ptr [RCX + 0x20],XMM2
/* 048b0602 */  MOVUPS xmmword ptr [RCX + 0x10],XMM1
/* 048b0606 */  MOVUPS xmmword ptr [RCX],XMM0
/* 048b0609 */  MOV EAX,dword ptr [RSI + 0x50]
/* 048b060c */  MOV dword ptr [RCX + 0x50],EAX
/* 048b060f */  MOVUPS XMM0,xmmword ptr [RSI + 0x58]
/* 048b0613 */  MOVUPS xmmword ptr [RCX + 0x58],XMM0
/* 048b0617 */  XORPS XMM0,XMM0
/* 048b061a */  MOVUPS xmmword ptr [RSI + 0x58],XMM0
/* 048b061e */  ADD RCX,0x68
/* 048b0622 */  MOV qword ptr [RBX + 0x50],RCX
/* 048b0626 */  POP RBX
/* 048b0627 */  RET
/* 048b0628 */  LEA RDI,[RBX + 0x48]
/* 048b062c */  CALL 0x048b06d0
/* 048b0631 */  MOV qword ptr [RBX + 0x50],RAX
/* 048b0635 */  POP RBX
/* 048b0636 */  RET
/* 048b0637 */  MOV RCX,qword ptr [RAX + 0x40]
/* 048b063b */  CMP RCX,qword ptr [RSI + 0x40]
/* 048b063f */  JNZ 0x048b064b
/* 048b0641 */  MOV RCX,qword ptr [RAX + 0x48]
/* 048b0645 */  CMP RCX,qword ptr [RSI + 0x48]
/* 048b0649 */  JZ 0x048b06a1
/* 048b064b */  MOVUPS XMM0,xmmword ptr [RSI + 0x40]
/* 048b064f */  MOVUPS xmmword ptr [RAX + 0x40],XMM0
/* 048b0653 */  MOVUPS XMM0,xmmword ptr [RSI]
/* 048b0656 */  MOVUPS XMM1,xmmword ptr [RSI + 0x10]
/* 048b065a */  MOVUPS XMM2,xmmword ptr [RSI + 0x20]
/* 048b065e */  MOVUPS XMM3,xmmword ptr [RSI + 0x30]
/* 048b0662 */  MOVUPS xmmword ptr [RAX + 0x30],XMM3
/* 048b0666 */  MOVUPS xmmword ptr [RAX + 0x20],XMM2
/* 048b066a */  MOVUPS xmmword ptr [RAX + 0x10],XMM1
/* 048b066e */  MOVUPS xmmword ptr [RAX],XMM0
/* 048b0671 */  MOV ECX,dword ptr [RSI + 0x50]
/* 048b0674 */  MOV dword ptr [RAX + 0x50],ECX
/* 048b0677 */  MOVUPS XMM0,xmmword ptr [RSI + 0x58]
/* 048b067b */  XORPS XMM1,XMM1
/* 048b067e */  MOVUPS xmmword ptr [RSI + 0x58],XMM1
/* 048b0682 */  MOV RBX,qword ptr [RAX + 0x60]
/* 048b0686 */  MOVUPS xmmword ptr [RAX + 0x58],XMM0
/* 048b068a */  TEST RBX,RBX
/* 048b068d */  JZ 0x048b06a1
/* 048b068f */  MOV RAX,-0x1
/* 048b0696 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 048b069c */  TEST RAX,RAX
/* 048b069f */  JZ 0x048b06a3
/* 048b06a1 */  POP RBX
/* 048b06a2 */  RET
/* 048b06a3 */  MOV RAX,qword ptr [RBX]
/* 048b06a6 */  MOV RDI,RBX
/* 048b06a9 */  CALL qword ptr [RAX + 0x10]
/* 048b06ac */  MOV RDI,RBX
/* 048b06af */  POP RBX
/* 048b06b0 */  JMP 0x0412c2d0
