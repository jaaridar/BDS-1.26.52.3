/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca327b0
 * Label: WorldGenerator::vslot25
 * Body:  [[0ca327b0, 0ca3283f]]
 * Ghidra: wg_WorldGenerator__vslot25
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot25(undefined8 param_1,long param_2)

{
  func_0x05d85c50(param_2 + 0x60);
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2 + 0x38);
  }
  if ((*(ulong *)(param_2 + 0x30) >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(param_2 + 0x30) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(ulong *)(param_2 + 0x28) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(param_2 + 0x28) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* ---- assembly ---- */
/* 0ca327b0 */  PUSH RBX
/* 0ca327b1 */  MOV RBX,RSI
/* 0ca327b4 */  LEA RDI,[RSI + 0x60]
/* 0ca327b8 */  CALL 0x05d85c50
/* 0ca327bd */  MOV RAX,qword ptr [RBX + 0x50]
/* 0ca327c1 */  TEST RAX,RAX
/* 0ca327c4 */  JZ 0x0ca327cc
/* 0ca327c6 */  LEA RDI,[RBX + 0x38]
/* 0ca327ca */  CALL RAX
/* 0ca327cc */  MOV RSI,qword ptr [RBX + 0x30]
/* 0ca327d0 */  BT RSI,0x37
/* 0ca327d5 */  JNC 0x0ca327f9
/* 0ca327d7 */  MOV RAX,-0xff000000000001
/* 0ca327e1 */  AND RSI,RAX
/* 0ca327e4 */  ADD RSI,-0x8
/* 0ca327e8 */  LEA RDI,[0xf5463b0]
/* 0ca327ef */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca327f6 */  CALL qword ptr [RAX + 0x28]
/* 0ca327f9 */  MOV RAX,0x80000000000000
/* 0ca32803 */  MOV qword ptr [RBX + 0x30],0x0
/* 0ca3280b */  MOV RSI,qword ptr [RBX + 0x28]
/* 0ca3280f */  TEST RSI,RAX
/* 0ca32812 */  JZ 0x0ca32836
/* 0ca32814 */  MOV RAX,-0xff000000000001
/* 0ca3281e */  AND RSI,RAX
/* 0ca32821 */  ADD RSI,-0x8
/* 0ca32825 */  LEA RDI,[0xf5463b0]
/* 0ca3282c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca32833 */  CALL qword ptr [RAX + 0x28]
/* 0ca32836 */  MOV qword ptr [RBX + 0x28],0x0
/* 0ca3283e */  POP RBX
/* 0ca3283f */  RET
