/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32d30 (ELF vaddr 0xca32d30)
 * Label: WorldGenerator::vslot28
 * Body:  [[0cb32d30, 0cb32d42]]
 * Ghidra: wg_WorldGenerator__vslot28
 */


void wg_WorldGenerator__vslot28(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe0))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb32d30 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb32d34 */  TEST RDI,RDI
/* 0cb32d37 */  JZ 0x0cb32d42
/* 0cb32d39 */  MOV RAX,qword ptr [RDI]
/* 0cb32d3c */  JMP qword ptr [RAX + 0xe0]
/* 0cb32d42 */  RET
