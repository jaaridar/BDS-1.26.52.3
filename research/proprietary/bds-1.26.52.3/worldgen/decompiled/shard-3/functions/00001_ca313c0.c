/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb313c0 (ELF vaddr 0xca313c0)
 * Label: WorldGenerator::vslot5
 * Body:  [[0cb313c0, 0cb313c9]]
 * Ghidra: wg_WorldGenerator__vslot5
 */


undefined8 * wg_WorldGenerator__vslot5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* ---- assembly ---- */
/* 0cb313c0 */  MOV RAX,RDI
/* 0cb313c3 */  XORPS XMM0,XMM0
/* 0cb313c6 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0cb313c9 */  RET
