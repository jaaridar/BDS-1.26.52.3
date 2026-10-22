/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca313f0
 * Label: WorldGenerator::vslot7
 * Body:  [[0ca313f0, 0ca3147a] [0ca31480, 0ca314d2] [0ca314e0, 0ca316a0] [0ca316b0, 0ca317b1] [0ca317c0, 0ca318b1] [0ca318c0, 0ca31b94]]
 * Ghidra: wg_WorldGenerator__vslot7
 */


void wg_WorldGenerator__vslot7
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               byte *param_7,long param_8,byte *param_9,long param_10)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  bool bVar27;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  
  pbStack_90 = param_6;
  pbStack_98 = param_5;
  pbStack_a0 = param_4;
  while( true ) {
    if (param_8 == 0) {
      return;
    }
    if (((long)param_7 <= param_10) || (param_8 <= param_10)) break;
    if (param_7 == (byte *)0x0) {
      return;
    }
    bVar6 = *param_3;
    pbVar11 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    while (bVar21 = param_1[(long)pbVar24], bVar21 <= bVar6) {
      pbVar24 = pbVar24 + 1;
      pbVar11 = pbVar11 + -8;
      if (param_7 == pbVar24) {
        return;
      }
    }
    pbVar12 = param_2 + -(long)pbVar11;
    pbVar20 = param_1 + (long)pbVar24;
    pbVar18 = param_3;
    if ((long)param_7 - (long)pbVar24 < param_8) {
      lVar3 = param_8 / 2;
      pbVar18 = param_3 + lVar3;
      pbVar11 = param_3 + (-(long)pbVar24 - (long)param_1);
      pbVar15 = pbVar20;
      param_2 = pbVar12;
      if (pbVar11 != (byte *)0x0) {
        do {
          pbVar8 = (byte *)((ulong)pbVar11 >> 1);
          pbVar11 = pbVar11 + ~(ulong)pbVar8;
          pbVar22 = param_2 + (long)pbVar8 * 8 + 8;
          pbVar26 = pbVar15 + (long)(pbVar8 + 1);
          if (*pbVar18 < pbVar15[(long)pbVar8]) {
            pbVar11 = pbVar8;
            pbVar22 = param_2;
            pbVar26 = pbVar15;
          }
          pbVar15 = pbVar26;
          param_2 = pbVar22;
        } while (pbVar11 != (byte *)0x0);
      }
      pbVar22 = pbStack_a0 + lVar3 * 8;
      pbVar8 = pbVar15 + (-(long)pbVar24 - (long)param_1);
      pbVar11 = pbVar22;
      pbVar26 = pbVar18;
      if (pbVar15 != param_3) goto LAB_0ca31629;
LAB_0ca31618:
      pbVar11 = pbVar22;
      pbVar26 = pbVar18;
      if (param_2 != pbStack_a0) goto LAB_0ca31629;
    }
    else {
      if (param_7 + -1 == pbVar24) {
        param_1[(long)pbVar24] = bVar6;
        *param_3 = bVar21;
        lVar3 = *(long *)(param_2 + (long)pbVar24 * 8);
        pbVar18 = pbVar11;
        if (lVar3 != 0) {
          *(undefined8 *)(param_2 + (long)pbVar24 * 8) = *(undefined8 *)pbStack_a0;
          *(long *)pbStack_a0 = lVar3;
          return;
        }
        goto LAB_0ca31b30;
      }
      pbVar8 = (byte *)(((long)param_7 - (long)pbVar24) / 2);
      pbVar15 = param_1 + (long)(pbVar8 + (long)pbVar24);
      uVar7 = (long)pbStack_98 - (long)param_3;
      pbVar22 = pbStack_a0;
      if (uVar7 != 0) {
        pbVar26 = pbStack_a0;
        do {
          uVar16 = uVar7 >> 1;
          pbVar22 = pbVar26 + uVar16 * 8 + 8;
          pbVar23 = pbVar18 + uVar16 + 1;
          uVar7 = ~uVar16 + uVar7;
          if (*pbVar15 <= pbVar18[uVar16]) {
            pbVar22 = pbVar26;
            pbVar23 = pbVar18;
            uVar7 = uVar16;
          }
          pbVar18 = pbVar23;
          pbVar26 = pbVar22;
        } while (uVar7 != 0);
      }
      param_2 = param_2 + ((long)pbVar8 * 8 - (long)pbVar11);
      lVar3 = (long)pbVar18 - (long)param_3;
      pbVar11 = pbVar22;
      pbVar26 = pbVar18;
      if (pbVar15 == param_3) goto LAB_0ca31618;
LAB_0ca31629:
      if ((param_3 != pbVar26) || (pbVar22 = param_2, pbVar18 = pbVar15, pbStack_a0 != pbVar11)) {
        bVar21 = *pbVar15;
        *pbVar15 = bVar6;
        *param_3 = bVar21;
        lVar10 = *(long *)param_2;
        pbVar18 = param_3;
        if (lVar10 == 0) goto LAB_0ca31b30;
        pbVar23 = param_2 + 8;
        pbVar13 = param_2 + 0x10;
        pbVar14 = pbVar15 + 2;
        lVar19 = 0;
        pbVar5 = param_3;
        pbVar22 = pbVar23;
        pbVar9 = pbStack_a0;
        pbVar17 = pbStack_a0;
        while( true ) {
          pbVar17 = pbVar17 + 8;
          *(undefined8 *)(param_2 + lVar19 * 8) = *(undefined8 *)(pbStack_a0 + lVar19 * 8);
          *(long *)(pbStack_a0 + lVar19 * 8) = lVar10;
          pbVar1 = pbVar15 + lVar19 + 1;
          pbVar4 = param_3 + lVar19 + 1;
          if ((pbVar4 == pbVar26) && (pbVar17 == pbVar11)) break;
          pbVar18 = pbVar4;
          pbVar25 = pbVar17;
          if (pbVar22 != pbVar9 || pbVar1 != pbVar5) {
            pbVar18 = pbVar5;
            pbVar25 = pbVar9;
          }
          bVar6 = *pbVar1;
          *pbVar1 = *pbVar4;
          *pbVar4 = bVar6;
          lVar10 = *(long *)(pbVar23 + lVar19 * 8);
          lVar19 = lVar19 + 1;
          pbVar22 = pbVar22 + 8;
          pbVar13 = pbVar13 + 8;
          pbVar14 = pbVar14 + 1;
          pbVar5 = pbVar18;
          pbVar9 = pbVar25;
          if (lVar10 == 0) goto LAB_0ca31b30;
        }
        pbVar18 = pbVar15 + lVar19 + 1;
        if (pbVar22 != pbVar9 || pbVar1 != pbVar5) {
          bVar6 = *pbVar18;
          *pbVar18 = *pbVar5;
          *pbVar5 = bVar6;
          lVar10 = *(long *)(pbVar23 + lVar19 * 8);
          pbVar23 = pbVar5;
          pbVar17 = pbVar9;
          if (lVar10 != 0) {
            do {
              *(undefined8 *)(pbVar13 + -8) = *(undefined8 *)pbVar17;
              *(long *)pbVar17 = lVar10;
              pbVar23 = pbVar23 + 1;
              pbVar17 = pbVar17 + 8;
              if ((pbVar23 == pbVar26) && (pbVar17 == pbVar11)) {
                pbVar23 = pbVar5;
                pbVar17 = pbVar9;
                if (pbVar13 == pbVar9 && pbVar14 == pbVar5) goto LAB_0ca31840;
              }
              else if (pbVar13 == pbVar9 && pbVar14 == pbVar5) {
                pbVar5 = pbVar23;
                pbVar9 = pbVar17;
              }
              bVar6 = *pbVar14;
              *pbVar14 = *pbVar23;
              *pbVar23 = bVar6;
              lVar10 = *(long *)pbVar13;
              pbVar13 = pbVar13 + 8;
              pbVar14 = pbVar14 + 1;
              if (lVar10 == 0) break;
            } while( true );
          }
          goto LAB_0ca31b30;
        }
      }
    }
LAB_0ca31840:
    if ((long)(pbVar8 + lVar3) <
        (long)(param_7 + ((param_8 - (long)(pbVar8 + lVar3)) - (long)pbVar24))) {
      wg_WorldGenerator__vslot7
                (pbVar20,pbVar12,pbVar15,param_2,pbVar18,pbVar22,pbVar8,lVar3,param_9,param_10);
      pbStack_a0 = pbVar11;
      param_1 = pbVar18;
      param_2 = pbVar22;
      param_3 = pbVar26;
      param_8 = param_8 - lVar3;
      param_7 = param_7 + (-(long)pbVar24 - (long)pbVar8);
    }
    else {
      wg_WorldGenerator__vslot7
                (pbVar18,pbVar22,pbVar26,pbVar11,pbStack_98,pbStack_90,
                 param_7 + (-(long)pbVar24 - (long)pbVar8),param_8 - lVar3,param_9,param_10);
      pbStack_90 = pbVar22;
      pbStack_98 = pbVar18;
      pbStack_a0 = param_2;
      param_1 = pbVar20;
      param_2 = pbVar12;
      param_3 = pbVar15;
      param_8 = lVar3;
      param_7 = pbVar8;
    }
  }
  pbVar18 = param_9;
  if ((long)param_7 <= param_8) {
    if ((param_1 == param_3) && (param_2 == pbStack_a0)) {
      return;
    }
    lVar10 = 8;
    lVar3 = 0;
    pbVar11 = param_1 + 1;
    pbVar24 = param_2 + 8;
    while( true ) {
      pbVar20 = pbVar24;
      param_9[lVar10 + -8] = pbVar11[-1];
      lVar19 = *(long *)(pbVar20 + -8);
      *(long *)(param_9 + lVar10) = lVar19;
      if (lVar19 == 0) break;
      lVar3 = lVar3 + -0x10;
      lVar10 = lVar10 + 0x10;
      pbVar24 = pbVar11 + 1;
      bVar27 = pbVar11 == param_3;
      pbVar11 = pbVar24;
      pbVar24 = pbVar20 + 8;
      if ((bVar27) && (pbVar20 == pbStack_a0)) {
        pbVar18 = param_9 + -lVar3;
        do {
          if ((param_3 == pbStack_98) && (pbStack_a0 == pbStack_90)) {
            lVar3 = 0;
            do {
              param_1[lVar3] = *param_9;
              *(undefined8 *)(param_2 + lVar3 * 8) = *(undefined8 *)(param_9 + 8);
              lVar3 = lVar3 + 1;
              bVar27 = pbVar18 + -0x10 != param_9;
              param_9 = param_9 + 0x10;
            } while (bVar27);
            return;
          }
          bVar6 = *param_3;
          bVar21 = *param_9;
          if (bVar6 < bVar21) {
            param_3 = param_3 + 1;
            pbVar11 = pbStack_a0;
            bVar21 = bVar6;
            pbStack_a0 = pbStack_a0 + 8;
          }
          else {
            pbVar11 = param_9 + 8;
            param_9 = param_9 + 0x10;
          }
          uVar2 = *(undefined8 *)pbVar11;
          *param_1 = bVar21;
          *(undefined8 *)param_2 = uVar2;
          param_1 = param_1 + 1;
          param_2 = param_2 + 8;
        } while (pbVar18 != param_9);
        return;
      }
    }
    goto LAB_0ca31b30;
  }
  if ((param_3 == pbStack_98) && (pbStack_a0 == pbStack_90)) {
    return;
  }
  pbVar11 = param_9;
  pbVar24 = param_3 + 1;
  pbVar20 = pbStack_a0 + 8;
  do {
    pbVar12 = pbVar20;
    *pbVar11 = pbVar24[-1];
    lVar3 = *(long *)(pbVar12 + -8);
    *(long *)(pbVar11 + 8) = lVar3;
    if (lVar3 == 0) goto LAB_0ca31b30;
    pbVar11 = pbVar11 + 0x10;
    pbVar20 = pbVar24 + 1;
    bVar27 = pbVar24 != pbStack_98;
    pbVar24 = pbVar20;
    pbVar20 = pbVar12 + 8;
  } while ((bVar27) || (pbVar12 != pbStack_90));
  while ((param_3 != param_1 || (pbStack_a0 != param_2))) {
    bVar6 = pbVar11[-0x10];
    pbVar18 = param_3 + -1;
    if (bVar6 < *pbVar18) {
      param_3 = param_3 + -1;
      pbVar20 = pbStack_a0 + -8;
      pbVar24 = pbVar11;
      bVar6 = *pbVar18;
      pbStack_a0 = pbVar20;
    }
    else {
      pbVar24 = pbVar11 + -0x10;
      pbVar20 = pbVar11 + -8;
    }
    uVar2 = *(undefined8 *)pbVar20;
    pbStack_98[-1] = bVar6;
    pbStack_98 = pbStack_98 + -1;
    *(undefined8 *)(pbStack_90 + -8) = uVar2;
    pbStack_90 = pbStack_90 + -8;
    pbVar11 = pbVar24;
    if (pbVar24 == param_9) {
      return;
    }
  }
LAB_0ca31b35:
  lVar3 = -1;
  do {
    pbStack_98[lVar3] = pbVar11[-0x10];
    pbVar18 = pbVar11 + -8;
    pbVar11 = pbVar11 + -0x10;
    *(undefined8 *)(pbStack_90 + lVar3 * 8) = *(undefined8 *)pbVar18;
    lVar3 = lVar3 + -1;
  } while (pbVar11 != param_9);
  return;
LAB_0ca31b30:
  pbVar11 = (byte *)func_0x04890760();
  param_9 = pbVar18;
  goto LAB_0ca31b35;
}



/* ---- assembly ---- */
/* 0ca313f0 */  PUSH RBP
/* 0ca313f1 */  PUSH R15
/* 0ca313f3 */  PUSH R14
/* 0ca313f5 */  PUSH R13
/* 0ca313f7 */  PUSH R12
/* 0ca313f9 */  PUSH RBX
/* 0ca313fa */  SUB RSP,0x78
/* 0ca313fe */  MOV qword ptr [RSP + 0x18],R9
/* 0ca31403 */  MOV qword ptr [RSP + 0x10],R8
/* 0ca31408 */  MOV qword ptr [RSP + 0x8],RCX
/* 0ca3140d */  MOV R10,qword ptr [RSP + 0xb8]
/* 0ca31415 */  TEST R10,R10
/* 0ca31418 */  JZ 0x0ca31b86
/* 0ca3141e */  MOV RBP,qword ptr [RSP + 0xc8]
/* 0ca31426 */  MOV RBX,qword ptr [RSP + 0xc0]
/* 0ca3142e */  MOV R9,qword ptr [RSP + 0xb0]
/* 0ca31436 */  CMP R9,RBP
/* 0ca31439 */  JLE 0x0ca3194d
/* 0ca3143f */  CMP R10,RBP
/* 0ca31442 */  JLE 0x0ca3194d
/* 0ca31448 */  TEST R9,R9
/* 0ca3144b */  JZ 0x0ca31b86
/* 0ca31451 */  MOVZX R14D,byte ptr [RDX]
/* 0ca31455 */  XOR EBX,EBX
/* 0ca31457 */  XOR R11D,R11D
/* 0ca3145a */  NOP word ptr [RAX + RAX*0x1]
/* 0ca31460 */  MOVZX EAX,byte ptr [RDI + R11*0x1]
/* 0ca31465 */  CMP R14B,AL
/* 0ca31468 */  JC 0x0ca31480
/* 0ca3146a */  INC R11
/* 0ca3146d */  ADD RBX,-0x8
/* 0ca31471 */  CMP R9,R11
/* 0ca31474 */  JNZ 0x0ca31460
/* 0ca31476 */  JMP 0x0ca31b86
/* 0ca31480 */  MOV RCX,R9
/* 0ca31483 */  SUB RCX,R11
/* 0ca31486 */  MOV RBP,RSI
/* 0ca31489 */  SUB RBP,RBX
/* 0ca3148c */  LEA R8,[RDI + R11*0x1]
/* 0ca31490 */  MOV qword ptr [RSP + 0x50],R8
/* 0ca31495 */  CMP RCX,R10
/* 0ca31498 */  MOV qword ptr [RSP + 0x60],RBP
/* 0ca3149d */  JGE 0x0ca314e0
/* 0ca3149f */  MOV RAX,R10
/* 0ca314a2 */  SHR RAX,0x3f
/* 0ca314a6 */  ADD RAX,R10
/* 0ca314a9 */  SAR RAX,0x1
/* 0ca314ac */  MOV RBX,RDX
/* 0ca314af */  MOV R12,RAX
/* 0ca314b2 */  LEA R15,[RDX + RAX*0x1]
/* 0ca314b6 */  MOV RCX,RDX
/* 0ca314b9 */  SUB RCX,RDI
/* 0ca314bc */  SUB RCX,R11
/* 0ca314bf */  JNZ 0x0ca31589
/* 0ca314c5 */  LEA RCX,[RDI + R11*0x1]
/* 0ca314c9 */  MOV RDX,qword ptr [RSP + 0x50]
/* 0ca314ce */  JMP 0x0ca315dd
/* 0ca314e0 */  LEA R8,[R9 + -0x1]
/* 0ca314e4 */  CMP R8,R11
/* 0ca314e7 */  JZ 0x0ca31b10
/* 0ca314ed */  MOV RAX,RCX
/* 0ca314f0 */  SHR RAX,0x3f
/* 0ca314f4 */  ADD RAX,RCX
/* 0ca314f7 */  SAR RAX,0x1
/* 0ca314fa */  ADD RDI,R11
/* 0ca314fd */  MOV R8,RDI
/* 0ca31500 */  MOV RBP,RAX
/* 0ca31503 */  ADD R8,RAX
/* 0ca31506 */  MOV RCX,qword ptr [RSP + 0x10]
/* 0ca3150b */  MOV RDI,RDX
/* 0ca3150e */  SUB RCX,RDX
/* 0ca31511 */  MOV qword ptr [RSP + 0x20],R8
/* 0ca31516 */  JZ 0x0ca315f3
/* 0ca3151c */  MOV qword ptr [RSP + 0x40],R9
/* 0ca31521 */  MOV qword ptr [RSP + 0x38],R10
/* 0ca31526 */  MOVZX EAX,byte ptr [R8]
/* 0ca3152a */  MOV R13,qword ptr [RSP + 0x8]
/* 0ca3152f */  MOV R15,RDI
/* 0ca31532 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0ca31540 */  MOV R10,R15
/* 0ca31543 */  MOV RDI,R13
/* 0ca31546 */  MOV R8,RCX
/* 0ca31549 */  SHR R8,0x1
/* 0ca3154c */  MOV R9,R8
/* 0ca3154f */  NOT R9
/* 0ca31552 */  ADD R9,RCX
/* 0ca31555 */  CMP byte ptr [R15 + R8*0x1],AL
/* 0ca31559 */  LEA R15,[R15 + R8*0x1 + 0x1]
/* 0ca3155e */  LEA R13,[R13 + R8*0x8 + 0x8]
/* 0ca31563 */  CMOVNC R9,R8
/* 0ca31567 */  CMOVNC R15,R10
/* 0ca3156b */  CMOVNC R13,RDI
/* 0ca3156f */  MOV RCX,R9
/* 0ca31572 */  TEST R9,R9
/* 0ca31575 */  JNZ 0x0ca31540
/* 0ca31577 */  MOV R12,R15
/* 0ca3157a */  MOV RDI,RDX
/* 0ca3157d */  MOV R10,qword ptr [RSP + 0x38]
/* 0ca31582 */  MOV R9,qword ptr [RSP + 0x40]
/* 0ca31587 */  JMP 0x0ca315fe
/* 0ca31589 */  MOV R13,R9
/* 0ca3158c */  MOVZX EAX,byte ptr [R15]
/* 0ca31590 */  MOV RDX,qword ptr [RSP + 0x50]
/* 0ca31595 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0ca315a0 */  MOV RSI,RBP
/* 0ca315a3 */  MOV R8,RCX
/* 0ca315a6 */  SHR R8,0x1
/* 0ca315a9 */  MOV R9,R8
/* 0ca315ac */  NOT R9
/* 0ca315af */  ADD R9,RCX
/* 0ca315b2 */  CMP AL,byte ptr [RDX + R8*0x1]
/* 0ca315b6 */  LEA RCX,[RDX + R8*0x1 + 0x1]
/* 0ca315bb */  LEA RBP,[RBP + R8*0x8 + 0x8]
/* 0ca315c0 */  CMOVC RCX,RDX
/* 0ca315c4 */  MOV RDX,RCX
/* 0ca315c7 */  CMOVC RBP,RSI
/* 0ca315cb */  CMOVC R9,R8
/* 0ca315cf */  MOV RCX,R9
/* 0ca315d2 */  TEST R9,R9
/* 0ca315d5 */  JNZ 0x0ca315a0
/* 0ca315d7 */  MOV RCX,RDX
/* 0ca315da */  MOV R9,R13
/* 0ca315dd */  MOV RAX,qword ptr [RSP + 0x8]
/* 0ca315e2 */  LEA R13,[RAX + R12*0x8]
/* 0ca315e6 */  SUB RCX,RDI
/* 0ca315e9 */  SUB RCX,R11
/* 0ca315ec */  CMP RDX,RBX
/* 0ca315ef */  JZ 0x0ca31618
/* 0ca315f1 */  JMP 0x0ca31629
/* 0ca315f3 */  MOV R12,RDI
/* 0ca315f6 */  MOV R15,RDI
/* 0ca315f9 */  MOV R13,qword ptr [RSP + 0x8]
/* 0ca315fe */  MOV RCX,RBP
/* 0ca31601 */  LEA RBP,[RSI + RBP*0x8]
/* 0ca31605 */  SUB RBP,RBX
/* 0ca31608 */  SUB R12,RDI
/* 0ca3160b */  MOV RBX,RDI
/* 0ca3160e */  MOV RDX,qword ptr [RSP + 0x20]
/* 0ca31613 */  CMP RDX,RBX
/* 0ca31616 */  JNZ 0x0ca31629
/* 0ca31618 */  MOV R8,R15
/* 0ca3161b */  MOV RSI,R13
/* 0ca3161e */  CMP RBP,qword ptr [RSP + 0x8]
/* 0ca31623 */  JZ 0x0ca31840
/* 0ca31629 */  CMP RBX,R15
/* 0ca3162c */  JNZ 0x0ca3163f
/* 0ca3162e */  MOV R8,RDX
/* 0ca31631 */  MOV RSI,RBP
/* 0ca31634 */  CMP qword ptr [RSP + 0x8],R13
/* 0ca31639 */  JZ 0x0ca31840
/* 0ca3163f */  MOV qword ptr [RSP + 0x58],R12
/* 0ca31644 */  MOV qword ptr [RSP + 0x48],RCX
/* 0ca31649 */  MOV qword ptr [RSP + 0x40],R9
/* 0ca3164e */  MOV qword ptr [RSP + 0x38],R10
/* 0ca31653 */  MOVZX EAX,byte ptr [RDX]
/* 0ca31656 */  MOV qword ptr [RSP + 0x20],RDX
/* 0ca3165b */  MOV byte ptr [RDX],R14B
/* 0ca3165e */  MOV byte ptr [RBX],AL
/* 0ca31660 */  MOV RCX,qword ptr [RBP]
/* 0ca31664 */  TEST RCX,RCX
/* 0ca31667 */  JZ 0x0ca31b30
/* 0ca3166d */  LEA RAX,[RBX + 0x1]
/* 0ca31671 */  MOV qword ptr [RSP + 0x70],RAX
/* 0ca31676 */  MOV R14,qword ptr [RSP + 0x8]
/* 0ca3167b */  LEA R8,[R14 + 0x8]
/* 0ca3167f */  LEA R12,[RBP + 0x8]
/* 0ca31683 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0ca31688 */  LEA RDX,[RAX + 0x1]
/* 0ca3168c */  MOV qword ptr [RSP + 0x68],RDX
/* 0ca31691 */  LEA RSI,[RBP + 0x10]
/* 0ca31695 */  LEA RDI,[RAX + 0x2]
/* 0ca31699 */  MOV R10,R12
/* 0ca3169c */  XOR R9D,R9D
/* 0ca3169f */  JMP 0x0ca316ec
/* 0ca316b0 */  MOVZX EBX,byte ptr [RCX]
/* 0ca316b3 */  MOVZX R14D,byte ptr [RAX]
/* 0ca316b7 */  MOV byte ptr [RCX],R14B
/* 0ca316ba */  MOV byte ptr [RAX],BL
/* 0ca316bc */  MOV RAX,R10
/* 0ca316bf */  MOV RCX,qword ptr [R10 + R9*0x8]
/* 0ca316c3 */  INC R9
/* 0ca316c6 */  ADD R8,0x8
/* 0ca316ca */  MOV R10,qword ptr [RSP + 0x28]
/* 0ca316cf */  ADD R10,0x8
/* 0ca316d3 */  ADD RSI,0x8
/* 0ca316d7 */  INC RDI
/* 0ca316da */  MOV RBX,RDX
/* 0ca316dd */  MOV R14,R12
/* 0ca316e0 */  MOV R12,RAX
/* 0ca316e3 */  TEST RCX,RCX
/* 0ca316e6 */  JZ 0x0ca31b30
/* 0ca316ec */  MOV RDX,qword ptr [RSP + 0x8]
/* 0ca316f1 */  MOV RAX,qword ptr [RDX + R9*0x8]
/* 0ca316f5 */  MOV qword ptr [R12 + R9*0x8 + -0x8],RAX
/* 0ca316fa */  MOV qword ptr [RDX + R9*0x8],RCX
/* 0ca316fe */  MOV RAX,qword ptr [RSP + 0x68]
/* 0ca31703 */  LEA RCX,[RAX + R9*0x1]
/* 0ca31707 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0ca3170c */  ADD RAX,R9
/* 0ca3170f */  MOV RDX,RCX
/* 0ca31712 */  MOV qword ptr [RSP + 0x30],RBX
/* 0ca31717 */  XOR RDX,RBX
/* 0ca3171a */  MOV qword ptr [RSP + 0x28],R10
/* 0ca3171f */  XOR R10,R14
/* 0ca31722 */  OR R10,RDX
/* 0ca31725 */  SETZ BL
/* 0ca31728 */  CMP RAX,R15
/* 0ca3172b */  JNZ 0x0ca31732
/* 0ca3172d */  CMP R8,R13
/* 0ca31730 */  JZ 0x0ca31750
/* 0ca31732 */  MOV R10,R12
/* 0ca31735 */  MOV R12,R8
/* 0ca31738 */  MOV RDX,RAX
/* 0ca3173b */  TEST BL,BL
/* 0ca3173d */  JNZ 0x0ca316b0
/* 0ca31743 */  MOV R12,R14
/* 0ca31746 */  MOV RDX,qword ptr [RSP + 0x30]
/* 0ca3174b */  JMP 0x0ca316b0
/* 0ca31750 */  MOV RDX,qword ptr [RSP + 0x20]
/* 0ca31755 */  LEA R8,[RDX + R9*0x1]
/* 0ca31759 */  INC R8
/* 0ca3175c */  TEST BL,BL
/* 0ca3175e */  JZ 0x0ca3177e
/* 0ca31760 */  MOV R10,qword ptr [RSP + 0x38]
/* 0ca31765 */  MOV R9,qword ptr [RSP + 0x40]
/* 0ca3176a */  MOV RCX,qword ptr [RSP + 0x48]
/* 0ca3176f */  MOV R12,qword ptr [RSP + 0x58]
/* 0ca31774 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0ca31779 */  JMP 0x0ca31840
/* 0ca3177e */  MOVZX EDX,byte ptr [R8]
/* 0ca31782 */  MOV R10,qword ptr [RSP + 0x30]
/* 0ca31787 */  MOVZX ECX,byte ptr [R10]
/* 0ca3178b */  MOV RBX,R8
/* 0ca3178e */  MOV byte ptr [R8],CL
/* 0ca31791 */  MOV byte ptr [R10],DL
/* 0ca31794 */  MOV R8,qword ptr [R12 + R9*0x8]
/* 0ca31798 */  MOV RAX,R10
/* 0ca3179b */  MOV RCX,R14
/* 0ca3179e */  TEST R8,R8
/* 0ca317a1 */  MOV R9,qword ptr [RSP + 0x40]
/* 0ca317a6 */  MOV R12,qword ptr [RSP + 0x58]
/* 0ca317ab */  JNZ 0x0ca317ea
/* 0ca317ad */  JMP 0x0ca31b30
/* 0ca317c0 */  TEST DL,DL
/* 0ca317c2 */  CMOVNZ RCX,R14
/* 0ca317c6 */  CMOVNZ RAX,R10
/* 0ca317ca */  MOVZX EDX,byte ptr [RDI]
/* 0ca317cd */  MOVZX R8D,byte ptr [R10]
/* 0ca317d1 */  MOV byte ptr [RDI],R8B
/* 0ca317d4 */  MOV byte ptr [R10],DL
/* 0ca317d7 */  MOV R8,qword ptr [RSI]
/* 0ca317da */  ADD RSI,0x8
/* 0ca317de */  INC RDI
/* 0ca317e1 */  TEST R8,R8
/* 0ca317e4 */  JZ 0x0ca31b30
/* 0ca317ea */  MOV RDX,qword ptr [R14]
/* 0ca317ed */  MOV qword ptr [RSI + -0x8],RDX
/* 0ca317f1 */  MOV qword ptr [R14],R8
/* 0ca317f4 */  INC R10
/* 0ca317f7 */  ADD R14,0x8
/* 0ca317fb */  MOV RDX,RDI
/* 0ca317fe */  XOR RDX,RAX
/* 0ca31801 */  MOV R8,RSI
/* 0ca31804 */  XOR R8,RCX
/* 0ca31807 */  OR R8,RDX
/* 0ca3180a */  SETZ DL
/* 0ca3180d */  CMP R10,R15
/* 0ca31810 */  JNZ 0x0ca317c0
/* 0ca31812 */  CMP R14,R13
/* 0ca31815 */  JNZ 0x0ca317c0
/* 0ca31817 */  MOV R14,RCX
/* 0ca3181a */  MOV R10,RAX
/* 0ca3181d */  TEST DL,DL
/* 0ca3181f */  JZ 0x0ca317ca
/* 0ca31821 */  MOV R10,qword ptr [RSP + 0x38]
/* 0ca31826 */  MOV RCX,qword ptr [RSP + 0x48]
/* 0ca3182b */  MOV RDX,qword ptr [RSP + 0x20]
/* 0ca31830 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0ca31835 */  MOV R8,RBX
/* 0ca31838 */  NOP dword ptr [RAX + RAX*0x1]
/* 0ca31840 */  MOV R14,R9
/* 0ca31843 */  SUB R14,RCX
/* 0ca31846 */  SUB R14,R11
/* 0ca31849 */  MOV RBX,R10
/* 0ca3184c */  SUB RBX,R12
/* 0ca3184f */  MOV qword ptr [RSP + 0x8],RBX
/* 0ca31854 */  LEA RAX,[RCX + R12*0x1]
/* 0ca31858 */  ADD R10,R9
/* 0ca3185b */  SUB R10,RAX
/* 0ca3185e */  SUB R10,R11
/* 0ca31861 */  CMP RAX,R10
/* 0ca31864 */  MOV RAX,RCX
/* 0ca31867 */  MOV qword ptr [RSP + 0x28],RSI
/* 0ca3186c */  MOV qword ptr [RSP + 0x30],R8
/* 0ca31871 */  JGE 0x0ca318c0
/* 0ca31873 */  MOV RDI,qword ptr [RSP + 0x50]
/* 0ca31878 */  MOV R9,RSI
/* 0ca3187b */  MOV RSI,qword ptr [RSP + 0x60]
/* 0ca31880 */  MOV RCX,RBP
/* 0ca31883 */  MOV RBP,qword ptr [RSP + 0xc8]
/* 0ca3188b */  PUSH RBP
/* 0ca3188c */  MOV RBX,qword ptr [RSP + 0xc8]
/* 0ca31894 */  PUSH RBX
/* 0ca31895 */  PUSH R12
/* 0ca31897 */  PUSH RAX
/* 0ca31898 */  CALL 0x0ca313f0
/* 0ca3189d */  ADD RSP,0x20
/* 0ca318a1 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0ca318a6 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0ca318ab */  MOV R12,qword ptr [RSP + 0x8]
/* 0ca318b0 */  JMP 0x0ca31931
/* 0ca318c0 */  MOV RDI,R8
/* 0ca318c3 */  MOV qword ptr [RSP + 0x20],RDX
/* 0ca318c8 */  MOV RDX,R15
/* 0ca318cb */  MOV RCX,R13
/* 0ca318ce */  MOV R8,qword ptr [RSP + 0x10]
/* 0ca318d3 */  MOV R9,qword ptr [RSP + 0x18]
/* 0ca318d8 */  MOV qword ptr [RSP + 0x48],RAX
/* 0ca318dd */  MOV RAX,qword ptr [RSP + 0xc8]
/* 0ca318e5 */  PUSH RAX
/* 0ca318e6 */  MOV RBX,qword ptr [RSP + 0xc8]
/* 0ca318ee */  PUSH RBX
/* 0ca318ef */  PUSH qword ptr [RSP + 0x18]
/* 0ca318f3 */  PUSH R14
/* 0ca318f5 */  CALL 0x0ca313f0
/* 0ca318fa */  MOV RDI,qword ptr [RSP + 0x70]
/* 0ca318ff */  ADD RSP,0x20
/* 0ca31903 */  MOV R15,qword ptr [RSP + 0x20]
/* 0ca31908 */  MOV R13,RBP
/* 0ca3190b */  MOV RBP,qword ptr [RSP + 0xc8]
/* 0ca31913 */  MOV R14,qword ptr [RSP + 0x48]
/* 0ca31918 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0ca3191d */  MOV qword ptr [RSP + 0x10],RAX
/* 0ca31922 */  MOV RAX,qword ptr [RSP + 0x28]
/* 0ca31927 */  MOV qword ptr [RSP + 0x18],RAX
/* 0ca3192c */  MOV RSI,qword ptr [RSP + 0x60]
/* 0ca31931 */  MOV R9,R14
/* 0ca31934 */  MOV R10,R12
/* 0ca31937 */  MOV qword ptr [RSP + 0x8],R13
/* 0ca3193c */  MOV RDX,R15
/* 0ca3193f */  TEST R12,R12
/* 0ca31942 */  JNZ 0x0ca31436
/* 0ca31948 */  JMP 0x0ca31b86
/* 0ca3194d */  CMP R9,R10
/* 0ca31950 */  JLE 0x0ca31a35
/* 0ca31956 */  CMP RDX,qword ptr [RSP + 0x10]
/* 0ca3195b */  JNZ 0x0ca3196d
/* 0ca3195d */  MOV RAX,qword ptr [RSP + 0x8]
/* 0ca31962 */  CMP RAX,qword ptr [RSP + 0x18]
/* 0ca31967 */  JZ 0x0ca31b86
/* 0ca3196d */  MOV RAX,qword ptr [RSP + 0x8]
/* 0ca31972 */  LEA R8,[RAX + 0x8]
/* 0ca31976 */  LEA RCX,[RDX + 0x1]
/* 0ca3197a */  MOV RAX,RBX
/* 0ca3197d */  NOP dword ptr [RAX]
/* 0ca31980 */  MOV R10,R8
/* 0ca31983 */  MOVZX R8D,byte ptr [RCX + -0x1]
/* 0ca31988 */  MOV byte ptr [RAX],R8B
/* 0ca3198b */  MOV R8,qword ptr [R10 + -0x8]
/* 0ca3198f */  MOV qword ptr [RAX + 0x8],R8
/* 0ca31993 */  TEST R8,R8
/* 0ca31996 */  JZ 0x0ca31b30
/* 0ca3199c */  ADD RAX,0x10
/* 0ca319a0 */  LEA R8,[R10 + 0x8]
/* 0ca319a4 */  LEA R9,[RCX + 0x1]
/* 0ca319a8 */  CMP RCX,qword ptr [RSP + 0x10]
/* 0ca319ad */  MOV RCX,R9
/* 0ca319b0 */  JNZ 0x0ca31980
/* 0ca319b2 */  MOV RCX,R9
/* 0ca319b5 */  CMP R10,qword ptr [RSP + 0x18]
/* 0ca319ba */  JNZ 0x0ca31980
/* 0ca319bc */  JMP 0x0ca319fe
/* 0ca319be */  LEA R8,[RAX + -0x10]
/* 0ca319c2 */  ADD RAX,-0x8
/* 0ca319c6 */  MOV ECX,R9D
/* 0ca319c9 */  MOV R9,RAX
/* 0ca319cc */  MOV RAX,R8
/* 0ca319cf */  MOV R9,qword ptr [R9]
/* 0ca319d2 */  MOV R8,qword ptr [RSP + 0x10]
/* 0ca319d7 */  MOV byte ptr [R8 + -0x1],CL
/* 0ca319db */  DEC R8
/* 0ca319de */  MOV qword ptr [RSP + 0x10],R8
/* 0ca319e3 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0ca319e8 */  MOV qword ptr [RCX + -0x8],R9
/* 0ca319ec */  ADD RCX,-0x8
/* 0ca319f0 */  MOV qword ptr [RSP + 0x18],RCX
/* 0ca319f5 */  CMP RAX,RBX
/* 0ca319f8 */  JZ 0x0ca31b86
/* 0ca319fe */  CMP RDX,RDI
/* 0ca31a01 */  JNZ 0x0ca31a0e
/* 0ca31a03 */  CMP qword ptr [RSP + 0x8],RSI
/* 0ca31a08 */  JZ 0x0ca31b35
/* 0ca31a0e */  MOVZX R9D,byte ptr [RAX + -0x10]
/* 0ca31a13 */  MOVZX ECX,byte ptr [RDX + -0x1]
/* 0ca31a17 */  CMP R9B,CL
/* 0ca31a1a */  JNC 0x0ca319be
/* 0ca31a1c */  MOV R8,RDX
/* 0ca31a1f */  DEC R8
/* 0ca31a22 */  MOV RDX,R8
/* 0ca31a25 */  MOV R9,qword ptr [RSP + 0x8]
/* 0ca31a2a */  ADD R9,-0x8
/* 0ca31a2e */  MOV qword ptr [RSP + 0x8],R9
/* 0ca31a33 */  JMP 0x0ca319cf
/* 0ca31a35 */  CMP RDI,RDX
/* 0ca31a38 */  JNZ 0x0ca31a45
/* 0ca31a3a */  CMP RSI,qword ptr [RSP + 0x8]
/* 0ca31a3f */  JZ 0x0ca31b86
/* 0ca31a45 */  LEA R9,[RSI + 0x8]
/* 0ca31a49 */  LEA R8,[RDI + 0x1]
/* 0ca31a4d */  MOV ECX,0x8
/* 0ca31a52 */  XOR EAX,EAX
/* 0ca31a54 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0ca31a60 */  MOV R11,R9
/* 0ca31a63 */  MOVZX R9D,byte ptr [R8 + -0x1]
/* 0ca31a68 */  MOV byte ptr [RBX + RCX*0x1 + -0x8],R9B
/* 0ca31a6d */  MOV R9,qword ptr [R11 + -0x8]
/* 0ca31a71 */  MOV qword ptr [RBX + RCX*0x1],R9
/* 0ca31a75 */  TEST R9,R9
/* 0ca31a78 */  JZ 0x0ca31b30
/* 0ca31a7e */  ADD RAX,-0x10
/* 0ca31a82 */  ADD RCX,0x10
/* 0ca31a86 */  LEA R9,[R11 + 0x8]
/* 0ca31a8a */  LEA R10,[R8 + 0x1]
/* 0ca31a8e */  CMP R8,RDX
/* 0ca31a91 */  MOV R8,R10
/* 0ca31a94 */  JNZ 0x0ca31a60
/* 0ca31a96 */  MOV R8,R10
/* 0ca31a99 */  CMP R11,qword ptr [RSP + 0x8]
/* 0ca31a9e */  JNZ 0x0ca31a60
/* 0ca31aa0 */  MOV RCX,RBX
/* 0ca31aa3 */  SUB RCX,RAX
/* 0ca31aa6 */  LEA RAX,[RCX + -0x10]
/* 0ca31aaa */  JMP 0x0ca31ad0
/* 0ca31aac */  LEA R8,[RBX + 0x8]
/* 0ca31ab0 */  ADD RBX,0x10
/* 0ca31ab4 */  MOV R10D,R9D
/* 0ca31ab7 */  MOV R8,qword ptr [R8]
/* 0ca31aba */  MOV byte ptr [RDI],R10B
/* 0ca31abd */  MOV qword ptr [RSI],R8
/* 0ca31ac0 */  INC RDI
/* 0ca31ac3 */  ADD RSI,0x8
/* 0ca31ac7 */  CMP RCX,RBX
/* 0ca31aca */  JZ 0x0ca31b86
/* 0ca31ad0 */  CMP RDX,qword ptr [RSP + 0x10]
/* 0ca31ad5 */  JNZ 0x0ca31ae7
/* 0ca31ad7 */  MOV R8,qword ptr [RSP + 0x8]
/* 0ca31adc */  CMP R8,qword ptr [RSP + 0x18]
/* 0ca31ae1 */  JZ 0x0ca31b67
/* 0ca31ae7 */  MOVZX R10D,byte ptr [RDX]
/* 0ca31aeb */  MOVZX R9D,byte ptr [RBX]
/* 0ca31aef */  CMP R10B,R9B
/* 0ca31af2 */  JNC 0x0ca31aac
/* 0ca31af4 */  MOV R8,RDX
/* 0ca31af7 */  INC R8
/* 0ca31afa */  MOV RDX,R8
/* 0ca31afd */  MOV R9,qword ptr [RSP + 0x8]
/* 0ca31b02 */  MOV R8,R9
/* 0ca31b05 */  ADD R9,0x8
/* 0ca31b09 */  MOV qword ptr [RSP + 0x8],R9
/* 0ca31b0e */  JMP 0x0ca31ab7
/* 0ca31b10 */  MOV byte ptr [RDI + R11*0x1],R14B
/* 0ca31b14 */  MOV byte ptr [RDX],AL
/* 0ca31b16 */  MOV RAX,qword ptr [RSI + R11*0x8]
/* 0ca31b1a */  TEST RAX,RAX
/* 0ca31b1d */  JZ 0x0ca31b30
/* 0ca31b1f */  MOV RDX,qword ptr [RSP + 0x8]
/* 0ca31b24 */  MOV RCX,qword ptr [RDX]
/* 0ca31b27 */  MOV qword ptr [RSI + R11*0x8],RCX
/* 0ca31b2b */  MOV qword ptr [RDX],RAX
/* 0ca31b2e */  JMP 0x0ca31b86
/* 0ca31b30 */  CALL 0x04890760
/* 0ca31b35 */  MOV RCX,-0x1
/* 0ca31b3c */  MOVZX ESI,byte ptr [RAX + -0x10]
/* 0ca31b40 */  MOV RDX,qword ptr [RSP + 0x10]
/* 0ca31b45 */  MOV byte ptr [RDX + RCX*0x1],SIL
/* 0ca31b49 */  MOV RDX,qword ptr [RAX + -0x8]
/* 0ca31b4d */  LEA RSI,[RAX + -0x10]
/* 0ca31b51 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0ca31b56 */  MOV qword ptr [RAX + RCX*0x8],RDX
/* 0ca31b5a */  DEC RCX
/* 0ca31b5d */  MOV RAX,RSI
/* 0ca31b60 */  CMP RSI,RBX
/* 0ca31b63 */  JNZ 0x0ca31b3c
/* 0ca31b65 */  JMP 0x0ca31b86
/* 0ca31b67 */  XOR ECX,ECX
/* 0ca31b69 */  MOVZX EDX,byte ptr [RBX]
/* 0ca31b6c */  MOV byte ptr [RDI + RCX*0x1],DL
/* 0ca31b6f */  MOV RDX,qword ptr [RBX + 0x8]
/* 0ca31b73 */  MOV qword ptr [RSI + RCX*0x8],RDX
/* 0ca31b77 */  LEA RDX,[RBX + 0x10]
/* 0ca31b7b */  INC RCX
/* 0ca31b7e */  CMP RAX,RBX
/* 0ca31b81 */  MOV RBX,RDX
/* 0ca31b84 */  JNZ 0x0ca31b69
/* 0ca31b86 */  ADD RSP,0x78
/* 0ca31b8a */  POP RBX
/* 0ca31b8b */  POP R12
/* 0ca31b8d */  POP R13
/* 0ca31b8f */  POP R14
/* 0ca31b91 */  POP R15
/* 0ca31b93 */  POP RBP
/* 0ca31b94 */  RET
