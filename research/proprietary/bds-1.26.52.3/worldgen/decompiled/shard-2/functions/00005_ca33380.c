/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb33380 (ELF vaddr 0xca33380)
 * Label: WorldGenerator::vslot22
 * Body:  [[0cb33380, 0cb33395]]
 * Ghidra: wg_WorldGenerator__vslot22
 */


void wg_WorldGenerator__vslot22(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb33380 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb33384 */  TEST RDI,RDI
/* 0cb33387 */  JZ 0x0cb33395
/* 0cb33389 */  MOV RAX,qword ptr [RDI]
/* 0cb3338c */  MOV RAX,qword ptr [RAX + 0xb0]
/* 0cb33393 */  JMP RAX
/* 0cb33395 */  RET
