/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb327b0 (ELF vaddr 0xca327b0)
 * Label: WorldGenerator::vslot25
 * Body:  [[0cb327b0, 0cb327c2]]
 * Ghidra: wg_WorldGenerator__vslot25
 */


void wg_WorldGenerator__vslot25(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 200))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb327b0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb327b4 */  TEST RDI,RDI
/* 0cb327b7 */  JZ 0x0cb327c2
/* 0cb327b9 */  MOV RAX,qword ptr [RDI]
/* 0cb327bc */  JMP qword ptr [RAX + 0xc8]
/* 0cb327c2 */  RET
