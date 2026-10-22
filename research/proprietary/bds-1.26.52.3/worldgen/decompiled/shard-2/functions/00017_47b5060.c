/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b5060 (ELF vaddr 0x47b5060)
 * Label: callee-of:0xda370f0
 * Body:  [[048b5060, 048b512d] [048b5130, 048b52a1]]
 * Ghidra: FUN_048b5060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_048b5060(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  bool bVar13;
  float fVar14;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  byte *pbStack_38;
  
  pbVar12 = param_2 + 1;
  bVar13 = (*param_2 & 1) == 0;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if (bVar13) {
    pbVar9 = pbVar12;
  }
  uVar3 = (ulong)(*param_2 >> 1);
  if (!bVar13) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  uVar3 = func_0x04883620(&uStack_51,pbVar9,uVar3);
  lStack_40 = *param_1;
  uVar3 = (param_1[1] - lStack_40 >> 3) - 1U & uVar3;
  lVar10 = *(long *)(lStack_40 + uVar3 * 8);
  plStack_50 = param_1;
  lStack_48 = lVar10;
  if (lVar10 != -1) {
    if ((*param_2 & 1) == 0) {
      uVar8 = (ulong)(*param_2 >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_2 + 8);
      pbVar12 = *(byte **)(param_2 + 0x10);
    }
    lVar7 = param_1[3];
    do {
      lVar10 = lVar10 * 0x50;
      bVar1 = *(byte *)(lVar7 + 8 + lVar10);
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10 + lVar10);
      }
      if (uVar6 == uVar8) {
        plVar11 = (long *)(lVar10 + lVar7);
        if ((bVar1 & 1) == 0) {
          lVar5 = (long)plVar11 + 9;
        }
        else {
          lVar5 = plVar11[3];
        }
        iVar2 = func_0x0eee3000(lVar5,pbVar12,uVar8);
        if (iVar2 == 0) {
          plVar4 = (long *)plStack_50[4];
          if (plVar11 != plVar4) {
            return plVar11;
          }
          goto LAB_048b516c;
        }
      }
      lVar10 = *(long *)(lVar10 + lVar7);
    } while (lVar10 != -1);
  }
  plVar4 = (long *)plStack_50[4];
LAB_048b516c:
  plVar11 = plStack_50;
  pbStack_38 = param_2;
  if (plVar4 < (long *)plStack_50[5]) {
    *plVar4 = lStack_48;
    plVar4[3] = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 8);
    plVar4[1] = *(long *)param_2;
    plVar4[2] = lVar10;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[7] = (long)&UNK_0488e0b0;
    *(undefined4 *)(plVar4 + 9) = 0x48b5725f;
    plVar4[8] = 0;
    *(undefined1 *)((long)plVar4 + 0x4c) = 0;
    plVar4 = plVar4 + 10;
  }
  else {
    plVar4 = (long *)func_0x048b52b0(plStack_50 + 3,lStack_40 + uVar3 * 8,&UNK_01563a4f,&pbStack_38,
                                     &uStack_52);
  }
  plVar11[4] = (long)plVar4;
  lVar10 = *plVar11;
  lVar7 = plVar11[3];
  lVar5 = (long)plVar4 - lVar7;
  uVar8 = (lVar5 >> 4) * -0x3333333333333333;
  *(ulong *)(lVar10 + uVar3 * 8) = uVar8 - 1;
  lVar10 = plVar11[1] - lVar10;
  fVar14 = (float)(ulong)(lVar10 >> 3) * *(float *)(plVar11 + 6);
  uVar3 = (ulong)fVar14;
  uVar3 = (long)(fVar14 - _DAT_01198778) & (long)uVar3 >> 0x3f | uVar3;
  if (uVar3 <= uVar8 && uVar8 - uVar3 != 0) {
    func_0x048afb10(plVar11,lVar10 >> 2);
    lVar7 = plVar11[3];
    lVar5 = plVar11[4] - lVar7;
  }
  return (long *)(lVar7 + lVar5 + -0x50);
}



/* ---- assembly ---- */
/* 048b5060 */  PUSH RBP
/* 048b5061 */  PUSH R15
/* 048b5063 */  PUSH R14
/* 048b5065 */  PUSH R13
/* 048b5067 */  PUSH R12
/* 048b5069 */  PUSH RBX
/* 048b506a */  SUB RSP,0x28
/* 048b506e */  MOV R14,RSI
/* 048b5071 */  MOVZX EAX,byte ptr [RSI]
/* 048b5074 */  LEA R15,[RSI + 0x1]
/* 048b5078 */  MOV EDX,EAX
/* 048b507a */  SHR EDX,0x1
/* 048b507c */  TEST AL,0x1
/* 048b507e */  MOV RSI,qword ptr [RSI + 0x10]
/* 048b5082 */  CMOVZ RSI,R15
/* 048b5086 */  MOV RBX,RDI
/* 048b5089 */  CMOVNZ RDX,qword ptr [R14 + 0x8]
/* 048b508e */  LEA RDI,[RSP + 0x7]
/* 048b5093 */  CALL 0x04883620
/* 048b5098 */  MOV RCX,qword ptr [RBX]
/* 048b509b */  MOV qword ptr [RSP + 0x8],RBX
/* 048b50a0 */  MOV RBP,qword ptr [RBX + 0x8]
/* 048b50a4 */  SUB RBP,RCX
/* 048b50a7 */  SAR RBP,0x3
/* 048b50ab */  DEC RBP
/* 048b50ae */  AND RBP,RAX
/* 048b50b1 */  MOV qword ptr [RSP + 0x18],RCX
/* 048b50b6 */  MOV RAX,qword ptr [RCX + RBP*0x8]
/* 048b50ba */  MOV qword ptr [RSP + 0x10],RAX
/* 048b50bf */  CMP RAX,-0x1
/* 048b50c3 */  JZ 0x048b5146
/* 048b50c9 */  MOVZX R12D,byte ptr [R14]
/* 048b50cd */  TEST R12B,0x1
/* 048b50d1 */  JZ 0x048b50dd
/* 048b50d3 */  MOV R12,qword ptr [R14 + 0x8]
/* 048b50d7 */  MOV R15,qword ptr [R14 + 0x10]
/* 048b50db */  JMP 0x048b50e0
/* 048b50dd */  SHR R12D,0x1
/* 048b50e0 */  MOV RAX,qword ptr [RSP + 0x8]
/* 048b50e5 */  MOV RBX,qword ptr [RAX + 0x18]
/* 048b50e9 */  MOV RAX,qword ptr [RSP + 0x10]
/* 048b50ee */  JMP 0x048b510d
/* 048b50f0 */  MOV RDI,qword ptr [R13 + 0x18]
/* 048b50f4 */  MOV RSI,R15
/* 048b50f7 */  MOV RDX,R12
/* 048b50fa */  CALL 0x0eee3000
/* 048b50ff */  TEST EAX,EAX
/* 048b5101 */  JZ 0x048b515e
/* 048b5103 */  MOV RAX,qword ptr [R13]
/* 048b5107 */  CMP RAX,-0x1
/* 048b510b */  JZ 0x048b5146
/* 048b510d */  LEA R13,[RAX + RAX*0x4]
/* 048b5111 */  SHL R13,0x4
/* 048b5115 */  MOVZX EAX,byte ptr [RBX + R13*0x1 + 0x8]
/* 048b511b */  TEST AL,0x1
/* 048b511d */  JZ 0x048b5130
/* 048b511f */  MOV RCX,qword ptr [RBX + R13*0x1 + 0x10]
/* 048b5124 */  ADD R13,RBX
/* 048b5127 */  CMP RCX,R12
/* 048b512a */  JNZ 0x048b5103
/* 048b512c */  JMP 0x048b513c
/* 048b5130 */  MOV ECX,EAX
/* 048b5132 */  SHR ECX,0x1
/* 048b5134 */  ADD R13,RBX
/* 048b5137 */  CMP RCX,R12
/* 048b513a */  JNZ 0x048b5103
/* 048b513c */  TEST AL,0x1
/* 048b513e */  JNZ 0x048b50f0
/* 048b5140 */  LEA RDI,[R13 + 0x9]
/* 048b5144 */  JMP 0x048b50f4
/* 048b5146 */  MOV RBX,qword ptr [RSP + 0x8]
/* 048b514b */  MOV RAX,qword ptr [RBX + 0x20]
/* 048b514f */  MOV R13,RAX
/* 048b5152 */  CMP R13,RAX
/* 048b5155 */  JZ 0x048b516c
/* 048b5157 */  XOR EDX,EDX
/* 048b5159 */  JMP 0x048b5290
/* 048b515e */  MOV RBX,qword ptr [RSP + 0x8]
/* 048b5163 */  MOV RAX,qword ptr [RBX + 0x20]
/* 048b5167 */  CMP R13,RAX
/* 048b516a */  JNZ 0x048b5157
/* 048b516c */  MOV qword ptr [RSP + 0x20],R14
/* 048b5171 */  CMP RAX,qword ptr [RBX + 0x28]
/* 048b5175 */  JNC 0x048b51c6
/* 048b5177 */  MOV RCX,qword ptr [RSP + 0x10]
/* 048b517c */  MOV qword ptr [RAX],RCX
/* 048b517f */  MOV RCX,qword ptr [R14 + 0x10]
/* 048b5183 */  MOV qword ptr [RAX + 0x18],RCX
/* 048b5187 */  MOVUPS XMM0,xmmword ptr [R14]
/* 048b518b */  MOVUPS xmmword ptr [RAX + 0x8],XMM0
/* 048b518f */  XORPS XMM0,XMM0
/* 048b5192 */  MOVUPS xmmword ptr [R14],XMM0
/* 048b5196 */  MOV qword ptr [R14 + 0x10],0x0
/* 048b519e */  MOVUPS xmmword ptr [RAX + 0x20],XMM0
/* 048b51a2 */  LEA RCX,[0x488e0b0]
/* 048b51a9 */  MOV qword ptr [RAX + 0x38],RCX
/* 048b51ad */  MOV dword ptr [RAX + 0x48],0x48b5725f
/* 048b51b4 */  MOV qword ptr [RAX + 0x40],0x0
/* 048b51bc */  MOV byte ptr [RAX + 0x4c],0x0
/* 048b51c0 */  ADD RAX,0x50
/* 048b51c4 */  JMP 0x048b51e9
/* 048b51c6 */  MOV RAX,qword ptr [RSP + 0x18]
/* 048b51cb */  LEA RSI,[RAX + RBP*0x8]
/* 048b51cf */  LEA RDI,[RBX + 0x18]
/* 048b51d3 */  LEA RDX,[0x1563a4f]
/* 048b51da */  LEA RCX,[RSP + 0x20]
/* 048b51df */  LEA R8,[RSP + 0x6]
/* 048b51e4 */  CALL 0x048b52b0
/* 048b51e9 */  MOV qword ptr [RBX + 0x20],RAX
/* 048b51ed */  MOV RDI,qword ptr [RBX]
/* 048b51f0 */  MOV RCX,qword ptr [RBX + 0x18]
/* 048b51f4 */  SUB RAX,RCX
/* 048b51f7 */  MOV RSI,RAX
/* 048b51fa */  SAR RSI,0x4
/* 048b51fe */  MOV RDX,-0x3333333333333333
/* 048b5208 */  IMUL RDX,RSI
/* 048b520c */  LEA RSI,[RDX + -0x1]
/* 048b5210 */  MOV qword ptr [RDI + RBP*0x8],RSI
/* 048b5214 */  MOV RSI,qword ptr [RBX + 0x8]
/* 048b5218 */  SUB RSI,RDI
/* 048b521b */  MOV RDI,RSI
/* 048b521e */  SAR RDI,0x3
/* 048b5222 */  JS 0x048b522e
/* 048b5224 */  XORPS XMM0,XMM0
/* 048b5227 */  CVTSI2SS XMM0,RDI
/* 048b522c */  JMP 0x048b5246
/* 048b522e */  MOV R8,RDI
/* 048b5231 */  SHR R8,0x1
/* 048b5234 */  AND EDI,0x1
/* 048b5237 */  OR RDI,R8
/* 048b523a */  XORPS XMM0,XMM0
/* 048b523d */  CVTSI2SS XMM0,RDI
/* 048b5242 */  ADDSS XMM0,XMM0
/* 048b5246 */  MULSS XMM0,dword ptr [RBX + 0x30]
/* 048b524b */  CVTTSS2SI RDI,XMM0
/* 048b5250 */  MOV R8,RDI
/* 048b5253 */  SUBSS XMM0,dword ptr [0x01198778]
/* 048b525b */  CVTTSS2SI R9,XMM0
/* 048b5260 */  SAR R8,0x3f
/* 048b5264 */  AND R9,R8
/* 048b5267 */  OR R9,RDI
/* 048b526a */  CMP RDX,R9
/* 048b526d */  JBE 0x048b5286
/* 048b526f */  SAR RSI,0x2
/* 048b5273 */  MOV RDI,RBX
/* 048b5276 */  CALL 0x048afb10
/* 048b527b */  MOV RCX,qword ptr [RBX + 0x18]
/* 048b527f */  MOV RAX,qword ptr [RBX + 0x20]
/* 048b5283 */  SUB RAX,RCX
/* 048b5286 */  LEA R13,[RCX + RAX*0x1]
/* 048b528a */  ADD R13,-0x50
/* 048b528e */  MOV DL,0x1
/* 048b5290 */  MOV RAX,R13
/* 048b5293 */  ADD RSP,0x28
/* 048b5297 */  POP RBX
/* 048b5298 */  POP R12
/* 048b529a */  POP R13
/* 048b529c */  POP R14
/* 048b529e */  POP R15
/* 048b52a0 */  POP RBP
/* 048b52a1 */  RET
