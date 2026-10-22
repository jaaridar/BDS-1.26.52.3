/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x528a520 (ELF vaddr 0x518a520)
 * Label: OverworldGeneratorMultinoise::vslot49
 * Body:  [[0528a520, 0528a527]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot49
 */


undefined8 wg_OverworldGeneratorMultinoise__vslot49(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc88);
}



/* ---- assembly ---- */
/* 0528a520 */  MOV RAX,qword ptr [RDI + 0xc88]
/* 0528a527 */  RET
