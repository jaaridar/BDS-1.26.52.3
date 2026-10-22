/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7d7690
 * Label: SharedTypes::v1_21_100::FrozenNoiseBasedBiomeJsonComponent::vslot0
 * Body:  [[0c7d7690, 0c7d76c9] [0c7d81e7, 0c7d820c]]
 * Ghidra: wg_SharedTypes__v1_21_100__FrozenNoiseBasedBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__v1_21_100__FrozenNoiseBasedBiomeJsonComponent__vslot0(void)

{
  byte in_stack_00000010;
  undefined7 uStack0000000000000011;
  undefined1 uStack0000000000000018;
  undefined4 uStack0000000000000019;
  undefined1 uStack000000000000001d;
  undefined8 in_stack_00000020;
  
  uStack0000000000000011 = 0x6f6c735f706f74;
  uStack0000000000000018 = 0x74;
  uStack0000000000000019 = 0x7469625f;
  uStack000000000000001d = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,in_stack_00000010) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c7d7690 */  XCHG EAX,EBP
/* 0c7d7691 */  TEST ESI,0x18102444
/* 0c7d7697 */  MOV RAX,0x746f6c735f706f74
/* 0c7d76a1 */  MOV qword ptr [RSP + 0x11],RAX
/* 0c7d76a6 */  MOV dword ptr [RSP + 0x19],0x7469625f
/* 0c7d76ae */  MOV byte ptr [RSP + 0x1d],0x0
/* 0c7d76b3 */  LEA R14,[RSP + 0x10]
/* 0c7d76b8 */  MOV RDI,RBX
/* 0c7d76bb */  MOV RSI,R14
/* 0c7d76be */  XOR EDX,EDX
/* 0c7d76c0 */  CALL 0x0d6bbef0
/* 0c7d76c5 */  JMP 0x0c7d81e7
/* 0c7d81e7 */  TEST byte ptr [RSP + 0x10],0x1
/* 0c7d81ec */  JZ 0x0c7d8203
/* 0c7d81ee */  LEA RAX,[RSP + 0x10]
/* 0c7d81f3 */  MOV RSI,qword ptr [RAX]
/* 0c7d81f6 */  MOV RDI,qword ptr [RAX + 0x10]
/* 0c7d81fa */  AND RSI,-0x2
/* 0c7d81fe */  CALL 0x0412a280
/* 0c7d8203 */  ADD RSP,0x40
/* 0c7d8207 */  POP RBX
/* 0c7d8208 */  POP R14
/* 0c7d820a */  POP R15
/* 0c7d820c */  RET
