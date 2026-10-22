/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb334c0 (ELF vaddr 0xca334c0)
 * Label: WorldGenerator::vslot38
 * Body:  [[0cb334c0, 0cb334d4]]
 * Ghidra: wg_WorldGenerator__vslot38
 */


undefined8 wg_WorldGenerator__vslot38(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb334cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))();
    return uVar1;
  }
  return 1;
}



/* ---- assembly ---- */
/* 0cb334c0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb334c4 */  TEST RDI,RDI
/* 0cb334c7 */  JZ 0x0cb334d2
/* 0cb334c9 */  MOV RAX,qword ptr [RDI]
/* 0cb334cc */  JMP qword ptr [RAX + 0x130]
/* 0cb334d2 */  MOV AL,0x1
/* 0cb334d4 */  RET
