/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32740
 * Label: WorldGenerator::vslot12
 * Body:  [[0ca32740, 0ca3278f]]
 * Ghidra: wg_WorldGenerator__vslot12
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot12(void)

{
  long unaff_RBX;
  
  (**(code **)((ulong)_DAT_0f5463b0 + 0x28))();
  *(undefined8 *)(unaff_RBX + 0x30) = 0;
  if ((*(ulong *)(unaff_RBX + 0x28) & 0x80000000000000) != 0) {
    (**(code **)(CONCAT44(uRam000000000f5463b4,_DAT_0f5463b0) + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x28) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x28) = 0;
  return;
}



/* ---- assembly ---- */
/* 0ca32740 */  MOV EAX,dword ptr [0x0f5463b0]
/* 0ca32746 */  CALL qword ptr [RAX + 0x28]
/* 0ca32749 */  MOV RAX,0x80000000000000
/* 0ca32753 */  MOV qword ptr [RBX + 0x30],0x0
/* 0ca3275b */  MOV RSI,qword ptr [RBX + 0x28]
/* 0ca3275f */  TEST RSI,RAX
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
