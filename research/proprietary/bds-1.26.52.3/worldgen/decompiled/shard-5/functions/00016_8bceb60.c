/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8cceb60 (ELF vaddr 0x8bceb60)
 * Label: callee2-of:0xc535ca0
 * Body:  [[08cceb60, 08cced57]]
 * Ghidra: FUN_08cceb60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_08cceb60(char *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar3 = func_0x0c6edaf0(param_1,6);
  if (lVar3 == 0) {
    if (*param_1 == '\x01') {
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
    else {
      plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (plVar4 == (long *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      plVar4[8] = 0;
      plVar4[9] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[8] = (long)(plVar4 + 8);
      plVar4[9] = (long)(plVar4 + 8);
      plVar4[7] = (long)&UNK_0f158f98;
      plVar4[0xb] = (long)&UNK_0f158fc8;
      *plVar4 = (long)&UNK_0f158f08;
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      if (puVar10 < *(undefined8 **)(param_1 + 0x18)) {
        *puVar10 = plVar4;
        puVar10 = puVar10 + 1;
      }
      else {
        lVar3 = *(long *)(param_1 + 8);
        lVar8 = (long)puVar10 - lVar3;
        uVar1 = (lVar8 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x05cfa030();
LAB_08cced3e:
          uVar6 = FUN_04882eb0();
          (**(code **)(*plVar4 + 8))(plVar4);
          func_0x0eee2d70(uVar6);
          pcVar2 = (code *)swi(3);
          lVar3 = (*pcVar2)();
          return lVar3;
        }
        uVar7 = (long)*(undefined8 **)(param_1 + 0x18) - lVar3;
        uVar11 = (long)uVar7 >> 2;
        if ((ulong)((long)uVar7 >> 2) <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar11) goto LAB_08cced3e;
        lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 8);
        if (lVar5 == 0) {
          func_0x0eec74c0(uVar11 * 8,0);
        }
        *(long **)(lVar5 + lVar8) = plVar4;
        puVar10 = (undefined8 *)(lVar8 + lVar5 + 8);
        lVar9 = lVar8 + lVar5 + (lVar8 >> 3) * -8;
        func_0x0eee2f00(lVar9,lVar3,lVar8);
        *(long *)(param_1 + 8) = lVar9;
        *(undefined8 **)(param_1 + 0x10) = puVar10;
        *(ulong *)(param_1 + 0x18) = uVar11 * 8 + lVar5;
        if (lVar3 != 0) {
          func_0x0412a280(lVar3,uVar7);
        }
      }
      *(undefined8 **)(param_1 + 0x10) = puVar10;
    }
    lVar3 = puVar10[-1];
  }
  return lVar3;
}



/* ---- assembly ---- */
/* 08cceb60 */  PUSH RBP
/* 08cceb61 */  PUSH R15
/* 08cceb63 */  PUSH R14
/* 08cceb65 */  PUSH R13
/* 08cceb67 */  PUSH R12
/* 08cceb69 */  PUSH RBX
/* 08cceb6a */  SUB RSP,0x18
/* 08cceb6e */  MOV RBX,RDI
/* 08cceb71 */  MOV ESI,0x6
/* 08cceb76 */  CALL 0x0c6edaf0
/* 08cceb7b */  TEST RAX,RAX
/* 08cceb7e */  JNZ 0x08cced0a
/* 08cceb84 */  CMP byte ptr [RBX],0x1
/* 08cceb87 */  JNZ 0x08cceb92
/* 08cceb89 */  MOV R14,qword ptr [RBX + 0x10]
/* 08cceb8d */  JMP 0x08cced06
/* 08cceb92 */  MOV RAX,qword ptr [0x0f5463b0]
/* 08cceb99 */  LEA RDI,[0xf5463b0]
/* 08cceba0 */  MOV ESI,0x60
/* 08cceba5 */  CALL qword ptr [RAX + 0x10]
/* 08cceba8 */  MOV R14,RAX
/* 08ccebab */  TEST RAX,RAX
/* 08ccebae */  JZ 0x08cced19
/* 08ccebb4 */  XORPS XMM0,XMM0
/* 08ccebb7 */  MOVAPS xmmword ptr [R14 + 0x40],XMM0
/* 08ccebbc */  MOVAPS xmmword ptr [R14 + 0x30],XMM0
/* 08ccebc1 */  MOVAPS xmmword ptr [R14 + 0x50],XMM0
/* 08ccebc6 */  MOVAPS xmmword ptr [R14],XMM0
/* 08ccebca */  MOVAPS xmmword ptr [R14 + 0x20],XMM0
/* 08ccebcf */  MOVAPS xmmword ptr [R14 + 0x10],XMM0
/* 08ccebd4 */  MOV RAX,R14
/* 08ccebd7 */  ADD RAX,0x40
/* 08ccebdb */  MOV qword ptr [R14 + 0x40],RAX
/* 08ccebdf */  MOV qword ptr [R14 + 0x48],RAX
/* 08ccebe3 */  LEA RAX,[0xf158f98]
/* 08ccebea */  MOV qword ptr [R14 + 0x38],RAX
/* 08ccebee */  LEA RAX,[0xf158fc8]
/* 08ccebf5 */  MOV qword ptr [R14 + 0x58],RAX
/* 08ccebf9 */  LEA RAX,[0xf158f08]
/* 08ccec00 */  MOV qword ptr [R14],RAX
/* 08ccec03 */  MOV R12,qword ptr [RBX + 0x10]
/* 08ccec07 */  MOV RDX,qword ptr [RBX + 0x18]
/* 08ccec0b */  CMP R12,RDX
/* 08ccec0e */  JNC 0x08ccec20
/* 08ccec10 */  MOV qword ptr [R12],R14
/* 08ccec14 */  ADD R12,0x8
/* 08ccec18 */  MOV R14,R12
/* 08ccec1b */  JMP 0x08cced02
/* 08ccec20 */  MOV RSI,qword ptr [RBX + 0x8]
/* 08ccec24 */  SUB R12,RSI
/* 08ccec27 */  MOV RDI,R12
/* 08ccec2a */  SAR RDI,0x3
/* 08ccec2e */  LEA RAX,[RDI + 0x1]
/* 08ccec32 */  MOV RCX,RAX
/* 08ccec35 */  SHR RCX,0x3d
/* 08ccec39 */  JNZ 0x08cced39
/* 08ccec3f */  MOV RCX,0x1fffffffffffffff
/* 08ccec49 */  MOV qword ptr [RSP + 0x10],RSI
/* 08ccec4e */  SUB RDX,RSI
/* 08ccec51 */  MOV R15,RDX
/* 08ccec54 */  SAR R15,0x2
/* 08ccec58 */  CMP R15,RAX
/* 08ccec5b */  CMOVBE R15,RAX
/* 08ccec5f */  MOV RAX,0x7ffffffffffffff8
/* 08ccec69 */  CMP RDX,RAX
/* 08ccec6c */  CMOVNC R15,RCX
/* 08ccec70 */  CMP R15,RCX
/* 08ccec73 */  JA 0x08cced3e
/* 08ccec79 */  MOV qword ptr [RSP + 0x8],RDI
/* 08ccec7e */  MOV qword ptr [RSP],RDX
/* 08ccec82 */  LEA R13,[R15*0x8]
/* 08ccec8a */  LEA RDI,[0xf5463b0]
/* 08ccec91 */  MOV RAX,qword ptr [0x0f5463b0]
/* 08ccec98 */  MOV RSI,R13
/* 08ccec9b */  CALL qword ptr [RAX + 0x10]
/* 08ccec9e */  MOV RBP,RAX
/* 08cceca1 */  TEST RAX,RAX
/* 08cceca4 */  JZ 0x08cced2a
/* 08ccecaa */  LEA R13,[R12 + RBP*0x1]
/* 08ccecae */  LEA R15,[R15*0x8]
/* 08ccecb6 */  ADD R15,RBP
/* 08ccecb9 */  MOV qword ptr [RBP + R12*0x1],R14
/* 08ccecbe */  LEA R14,[R12 + RBP*0x1]
/* 08ccecc2 */  ADD R14,0x8
/* 08ccecc6 */  MOV RAX,qword ptr [RSP + 0x8]
/* 08cceccb */  SHL RAX,0x3
/* 08cceccf */  SUB R13,RAX
/* 08ccecd2 */  MOV RDI,R13
/* 08ccecd5 */  MOV RBP,qword ptr [RSP + 0x10]
/* 08ccecda */  MOV RSI,RBP
/* 08ccecdd */  MOV RDX,R12
/* 08ccece0 */  CALL 0x0eee2f00
/* 08ccece5 */  MOV qword ptr [RBX + 0x8],R13
/* 08ccece9 */  MOV qword ptr [RBX + 0x10],R14
/* 08cceced */  MOV qword ptr [RBX + 0x18],R15
/* 08ccecf1 */  TEST RBP,RBP
/* 08ccecf4 */  JZ 0x08cced02
/* 08ccecf6 */  MOV RDI,RBP
/* 08ccecf9 */  MOV RSI,qword ptr [RSP]
/* 08ccecfd */  CALL 0x0412a280
/* 08cced02 */  MOV qword ptr [RBX + 0x10],R14
/* 08cced06 */  MOV RAX,qword ptr [R14 + -0x8]
/* 08cced0a */  ADD RSP,0x18
/* 08cced0e */  POP RBX
/* 08cced0f */  POP R12
/* 08cced11 */  POP R13
/* 08cced13 */  POP R14
/* 08cced15 */  POP R15
/* 08cced17 */  POP RBP
/* 08cced18 */  RET
/* 08cced19 */  MOV EDI,0x60
/* 08cced1e */  XOR ESI,ESI
/* 08cced20 */  CALL 0x0eec74c0
/* 08cced25 */  JMP 0x08ccebb4
/* 08cced2a */  MOV RDI,R13
/* 08cced2d */  XOR ESI,ESI
/* 08cced2f */  CALL 0x0eec74c0
/* 08cced34 */  JMP 0x08ccecaa
/* 08cced39 */  CALL 0x05cfa030
/* 08cced3e */  CALL 0x04882eb0
/* 08cced43 */  MOV RBX,RAX
/* 08cced46 */  MOV RAX,qword ptr [R14]
/* 08cced49 */  MOV RDI,R14
/* 08cced4c */  CALL qword ptr [RAX + 0x8]
/* 08cced4f */  MOV RDI,RBX
/* 08cced52 */  CALL 0x0eee2d70
/* 08cced57 */  INT3
