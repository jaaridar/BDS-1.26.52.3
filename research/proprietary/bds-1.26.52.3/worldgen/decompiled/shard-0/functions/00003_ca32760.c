/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32760
 * Label: WorldGenerator::vslot14
 * Body:  [[0ca32760, 0ca3276f] [0ca32771, 0ca3278f]]
 * Ghidra: wg_WorldGenerator__vslot14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot14(undefined8 param_1,ulong param_2)

{
  uint in_EAX;
  long unaff_RBX;
  
  if (((uint)param_2 & in_EAX) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2 & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x28) = 0;
  return;
}



/* ---- assembly ---- */
/* 0ca32760 */  TEST ESI,EAX
/* 0ca32762 */  JZ 0x0ca32786
/* 0ca32764 */  MOV RAX,-0xff000000000001
/* 0ca3276e */  AND RSI,RAX
/* 0ca32771 */  ADD RSI,-0x8
/* 0ca32775 */  LEA RDI,[0xf5463b0]
/* 0ca3277c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca32783 */  CALL qword ptr [RAX + 0x28]
/* 0ca32786 */  MOV qword ptr [RBX + 0x28],0x0
/* 0ca3278e */  POP RBX
/* 0ca3278f */  RET
