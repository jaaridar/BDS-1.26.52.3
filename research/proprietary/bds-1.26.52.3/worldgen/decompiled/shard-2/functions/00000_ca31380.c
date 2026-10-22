/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca31380
 * Label: WorldGenerator::vslot2
 * Body:  [[0ca31320, 0ca313cf] [0ca313d1, 0ca313ef]]
 * Ghidra: wg_WorldGenerator__vslot2
 */


ulong wg_WorldGenerator__vslot2
                (byte *param_1,long *param_2,int param_3,long param_4,long param_5,long param_6,
                byte *param_7,long *param_8)

{
  code *pcVar1;
  byte in_AL;
  ulong uVar2;
  byte *pbVar3;
  long unaff_RBX;
  long unaff_RBP;
  long *in_R10;
  byte *in_R11;
  long unaff_R12;
  long *plVar4;
  long unaff_R14;
  byte unaff_R15B;
  byte unaff_retaddr;
  
code_r0x0ca31380:
  do {
    *(byte *)(param_5 + unaff_RBX) = in_AL;
    *(undefined8 *)(param_6 + unaff_RBX * 8) = *(undefined8 *)(param_6 + -8 + unaff_RBX * 8);
    pbVar3 = param_1;
    plVar4 = param_2;
    if (unaff_R14 != 8 || unaff_RBX != -2) {
      in_AL = *(byte *)(param_5 + -2 + unaff_RBX);
      unaff_RBX = unaff_RBX + -1;
      unaff_R14 = unaff_R14 + -8;
      if (unaff_R15B < in_AL) goto code_r0x0ca31380;
      pbVar3 = (byte *)(unaff_RBX + param_5);
      plVar4 = (long *)(unaff_R14 + (long)param_2);
    }
    *pbVar3 = unaff_R15B;
    *plVar4 = unaff_R12;
    param_3 = param_3 + 1;
    unaff_RBX = unaff_RBP;
    pbVar3 = in_R11;
    if (param_3 == 8) {
      unaff_retaddr = in_R10 + 1 == param_8 && in_R11 + 1 == param_7;
LAB_0ca313d6:
      return (ulong)unaff_retaddr;
    }
    do {
      in_R11 = pbVar3 + 1;
      in_R10 = in_R10 + 1;
      unaff_RBX = unaff_RBX + 1;
      param_4 = param_4 + 8;
      if (in_R10 == param_8 && in_R11 == param_7) goto LAB_0ca313d6;
      unaff_R15B = *in_R11;
      in_AL = *pbVar3;
      pbVar3 = in_R11;
    } while (in_AL <= unaff_R15B);
    unaff_R12 = *in_R10;
    unaff_RBP = unaff_RBX;
    unaff_R14 = param_4;
    if (unaff_R12 == 0) {
      func_0x04890760();
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  } while( true );
}



/* ---- assembly ---- */
/* 0ca31320 */  MOV RBX,RDI
/* 0ca31323 */  MOV R14,RSI
/* 0ca31326 */  MOV byte ptr [RBX],R15B
/* 0ca31329 */  MOV qword ptr [R14],R12
/* 0ca3132c */  INC EDX
/* 0ca3132e */  CMP EDX,0x8
/* 0ca31331 */  JZ 0x0ca313bd
/* 0ca31337 */  LEA RAX,[R11 + 0x1]
/* 0ca3133b */  ADD R10,0x8
/* 0ca3133f */  MOV RBX,R11
/* 0ca31342 */  MOV R11,RAX
/* 0ca31345 */  XOR RAX,qword ptr [RSP + 0x8]
/* 0ca3134a */  MOV R14,R10
/* 0ca3134d */  XOR R14,qword ptr [RSP + 0x10]
/* 0ca31352 */  INC RBP
/* 0ca31355 */  ADD RCX,0x8
/* 0ca31359 */  OR R14,RAX
/* 0ca3135c */  JZ 0x0ca313d6
/* 0ca3135e */  MOVZX R15D,byte ptr [R11]
/* 0ca31362 */  MOVZX EAX,byte ptr [RBX]
/* 0ca31365 */  CMP R15B,AL
/* 0ca31368 */  JNC 0x0ca31337
/* 0ca3136a */  MOV R12,qword ptr [R10]
/* 0ca3136d */  MOV R14,RCX
/* 0ca31370 */  MOV RBX,RBP
/* 0ca31373 */  TEST R12,R12
/* 0ca31376 */  JZ 0x0ca313ea
/* 0ca31378 */  NOP dword ptr [RAX + RAX*0x1]
/* 0ca31380 */  MOV byte ptr [R8 + RBX*0x1],AL
/* 0ca31384 */  MOV RAX,qword ptr [R9 + RBX*0x8 + -0x8]
/* 0ca31389 */  MOV qword ptr [R9 + RBX*0x8],RAX
/* 0ca3138d */  MOV RAX,RBX
/* 0ca31390 */  XOR RAX,-0x2
/* 0ca31394 */  MOV R13,R14
/* 0ca31397 */  XOR R13,0x8
/* 0ca3139b */  OR R13,RAX
/* 0ca3139e */  JZ 0x0ca31320
/* 0ca313a0 */  MOVZX EAX,byte ptr [R8 + RBX*0x1 + -0x2]
/* 0ca313a6 */  DEC RBX
/* 0ca313a9 */  ADD R14,-0x8
/* 0ca313ad */  CMP R15B,AL
/* 0ca313b0 */  JC 0x0ca31380
/* 0ca313b2 */  ADD RBX,R8
/* 0ca313b5 */  ADD R14,RSI
/* 0ca313b8 */  JMP 0x0ca31326
/* 0ca313bd */  INC R11
/* 0ca313c0 */  ADD R10,0x8
/* 0ca313c4 */  XOR R11,qword ptr [RSP + 0x8]
/* 0ca313c9 */  XOR R10,qword ptr [RSP + 0x10]
/* 0ca313ce */  OR R10,R11
/* 0ca313d1 */  SETZ byte ptr [RSP + 0x7]
/* 0ca313d6 */  MOVZX EAX,byte ptr [RSP + 0x7]
/* 0ca313db */  ADD RSP,0x18
/* 0ca313df */  POP RBX
/* 0ca313e0 */  POP R12
/* 0ca313e2 */  POP R13
/* 0ca313e4 */  POP R14
/* 0ca313e6 */  POP R15
/* 0ca313e8 */  POP RBP
/* 0ca313e9 */  RET
/* 0ca313ea */  CALL 0x04890760
/* 0ca313ef */  INT3
