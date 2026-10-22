/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5280730 (ELF vaddr 0x5180730)
 * Label: OverworldGenerator2d::vslot57
 * Body:  [[05280730, 0528073d]]
 * Ghidra: wg_OverworldGenerator2d__vslot57
 */


undefined8 wg_OverworldGenerator2d__vslot57(undefined8 param_1)

{
  func_0x0527f6c0();
  return param_1;
}



/* ---- assembly ---- */
/* 05280730 */  PUSH RBX
/* 05280731 */  MOV RBX,RDI
/* 05280734 */  CALL 0x0527f6c0
/* 05280739 */  MOV RAX,RBX
/* 0528073c */  POP RBX
/* 0528073d */  RET
