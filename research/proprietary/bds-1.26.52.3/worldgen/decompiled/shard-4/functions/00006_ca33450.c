/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb33450 (ELF vaddr 0xca33450)
 * Label: WorldGenerator::vslot40
 * Body:  [[0cb33450, 0cb33462]]
 * Ghidra: wg_WorldGenerator__vslot40
 */


void wg_WorldGenerator__vslot40(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3345c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x140))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb33450 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb33454 */  TEST RDI,RDI
/* 0cb33457 */  JZ 0x0cb33462
/* 0cb33459 */  MOV RAX,qword ptr [RDI]
/* 0cb3345c */  JMP qword ptr [RAX + 0x140]
/* 0cb33462 */  RET
