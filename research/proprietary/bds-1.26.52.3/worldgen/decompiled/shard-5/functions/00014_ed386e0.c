/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee386e0 (ELF vaddr 0xed386e0)
 * Label: callee-of:0x4de9260
 * Body:  [[0ee386e0, 0ee38718]]
 * Ghidra: FUN_0ee386e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee386e0(ulong *param_1)

{
  if ((*param_1 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*param_1 & 0xff00ffffffffffff) - 8);
  }
  *param_1 = 0;
  return;
}



/* ---- assembly ---- */
/* 0ee386e0 */  PUSH RBX
/* 0ee386e1 */  MOV RBX,RDI
/* 0ee386e4 */  MOV RSI,qword ptr [RDI]
/* 0ee386e7 */  BT RSI,0x37
/* 0ee386ec */  JNC 0x0ee38710
/* 0ee386ee */  MOV RAX,-0xff000000000001
/* 0ee386f8 */  AND RSI,RAX
/* 0ee386fb */  ADD RSI,-0x8
/* 0ee386ff */  LEA RDI,[0xf5463b0]
/* 0ee38706 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ee3870d */  CALL qword ptr [RAX + 0x28]
/* 0ee38710 */  MOV qword ptr [RBX],0x0
/* 0ee38717 */  POP RBX
/* 0ee38718 */  RET
