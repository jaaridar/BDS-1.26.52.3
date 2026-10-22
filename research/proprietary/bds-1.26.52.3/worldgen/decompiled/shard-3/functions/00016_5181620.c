/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5281620 (ELF vaddr 0x5181620)
 * Label: OverworldGenerator2d::vslot49
 * Body:  [[05281620, 05281627]]
 * Ghidra: wg_OverworldGenerator2d__vslot49
 */


undefined8 wg_OverworldGenerator2d__vslot49(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* ---- assembly ---- */
/* 05281620 */  MOV RAX,qword ptr [RDI + 0x238]
/* 05281627 */  RET
