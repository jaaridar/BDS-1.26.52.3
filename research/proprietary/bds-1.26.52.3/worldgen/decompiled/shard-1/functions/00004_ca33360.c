/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb33360 (ELF vaddr 0xca33360)
 * Label: WorldGenerator::vslot21
 * Body:  [[0cb33360, 0cb33375]]
 * Ghidra: wg_WorldGenerator__vslot21
 */


void wg_WorldGenerator__vslot21(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb33360 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb33364 */  TEST RDI,RDI
/* 0cb33367 */  JZ 0x0cb33375
/* 0cb33369 */  MOV RAX,qword ptr [RDI]
/* 0cb3336c */  MOV RAX,qword ptr [RAX + 0xa8]
/* 0cb33373 */  JMP RAX
/* 0cb33375 */  RET
