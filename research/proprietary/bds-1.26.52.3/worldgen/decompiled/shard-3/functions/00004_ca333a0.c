/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb333a0 (ELF vaddr 0xca333a0)
 * Label: WorldGenerator::vslot23
 * Body:  [[0cb333a0, 0cb333b5]]
 * Ghidra: wg_WorldGenerator__vslot23
 */


void wg_WorldGenerator__vslot23(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb333b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb8))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb333a0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb333a4 */  TEST RDI,RDI
/* 0cb333a7 */  JZ 0x0cb333b5
/* 0cb333a9 */  MOV RAX,qword ptr [RDI]
/* 0cb333ac */  MOV RAX,qword ptr [RAX + 0xb8]
/* 0cb333b3 */  JMP RAX
/* 0cb333b5 */  RET
