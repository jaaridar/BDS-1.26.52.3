/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb31390 (ELF vaddr 0xca31390)
 * Label: WorldGenerator::vslot3
 * Body:  [[0cb31390, 0cb313a1]]
 * Ghidra: wg_WorldGenerator__vslot3
 */


undefined8 wg_WorldGenerator__vslot3(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    return uVar1;
  }
  return 1;
}



/* ---- assembly ---- */
/* 0cb31390 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb31394 */  TEST RDI,RDI
/* 0cb31397 */  JZ 0x0cb3139f
/* 0cb31399 */  MOV RAX,qword ptr [RDI]
/* 0cb3139c */  JMP qword ptr [RAX + 0x18]
/* 0cb3139f */  MOV AL,0x1
/* 0cb313a1 */  RET
