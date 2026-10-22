/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca313c0
 * Label: WorldGenerator::vslot5
 * Body:  [[0ca313c0, 0ca313e9]]
 * Ghidra: wg_WorldGenerator__vslot5
 */


bool wg_WorldGenerator__vslot5(void)

{
  long in_R10;
  long in_R11;
  long in_stack_00000008;
  long in_stack_00000010;
  
  return in_R10 + 8 == in_stack_00000010 && in_R11 == in_stack_00000008;
}



/* ---- assembly ---- */
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
