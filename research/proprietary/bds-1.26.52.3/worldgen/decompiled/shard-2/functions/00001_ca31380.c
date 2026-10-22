/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb31380 (ELF vaddr 0xca31380)
 * Label: WorldGenerator::vslot2
 * Body:  [[0cb31380, 0cb3138f]]
 * Ghidra: wg_WorldGenerator__vslot2
 */


void wg_WorldGenerator__vslot2(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 0cb31380 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb31384 */  TEST RDI,RDI
/* 0cb31387 */  JZ 0x0cb3138f
/* 0cb31389 */  MOV RAX,qword ptr [RDI]
/* 0cb3138c */  JMP qword ptr [RAX + 0x10]
/* 0cb3138f */  RET
