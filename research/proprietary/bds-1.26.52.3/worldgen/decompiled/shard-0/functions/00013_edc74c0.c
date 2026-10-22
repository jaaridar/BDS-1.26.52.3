/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedc74c0
 * Label: callee-of:0x485b6e0
 * Body:  [[0edc74c0, 0edc74c8] [0edc74d9, 0edc74e4]]
 * Ghidra: FUN_0edc74c0
 */


void FUN_0edc74c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0xf775670;
  return;
}



/* ---- assembly ---- */
/* 0edc74c0 */  LEA RAX,[0xf775670]
/* 0edc74c7 */  JMP 0x0edc74d9
/* 0edc74d9 */  MOV qword ptr [RSI + 0x30],RAX
/* 0edc74dd */  ADD RSP,0x8
/* 0edc74e1 */  POP RBX
/* 0edc74e2 */  POP R14
/* 0edc74e4 */  RET
