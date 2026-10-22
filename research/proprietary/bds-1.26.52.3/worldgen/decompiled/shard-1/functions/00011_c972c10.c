/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972c10
 * Label: WorldGenerator::vslot46
 * Body:  [[0c972c10, 0c972c4e]]
 * Ghidra: wg_WorldGenerator__vslot46
 */


void wg_WorldGenerator__vslot46(ulong param_1,undefined8 param_2)

{
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  func_0x0412f8c0(param_1,param_2,param_1 & 0xffffffff);
  func_0x0c97b1f0();
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c972c10 */  MOV EDX,EDI
/* 0c972c12 */  CALL 0x0412f8c0
/* 0c972c17 */  LEA RSI,[RSP + 0x8]
/* 0c972c1c */  MOV RDI,RBX
/* 0c972c1f */  CALL 0x0c97b1f0
/* 0c972c24 */  MOVZX EBP,byte ptr [RSP + 0x8]
/* 0c972c29 */  TEST BPL,0x1
/* 0c972c2d */  JZ 0x0c972c42
/* 0c972c2f */  MOV RSI,qword ptr [RSP + 0x8]
/* 0c972c34 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0c972c39 */  AND RSI,-0x2
/* 0c972c3d */  CALL 0x0412a280
/* 0c972c42 */  ADD RSP,0x20
/* 0c972c46 */  POP RBX
/* 0c972c47 */  POP R12
/* 0c972c49 */  POP R14
/* 0c972c4b */  POP R15
/* 0c972c4d */  POP RBP
/* 0c972c4e */  RET
