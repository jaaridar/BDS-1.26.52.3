/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a6f0 (ELF vaddr 0x517a6f0)
 * Label: OverworldGenerator2d::vslot61
 * Body:  [[0527a6f0, 0527a710]]
 * Ghidra: wg_OverworldGenerator2d__vslot61
 */


undefined8 * wg_OverworldGenerator2d__vslot61(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* ---- assembly ---- */
/* 0527a6f0 */  MOV RAX,RDI
/* 0527a6f3 */  MOV qword ptr [RDI],0x0
/* 0527a6fa */  MOV dword ptr [RDI + 0x8],0x0
/* 0527a701 */  XORPS XMM0,XMM0
/* 0527a704 */  MOVUPS xmmword ptr [RDI + 0x10],XMM0
/* 0527a708 */  MOV qword ptr [RDI + 0x20],0x0
/* 0527a710 */  RET
