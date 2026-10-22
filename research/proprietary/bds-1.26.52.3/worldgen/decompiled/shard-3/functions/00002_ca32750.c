/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32750
 * Label: WorldGenerator::vslot13
 * Body:  [[0ca32750, 0ca3278f]]
 * Ghidra: wg_WorldGenerator__vslot13
 */


/* WARNING: Instruction at (ram,0x0ca32787) overlaps instruction at (ram,0x0ca32786)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot13(undefined8 param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_RAX;
  long unaff_RBX;
  
  bVar2 = (byte)in_RAX;
  in_RAX[0x43c74800] = in_RAX[0x43c74800] + bVar2;
  *in_RAX = *in_RAX ^ bVar2;
  *in_RAX = *in_RAX + bVar2;
  pbVar1 = in_RAX + -0x75;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_4;
  if (CARRY1(bVar2,param_4)) {
    if ((param_2 & (ulong)in_RAX) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    *(undefined4 *)(unaff_RBX + 0x28) = 0;
  }
  *(undefined8 *)(unaff_RBX + 0x28) = 0;
  return;
}



/* ---- assembly ---- */
/* 0ca32750 */  ADD byte ptr [RAX + 0x43c74800],AL
/* 0ca32756 */  XOR byte ptr [RAX],AL
/* 0ca32758 */  ADD byte ptr [RAX],AL
/* 0ca3275a */  ADD byte ptr [RAX + -0x75],CL
/* 0ca3275d */  JNC 0x0ca32787
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
