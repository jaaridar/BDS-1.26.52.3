/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ed620 (ELF vaddr 0xc5ed620)
 * Label: callee2-of:0x5bd89b0
 * Body:  [[0c6ed620, 0c6ed75b]]
 * Ghidra: FUN_0c6ed620
 */


void FUN_0c6ed620(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_40;
  long lStack_38;
  long *plStack_30;
  
  puVar7 = *(ulong **)(param_1 + 8);
  lVar10 = (long)*(ulong **)(param_1 + 0x10) - (long)puVar7;
  puVar6 = puVar7;
  if (lVar10 != 0) {
    uVar11 = lVar10 >> 3;
    do {
      uVar12 = uVar11 >> 1;
      uVar13 = ~uVar12 + uVar11;
      uVar11 = uVar12;
      if (puVar6[uVar12] < param_2) {
        puVar6 = puVar6 + uVar12 + 1;
        uVar11 = uVar13;
      }
    } while (uVar11 != 0);
  }
  lVar10 = *(long *)(param_1 + 0x20);
  uStack_40 = param_2;
  if ((puVar6 == *(ulong **)(param_1 + 0x10)) || (param_2 < *puVar6)) {
    lVar9 = (long)puVar6 - (long)puVar7;
    puVar6 = (ulong *)func_0x06d779a0((undefined8 *)(param_1 + 8),puVar6,&uStack_40);
    func_0x0c817b20((long *)(param_1 + 0x20),lVar10 + lVar9 * 2);
    lVar10 = *(long *)(param_1 + 0x20);
    puVar7 = *(ulong **)(param_1 + 8);
  }
  plVar2 = (long *)(lVar10 + ((long)puVar6 - (long)puVar7) * 2);
  lVar10 = *(long *)(lVar10 + 8 + ((long)puVar6 - (long)puVar7) * 2);
  if (lVar10 == 0) {
    if (param_3 == plVar2) {
      return;
    }
  }
  else {
    if (param_3 == plVar2) {
      return;
    }
    if (*(long *)(lVar10 + 8) != -1) {
      return;
    }
    plVar8 = (long *)func_0x0412c300();
    plStack_30 = plVar8;
    if (plVar8 != (long *)0x0) {
      lStack_38 = *plVar2;
      if (lStack_38 != 0) {
        (**(code **)(**(long **)(lStack_38 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar8 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  lVar9 = *param_3;
  uVar3 = *(undefined4 *)((long)param_3 + 4);
  lVar5 = param_3[1];
  uVar4 = *(undefined4 *)((long)param_3 + 0xc);
  *param_3 = 0;
  param_3[1] = 0;
  lVar10 = plVar2[1];
  *(int *)plVar2 = (int)lVar9;
  *(undefined4 *)((long)plVar2 + 4) = uVar3;
  *(int *)(plVar2 + 1) = (int)lVar5;
  *(undefined4 *)((long)plVar2 + 0xc) = uVar4;
  if (lVar10 != 0) {
    func_0x0412c2d0();
  }
  return;
}



/* ---- assembly ---- */
/* 0c6ed620 */  PUSH R15
/* 0c6ed622 */  PUSH R14
/* 0c6ed624 */  PUSH R13
/* 0c6ed626 */  PUSH R12
/* 0c6ed628 */  PUSH RBX
/* 0c6ed629 */  SUB RSP,0x20
/* 0c6ed62d */  MOV RBX,RDX
/* 0c6ed630 */  MOV qword ptr [RSP + 0x8],RSI
/* 0c6ed635 */  MOV RAX,qword ptr [RDI + 0x8]
/* 0c6ed639 */  MOV RCX,qword ptr [RDI + 0x10]
/* 0c6ed63d */  MOV RDX,RCX
/* 0c6ed640 */  MOV R14,RAX
/* 0c6ed643 */  SUB RDX,RAX
/* 0c6ed646 */  JZ 0x0c6ed678
/* 0c6ed648 */  SAR RDX,0x3
/* 0c6ed64c */  MOV R14,RAX
/* 0c6ed64f */  NOP
/* 0c6ed650 */  MOV R8,RDX
/* 0c6ed653 */  SHR R8,0x1
/* 0c6ed656 */  MOV R9,R8
/* 0c6ed659 */  NOT R9
/* 0c6ed65c */  ADD R9,RDX
/* 0c6ed65f */  CMP qword ptr [R14 + R8*0x8],RSI
/* 0c6ed663 */  LEA RDX,[R14 + R8*0x8 + 0x8]
/* 0c6ed668 */  CMOVNC R9,R8
/* 0c6ed66c */  CMOVC R14,RDX
/* 0c6ed670 */  MOV RDX,R9
/* 0c6ed673 */  TEST R9,R9
/* 0c6ed676 */  JNZ 0x0c6ed650
/* 0c6ed678 */  MOV RDX,qword ptr [RDI + 0x20]
/* 0c6ed67c */  CMP R14,RCX
/* 0c6ed67f */  JZ 0x0c6ed686
/* 0c6ed681 */  CMP RSI,qword ptr [R14]
/* 0c6ed684 */  JNC 0x0c6ed6c0
/* 0c6ed686 */  LEA R15,[RDI + 0x8]
/* 0c6ed68a */  ADD RDI,0x20
/* 0c6ed68e */  MOV RCX,R14
/* 0c6ed691 */  SUB RCX,RAX
/* 0c6ed694 */  LEA R12,[RDX + RCX*0x2]
/* 0c6ed698 */  LEA RDX,[RSP + 0x8]
/* 0c6ed69d */  MOV R13,RDI
/* 0c6ed6a0 */  MOV RDI,R15
/* 0c6ed6a3 */  MOV RSI,R14
/* 0c6ed6a6 */  CALL 0x06d779a0
/* 0c6ed6ab */  MOV R14,RAX
/* 0c6ed6ae */  MOV RDI,R13
/* 0c6ed6b1 */  MOV RSI,R12
/* 0c6ed6b4 */  CALL 0x0c817b20
/* 0c6ed6b9 */  MOV RDX,qword ptr [R13]
/* 0c6ed6bd */  MOV RAX,qword ptr [R15]
/* 0c6ed6c0 */  SUB R14,RAX
/* 0c6ed6c3 */  LEA R15,[RDX + R14*0x2]
/* 0c6ed6c7 */  MOV RDI,qword ptr [RDX + R14*0x2 + 0x8]
/* 0c6ed6cc */  TEST RDI,RDI
/* 0c6ed6cf */  JZ 0x0c6ed72e
/* 0c6ed6d1 */  MOV RAX,qword ptr [RDI + 0x8]
/* 0c6ed6d5 */  CMP RBX,R15
/* 0c6ed6d8 */  JZ 0x0c6ed74e
/* 0c6ed6da */  CMP RAX,-0x1
/* 0c6ed6de */  JNZ 0x0c6ed74e
/* 0c6ed6e0 */  CALL 0x0412c300
/* 0c6ed6e5 */  MOV qword ptr [RSP + 0x18],RAX
/* 0c6ed6ea */  TEST RAX,RAX
/* 0c6ed6ed */  JZ 0x0c6ed733
/* 0c6ed6ef */  MOV R14,RAX
/* 0c6ed6f2 */  MOV RSI,qword ptr [R15]
/* 0c6ed6f5 */  MOV qword ptr [RSP + 0x10],RSI
/* 0c6ed6fa */  TEST RSI,RSI
/* 0c6ed6fd */  JZ 0x0c6ed709
/* 0c6ed6ff */  MOV RDI,qword ptr [RSI + 0x28]
/* 0c6ed703 */  MOV RAX,qword ptr [RDI]
/* 0c6ed706 */  CALL qword ptr [RAX + 0x10]
/* 0c6ed709 */  MOV RAX,-0x1
/* 0c6ed710 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0c6ed716 */  TEST RAX,RAX
/* 0c6ed719 */  JNZ 0x0c6ed733
/* 0c6ed71b */  MOV RAX,qword ptr [R14]
/* 0c6ed71e */  MOV RDI,R14
/* 0c6ed721 */  CALL qword ptr [RAX + 0x10]
/* 0c6ed724 */  MOV RDI,R14
/* 0c6ed727 */  CALL 0x0412c2d0
/* 0c6ed72c */  JMP 0x0c6ed733
/* 0c6ed72e */  CMP RBX,R15
/* 0c6ed731 */  JZ 0x0c6ed74e
/* 0c6ed733 */  MOVUPS XMM0,xmmword ptr [RBX]
/* 0c6ed736 */  XORPS XMM1,XMM1
/* 0c6ed739 */  MOVUPS xmmword ptr [RBX],XMM1
/* 0c6ed73c */  MOV RDI,qword ptr [R15 + 0x8]
/* 0c6ed740 */  MOVUPS xmmword ptr [R15],XMM0
/* 0c6ed744 */  TEST RDI,RDI
/* 0c6ed747 */  JZ 0x0c6ed74e
/* 0c6ed749 */  CALL 0x0412c2d0
/* 0c6ed74e */  ADD RSP,0x20
/* 0c6ed752 */  POP RBX
/* 0c6ed753 */  POP R12
/* 0c6ed755 */  POP R13
/* 0c6ed757 */  POP R14
/* 0c6ed759 */  POP R15
/* 0c6ed75b */  RET
