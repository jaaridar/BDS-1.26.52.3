/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca31410
 * Label: WorldGenerator::vslot8
 * Body:  [[0ca31410, 0ca3147a] [0ca31480, 0ca314d2] [0ca314e0, 0ca316a0] [0ca316b0, 0ca317b1] [0ca317c0, 0ca318b1] [0ca318c0, 0ca31b94]]
 * Ghidra: wg_WorldGenerator__vslot8
 */


void wg_WorldGenerator__vslot8
               (byte *param_1,byte *param_2,byte *param_3,byte param_4,undefined8 param_5,
               undefined8 param_6,byte *param_7,byte *param_8,byte *param_9)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong in_RAX;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  long unaff_RBP;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  byte bVar22;
  long in_R10;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  bool bVar29;
  byte *in_stack_000000b0;
  byte *in_stack_000000c0;
  long in_stack_000000c8;
  
  pcVar3 = (char *)(in_RAX & 0xffffffffffffffb8);
  *pcVar3 = *pcVar3 + (char)pcVar3;
  *(char *)(unaff_RBP + -0x7b) = *(char *)(unaff_RBP + -0x7b) + param_4;
  *param_1 = *param_1 >> (param_4 & 7) | *param_1 << 8 - (param_4 & 7);
  *pcVar3 = *pcVar3 + (char)pcVar3;
  while ((in_stack_000000c8 < (long)in_stack_000000b0 && (in_stack_000000c8 < in_R10))) {
    if (in_stack_000000b0 == (byte *)0x0) {
      return;
    }
    bVar8 = *param_3;
    pbVar13 = (byte *)0x0;
    pbVar25 = (byte *)0x0;
    while (bVar22 = param_1[(long)pbVar25], bVar22 <= bVar8) {
      pbVar25 = pbVar25 + 1;
      pbVar13 = pbVar13 + -8;
      if (in_stack_000000b0 == pbVar25) {
        return;
      }
    }
    pbVar14 = param_2 + -(long)pbVar13;
    pbVar7 = param_1 + (long)pbVar25;
    if ((long)in_stack_000000b0 - (long)pbVar25 < in_R10) {
      lVar4 = in_R10 / 2;
      pbVar28 = param_3 + lVar4;
      pbVar13 = param_3 + (-(long)pbVar25 - (long)param_1);
      pbVar18 = pbVar7;
      pbVar15 = pbVar14;
      if (pbVar13 != (byte *)0x0) {
        do {
          pbVar10 = (byte *)((ulong)pbVar13 >> 1);
          pbVar13 = pbVar13 + ~(ulong)pbVar10;
          pbVar23 = pbVar15 + (long)pbVar10 * 8 + 8;
          pbVar27 = pbVar18 + (long)(pbVar10 + 1);
          if (*pbVar28 < pbVar18[(long)pbVar10]) {
            pbVar13 = pbVar10;
            pbVar23 = pbVar15;
            pbVar27 = pbVar18;
          }
          pbVar18 = pbVar27;
          pbVar15 = pbVar23;
        } while (pbVar13 != (byte *)0x0);
      }
      pbVar23 = param_7 + lVar4 * 8;
      pbVar10 = pbVar18 + (-(long)pbVar25 - (long)param_1);
      pbVar27 = pbVar23;
      pbVar13 = pbVar28;
      if (pbVar18 != param_3) goto LAB_0ca31629;
LAB_0ca31618:
      pbVar27 = pbVar23;
      pbVar28 = pbVar13;
      if (pbVar15 != param_7) goto LAB_0ca31629;
    }
    else {
      if (in_stack_000000b0 + -1 == pbVar25) {
        param_1[(long)pbVar25] = bVar8;
        *param_3 = bVar22;
        lVar4 = *(long *)(param_2 + (long)pbVar25 * 8);
        if (lVar4 != 0) {
          *(undefined8 *)(param_2 + (long)pbVar25 * 8) = *(undefined8 *)param_7;
          *(long *)param_7 = lVar4;
          return;
        }
        goto LAB_0ca31b30;
      }
      pbVar10 = (byte *)(((long)in_stack_000000b0 - (long)pbVar25) / 2);
      pbVar18 = param_1 + (long)(pbVar10 + (long)pbVar25);
      uVar9 = (long)param_8 - (long)param_3;
      pbVar23 = param_7;
      pbVar28 = param_3;
      if (uVar9 != 0) {
        pbVar15 = param_7;
        do {
          uVar19 = uVar9 >> 1;
          pbVar23 = pbVar15 + uVar19 * 8 + 8;
          pbVar27 = pbVar28 + uVar19 + 1;
          uVar9 = ~uVar19 + uVar9;
          if (*pbVar18 <= pbVar28[uVar19]) {
            pbVar23 = pbVar15;
            pbVar27 = pbVar28;
            uVar9 = uVar19;
          }
          pbVar28 = pbVar27;
          pbVar15 = pbVar23;
        } while (uVar9 != 0);
      }
      pbVar15 = param_2 + ((long)pbVar10 * 8 - (long)pbVar13);
      lVar4 = (long)pbVar28 - (long)param_3;
      pbVar27 = pbVar23;
      pbVar13 = pbVar28;
      if (pbVar18 == param_3) goto LAB_0ca31618;
LAB_0ca31629:
      if ((param_3 != pbVar28) || (pbVar23 = pbVar15, pbVar13 = pbVar18, param_7 != pbVar27)) {
        bVar22 = *pbVar18;
        *pbVar18 = bVar8;
        *param_3 = bVar22;
        lVar12 = *(long *)pbVar15;
        pbVar13 = param_3;
        if (lVar12 == 0) goto LAB_0ca31b30;
        pbVar24 = pbVar15 + 8;
        pbVar16 = pbVar15 + 0x10;
        pbVar17 = pbVar18 + 2;
        lVar21 = 0;
        pbVar6 = param_3;
        pbVar23 = pbVar24;
        pbVar11 = param_7;
        pbVar20 = param_7;
        while( true ) {
          pbVar20 = pbVar20 + 8;
          *(undefined8 *)(pbVar15 + lVar21 * 8) = *(undefined8 *)(param_7 + lVar21 * 8);
          *(long *)(param_7 + lVar21 * 8) = lVar12;
          pbVar1 = pbVar18 + lVar21 + 1;
          pbVar5 = param_3 + lVar21 + 1;
          if ((pbVar5 == pbVar28) && (pbVar20 == pbVar27)) break;
          pbVar13 = pbVar5;
          pbVar26 = pbVar20;
          if (pbVar23 != pbVar11 || pbVar1 != pbVar6) {
            pbVar13 = pbVar6;
            pbVar26 = pbVar11;
          }
          bVar8 = *pbVar1;
          *pbVar1 = *pbVar5;
          *pbVar5 = bVar8;
          lVar12 = *(long *)(pbVar24 + lVar21 * 8);
          lVar21 = lVar21 + 1;
          pbVar23 = pbVar23 + 8;
          pbVar16 = pbVar16 + 8;
          pbVar17 = pbVar17 + 1;
          pbVar6 = pbVar13;
          pbVar11 = pbVar26;
          if (lVar12 == 0) goto LAB_0ca31b30;
        }
        pbVar13 = pbVar18 + lVar21 + 1;
        if (pbVar23 != pbVar11 || pbVar1 != pbVar6) {
          bVar8 = *pbVar13;
          *pbVar13 = *pbVar6;
          *pbVar6 = bVar8;
          lVar12 = *(long *)(pbVar24 + lVar21 * 8);
          pbVar24 = pbVar6;
          pbVar20 = pbVar11;
          if (lVar12 != 0) {
            do {
              *(undefined8 *)(pbVar16 + -8) = *(undefined8 *)pbVar20;
              *(long *)pbVar20 = lVar12;
              pbVar24 = pbVar24 + 1;
              pbVar20 = pbVar20 + 8;
              if ((pbVar24 == pbVar28) && (pbVar20 == pbVar27)) {
                pbVar24 = pbVar6;
                pbVar20 = pbVar11;
                if (pbVar16 == pbVar11 && pbVar17 == pbVar6) goto LAB_0ca31840;
              }
              else if (pbVar16 == pbVar11 && pbVar17 == pbVar6) {
                pbVar6 = pbVar24;
                pbVar11 = pbVar20;
              }
              bVar8 = *pbVar17;
              *pbVar17 = *pbVar24;
              *pbVar24 = bVar8;
              lVar12 = *(long *)pbVar16;
              pbVar16 = pbVar16 + 8;
              pbVar17 = pbVar17 + 1;
              if (lVar12 == 0) break;
            } while( true );
          }
          goto LAB_0ca31b30;
        }
      }
    }
LAB_0ca31840:
    if ((long)(pbVar10 + lVar4) <
        (long)(in_stack_000000b0 + ((in_R10 - (long)(pbVar10 + lVar4)) - (long)pbVar25))) {
      func_0x0ca313f0(pbVar7,pbVar14,pbVar18,pbVar15,pbVar13,pbVar23,pbVar10,lVar4,in_stack_000000c0
                      ,in_stack_000000c8);
      pbVar14 = pbVar23;
      pbVar7 = pbVar13;
      in_R10 = in_R10 - lVar4;
      pbVar15 = pbVar27;
      in_stack_000000b0 = in_stack_000000b0 + (-(long)pbVar25 - (long)pbVar10);
      param_3 = pbVar28;
    }
    else {
      func_0x0ca313f0(pbVar13,pbVar23,pbVar28,pbVar27,param_8,param_9,
                      in_stack_000000b0 + (-(long)pbVar25 - (long)pbVar10),in_R10 - lVar4,
                      in_stack_000000c0,in_stack_000000c8);
      in_R10 = lVar4;
      in_stack_000000b0 = pbVar10;
      param_3 = pbVar18;
      param_8 = pbVar13;
      param_9 = pbVar23;
    }
    param_2 = pbVar14;
    param_1 = pbVar7;
    param_7 = pbVar15;
    if (in_R10 == 0) {
      return;
    }
  }
  pbVar13 = in_stack_000000c0;
  if ((long)in_stack_000000b0 <= in_R10) {
    if ((param_1 == param_3) && (param_2 == param_7)) {
      return;
    }
    lVar12 = 8;
    lVar4 = 0;
    pbVar25 = param_1 + 1;
    pbVar7 = param_2 + 8;
    while( true ) {
      pbVar14 = pbVar7;
      in_stack_000000c0[lVar12 + -8] = pbVar25[-1];
      lVar21 = *(long *)(pbVar14 + -8);
      *(long *)(in_stack_000000c0 + lVar12) = lVar21;
      if (lVar21 == 0) break;
      lVar4 = lVar4 + -0x10;
      lVar12 = lVar12 + 0x10;
      pbVar7 = pbVar25 + 1;
      bVar29 = pbVar25 == param_3;
      pbVar25 = pbVar7;
      pbVar7 = pbVar14 + 8;
      if ((bVar29) && (pbVar14 == param_7)) {
        pbVar13 = in_stack_000000c0 + -lVar4;
        do {
          if ((param_3 == param_8) && (param_7 == param_9)) {
            lVar4 = 0;
            do {
              param_1[lVar4] = *in_stack_000000c0;
              *(undefined8 *)(param_2 + lVar4 * 8) = *(undefined8 *)(in_stack_000000c0 + 8);
              lVar4 = lVar4 + 1;
              bVar29 = pbVar13 + -0x10 != in_stack_000000c0;
              in_stack_000000c0 = in_stack_000000c0 + 0x10;
            } while (bVar29);
            return;
          }
          bVar8 = *param_3;
          bVar22 = *in_stack_000000c0;
          if (bVar8 < bVar22) {
            param_3 = param_3 + 1;
            pbVar25 = param_7;
            bVar22 = bVar8;
            param_7 = param_7 + 8;
          }
          else {
            pbVar25 = in_stack_000000c0 + 8;
            in_stack_000000c0 = in_stack_000000c0 + 0x10;
          }
          uVar2 = *(undefined8 *)pbVar25;
          *param_1 = bVar22;
          *(undefined8 *)param_2 = uVar2;
          param_1 = param_1 + 1;
          param_2 = param_2 + 8;
        } while (pbVar13 != in_stack_000000c0);
        return;
      }
    }
    goto LAB_0ca31b30;
  }
  if ((param_3 == param_8) && (param_7 == param_9)) {
    return;
  }
  pbVar25 = in_stack_000000c0;
  pbVar7 = param_3 + 1;
  pbVar14 = param_7 + 8;
  do {
    pbVar28 = pbVar14;
    *pbVar25 = pbVar7[-1];
    lVar4 = *(long *)(pbVar28 + -8);
    *(long *)(pbVar25 + 8) = lVar4;
    if (lVar4 == 0) goto LAB_0ca31b30;
    pbVar25 = pbVar25 + 0x10;
    pbVar14 = pbVar7 + 1;
    bVar29 = pbVar7 != param_8;
    pbVar7 = pbVar14;
    pbVar14 = pbVar28 + 8;
  } while ((bVar29) || (pbVar28 != param_9));
  while ((param_3 != param_1 || (param_7 != param_2))) {
    bVar8 = pbVar25[-0x10];
    pbVar13 = param_3 + -1;
    if (bVar8 < *pbVar13) {
      param_3 = param_3 + -1;
      pbVar14 = param_7 + -8;
      pbVar7 = pbVar25;
      bVar8 = *pbVar13;
      param_7 = pbVar14;
    }
    else {
      pbVar7 = pbVar25 + -0x10;
      pbVar14 = pbVar25 + -8;
    }
    uVar2 = *(undefined8 *)pbVar14;
    param_8[-1] = bVar8;
    param_8 = param_8 + -1;
    *(undefined8 *)(param_9 + -8) = uVar2;
    param_9 = param_9 + -8;
    pbVar25 = pbVar7;
    if (pbVar7 == in_stack_000000c0) {
      return;
    }
  }
LAB_0ca31b35:
  lVar4 = -1;
  do {
    param_8[lVar4] = pbVar25[-0x10];
    pbVar13 = pbVar25 + -8;
    pbVar25 = pbVar25 + -0x10;
    *(undefined8 *)(param_9 + lVar4 * 8) = *(undefined8 *)pbVar13;
    lVar4 = lVar4 + -1;
  } while (pbVar25 != in_stack_000000c0);
  return;
LAB_0ca31b30:
  pbVar25 = (byte *)func_0x04890760();
  in_stack_000000c0 = pbVar13;
  goto LAB_0ca31b35;
}



/* ---- assembly ---- */
/* 0ca31410 */  AND AL,0xb8
/* 0ca31412 */  ADD byte ptr [RAX],AL
/* 0ca31414 */  ADD byte ptr [RBP + -0x7b],CL
/* 0ca31417 */  ROR byte ptr [RDI],CL
/* 0ca31419 */  TEST byte ptr [RAX + 0x7],CH
/* 0ca3141c */  ADD byte ptr [RAX],AL
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
