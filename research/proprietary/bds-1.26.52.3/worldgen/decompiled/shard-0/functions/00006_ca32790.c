/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32790 (ELF vaddr 0xca32790)
 * Label: WorldGenerator::vslot24
 * Body:  [[0cb32790, 0cb327a2]]
 * Ghidra: wg_WorldGenerator__vslot24
 */


void wg_WorldGenerator__vslot24(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xc0))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb32790 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb32794 */  TEST RDI,RDI
/* 0cb32797 */  JZ 0x0cb327a2
/* 0cb32799 */  MOV RAX,qword ptr [RDI]
/* 0cb3279c */  JMP qword ptr [RAX + 0xc0]
/* 0cb327a2 */  RET
