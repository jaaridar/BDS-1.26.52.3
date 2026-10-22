/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb313f0 (ELF vaddr 0xca313f0)
 * Label: WorldGenerator::vslot7
 * Body:  [[0cb313f0, 0cb31404]]
 * Ghidra: wg_WorldGenerator__vslot7
 */


undefined8 wg_WorldGenerator__vslot7(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb31400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
    return uVar1;
  }
  return 0;
}



/* ---- assembly ---- */
/* 0cb313f0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb313f4 */  TEST RDI,RDI
/* 0cb313f7 */  JZ 0x0cb31402
/* 0cb313f9 */  MOV RAX,qword ptr [RDI]
/* 0cb313fc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0cb31400 */  JMP RAX
/* 0cb31402 */  XOR EAX,EAX
/* 0cb31404 */  RET
