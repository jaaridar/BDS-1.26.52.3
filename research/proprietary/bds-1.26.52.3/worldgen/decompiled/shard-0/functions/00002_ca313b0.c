/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb313b0 (ELF vaddr 0xca313b0)
 * Label: WorldGenerator::vslot4
 * Body:  [[0cb313b0, 0cb313b9]]
 * Ghidra: wg_WorldGenerator__vslot4
 */


undefined8 * wg_WorldGenerator__vslot4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* ---- assembly ---- */
/* 0cb313b0 */  MOV RAX,RDI
/* 0cb313b3 */  XORPS XMM0,XMM0
/* 0cb313b6 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0cb313b9 */  RET
