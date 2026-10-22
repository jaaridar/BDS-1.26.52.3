/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32f10 (ELF vaddr 0xca32f10)
 * Label: WorldGenerator::vslot32
 * Body:  [[0cb32f10, 0cb32f1c]]
 * Ghidra: wg_WorldGenerator__vslot32
 */


void wg_WorldGenerator__vslot32(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0cb32f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x100))();
  return;
}



/* ---- assembly ---- */
/* 0cb32f10 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb32f14 */  MOV RAX,qword ptr [RDI]
/* 0cb32f17 */  JMP qword ptr [RAX + 0x100]
