/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a720 (ELF vaddr 0x517a720)
 * Label: OverworldGeneratorMultinoise::vslot55
 * Body:  [[0527a720, 0527a7d9] [0527a7e0, 0527a827]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot55
 */


void wg_OverworldGeneratorMultinoise__vslot55
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  lVar1 = *(long *)(lVar3 + 0x90);
  lVar3 = *(long *)(lVar3 + 0x98);
  uStack_38 = param_6;
  func_0x0488f040(&lStack_58,lVar1,lVar3,(lVar3 - lVar1 >> 3) * -0x5555555555555555);
  lVar2 = lStack_50;
  lVar1 = lStack_58;
  for (lVar3 = lStack_58; lStack_58 = lVar1, lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    FUN_0c855940(param_2,param_3,param_4,param_5,uStack_38,lVar3);
    lVar1 = lStack_58;
  }
  lVar3 = lStack_50;
  if (lVar1 != 0) {
    for (; lVar1 != lVar3; lVar3 = lVar3 + -0x18) {
      if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
        FUN_0412a280(*(undefined8 *)(lVar3 + -8),*(ulong *)(lVar3 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_50 = lVar1;
    FUN_0412a280(lStack_58,lStack_48 - lStack_58);
  }
  return;
}



/* ---- assembly ---- */
/* 0527a720 */  PUSH RBP
/* 0527a721 */  PUSH R15
/* 0527a723 */  PUSH R14
/* 0527a725 */  PUSH R13
/* 0527a727 */  PUSH R12
/* 0527a729 */  PUSH RBX
/* 0527a72a */  SUB RSP,0x28
/* 0527a72e */  MOV qword ptr [RSP + 0x20],R9
/* 0527a733 */  MOV R15,R8
/* 0527a736 */  MOV R12,RCX
/* 0527a739 */  MOV R13,RDX
/* 0527a73c */  MOV RBP,RSI
/* 0527a73f */  MOV RAX,qword ptr [RDI + 0x20]
/* 0527a743 */  MOV RAX,qword ptr [RAX + 0x348]
/* 0527a74a */  XORPS XMM0,XMM0
/* 0527a74d */  MOVAPS xmmword ptr [RSP],XMM0
/* 0527a751 */  MOV qword ptr [RSP + 0x10],0x0
/* 0527a75a */  MOV RSI,qword ptr [RAX + 0x90]
/* 0527a761 */  MOV RDX,qword ptr [RAX + 0x98]
/* 0527a768 */  MOV RAX,RDX
/* 0527a76b */  SUB RAX,RSI
/* 0527a76e */  SAR RAX,0x3
/* 0527a772 */  MOV RCX,-0x5555555555555555
/* 0527a77c */  IMUL RCX,RAX
/* 0527a780 */  MOV RDI,RSP
/* 0527a783 */  CALL 0x0488f040
/* 0527a788 */  MOV RBX,qword ptr [RSP]
/* 0527a78c */  MOV R14,qword ptr [RSP + 0x8]
/* 0527a791 */  CMP RBX,R14
/* 0527a794 */  JZ 0x0527a7c6
/* 0527a796 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0527a7a0 */  MOV RDI,RBP
/* 0527a7a3 */  MOV RSI,R13
/* 0527a7a6 */  MOV RDX,R12
/* 0527a7a9 */  MOV RCX,R15
/* 0527a7ac */  MOV R8,qword ptr [RSP + 0x20]
/* 0527a7b1 */  MOV R9,RBX
/* 0527a7b4 */  CALL 0x0c855940
/* 0527a7b9 */  ADD RBX,0x18
/* 0527a7bd */  CMP RBX,R14
/* 0527a7c0 */  JNZ 0x0527a7a0
/* 0527a7c2 */  MOV RBX,qword ptr [RSP]
/* 0527a7c6 */  TEST RBX,RBX
/* 0527a7c9 */  JZ 0x0527a819
/* 0527a7cb */  MOV R14,qword ptr [RSP + 0x8]
/* 0527a7d0 */  MOV RDI,RBX
/* 0527a7d3 */  CMP RBX,R14
/* 0527a7d6 */  JNZ 0x0527a7e9
/* 0527a7d8 */  JMP 0x0527a807
/* 0527a7e0 */  ADD R14,-0x18
/* 0527a7e4 */  CMP R14,RBX
/* 0527a7e7 */  JZ 0x0527a803
/* 0527a7e9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0527a7ee */  JZ 0x0527a7e0
/* 0527a7f0 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0527a7f4 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0527a7f8 */  AND RSI,-0x2
/* 0527a7fc */  CALL 0x0412a280
/* 0527a801 */  JMP 0x0527a7e0
/* 0527a803 */  MOV RDI,qword ptr [RSP]
/* 0527a807 */  MOV qword ptr [RSP + 0x8],RBX
/* 0527a80c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0527a811 */  SUB RSI,RDI
/* 0527a814 */  CALL 0x0412a280
/* 0527a819 */  ADD RSP,0x28
/* 0527a81d */  POP RBX
/* 0527a81e */  POP R12
/* 0527a820 */  POP R13
/* 0527a822 */  POP R14
/* 0527a824 */  POP R15
/* 0527a826 */  POP RBP
/* 0527a827 */  RET
