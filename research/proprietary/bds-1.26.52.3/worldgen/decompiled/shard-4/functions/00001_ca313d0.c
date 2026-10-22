/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb313d0 (ELF vaddr 0xca313d0)
 * Label: WorldGenerator::vslot6
 * Body:  [[0cb313d0, 0cb313e4]]
 * Ghidra: wg_WorldGenerator__vslot6
 */


undefined8 wg_WorldGenerator__vslot6(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb313e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
    return uVar1;
  }
  return 0;
}



/* ---- assembly ---- */
/* 0cb313d0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb313d4 */  TEST RDI,RDI
/* 0cb313d7 */  JZ 0x0cb313e2
/* 0cb313d9 */  MOV RAX,qword ptr [RDI]
/* 0cb313dc */  MOV RAX,qword ptr [RAX + 0x30]
/* 0cb313e0 */  JMP RAX
/* 0cb313e2 */  XOR EAX,EAX
/* 0cb313e4 */  RET
