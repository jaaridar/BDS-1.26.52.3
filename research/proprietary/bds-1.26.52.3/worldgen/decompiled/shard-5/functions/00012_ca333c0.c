/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb333c0 (ELF vaddr 0xca333c0)
 * Label: WorldGenerator::vslot27
 * Body:  [[0cb333c0, 0cb333d2]]
 * Ghidra: wg_WorldGenerator__vslot27
 */


void wg_WorldGenerator__vslot27(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb333cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xd8))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb333c0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb333c4 */  TEST RDI,RDI
/* 0cb333c7 */  JZ 0x0cb333d2
/* 0cb333c9 */  MOV RAX,qword ptr [RDI]
/* 0cb333cc */  JMP qword ptr [RAX + 0xd8]
/* 0cb333d2 */  RET
