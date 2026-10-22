/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70bd0 (ELF vaddr 0xc970bd0)
 * Label: WorldGenerator::vslot42
 * Body:  [[0ca70bd0, 0ca70be1]]
 * Ghidra: wg_WorldGenerator__vslot42
 */


undefined8 wg_WorldGenerator__vslot42(undefined8 param_1,long param_2)

{
  func_0x0d352ef0(param_1,*(undefined8 *)(param_2 + 0x78));
  return param_1;
}



/* ---- assembly ---- */
/* 0ca70bd0 */  PUSH RBX
/* 0ca70bd1 */  MOV RBX,RDI
/* 0ca70bd4 */  MOV RSI,qword ptr [RSI + 0x78]
/* 0ca70bd8 */  CALL 0x0d352ef0
/* 0ca70bdd */  MOV RAX,RBX
/* 0ca70be0 */  POP RBX
/* 0ca70be1 */  RET
