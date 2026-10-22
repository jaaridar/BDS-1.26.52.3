/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32d50 (ELF vaddr 0xca32d50)
 * Label: WorldGenerator::vslot29
 * Body:  [[0cb32d50, 0cb32d62]]
 * Ghidra: wg_WorldGenerator__vslot29
 */


void wg_WorldGenerator__vslot29(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb32d50 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb32d54 */  TEST RDI,RDI
/* 0cb32d57 */  JZ 0x0cb32d62
/* 0cb32d59 */  MOV RAX,qword ptr [RDI]
/* 0cb32d5c */  JMP qword ptr [RAX + 0xe8]
/* 0cb32d62 */  RET
