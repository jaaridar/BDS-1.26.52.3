/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb33340 (ELF vaddr 0xca33340)
 * Label: WorldGenerator::vslot20
 * Body:  [[0cb33340, 0cb33357]]
 * Ghidra: wg_WorldGenerator__vslot20
 */


undefined8 wg_WorldGenerator__vslot20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))();
    return uVar1;
  }
  return 0;
}



/* ---- assembly ---- */
/* 0cb33340 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb33344 */  TEST RDI,RDI
/* 0cb33347 */  JZ 0x0cb33355
/* 0cb33349 */  MOV RAX,qword ptr [RDI]
/* 0cb3334c */  MOV RAX,qword ptr [RAX + 0xa0]
/* 0cb33353 */  JMP RAX
/* 0cb33355 */  XOR EAX,EAX
/* 0cb33357 */  RET
