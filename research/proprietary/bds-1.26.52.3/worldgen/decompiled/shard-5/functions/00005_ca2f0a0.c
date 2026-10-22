/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb2f0a0 (ELF vaddr 0xca2f0a0)
 * Label: WorldGenerator::vslot35
 * Body:  [[0cb2f0a0, 0cb2f0c5]]
 * Ghidra: wg_WorldGenerator__vslot35
 */


undefined8 * wg_WorldGenerator__vslot35(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x118))();
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



/* ---- assembly ---- */
/* 0cb2f0a0 */  MOV RSI,qword ptr [RSI + 0x30]
/* 0cb2f0a4 */  TEST RSI,RSI
/* 0cb2f0a7 */  JZ 0x0cb2f0bb
/* 0cb2f0a9 */  PUSH RBX
/* 0cb2f0aa */  MOV RAX,qword ptr [RSI]
/* 0cb2f0ad */  MOV RBX,RDI
/* 0cb2f0b0 */  CALL qword ptr [RAX + 0x118]
/* 0cb2f0b6 */  MOV RAX,RBX
/* 0cb2f0b9 */  POP RBX
/* 0cb2f0ba */  RET
/* 0cb2f0bb */  MOV qword ptr [RDI],0x0
/* 0cb2f0c2 */  MOV RAX,RDI
/* 0cb2f0c5 */  RET
