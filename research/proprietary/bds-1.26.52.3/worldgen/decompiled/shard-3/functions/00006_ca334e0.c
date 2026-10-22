/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb334e0 (ELF vaddr 0xca334e0)
 * Label: WorldGenerator::vslot39
 * Body:  [[0cb334e0, 0cb334f7]]
 * Ghidra: wg_WorldGenerator__vslot39
 */


undefined8 wg_WorldGenerator__vslot39(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb334f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x138))();
    return uVar1;
  }
  return 0;
}



/* ---- assembly ---- */
/* 0cb334e0 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb334e4 */  TEST RDI,RDI
/* 0cb334e7 */  JZ 0x0cb334f5
/* 0cb334e9 */  MOV RAX,qword ptr [RDI]
/* 0cb334ec */  MOV RAX,qword ptr [RAX + 0x138]
/* 0cb334f3 */  JMP RAX
/* 0cb334f5 */  XOR EAX,EAX
/* 0cb334f7 */  RET
