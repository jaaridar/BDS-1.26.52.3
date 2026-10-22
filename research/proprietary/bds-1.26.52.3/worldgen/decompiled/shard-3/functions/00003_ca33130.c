/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca33130
 * Label: WorldGenerator::vslot19
 * Body:  [[0ca33130, 0ca3317c] [0ca33180, 0ca331bb] [0ca3326a, 0ca332ec] [0ca332f0, 0ca3334c]]
 * Ghidra: wg_WorldGenerator__vslot19
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot19(void)

{
  ulong in_RAX;
  char *pcVar1;
  byte in_CL;
  ulong unaff_R12;
  long *unaff_R14;
  ulong unaff_R15;
  long unaff_retaddr;
  long in_stack_00000008;
  long in_stack_00000010;
  char cStack0000000000000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  char in_stack_00000038;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  
  *(byte *)(in_RAX - 0x39) = *(byte *)(in_RAX - 0x39) & in_CL;
  pcVar1 = (char *)(in_RAX & 0xffffffffffffff30);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  cStack0000000000000018 = '\x01';
  (**(code **)(*unaff_R14 + 0x10))();
  if ((cStack0000000000000018 == '\x01') && (unaff_retaddr != 0)) {
    for (; unaff_retaddr != in_stack_00000008; in_stack_00000008 = in_stack_00000008 + -0x98) {
      func_0x0b69a770(in_stack_00000008 + -0x80);
      if ((*(byte *)(in_stack_00000008 + -0x98) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000008 + -0x88),
                        *(ulong *)(in_stack_00000008 + -0x98) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(unaff_retaddr,in_stack_00000010 - unaff_retaddr);
  }
  if ((in_stack_00000058 & unaff_R12) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000058 & unaff_R15) - 8);
  }
  if ((in_stack_00000050 & unaff_R12) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000050 & unaff_R15) - 8);
  }
  if ((in_stack_00000038 == '\x01') && (in_stack_00000020 != 0)) {
    for (; in_stack_00000020 != in_stack_00000028; in_stack_00000028 = in_stack_00000028 + -0x98) {
      func_0x0b69a770(in_stack_00000028 + -0x80);
      if ((*(byte *)(in_stack_00000028 + -0x98) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000028 + -0x88),
                        *(ulong *)(in_stack_00000028 + -0x98) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_00000020,in_stack_00000030 - in_stack_00000020);
  }
  return;
}



/* ---- assembly ---- */
/* 0ca33130 */  AND byte ptr [RAX + -0x39],CL
/* 0ca33133 */  AND AL,0x30
/* 0ca33136 */  ADD byte ptr [RAX],AL
/* 0ca33138 */  ADD byte ptr [RAX],AL
/* 0ca3313a */  MOV byte ptr [RSP + 0x18],0x1
/* 0ca3313f */  MOV RAX,qword ptr [R14]
/* 0ca33142 */  LEA RDX,[RSP + 0x48]
/* 0ca33147 */  MOV R8,RSP
/* 0ca3314a */  MOV RDI,R14
/* 0ca3314d */  MOV RSI,RBX
/* 0ca33150 */  CALL qword ptr [RAX + 0x10]
/* 0ca33153 */  CMP byte ptr [RSP + 0x18],0x1
/* 0ca33158 */  JNZ 0x0ca33280
/* 0ca3315e */  MOV RBX,qword ptr [RSP]
/* 0ca33162 */  TEST RBX,RBX
/* 0ca33165 */  JZ 0x0ca33280
/* 0ca3316b */  MOV R14,qword ptr [RSP + 0x8]
/* 0ca33170 */  MOV RDI,RBX
/* 0ca33173 */  CMP RBX,R14
/* 0ca33176 */  JNZ 0x0ca33190
/* 0ca33178 */  JMP 0x0ca3326e
/* 0ca33180 */  ADD R14,-0x98
/* 0ca33187 */  CMP R14,RBX
/* 0ca3318a */  JZ 0x0ca3326a
/* 0ca33190 */  LEA RDI,[R14 + -0x80]
/* 0ca33194 */  CALL 0x0b69a770
/* 0ca33199 */  TEST byte ptr [R14 + -0x98],0x1
/* 0ca331a1 */  JZ 0x0ca33180
/* 0ca331a3 */  MOV RSI,qword ptr [R14 + -0x98]
/* 0ca331aa */  MOV RDI,qword ptr [R14 + -0x88]
/* 0ca331b1 */  AND RSI,-0x2
/* 0ca331b5 */  CALL 0x0412a280
/* 0ca331ba */  JMP 0x0ca33180
/* 0ca3326a */  MOV RDI,qword ptr [RSP]
/* 0ca3326e */  MOV qword ptr [RSP + 0x8],RBX
/* 0ca33273 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0ca33278 */  SUB RSI,RDI
/* 0ca3327b */  CALL 0x0412a280
/* 0ca33280 */  MOV RSI,qword ptr [RSP + 0x58]
/* 0ca33285 */  TEST RSI,R12
/* 0ca33288 */  JZ 0x0ca332a2
/* 0ca3328a */  AND RSI,R15
/* 0ca3328d */  ADD RSI,-0x8
/* 0ca33291 */  LEA RDI,[0xf5463b0]
/* 0ca33298 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca3329f */  CALL qword ptr [RAX + 0x28]
/* 0ca332a2 */  MOV qword ptr [RSP + 0x58],0x0
/* 0ca332ab */  MOV RSI,qword ptr [RSP + 0x50]
/* 0ca332b0 */  TEST RSI,R12
/* 0ca332b3 */  JZ 0x0ca332cd
/* 0ca332b5 */  AND RSI,R15
/* 0ca332b8 */  ADD RSI,-0x8
/* 0ca332bc */  LEA RDI,[0xf5463b0]
/* 0ca332c3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca332ca */  CALL qword ptr [RAX + 0x28]
/* 0ca332cd */  CMP byte ptr [RSP + 0x38],0x1
/* 0ca332d2 */  JNZ 0x0ca3333f
/* 0ca332d4 */  MOV RBX,qword ptr [RSP + 0x20]
/* 0ca332d9 */  TEST RBX,RBX
/* 0ca332dc */  JZ 0x0ca3333f
/* 0ca332de */  MOV R14,qword ptr [RSP + 0x28]
/* 0ca332e3 */  MOV RDI,RBX
/* 0ca332e6 */  CMP RBX,R14
/* 0ca332e9 */  JNZ 0x0ca332fc
/* 0ca332eb */  JMP 0x0ca3332d
/* 0ca332f0 */  ADD R14,-0x98
/* 0ca332f7 */  CMP R14,RBX
/* 0ca332fa */  JZ 0x0ca33328
/* 0ca332fc */  LEA RDI,[R14 + -0x80]
/* 0ca33300 */  CALL 0x0b69a770
/* 0ca33305 */  TEST byte ptr [R14 + -0x98],0x1
/* 0ca3330d */  JZ 0x0ca332f0
/* 0ca3330f */  MOV RSI,qword ptr [R14 + -0x98]
/* 0ca33316 */  MOV RDI,qword ptr [R14 + -0x88]
/* 0ca3331d */  AND RSI,-0x2
/* 0ca33321 */  CALL 0x0412a280
/* 0ca33326 */  JMP 0x0ca332f0
/* 0ca33328 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0ca3332d */  MOV qword ptr [RSP + 0x28],RBX
/* 0ca33332 */  MOV RSI,qword ptr [RSP + 0x30]
/* 0ca33337 */  SUB RSI,RDI
/* 0ca3333a */  CALL 0x0412a280
/* 0ca3333f */  ADD RSP,0x60
/* 0ca33343 */  POP RBX
/* 0ca33344 */  POP R12
/* 0ca33346 */  POP R13
/* 0ca33348 */  POP R14
/* 0ca3334a */  POP R15
/* 0ca3334c */  RET
