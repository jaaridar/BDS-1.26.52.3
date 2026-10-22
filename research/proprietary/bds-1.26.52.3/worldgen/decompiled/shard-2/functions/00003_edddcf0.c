/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeeddcf0 (ELF vaddr 0xedddcf0)
 * Label: callee-of:0x493a160
 * Body:  [[0eeddcf0, 0eedddea]]
 * Ghidra: FUN_0eeddcf0
 */


void FUN_0eeddcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  code *pcVar2;
  char in_AL;
  undefined8 uVar3;
  long *in_FS_OFFSET;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  puStack_e8 = auStack_d8;
  puStack_f0 = &stack0x00000008;
  uStack_f8 = 0x3000000028;
  uStack_b0 = param_14;
  if (*(long *)(*in_FS_OFFSET + -0x50) == 0) {
    func_0x0eeb5fa0(param_9,param_10,param_11,param_12,param_13,&uStack_f8);
  }
  else {
    puStack_108 = &uStack_f8;
    plVar1 = *(long **)(*(long *)(*in_FS_OFFSET + -0x50) + 0x20);
    uStack_100 = param_9;
    if (plVar1 == (long *)0x0) {
      uVar3 = func_0x04891200();
      func_0x0eee2d70(uVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_100,&puStack_108);
  }
  return;
}



/* ---- assembly ---- */
/* 0eeddcf0 */  PUSH RBP
/* 0eeddcf1 */  PUSH R15
/* 0eeddcf3 */  PUSH R14
/* 0eeddcf5 */  PUSH R12
/* 0eeddcf7 */  PUSH RBX
/* 0eeddcf8 */  SUB RSP,0xe0
/* 0eeddcff */  MOV RBX,R8
/* 0eeddd02 */  MOV R14,RCX
/* 0eeddd05 */  MOV EBP,EDX
/* 0eeddd07 */  MOV R15,RSI
/* 0eeddd0a */  MOV R12,RDI
/* 0eeddd0d */  MOV qword ptr [RSP + 0x58],R9
/* 0eeddd12 */  TEST AL,AL
/* 0eeddd14 */  JZ 0x0eeddd50
/* 0eeddd16 */  MOVAPS xmmword ptr [RSP + 0x60],XMM0
/* 0eeddd1b */  MOVAPS xmmword ptr [RSP + 0x70],XMM1
/* 0eeddd20 */  MOVAPS xmmword ptr [RSP + 0x80],XMM2
/* 0eeddd28 */  MOVAPS xmmword ptr [RSP + 0x90],XMM3
/* 0eeddd30 */  MOVAPS xmmword ptr [RSP + 0xa0],XMM4
/* 0eeddd38 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM5
/* 0eeddd40 */  MOVAPS xmmword ptr [RSP + 0xc0],XMM6
/* 0eeddd48 */  MOVAPS xmmword ptr [RSP + 0xd0],XMM7
/* 0eeddd50 */  LEA RAX,[RSP + 0x30]
/* 0eeddd55 */  MOV qword ptr [RSP + 0x20],RAX
/* 0eeddd5a */  LEA RAX,[RSP + 0x110]
/* 0eeddd62 */  MOV qword ptr [RSP + 0x18],RAX
/* 0eeddd67 */  MOV RAX,0x3000000028
/* 0eeddd71 */  MOV qword ptr [RSP + 0x10],RAX
/* 0eeddd76 */  MOV RAX,qword ptr FS:[0x0]
/* 0eeddd82 */  MOV RAX,qword ptr [RAX + -0x50]
/* 0eeddd89 */  TEST RAX,RAX
/* 0eeddd8c */  JZ 0x0eedddb5
/* 0eeddd8e */  MOV qword ptr [RSP + 0x8],R12
/* 0eeddd93 */  LEA RCX,[RSP + 0x10]
/* 0eeddd98 */  MOV qword ptr [RSP],RCX
/* 0eeddd9c */  MOV RDI,qword ptr [RAX + 0x20]
/* 0eeddda0 */  TEST RDI,RDI
/* 0eeddda3 */  JZ 0x0eeddddd
/* 0eeddda5 */  MOV RAX,qword ptr [RDI]
/* 0eeddda8 */  LEA RSI,[RSP + 0x8]
/* 0eedddad */  MOV RDX,RSP
/* 0eedddb0 */  CALL qword ptr [RAX + 0x30]
/* 0eedddb3 */  JMP 0x0eedddcd
/* 0eedddb5 */  LEA R9,[RSP + 0x10]
/* 0eedddba */  MOV RDI,R12
/* 0eedddbd */  MOV RSI,R15
/* 0eedddc0 */  MOV EDX,EBP
/* 0eedddc2 */  MOV RCX,R14
/* 0eedddc5 */  MOV R8,RBX
/* 0eedddc8 */  CALL 0x0eeb5fa0
/* 0eedddcd */  ADD RSP,0xe0
/* 0eedddd4 */  POP RBX
/* 0eedddd5 */  POP R12
/* 0eedddd7 */  POP R14
/* 0eedddd9 */  POP R15
/* 0eeddddb */  POP RBP
/* 0eeddddc */  RET
/* 0eeddddd */  CALL 0x04891200
/* 0eeddde2 */  MOV RDI,RAX
/* 0eeddde5 */  CALL 0x0eee2d70
/* 0eedddea */  INT3
